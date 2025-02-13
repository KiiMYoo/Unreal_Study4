
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObstacleInterface.generated.h"

UINTERFACE(MinimalAPI)
class UObstacleInterface : public UInterface
{
	GENERATED_BODY()
};

class STUDY4_API IObstacleInterface
{
	GENERATED_BODY()

public:
    UFUNCTION()
    virtual void OnObstacleOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) =0;
    virtual void ActivateObstacle(AActor* Activator) = 0;
    virtual FName GetObstacleType() const = 0;
};
