﻿// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once
#include "AudioMixerDevice.h"
#include "FFastRunningMean.h"
#include "Containers/CircularQueue.h"

extern "C"
{
	#include "libavcodec/avcodec.h"
	#include "libavfilter/avfilter.h"
	#include "libavformat/avformat.h"
	#include "libavformat/avio.h"
	#include "libavutil/audio_fifo.h"
	#include "libavutil/time.h"
	#include "libswresample/swresample.h"
	#include "libswscale/swscale.h"
}
#include "OWLFFmpegOutput.generated.h"

// Global pointer to the hardware encoder device (ie NVENC or similar)
static AVBufferRef *HardwareDevice = nullptr;

UENUM()
enum class EOWLMediaOutputType : uint8
{
	T_SRT UMETA(DisplayName = "Stream to SRT"),
	T_RTMP UMETA(DisplayName = "Stream to RTMP"),
	T_FILEOUTPUT UMETA(DisplayName = "Save to File"),
};

UENUM()
enum class EOWLDestinationFormat : uint8
{
	F_MP4 UMETA(DisplayName = "MP4 container"),
	F_MPEGTS UMETA(DisplayName = "MPEG TS container", Hidden),
	F_FLV UMETA(DisplayName = "Flash Video container"),
	F_MKV UMETA(DisplayName = "Matroska Video container"),
	F_AVI UMETA(DisplayName = "AVI container"),
	F_MOV UMETA(DisplayName = "MOV container"),
};

UENUM()
enum class EOWLSRTPubKeyLen : uint8
{
	SRT_PKL_16 UMETA(DisplayName = "16"),
	SRT_PKL_24 UMETA(DisplayName = "24"),
	SRT_PKL_32 UMETA(DisplayName = "32"),
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSRTOptions
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	/* Range -1 (disabled) to anything */
	int64 Timeout = -1;
	/* Crypto key length */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	EOWLSRTPubKeyLen PubKeyLen;
	/* The passphrase is the shared secret between the sender and the receiver. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString Passphrase = "";
	/* A string of up to 512 characters that an Initiator can pass to a Responder. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamID = "";
	/* Receiver delay (in microseconds) to absorb bursts of missed packet retransmissions. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	int64 Latency = -1;
};

USTRUCT()
struct OWLMEDIA_API FOWLAudioSampleBlock
{
	GENERATED_BODY()
	int64 TicksPeriodEnd;
	int32 NumSamples;
	int32 NumChannels;
	int32 InSampleRate;
	double AudioClock;
	TArray<float> Samples;
};

USTRUCT()
struct OWLMEDIA_API FOWLEncodedPacket
{
	GENERATED_BODY()
	AVPacket* Packet;
	bool bIsFinalPacket;
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLFFmpegSettings
{
	GENERATED_BODY()

	/* When this is unticked, only video will be sent */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Encoder Settings")
	bool EncodeAudio = true;

	/* The output bitrate in kbs -- for 1080p, we recommend 5000kps */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Encoder Settings", meta=(ClampMin="1000", ClampMax="40000"))
	int VideoBitrate = 5000;

	/* The audio bitrate in kbs -- we recommend either 128 or 160 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Encoder Settings", meta=(ClampMin="80", ClampMax="320", EditCondition="EncodeAudio"))
	int AudioBitrate = 128;

	/* The maximum  H264 Video 'Q' setting (quality) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category="Advanced Encoder Settings", meta=(ClampMin="15", ClampMax="50"))
	int QMax = 25;

	/* The minimum  H264 Video 'Q' setting (quality) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category="Advanced Encoder Settings", meta=(ClampMin="15", ClampMax="50"))
	int QMin = 15;

	/* The H264 GOP (Group of Pictures) Size -- describes use of I, P and B frames */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category="Advanced Encoder Settings", meta=(ClampMin="10", ClampMax="30"))
	int GOPSize = 15;

	FString FormatShortName = "mp4";
	FString Destination = "";
	FOWLSRTOptions SRTOptions;
};

DECLARE_MULTICAST_DELEGATE_OneParam(FShutdownDelegate, bool /*TryReconnect*/);

class OWLMEDIA_API FOWLFFmpegOutput : public ISubmixBufferListener {
public:
	FOWLFFmpegOutput();
	virtual ~FOWLFFmpegOutput();

public:
	/* Bind LibAV log callback to class */
	void Init();

	bool SetVideoResolution(int Width, int Height);

	/* Start Recording using LibAV */
	bool Start(FOWLFFmpegSettings Settings, EOWLMediaOutputType OutType, UWorld * World);
	/* End LibAV recording */
	void Stop();

	bool ProcessVideoFrame_RT(TArray64<uint8_t> ImageBuffer, int64 MsElapsed);
	/* Check FIFO buffer for new frames and render */
	bool ProcessAudioFrame_RT();

public:
	bool CaptureAudio = true;
	bool Shutdown = false;
	bool ShuttingDown = false;
	bool StreamDisconnected = false;
	FShutdownDelegate ShutdownDelegate;

private:
	/* Clean up all LibAV memory */
	void Cleanup();

private:
	// Unreal Audio
	/* Initialise Unreal Audio Callbacks */
	bool InitUnrealAudio();
	/* Cleanup Unreal Audio Callbacks */
	void EndUnrealAudio();

private:
	// LibAV -- general
	/* Sets up AVFormatContext which handles writing of output container */
	bool InitOutputFormat();
	/* Sets up tools for writing files to disk */
	bool InitFileIO();

private:
	// utils
	static void LogRedirection(void *ptr, int level, const char * fmt, va_list vl);
	static void LogAVError(FString LogMessage, int ErrorCode);
private:
	// LibAV audio setup
	/* Finds the AudioCodec and initialises the AudioCodecContext */
	bool InitAudioCodec();
	/* Creates the audio resample context for converting between sample rates */
	bool InitAudioResampler();
	/* Allocates arrays of pointers used for handling audio samplerate conversion */
	bool AllocateConversionBuffers();
	/* Opens the audio codec context */
	bool OpenAudio();
	/* Allocates the audio output frame (which can be re-used each tick) */
	bool InitAudioFrame();
	/* Sets up the FIFO ready to receive frame data */
	bool AllocateAudioFifos();

