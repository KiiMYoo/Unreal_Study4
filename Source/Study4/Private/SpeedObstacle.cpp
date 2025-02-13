// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedObstacle.h"
#include "StudyCharacter.h"
#include "TimerManager.h"

ASpeedObstacle::ASpeedObstacle()
{
	ObstacleType = "SpeedObstacle";
	SpeedUpIntensity = -100.0f;
	SpeedUpDuration = 2.0f;
}

void ASpeedObstacle::ActivateObstacle(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AStudyCharacter* PlayerCharacter = Cast<AStudyCharacter>(Activator))
		{
			PlayerCharacter->ChangeSpeed(SpeedUpIntensity);

			GetWorld()->GetTimerManager().SetTimer(
				ResetSpeedTimer,
				PlayerCharacter,
				&AStudyCharacter::ResetSpeed,
				SpeedUpDuration,
				false
			);
		}

		GetWorld()->GetTimerManager().SetTimer(
			DestroyTimer,
			this,
			&ASpeedObstacle::DestroyObstacle,
			2.0f,
			false
		);

	}
}
