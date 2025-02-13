#include "ObstacleSpawnVolume.h"
#include "Components/BoxComponent.h"

AObstacleSpawnVolume::AObstacleSpawnVolume()
{
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	SpawningBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningBox"));
	SpawningBox->SetupAttachment(RootComponent);

	ObstacleDataTable = nullptr;
}

FVector AObstacleSpawnVolume::GetRandomPointInVolume() const
{
	FVector BoxExtent = SpawningBox->GetScaledBoxExtent();
	FVector BoxOrigin = SpawningBox->GetComponentLocation();

	return BoxOrigin + FVector( 
		FMath::FRandRange(-BoxExtent.X, BoxExtent.X), 
		FMath::FRandRange(-BoxExtent.Y, BoxExtent.Y), 
		0.0f
	);
}

AActor* AObstacleSpawnVolume::SpawnObstacle(TSubclassOf<AActor> ObstacleClass)
{
	if (!ObstacleClass) return nullptr;

	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(
		ObstacleClass,
		GetRandomPointInVolume(),
		FRotator::ZeroRotator
	);

	return SpawnedActor;
}

AActor* AObstacleSpawnVolume::SpawnRandomObstacle()
{
	if (FObstacleSpawnRow* SelectedRow = GetRandomObstacle())
	{
		if (UClass* ActualClass = SelectedRow->ObstacleClass.Get())
		{
			return SpawnObstacle(ActualClass);
		}
	}

	return nullptr;
}

FObstacleSpawnRow* AObstacleSpawnVolume::GetRandomObstacle() const
{
	if (!ObstacleDataTable) return nullptr;

	TArray<FObstacleSpawnRow*> AllRows;
	static const FString ContextString(TEXT("ItemSpawnContext"));

	ObstacleDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	float TotalChance = 0.0f;

	for (const FObstacleSpawnRow* Row : AllRows)
	{
		if (Row)
		{
			TotalChance += Row->SpawnChance;
		}
	}

	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
	float AccumulateChance = 0.0f;

	for (FObstacleSpawnRow* Row : AllRows)
	{
		AccumulateChance += Row->SpawnChance;
		if (RandValue <= AccumulateChance)
		{
			return Row;
		}
	}

	return nullptr;
}

