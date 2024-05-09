// Copyright Epic Games, Inc. All Rights Reserved.

#include "MastersGameMode.h"
#include "MastersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMastersGameMode::AMastersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
