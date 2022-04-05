// Copyright Epic Games, Inc. All Rights Reserved.

#include "Puzzle_1PlayerController.h"

APuzzle_1PlayerController::APuzzle_1PlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
