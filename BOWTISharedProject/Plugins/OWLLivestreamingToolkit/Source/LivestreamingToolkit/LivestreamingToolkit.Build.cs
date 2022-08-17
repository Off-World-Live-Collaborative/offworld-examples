// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Net;
using EpicGames.Core;

public class LivestreamingToolkit : ModuleRules
{
	public LivestreamingToolkit(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				"ThirdParty/xxhash_cpp",
			}
		);

		string AuthUrl = GetOffWorldString("AuthURL", "https://plugin-api.offworld.live");
		PublicDefinitions.Add("OWL_AUTH_URL=\"" + AuthUrl + "\"");

		string PublicKeyPath = System.Environment.GetEnvironmentVariable("PUBLIC_KEY_FILE_PATH_STAGING");
		bool IsStaging = GetOffWorldBoolean("Staging", true);

		if (!IsStaging)
		{
			PublicKeyPath = System.Environment.GetEnvironmentVariable("PUBLIC_KEY_FILE_PATH_PRODUCTION");
		}

		// If neither environment variable found, fallback to the local cert (which is staging currently)
		if (!bUsePrecompiled && (PublicKeyPath == "" || PublicKeyPath == null))
		{
			PublicKeyPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../server.pub"));
		}

		if (!bUsePrecompiled) // If precompiled, the public key is already built into the plugin
		{
			string PublicKey = File.ReadAllText(PublicKeyPath);

			PublicKey = PublicKey
				.Replace("-----BEGIN PUBLIC KEY-----", "")
				.Replace("\n", "")
				.Replace("-----END PUBLIC KEY-----", "");

			if (PublicKey == null || PublicKey == "")
			{
				throw new Exception("No valid public key found");
			}

			PublicDefinitions.Add("PUBLIC_KEY=" + PublicKey);
		}

		string ReleaseDate = "2021-07-22T11:22:00.000Z";
		string ReleaseBuildEnv = System.Environment.GetEnvironmentVariable("RELEASE_BUILD");
		if (ReleaseBuildEnv == null || ReleaseBuildEnv == "")
		{
			ReleaseDate = DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ");
		}
		PublicDefinitions.Add("RELEASE_DATE=" + ReleaseDate);

		PublicDefinitions.Add("OFFWORLDLIVE_DEBUG=" + (GetOffWorldBoolean("Debug", false) ? "1" : "0"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"Renderer",
				"Projects",
				"Json",
				"JsonUtilities",
				"HTTP",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"Slate",
				"UMG",
				"SlateCore",
				"RenderCore",
				"RSA",
				"OpenSSL",
				// ... add private dependencies that you statically link with here ...
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}

		RuntimeDependencies.Add(Path.Combine(PluginDirectory, "Utils/AuthCli.exe"), StagedFileType.NonUFS);
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
