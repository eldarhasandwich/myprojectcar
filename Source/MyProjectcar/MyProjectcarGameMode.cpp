// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectcarGameMode.h"
#include "MyProjectcarPawn.h"
#include "MyProjectcarHud.h"

AMyProjectcarGameMode::AMyProjectcarGameMode()
{
	DefaultPawnClass = AMyProjectcarPawn::StaticClass();
	HUDClass = AMyProjectcarHud::StaticClass();
}
