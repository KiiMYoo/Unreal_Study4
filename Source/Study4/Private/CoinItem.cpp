
#include "CoinItem.h"
#include "Engine/World.h"
#include "StudyGameStateBase.h"
#include "TimerManager.h"

ACoinItem::ACoinItem()
{
	PointValue = 0;
	ItemType = "DefaultCoin";
}

void ACoinItem::RotateActor()
{
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	FRotator ActorRotation = FRotator(0.0f, DeltaTime * 130.0f, 0.0f);
	AddActorLocalRotation(ActorRotation);
}

void ACoinItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (UWorld* World = GetWorld())
		{
			if (AStudyGameStateBase* GameState = World->GetGameState<AStudyGameStateBase>())
			{
				GameState->AddScore(PointValue);

				GameState->OnCoinCollected();
			}
		}
		DestroyItem();
	}
}

void ACoinItem::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		RotateTimer,
		this,
		&ACoinItem::RotateActor,
		0.03f,
		true
	);
}

