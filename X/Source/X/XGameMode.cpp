// Copyright Epic Games, Inc. All Rights Reserved.

#include "XGameMode.h"
#include "XCharacter.h"
#include "UObject/ConstructorHelpers.h"

AXGameMode::AXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
