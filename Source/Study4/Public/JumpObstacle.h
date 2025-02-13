// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseObstacle.h"
#include "JumpObstacle.generated.h"

/**
 * 
 */
UCLASS()
class STUDY4_API AJumpObstacle : public ABaseObstacle
{
	GENERATED_BODY()
	
public:
	AJumpObstacle();

	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle")
	float MaxDistance;

	FTimerHandle MoveTimer;
	FTimerHandle DestroyTimer;

	virtual void ActivateObstacle(AActor* Activator) override;
	virtual void MoveForBounce();
	virtual void MoveEnd();

	virtual void Tick(float DeltaTime);
};
