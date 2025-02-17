// 오타 수정 예정

#pragma once

#include "CoreMinimal.h"
#include "BaseObstacle.h"
#include "RoatatingObstacle.generated.h"

/**
 * 
 */
UCLASS()
class STUDY4_API ARoatatingObstacle : public ABaseObstacle
{
	GENERATED_BODY()
	
public:
	ARoatatingObstacle();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle")
	float RotationSpeed;

	virtual void ActivateObstacle(AActor* Activator) override;
	virtual void Tick(float DeltaTime);
};
