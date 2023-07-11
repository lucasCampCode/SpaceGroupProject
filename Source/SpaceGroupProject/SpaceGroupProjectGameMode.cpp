// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceGroupProjectGameMode.h"
#include "SpaceGroupProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceGroupProjectGameMode::ASpaceGroupProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
