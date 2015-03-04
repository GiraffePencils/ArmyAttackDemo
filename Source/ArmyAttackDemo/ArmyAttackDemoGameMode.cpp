// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ArmyAttackDemo.h"
#include "ArmyAttackDemoGameMode.h"
#include "ArmyAttackDemoPlayerController.h"
#include "ArmyAttackDemoCharacter.h"

AArmyAttackDemoGameMode::AArmyAttackDemoGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = AArmyAttackDemoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}