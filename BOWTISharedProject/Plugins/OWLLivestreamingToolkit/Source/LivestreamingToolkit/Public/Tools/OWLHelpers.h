// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

class LIVESTREAMINGTOOLKIT_API FOWLHelpers
{
public:
	static FString HashString(FString Input);
	static FString GetOWLSystemDataFolder();
	static void WriteTextureRChannelToString(UTexture2D* Texture, FString FilePath, FString& ImageString);
	static void SetNDIModuleEnabled(bool Enabled);
	static bool GetNDIModuleEnabled();

private:
	static bool NDIModuleEnabled;
};

class LIVESTREAMINGTOOLKIT_API FOWLSenderHelpers
{
public:
	static void GetEditorManagersToClose(TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
	static void CheckOverrideStandaloneName(const FString Name, FString& OutStandaloneName);
};
