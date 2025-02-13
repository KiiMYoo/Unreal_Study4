// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "SlowingItem.generated.h"

/**
 * 
 */
UCLASS()
class STUDY4_API ASlowingItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ASlowingItem();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	float SlowIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	float SlowDownDurationTime;

	FTimerHandle ResetSpeedTimer;
protected:
	virtual void ActivateItem(AActor* Activator) override;
};
