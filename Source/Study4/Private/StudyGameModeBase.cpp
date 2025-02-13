// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyGameModeBase.h"
#include "StudyCharacter.h"

AStudyGameModeBase::AStudyGameModeBase()
{
	DefaultPawnClass = AStudyCharacter::StaticClass();
}
