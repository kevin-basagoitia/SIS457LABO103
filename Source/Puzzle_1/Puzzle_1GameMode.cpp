// Copyright Epic Games, Inc. All Rights Reserved.

#include "Puzzle_1GameMode.h"
#include "Puzzle_1PlayerController.h"
#include "Puzzle_1Pawn.h"

APuzzle_1GameMode::APuzzle_1GameMode()
{
	// no pawn by default
	DefaultPawnClass = APuzzle_1Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = APuzzle_1PlayerController::StaticClass();
}
