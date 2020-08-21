// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutomationTestGameMode.h"
#include "AutomationTestHUD.h"
#include "AutomationTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutomationTestGameMode::AAutomationTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAutomationTestHUD::StaticClass();
}
