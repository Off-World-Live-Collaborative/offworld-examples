﻿// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

extern "C"
{
	#include "libavutil/time.h"
}

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tools/OWLImageInput.h"
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
	virtual void PostActorCreated() override;
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

	/* Optional API Key */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Media Output|Authentication", meta=(EditCondition = "bOverrideAPIKey && !bHideAPIOptions" ))
	FString APIKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Media Output|Authentication", meta=(EditCondition = "!bHideAPIOptions"))
	bool bOverrideAPIKey;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Media Output|Authentication")
	bool bHideAPIOptions = false;

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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Output Settings")
	bool IsMeteredPricing = false;
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	int MinutesRemaining = 0;

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	bool LoadingMinutesRemaining = false;


public:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual void PostLoad() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
	void OnAuthChanged();
	bool CheckRunnableQueue(float Delta);
	bool ValidateAuth();
	void ReportFailedAuth();
	bool UpdateMeteredMins();
	bool IsUnmetered();
	void RecalculateStreamConfig();
	static FString ShortNameFromFormat(EOWLDestinationFormat InFormat);
	static FString ExtensionFromFormat(EOWLDestinationFormat InFormat);
	static bool ValidateExtension(EOWLDestinationFormat Format, FString FileName);
	bool ValidateVideoInput();
	/* Tries the current file name, if it exists, adds an auto increment
	 * Keeps doing this until a filename is free */
	bool FindFreeFileName();
	FDateTime WhenMinutesWentNegative;
	bool bMinutesHaveGoneNegative;
	int MinutesAtStart = 0;
	int FilenameIteration = 0;
	FTSTicker::FDelegateHandle ReconnectionTickerHandle;
	FTSTicker::FDelegateHandle RunnableQueueHandle;
	FDelegateHandle AuthChangedHandle;
	FDelegateHandle LoggedOutHandle;
	// mzlt: todo: do we want to limit reconnections?
	uint8 ReconnectionAttempts = 0;
	uint8 MaxReconnectionAttempts = 20;
	const float ReconnectionWaitTime = 10.0f;
	EOWLDestinationFormat FFMpegDestinationFormat = EOWLDestinationFormat::F_MP4;
	int64 SendStart = 0;
	int64 FrameCount = 0;
	FCriticalSection CleanupCS;
	TSharedPtr<class FMeteredUsageWorker> MeteredUsageRunnable = nullptr;
	// store of features that require disabling on stream end
	TArray<FString> FeaturesToDisable;
	// a unique string for each time the stream starts
	// used be the server to aggregate updates into single database rows
	FString StreamIdentifier;

	bool RequestingMeteredMins = false;
	// have MinutesRemaining been set
	bool MinutesRemainingSet = false;
	// create a promise which is resolved when minutes remaining first set
	// this is then used for to wait the first time a user presses start
	// to ensure that we have a somewhat accurate mins remaining
	TPromise<void> MinutesRemainingSetPromise;

	bool IsStopping = false;

	void Cleanup();
	void TryReconnect();
	void RemoveFFmpegTicker();
	void SendFrame();
	void SetDurationMs();
	bool CheckMinutesRemaining();
	void OnMeteredRunnableStopped();

public:
	/* Start recording / streaming
	 * @return bool has recording been successful
	 */
	UFUNCTION(BlueprintCallable, BlueprintCallable, Category="Output Controls")
	bool Start();

	/* Stop the current recording / stream */
	UFUNCTION(BlueprintCallable, BlueprintCallable, Category="Output Controls")
	void Stop();
};
