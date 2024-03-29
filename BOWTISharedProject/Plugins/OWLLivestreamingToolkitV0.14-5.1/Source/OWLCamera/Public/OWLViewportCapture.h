﻿// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Delegates/IDelegateInstance.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLViewportCapture.generated.h"

class FSceneViewport;
class UOWLWatermark;

UCLASS(hidecategories = (Collision, Attachment, Actor))
class OWLCAMERA_API AOWLViewportCapture : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	UTextureRenderTarget2D* TextureTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	bool PauseRendering = false;

public:
	AOWLViewportCapture();

protected:
	virtual bool ShouldTickIfViewportsOnly() const override;

public:
	virtual void Tick(float DeltaTime) override;
	void RenderViewportToTexture_RT(FRHICommandListImmediate& RHICmdList, const FSceneViewport* SourceViewport);

private:
	void FindSceneViewport(TWeakPtr<FSceneViewport>& OutSceneViewport);
	FCriticalSection AccessingCapturingSource;
	UPROPERTY()
	UOWLWatermark* Watermark;
};
