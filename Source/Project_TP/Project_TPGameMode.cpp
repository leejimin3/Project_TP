// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_TPGameMode.h"
#include "Project_TPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_TPGameMode::AProject_TPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
