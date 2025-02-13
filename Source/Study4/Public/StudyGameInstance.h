
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "StudyGameInstance.generated.h"

UCLASS()
class STUDY4_API UStudyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UStudyGameInstance();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 TotalScore;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 CurrentLevelIndex;

	UFUNCTION(BlueprintCallable, Category = "GameData")
	void AddToScore(int32 Amount);
};
