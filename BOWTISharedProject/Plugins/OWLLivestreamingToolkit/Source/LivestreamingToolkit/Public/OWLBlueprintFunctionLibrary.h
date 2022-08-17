// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OWLBlueprintFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class LIVESTREAMINGTOOLKIT_API UOWLBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* toggle the viewport that renders at Editor time
	*/
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Sender Settings")
	static void ToggleEditorViewportRendering();

	/**
	* toggle the viewport that render at PIE or Standalone game time
	*/
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Sender Settings")
	static void ToggleRuntimeViewportRendering();

	/**
	* rendering status of the viewport that renders at Editor time
	*/
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Sender Settings")
	static bool GetIsEditorViewportRendering();

	/**
	* rendering status of the viewport at PIE or Standalone game time
	*/
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Sender Settings")
	static bool GetIsRuntimeViewportRendering();

	/**
	 * Use this to render any UMG Widgets
	 */
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void DrawUMGToRenderTarget(UUserWidget* UMGWidget, FIntPoint Size, float DeltaTime, UPARAM(ref) UTextureRenderTarget2D* RenderTarget);

	/**
	* bind this function to the key of your choice to create a way to log in in packaged games
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void OWLLogIn();

	/**
	* bind this function to the key of your choice to create a way to log in in packaged games
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void OWLLogOut();

	/**
	* this function will return true if the user is logged in and false if they are logged out
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static bool OWLLogInStatus();
};
