// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

extern "C"
{
	#include "libavutil/time.h"
}

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OWLImageInput.h"
#include "OWLFFmpegOutput.h"
#include "OWLMediaOutput.generated.h"

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSaveToFileSettings
{
	GENERATED_BODY()
	/* The container format in which the media should be saved */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	EOWLDestinationFormat DestinationFormat = EOWLDestinationFormat::F_MP4;
	/* Destination directory for saving video */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FDirectoryPath VideoOutputDir;
	/* Output file name (without extension) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString VideoOutputFile = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLRTMPSettings
{
	GENERATED_BODY()
	/* The Stream destination URL */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamURL = "";
	/* The Stream destination Key */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamKey = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSRTSettings
{
	GENERATED_BODY()
	/* The Stream destination URL */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamURL = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FOWLSRTOptions Options;
};

DECLARE_MULTICAST_DELEGATE(FFFmpegNeedsRecconect);

UCLASS()
class OWLMEDIA_API AOWLMediaOutput : public AActor
{
	GENERATED_BODY()

public:
	AOWLMediaOutput();
	~AOWLMediaOutput();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	OWLImageInput* Input = nullptr;
	FOWLFFmpegOutput* Output = nullptr;
	FFFmpegNeedsRecconect ReconnectDelegate;

public:
	/* Media Output Type */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	EOWLMediaOutputType OutputType = EOWLMediaOutputType::T_RTMP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_FILEOUTPUT", EditConditionHides))
	FOWLSaveToFileSettings SaveToFileSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_RTMP", EditConditionHides))
	FOWLRTMPSettings RTMPSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_SRT", EditConditionHides))
	FOWLSRTSettings SRTSettings;

	/* The render target to record from.
	 * Please ensure that the dimensions of this render target are divisible by 2
	 * otherwise the encoder may not be able render it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input Settings")
	UTextureRenderTarget2D* InputRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category="Output Settings")
	FOWLFFmpegSettings EncoderSettings;

	// this will be marked hidden by details customisation
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	bool HasStarted = false;
	UPROPERTY(VisibleAnywhere, Transient, Category = "Output Settings")
	uint64 DurationMs = 0;

public:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

private:
	void RecalculateStreamConfig();
	static FString ShortNameFromFormat(EOWLDestinationFormat InFormat);
	static FString ExtensionFromFormat(EOWLDestinationFormat InFormat);
	static bool ValidateExtension(EOWLDestinationFormat Format, FString FileName);
	bool ValidateVideoInput();
	/* Tries the current file name, if it exists, adds an auto increment
	 * Keeps doing this until a filename is free */
	bool FindFreeFileName();
	int FilenameIteration = 0;
	FTSTicker::FDelegateHandle ReconnectionTickerHandle;
	// mzlt: todo: do we want to limit reconnections?
	uint8 ReconnectionAttempts = 0;
	uint8 MaxReconnectionAttempts = 20;
	const float ReconnectionWaitTime = 10.0f;
	EOWLDestinationFormat FFMpegDestinationFormat = EOWLDestinationFormat::F_MP4;
	int64 SendStart = 0;
	int64 FrameCount = 0;
	FCriticalSection CleanupCS;

	void Cleanup();
	void TryReconnect();
	void RemoveFFmpegTicker();
	void SendFrame();
	void SetDurationMs();

public:
	/* Start recording / streaming
	 * @return bool has recording been successful
	 */
	UFUNCTION(CallInEditor, BlueprintCallable, Category="Output Controls")
	bool Start();

	/* Start the recording / streaming (only for editor use) */
	UFUNCTION(CallInEditor, DisplayName = "Start", Category="Output Controls")
	void StartMediaOutput();

	/* Stop the current recording / stream */
	UFUNCTION(CallInEditor, BlueprintCallable, Category="Output Controls")
	void Stop();
};
