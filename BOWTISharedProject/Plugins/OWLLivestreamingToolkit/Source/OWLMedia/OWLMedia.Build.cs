// Copyright Off World Live Limited, 2020-2021. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using EpicGames.Core;

public class OWLMedia : ModuleRules
{
	public OWLMedia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				"OWLMedia/private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkit/Public/Tools",
			});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"AudioMixer",
				"FFmpeg",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects",
				"RHI",
				"RenderCore",
				"FFmpeg",
				"LivestreamingToolkitShaders",
				"LivestreamingToolkit",
				"Slate",
				"SlateCore",
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}
	}

	public JsonObject GetOffWorldSettings()
    	{
    		string RootDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
    		string UPluginPath = Path.Combine(RootDir, "OWLLivestreamingToolkit.uplugin");
    		string RawString = File.ReadAllText(UPluginPath);
    		JsonObject UPluginJson = JsonObject.Parse(RawString);
    		return UPluginJson.GetObjectField("OffWorldLive");
    	}
    	public bool GetOffWorldBoolean(string Key, bool defaultValue = false)
    	{
    		try
    		{
    			return GetOffWorldSettings().GetBoolField(Key);
    		}
    		catch
    		{
    			return defaultValue;
    		}
    	}
    	public string GetOffWorldString(string Key, string defaultValue = "")
    	{
    		try
    		{
    			return GetOffWorldSettings().GetStringField(Key);
    		}
    		catch
    		{
    			return defaultValue;
    		}
    	}
}
