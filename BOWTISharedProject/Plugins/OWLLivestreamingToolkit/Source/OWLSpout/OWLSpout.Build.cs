// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class OWLSpout : ModuleRules
{
	public OWLSpout(ReadOnlyTargetRules Target) : base(Target)
	{

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"OWLSpout/Private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Public/Tools",
				"LivestreamingToolkit/Private/Telemetry",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkitShaders/Private",
				// ... add other private include paths required here ...
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Spout",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RHICore",
				"RenderCore",
				"Projects",
				"Spout",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				"Json",
				"JsonUtilities",
				"OWLCamera",
				"OWL360Camera",
				// ... add private dependencies that you statically link with here ...	
			}
		);

		string SpoutDLLPath = "/Source/ThirdParty/Spout/Spout2/BUILD/Binaries/x64/Spout.dll";
		PublicDefinitions.Add("OWL_SPOUT_DLL_PATH=\"" + SpoutDLLPath + "\"");
		
		string Spout12DLLPath = "/Source/ThirdParty/Spout/Spout2/BUILD/Binaries/x64/SpoutDX12.dll";
		PublicDefinitions.Add("OWL_SPOUT_12_DLL_PATH=\"" + Spout12DLLPath + "\"");

		DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
		);

		if ((Target.Platform == UnrealTargetPlatform.Win64))
		{

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"D3D12RHI",
					"D3D11RHI",
				}
			);

			PrivateIncludePaths.AddRange(
				new string[]
				{
					Path.Combine(EngineDirectory, "Source/Runtime/D3D12RHI/Private"),
					Path.Combine(EngineDirectory, "Source/Runtime/D3D12RHI/Private/Windows"),
					Path.Combine(EngineDirectory, "Source/Runtime/Windows/D3D11RHI/Private"),
					Path.Combine(EngineDirectory, "Source/Runtime/Windows/D3D11RHI/Private/Windows"),

				}
			);
			
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11");
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
			AddEngineThirdPartyPrivateStaticDependencies(Target, "NVAftermath");
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
}
