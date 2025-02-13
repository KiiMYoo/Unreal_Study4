// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleInterface.h"
#include "BaseObstacle.generated.h"

UCLASS()
class STUDY4_API ABaseObstacle : public AActor, public IObstacleInterface
{
	GENERATED_BODY()
	
public:	
	ABaseObstacle();

	FName ObstacleType;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	class UBoxComponent* Collision;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void OnObstacleOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) override;

	virtual void ActivateObstacle(AActor* Activator) override;
	virtual FName GetObstacleType() const override;
	virtual void DestroyObstacle();
};
