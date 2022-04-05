// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Puzzle_1 : ModuleRules
{
	public Puzzle_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
