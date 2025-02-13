// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObstacleSpawnRow.h"
#include "GameFramework/Actor.h"
#include "ObstacleSpawnVolume.generated.h"

UCLASS()
class STUDY4_API AObstacleSpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	AObstacleSpawnVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	class UBoxComponent* SpawningBox;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	UDataTable* ObstacleDataTable;


	UFUNCTION(BlueprintCallable, Category = "Spawning")
	AActor* SpawnRandomObstacle();

	FObstacleSpawnRow* GetRandomObstacle() const;
	FVector GetRandomPointInVolume() const;
	AActor* SpawnObstacle(TSubclassOf<AActor>ObstacleClass);

};
