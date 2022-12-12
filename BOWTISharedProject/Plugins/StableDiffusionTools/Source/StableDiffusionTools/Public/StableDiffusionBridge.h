// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "StableDiffusionImageResult.h"
#include "StableDiffusionGenerationOptions.h"
#include "StableDiffusionBridge.generated.h"

DECLARE_MULTICAST_DELEGATE_FourParams(FImageProgress, int32, int32, FIntPoint, const TArray<FColor>&);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FImageProgressEx, int32, Step, int32, Timestep, FIntPoint, size, const TArray<FColor>&, PixelData);

//UCLASS(PerObjectConfig, Config = "Engine")
//class USDBridgeToken : public UObject
//{
//    GENERATED_BODY()
//public:
//    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "StableDiffusion|Token")
//    FString Token;
//};

/**
 * 
 */
UCLASS(Config="Engine")
class STABLEDIFFUSIONTOOLS_API UStableDiffusionBridge : public UObject
{
	GENERATED_BODY()

public:
    UStableDiffusionBridge(const FObjectInitializer& initializer);

    UFUNCTION(BlueprintCallable, Category = "StableDiffusion|Bridge")
    UStableDiffusionBridge* Get();

    UFUNCTION(BlueprintCallable, Category = "StableDiffusion|Bridge")
    bool LoginUsingToken(const FString& Token);

    UFUNCTION(BlueprintCallable, Category = "StableDiffusion|Bridge")
    FString GetToken();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StableDiffusion|Bridge")
 //   USDBridgeToken* CachedToken;

    UFUNCTION(BlueprintCallable, Category = "StableDiffusion|Bridge")
    void SaveProperties();

    /** Python stable diffusion implementable functions */

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    bool InitModel(const FStableDiffusionModelOptions& NewModelOptions);

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    void ReleaseModel();

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    FStableDiffusionImageResult GenerateImageFromStartImage(const FStableDiffusionInput& InputOptions) const;

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    void StartUpsample();

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    FStableDiffusionImageResult UpsampleImage(const FStableDiffusionImageResult& input_result) const;

    UFUNCTION(BlueprintImplementableEvent, Category = "StableDiffusion|Bridge")
    void StopUpsample();

    UFUNCTION(BlueprintCallable, Category = "StableDiffusion|Bridge")
    void UpdateImageProgress(FString prompt, int32 step, int32 timestep, int32 width, int32 height, const TArray<FColor>& FrameColors);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StableDiffusion|Bridge")
    FStableDiffusionModelOptions ModelOptions;

    FImageProgress OnImageProgress;
    FImageProgressEx OnImageProgressEx;
};
