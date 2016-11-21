// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SergioPlzPlz.h"
#include "SergioPlzPlzGameMode.h"
#include "SergioPlzPlzHUD.h"
#include "SergioPlzPlzCharacter.h"

ASergioPlzPlzGameMode::ASergioPlzPlzGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASergioPlzPlzHUD::StaticClass();
}
