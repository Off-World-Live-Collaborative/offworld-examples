// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;

public class Softcam : ModuleRules
{
	public Softcam(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include/softcam"));
		PublicDelayLoadDLLs.Add("softcam.dll");
		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib/x64/softcam.lib"));
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "bin/x64/softcam.dll"));
	}
}
