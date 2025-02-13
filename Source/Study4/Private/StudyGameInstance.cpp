#include "StudyGameInstance.h"

UStudyGameInstance::UStudyGameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;
}

void UStudyGameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Current total score : % d"), TotalScore);
}