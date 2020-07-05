// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyProjectcarHud.generated.h"

UCLASS(config = Game)
class AMyProjectcarHud : public AHUD
{
	GENERATED_BODY()

public:
	AMyProjectcarHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
