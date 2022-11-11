// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHIResources.h"
#include "OWLTextureFormats.h"

class UTextureRenderTarget2D;
class FRHICommandListImmediate;

class LIVESTREAMINGTOOLKITSHADERS_API FOWLMediaUtils
{
public:
	/* Converts the RenderTextureTarget to a different format and applies sRGB gamma */
	static bool ConvertFormatAndLinearToSrgb_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		UTextureRenderTarget2D* SourceRenderTarget,
		FTexture2DRHIRef& ReadbackTexture,
		EOWLOutputTextureFormat VideoConversionFormat);

	static bool SrgbToLinear_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		const FTexture2DRHIRef& SourceTexture,
		UTextureRenderTarget2D* DestinationRenderTarget);
};

class LIVESTREAMINGTOOLKITSHADERS_API FOWLNDIReceiverShader
{
public:
	FOWLNDIReceiverShader();
	~FOWLNDIReceiverShader();
	bool Apply_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		UTextureRenderTarget2D* DestRenderTarget,
		uint32 SrcPitch,
		const uint8* SrcData,
		FIntPoint Resolution,
		EOWLOutputTextureFormat VideoConversionFormat);
private:
	TRefCountPtr<FRHITexture2D> InputTarget;
};