	// Audio Processing
	/* Callback on AudioMixer interface that periodically sends new audio */
	void OnNewSubmixBuffer(const USoundSubmix* OwningSubmix, float* AudioData, int32 NumSamples, int32 NumChannels, const int32 SampleRate, double AudioClock) override;
	/* Converts a sample from input-> output format and adds to Fifo */
	bool ConvertAudioFrame_RT();
	/* Adds TotalTicks amount to the Fifo buffer of silence */
	bool InjectSilence_RT(int64 TotalTicks);
	/* Reads from Fifo buffer, encodes frame, listens for output and sends to output */
	bool EncodeAudioFrame_RT();
	/* Sends the AVFrame to the encoder and waits for a packet the other
	 * side.
	 * @param LoopForFrames - continue looping until encoder has no more
	 *		packets left. Used when flushing
	 */
	bool SendAudioFrame_RT(const AVFrame* Frame, bool LoopForFrames);
	/* Sends a null packet into the encoder and waits for any final packets to be output */
	bool FlushAudioEncoder();
private:
	// LibAV video setup
	/* Stores the list of available hardware encoding devices */
	void GetAvailableHWDevices();
	bool SendVideoFrame_RT(const AVFrame* Frame, bool LoopForFrames, int currentFrame = 0);
	void FlushVideoEncoder();
	bool InitVideoCodec();
	bool OpenVideo();
	bool InitVideoFrame();
	bool InitVideoResampler();
	void AddUserSRTOptions(TMap<FString, FString> & Options, FString UserOptionsList);

	static int64 GetTimeNow();
	void SetSRTOptions();
	void OnShutdownRequested(bool TryReconnect);

private:
	class FFFmpegRunnable* FFmpegRunnable = nullptr;
	FString OutputFileName = "D:/tmp/audio_encode.264";
	FString OutputShortName = "264";
	EOWLMediaOutputType OutputType = EOWLMediaOutputType::T_FILEOUTPUT;

	/* Queue for incoming audio samples */
	TCircularQueue<FOWLAudioSampleBlock> ReceivedSamples;
	/* Queue for passing packets to the writing thread */
	TCircularQueue<FOWLEncodedPacket> EncodedPackets;

	// LibAV Audio State
	AVCodec *AudioCodec = nullptr;
	struct SwrContext *AudioResampleContext = nullptr;
	bool bAudioResamplerInitialised = false;
	AVCodecContext *AudioCodecContext = nullptr;
	AVFormatContext *OutputFormatContext = nullptr;
	AVIOContext *OutputIOContext = nullptr;
	AVAudioFifo *AudioFifo = nullptr;
	AVFrame *OutputAudioFrame = nullptr;
	AVStream *AudioStream = nullptr;
	uint8_t ** AudioInputBuffers = nullptr;
	uint8_t ** AudioOutputBuffers = nullptr;
	/* expected buffer size per channel that we will receive from submix.
	 * If it does not match this, then we reallocate this */
	int AudioSamplesPerChannel = 1024;
	int AudioSampleBlockSize = 2048;
	int AudioBitrate = 128 * 1000;
	int OutputAudioSampleSize = 940;
	int InputAudioSampleRate = 48000;
	int AllChannelsSamplesPerSecond = 48000 * 2;
	bool AudioBuffersAllocated = false;
	int InputAudioChannels = 2;
	/* Experimentally, the audio clock tends to be around 5ms offset from system clock
	 * This must be the time for the computation before the audio sample reaches
	 * our OnSubmixBuffer method.
	 */
	const int InitialAudioClockOffsetMs = 5;
	int64 NumAudioSamplesReceived =0;
	/* Stores the Unreal audio clock time when the first audio packet was received */
	double FirstAudioClock = 0;
	/* Stores a running mean of the diff between audio clock and system clock */
	FFastRunningMean* MeanAudioClockDiff = new FFastRunningMean(8);
	int64 LastMeanClockAudioClockOffset = 0;
	int64 FirstAudioSampleTicks = 0;
	int64 AdjustmentTicksApplied = 0;
	int64_t ConvertedAudioSamples = 0;

	// LibAV Video State
	TArray<AVHWDeviceType> HardwareDevices;
	AVCodec *VideoCodec = nullptr;
	AVCodecContext *VideoCodecContext = nullptr;
	AVStream *VideoStream = nullptr;
	AVFrame *OutputVideoFrame = nullptr;
	/* Hardware video frame is the intermediate that is sent to the
	 * hardware device for encoding
	 */
	AVFrame *HardwareVideoFrame = nullptr;
	struct SwsContext *VideoResampleContext = nullptr;
	int VideoStride = 0;

	int VideoWidth = 0;
	int VideoHeight = 0;
	int VideoBitrate = 5000 * 1000;
	int TotalVideoFrames = 0;
	int VideoQMin = 15;
	int VideoQMax = 25;
	int VideoGOPSize = 15;
	int64 VideoStartTimeMs = 0;

	FOWLSRTOptions SRTOptions;

	bool TrailerWritten = false;

	// Unreal Audio State
	FCriticalSection AudioCS;
	bool AudioInitialised = false;
	bool Initialised = false;

	bool DroppedFramesWarningTriggered = false;
	UWorld* CurrentWorld = nullptr;
};