// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study4GameMode.h"
#include "Study4Character.h"
#include "UObject/ConstructorHelpers.h"

AStudy4GameMode::AStudy4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
