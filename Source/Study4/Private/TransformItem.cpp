// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformItem.h"
#include "StudyCharacter.h"
#include "TimerManager.h"

ATransformItem::ATransformItem()
{
	ItemType = "TransformItem";
	TransformDurationTime = 5.0f;
	RamdomTransformIntensity = FMath::FRandRange(0.5f, 1.5f);
}

void ATransformItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AStudyCharacter* PlayerCharacter = Cast<AStudyCharacter>(Activator))
		{
			PlayerCharacter->ChangeSize(RamdomTransformIntensity);

			GetWorld()->GetTimerManager().SetTimer(
				TransformTimer,
				PlayerCharacter,
				&AStudyCharacter::ResetSize,
				TransformDurationTime,
				false
			);
		}

		DestroyItem();
	}
}
