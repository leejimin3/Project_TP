// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_TP : ModuleRules
{
	public Project_TP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
