// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutReceiver.h"
#include "OWLSpoutReceiverManager.generated.h"

class UOWLWatermark;

USTRUCT(BlueprintType)
struct OWLSPOUT_API FOWLSpoutReceiverInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool UseFirstAvailableSender = true;

	/* Name of the sender we are receiving from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	FString Name = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	UTextureRenderTarget2D* RenderTarget = nullptr;

private:
	FOWLSpoutReceiver* SpoutReceiver = nullptr;

public:
	void Receive()
	{
		if(SpoutReceiver == nullptr)
		{
			SpoutReceiver = new FOWLSpoutReceiver;
		}
		SpoutReceiver->ReceiveRenderTarget(Name, RenderTarget, UseFirstAvailableSender);
	}

	void TryClose(bool KeepActive)
	{
		if (SpoutReceiver != nullptr)
		{
			delete SpoutReceiver;
			SpoutReceiver = nullptr;
		}
		if (!KeepActive)
		{
			Active = false;
		}
	}
};

UCLASS()
class OWLSPOUT_API AOWLSpoutReceiverManager : public AActor
{
	GENERATED_BODY()

public:

	/** Returns a list of spout sender names that are available at this moment in time. */
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Receiver")
	TArray<FString> GetAvailableSenderNames();

	// Sets default values for this actor's properties
	AOWLSpoutReceiverManager(const FObjectInitializer& ObjectInitializer);
	~AOWLSpoutReceiverManager();

	virtual bool ShouldTickIfViewportsOnly() const override;

private:
	void OnEndFrame();
	void CloseAllReceivers(bool keepActive);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Receiver Settings")
	TArray<FOWLSpoutReceiverInterface> SpoutReceivers;

private:
	UPROPERTY()
	UOWLWatermark* Watermark;
	static bool ClosedEditorReceivers;
};
