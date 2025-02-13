// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpObstacle.h"
#include "StudyCharacter.h"
#include "TimerManager.h"

AJumpObstacle::AJumpObstacle()
{
	PrimaryActorTick.bCanEverTick = true;

	ObstacleType = "JumpObstacle";

	StartLocation = GetActorLocation();

	MaxDistance = 100.0f;
}

void AJumpObstacle::ActivateObstacle(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AStudyCharacter* PlayerCharacter = Cast<AStudyCharacter>(Activator))
		{
			FVector LaunchVelocity = FVector(0.0f, 0.0f, 300.0f);

			PlayerCharacter->LaunchCharacter(LaunchVelocity, false, false);
		}

		GetWorldTimerManager().SetTimer(
			MoveTimer,
			this,
			&AJumpObstacle::MoveForBounce,
			0.001f,
			true
		);

		GetWorldTimerManager().SetTimer(
			DestroyTimer,
			this,
			&AJumpObstacle::DestroyObstacle,
			3.0f,
			false
		);
	}
}

void AJumpObstacle::MoveForBounce()
{
	float DeltaSecond = GetWorld()->GetDeltaSeconds();
	AddActorWorldOffset(FVector(0.0f, 0.0f, DeltaSecond * 50.0f));
}

void AJumpObstacle::MoveEnd()
{
	GetWorldTimerManager().ClearTimer(MoveTimer);
}

void AJumpObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	if (FMath::Abs(CurrentLocation.Z - StartLocation.Z) >= MaxDistance)
	{
		MoveEnd();
	}
}
