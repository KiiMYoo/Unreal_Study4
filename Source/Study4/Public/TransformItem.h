// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "TransformItem.generated.h"

/**
 * 
 */
UCLASS()
class STUDY4_API ATransformItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ATransformItem();

	float TransformDurationTime;
	float RamdomTransformIntensity;

	FTimerHandle TransformTimer;

	virtual void ActivateItem(AActor* Activator);
};
