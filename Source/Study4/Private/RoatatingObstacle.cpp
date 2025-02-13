// Fill out your copyright notice in the Description page of Project Settings.


#include "RoatatingObstacle.h"
#include "StudyCharacter.h"

ARoatatingObstacle::ARoatatingObstacle()
{
	PrimaryActorTick.bCanEverTick = true;

	RotationSpeed = 90.0f;
}

void ARoatatingObstacle::ActivateObstacle(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AStudyCharacter* PlayerCharacter = Cast<AStudyCharacter>(Activator))
		{
			FVector CurrentVelocity = PlayerCharacter->GetVelocity();
			FVector LaunchVelocity = -CurrentVelocity.GetSafeNormal() * 600.0f;

			PlayerCharacter->LaunchCharacter(LaunchVelocity, true, true);
		}
	}
}

void ARoatatingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
}
