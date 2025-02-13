// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseObstacle.h"
#include "SpeedObstacle.generated.h"

/**
 * 
 */
UCLASS()
class STUDY4_API ASpeedObstacle : public ABaseObstacle
{
	GENERATED_BODY()
public:
	ASpeedObstacle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle")
	float SpeedUpIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle")
	float SpeedUpDuration;

	FTimerHandle ResetSpeedTimer;
	FTimerHandle DestroyTimer;

	virtual void ActivateObstacle(AActor* Activator) override;
};
