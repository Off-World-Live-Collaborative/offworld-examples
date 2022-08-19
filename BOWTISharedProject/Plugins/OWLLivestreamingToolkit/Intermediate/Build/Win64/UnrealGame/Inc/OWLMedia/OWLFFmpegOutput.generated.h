// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMEDIA_OWLFFmpegOutput_generated_h
#error "OWLFFmpegOutput.generated.h already included, missing '#pragma once' in OWLFFmpegOutput.h"
#endif
#define OWLMEDIA_OWLFFmpegOutput_generated_h

#define FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLSRTOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLSRTOptions>();

#define FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLAudioSampleBlock>();

#define FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLEncodedPacket>();

#define FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLFFmpegSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h


#define FOREACH_ENUM_EOWLMEDIAOUTPUTTYPE(op) \
	op(EOWLMediaOutputType::T_SRT) \
	op(EOWLMediaOutputType::T_RTMP) \
	op(EOWLMediaOutputType::T_FILEOUTPUT) 

enum class EOWLMediaOutputType : uint8;
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLMediaOutputType>();

#define FOREACH_ENUM_EOWLDESTINATIONFORMAT(op) \
	op(EOWLDestinationFormat::F_MP4) \
	op(EOWLDestinationFormat::F_MPEGTS) \
	op(EOWLDestinationFormat::F_FLV) \
	op(EOWLDestinationFormat::F_MKV) \
	op(EOWLDestinationFormat::F_AVI) \
	op(EOWLDestinationFormat::F_MOV) 

enum class EOWLDestinationFormat : uint8;
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLDestinationFormat>();

#define FOREACH_ENUM_EOWLSRTPUBKEYLEN(op) \
	op(EOWLSRTPubKeyLen::SRT_PKL_16) \
	op(EOWLSRTPubKeyLen::SRT_PKL_24) \
	op(EOWLSRTPubKeyLen::SRT_PKL_32) 

enum class EOWLSRTPubKeyLen : uint8;
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLSRTPubKeyLen>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
