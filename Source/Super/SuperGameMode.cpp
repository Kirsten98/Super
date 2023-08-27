// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperGameMode.h"
#include "SuperCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperGameMode::ASuperGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
