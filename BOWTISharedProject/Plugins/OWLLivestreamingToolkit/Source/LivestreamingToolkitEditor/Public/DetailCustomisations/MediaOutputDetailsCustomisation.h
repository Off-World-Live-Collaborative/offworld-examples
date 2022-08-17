// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "IDetailCustomization.h"

class IDetailGroup;

class FMediaOutputDetailsCustomisation : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

private:
	/** IDetailCustomization interface */
	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailLayout ) override;

private:
	TSharedPtr<IPropertyHandle> HasStartedProperty;
	TSharedPtr<IPropertyHandle> DurationMsProperty;
	// The list of selected objects, used when invoking a CallInEditor method
	TArray<TWeakObjectPtr<UObject>> SelectedObjectsList;

	bool IsFunctionEnabled(FString FunctionName) const;
	FReply OnExecuteCallInEditorFunction(TWeakObjectPtr<UFunction> WeakFunctionPtr);
	FText GetDurationMsText() const;

};
