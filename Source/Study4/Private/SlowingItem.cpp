// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowingItem.h"
#include "StudyCharacter.h"
#include "TimerManager.h"

ASlowingItem::ASlowingItem()
{
	ItemType = "SlowingItem";
	SlowIntensity = 200.0f;
	SlowDownDurationTime = 3.0f;
}

void ASlowingItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AStudyCharacter* PlayerCharacter = Cast<AStudyCharacter>(Activator))
		{
			PlayerCharacter->ChangeSpeed(SlowIntensity);

			GetWorld()->GetTimerManager().SetTimer(
				ResetSpeedTimer,
				PlayerCharacter,
				&AStudyCharacter::ResetSpeed,
				SlowDownDurationTime,
				false
			);
		}

		DestroyItem();
	}
}


