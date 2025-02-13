#include "StudyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "StudyGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "StudyGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"

AStudyPlayerController::AStudyPlayerController()
	: InputMappingContext(nullptr),
	  MoveAction(nullptr),
	  JumpAction(nullptr),
	  LookAction(nullptr),
	  SprintAction(nullptr),
	  HUDWidgetClass(nullptr),
	  HUDWidgetInstance(nullptr),
	  MainMenuWidgetClass(nullptr),
	  MainMenuWidgetInstance(nullptr)
{

}

void AStudyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// LocalPlayer(플레이어 입력이나 화면 뷰 관리하는 객체) 정보 가져오기
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		//EnhancedInputSystem을 관리하는 Subsystem 획득하기
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				// Subsystem에 InputMappingContext 추가하고 우선순위 0번으로 활성화
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
	
	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("MenuLevel"))
	{
		ShowMainMenu(false);
	}
}

UUserWidget* AStudyPlayerController::GetHUDWidget() const
{
	return HUDWidgetInstance;
}

void AStudyPlayerController::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());
		}

		AStudyGameStateBase* StudyGameState = GetWorld() ? GetWorld()->GetGameState<AStudyGameStateBase>() : nullptr;
		if (StudyGameState)
		{
			StudyGameState->UpdateHUD();
		}
	}
}

void AStudyPlayerController::ShowMainMenu(bool bIsRestart)
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}

		if (UTextBlock* ButtonText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("StartButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText->SetText(FText::FromString(TEXT("Restart")));
			}
			else
			{
				ButtonText->SetText(FText::FromString(TEXT("Start")));
			}
		}

		if (bIsRestart)
		{
			UFunction* PlayAnimFunc = MainMenuWidgetInstance->FindFunction(FName(TEXT("PlayGameOverAnim")));
			if (PlayAnimFunc)
			{
				MainMenuWidgetInstance->ProcessEvent(PlayAnimFunc, nullptr);
			}

			if (UTextBlock* TotalScoreText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName("TotalScoreText")))
			{
				if (UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(UGameplayStatics::GetGameInstance(this)))
				{
					TotalScoreText->SetText(FText::FromString(
						FString::Printf(TEXT("Total Score: %d"), StudyGameInstance->TotalScore)
					));
				}
			}
		}
	}
}

void AStudyPlayerController::StartGame()
{
	if (UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		StudyGameInstance->CurrentLevelIndex = 0;
		StudyGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("BasicLevel"));
	SetPause(false);
}

void AStudyPlayerController::StartIntermediateLevel()
{

	if (UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		StudyGameInstance->CurrentLevelIndex = 1;
		StudyGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("IntermediateLevel"));
	SetPause(false);
}

void AStudyPlayerController::StartAdvancedLevel()
{

	if (UStudyGameInstance* StudyGameInstance = Cast<UStudyGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		StudyGameInstance->CurrentLevelIndex = 2;
		StudyGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("AdvancedLevel"));
	SetPause(false);
}
