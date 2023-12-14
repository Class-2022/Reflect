// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyReflectGame : ModuleRules
{
	public MyReflectGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
