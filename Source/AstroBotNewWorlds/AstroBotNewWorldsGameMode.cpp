// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstroBotNewWorldsGameMode.h"
#include "AstroBotNewWorldsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAstroBotNewWorldsGameMode::AAstroBotNewWorldsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
