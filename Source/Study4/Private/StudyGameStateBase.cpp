
#include "StudyGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "ObstacleSpawnVolume.h"
#include "TimerManager.h"
#include "StudyGameInstance.h"
#include "StudyPlayerController.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"

AStudyGameStateBase::AStudyGameStateBase()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 5.0f;
	CurrentLevelIndex = 0;
	MaxLevel = 3;
	WaveIndex = 0;
	MaxWave = 3;
	WaveMessages = { TEXT("First Wave is Started!"), TEXT("Second Wave is Started!"), TEXT("Third Wave is Started!") };
}

void AStudyGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();
	StartWave();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&AStudyGameStateBase::UpdateHUD,
		0.1f,
		true);
}

int32 AStudyGameStateBase::GetScore() const
{

	return Score;
}

void AStudyGameStateBase::AddScore(int32 Amount)
{
	// 총 점수에 점수 추가
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(GameInstance);
		if (StudyGameInstance)
		{
			StudyGameInstance->AddToScore(Amount);
		}
	}
}

void AStudyGameStateBase::OnGameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Over!"));

	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AStudyPlayerController* StudyPlayerController = Cast<AStudyPlayerController>(PlayerController))
		{
			StudyPlayerController->SetPause(true);
			StudyPlayerController->ShowMainMenu(true);
		}
	}
}

void AStudyGameStateBase::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AStudyPlayerController* StudyPlayerController = Cast<AStudyPlayerController>(PlayerController))
		{
			StudyPlayerController->ShowGameHUD();
		}
	}
	
	//레벨 시작 시 웨이브 초기화
	WaveIndex = 0;

	// 현재 레벨 인덱스 반영
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(GameInstance);
		if (StudyGameInstance)
		{
			CurrentLevelIndex = StudyGameInstance->CurrentLevelIndex;
		}
	}

}

void AStudyGameStateBase::StartWave()
{
	// 웨이브 시작 시 코인 생성/획득 개수 초기화
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	// 레벨에 아이템 스폰
	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	const int32 ItemToSpawn = ((WaveIndex + CurrentLevelIndex) * 8) + 15;

	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}

		}
	}
	TArray<AActor*> FoundWave2Volumes;
	int32 Wave2ObstacleToSpawn = 0;
	TArray<AActor*> FoundWave3Volumes;
	int32 Wave3ObstacleToSpawn = 0;

	switch (WaveIndex)
	{
	case 1:
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Wave2"), FoundWave2Volumes);
		Wave2ObstacleToSpawn = WaveIndex + 10;
		for (int32 i = 0; i < Wave2ObstacleToSpawn; i++)
		{
			if (FoundWave2Volumes.Num() > 0)
			{
				AObstacleSpawnVolume* Wave2ObstacleSpawnVolume = Cast<AObstacleSpawnVolume>(FoundWave2Volumes[0]);
				if (Wave2ObstacleSpawnVolume)
				{
					AActor* SpawnedObstacle = Wave2ObstacleSpawnVolume->SpawnRandomObstacle();
				}
			}
		}
		break;
	case 2:
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Wave3"), FoundWave3Volumes);
		Wave3ObstacleToSpawn = WaveIndex + 10;
		for (int32 i = 0; i < Wave3ObstacleToSpawn; i++)
		{
			if (FoundWave3Volumes.Num() > 0)
			{
				AObstacleSpawnVolume* Wave3ObstacleSpawnVolume = Cast<AObstacleSpawnVolume>(FoundWave3Volumes[0]);
				if (Wave3ObstacleSpawnVolume)
				{
					AActor* SpawnedObstacle = Wave3ObstacleSpawnVolume->SpawnRandomObstacle();
				}
			}
		}
		break;
	}
	// 웨이브 시간 제한
	GetWorldTimerManager().SetTimer(
		WaveTimerHandle,
		this,
		&AStudyGameStateBase::OnWaveTimeUp,
		LevelDuration + (WaveIndex * 10),
		false
	);
}

void AStudyGameStateBase::EndWave()
{
	GetWorldTimerManager().ClearTimer(WaveTimerHandle);
	WaveIndex++;

	if (WaveIndex >= MaxWave)
	{
		EndLevel();
		return;
	}

	if (WaveIndex < MaxWave)
	{
		StartWave();
	}
	else
	{
		EndLevel();
	}
}

void AStudyGameStateBase::EndLevel()
{
	// 다음 레벨 인덱스 설정
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(GameInstance);
		if (StudyGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			StudyGameInstance->CurrentLevelIndex = CurrentLevelIndex;
		}
	}

	// 모든 레벨 클리어 시 게임 오버
	if (CurrentLevelIndex >= MaxLevel)
	{
		OnGameOver();
		return;
	}

	// 다음 레벨로 이동. 다음 레벨 없으면 게임 오버
	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
		return;
	}
}

void AStudyGameStateBase::OnWaveTimeUp()
{
	EndWave();
}

void AStudyGameStateBase::OnCoinCollected()
{
	// 코인 수집 시 카운트 증가
	CollectedCoinCount++;
	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount);

	// 모든 코인 수집 시 웨이브 종료
	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndWave();
	}
}

void AStudyGameStateBase::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AStudyPlayerController* StudyController = Cast<AStudyPlayerController>(PlayerController))
		{
			if (UUserWidget* HUDWidget = StudyController->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(WaveTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}

				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(GameInstance);
						if (StudyGameInstance)
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), StudyGameInstance->TotalScore)));
						}
					}
				}

				if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
				}

				if (UTextBlock* WaveIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Wave"))))
				{
					WaveIndexText->SetText(FText::FromString(FString::Printf(TEXT("Wave: %d"), WaveIndex + 1)));
				}

				if (UTextBlock* WaveStartText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("WaveStartText"))))
				{
					WaveStartText->SetText(FText::FromString(WaveMessages[WaveIndex]));
				}
			}
		}
	}
}


