// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2023GameMode.h"
#include "GameJam2023Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2023GameMode::AGameJam2023GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
