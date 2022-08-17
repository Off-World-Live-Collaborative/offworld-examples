// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHI.h"
#include "RHIResources.h"
#include "Engine/TextureRenderTarget2D.h"

struct FOutputRenderTextures_RHI
{
	FTexture2DRHIRef Texture;
	bool bReadyToRead;
};


class OWLMEDIA_API OWLImageInput
{
public:
	void Destroy();
	TArray64<uint8_t> OutputData;
	bool bDataReady = false;

private:
	bool Initialised = false;
	TArray<FOutputRenderTextures_RHI> OutputTextures;
	int CurrentTextureIndex = 0;
	UTextureRenderTarget2D* SourceRenderTarget = nullptr;
	FIntPoint Dimensions = FIntPoint(0,0);
	FCriticalSection RTMutex;

private:
	void EmptyOutputTextures();

public:
	/* Uses alternating readback textures `OutputTextures` to
	 * copy source render target contents to one of two output textures,
	 * apply gamma conversion shaders to that target and then
	 * wait a render tick before accessing the render target and
	 * writing data to `OutputData`
	 */
	void CaptureFrame_RT(UTextureRenderTarget2D* renderTarget);
	/* Checks resolution and source of render target. If either has changed,
	 * recreate the output textures
	 */
	void InitRenderTargetCapture(UTextureRenderTarget2D* rt);
	/* Returns the resolution of the input texture;
	 * Might be 1px smaller than input RT in each dimension to force even resolution
	 */
	FIntPoint GetInputResolution();

};
