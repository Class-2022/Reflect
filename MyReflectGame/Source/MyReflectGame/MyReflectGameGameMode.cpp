// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyReflectGameGameMode.h"
#include "MyReflectGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyReflectGameGameMode::AMyReflectGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
