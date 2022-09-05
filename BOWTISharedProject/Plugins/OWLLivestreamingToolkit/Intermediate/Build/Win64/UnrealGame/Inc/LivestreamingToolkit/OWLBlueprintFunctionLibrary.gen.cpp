// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLBlueprintFunctionLibrary() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogInStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::OWLLogInStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::OWLLogOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::OWLLogIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execDrawUMGToRenderTarget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UMGWidget);
		P_GET_STRUCT(FIntPoint,Z_Param_Size);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::DrawUMGToRenderTarget(Z_Param_UMGWidget,Z_Param_Size,Z_Param_DeltaTime,Z_Param_Out_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::GetIsRuntimeViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execGetIsEditorViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::GetIsEditorViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execSetRuntimeViewportRendering)
	{
		P_GET_UBOOL(Z_Param_EnableViewportRendering);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::SetRuntimeViewportRendering(Z_Param_EnableViewportRendering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execSetEditorViewportRendering)
	{
		P_GET_UBOOL(Z_Param_EnableViewportRendering);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::SetEditorViewportRendering(Z_Param_EnableViewportRendering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execToggleRuntimeViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::ToggleRuntimeViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execToggleEditorViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLBlueprintFunctionLibrary::ToggleEditorViewportRendering();
		P_NATIVE_END;
	}
	void UOWLBlueprintFunctionLibrary::StaticRegisterNativesUOWLBlueprintFunctionLibrary()
	{
		UClass* Class = UOWLBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawUMGToRenderTarget", &UOWLBlueprintFunctionLibrary::execDrawUMGToRenderTarget },
			{ "GetIsEditorViewportRendering", &UOWLBlueprintFunctionLibrary::execGetIsEditorViewportRendering },
			{ "GetIsRuntimeViewportRendering", &UOWLBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering },
			{ "OWLLogIn", &UOWLBlueprintFunctionLibrary::execOWLLogIn },
			{ "OWLLogInStatus", &UOWLBlueprintFunctionLibrary::execOWLLogInStatus },
			{ "OWLLogOut", &UOWLBlueprintFunctionLibrary::execOWLLogOut },
			{ "SetEditorViewportRendering", &UOWLBlueprintFunctionLibrary::execSetEditorViewportRendering },
			{ "SetRuntimeViewportRendering", &UOWLBlueprintFunctionLibrary::execSetRuntimeViewportRendering },
			{ "ToggleEditorViewportRendering", &UOWLBlueprintFunctionLibrary::execToggleEditorViewportRendering },
			{ "ToggleRuntimeViewportRendering", &UOWLBlueprintFunctionLibrary::execToggleRuntimeViewportRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms
		{
			UUserWidget* UMGWidget;
			FIntPoint Size;
			float DeltaTime;
			UTextureRenderTarget2D* RenderTarget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UMGWidget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, UMGWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09 * Use this to render any UMG Widgets\n\x09 */" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Use this to render any UMG Widgets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "DrawUMGToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* rendering status of the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport that renders at Editor time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "GetIsEditorViewportRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* rendering status of the viewport at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport at PIE or Standalone game time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "GetIsRuntimeViewportRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* this function will return true if the user is logged in and false if they are logged out\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "this function will return true if the user is logged in and false if they are logged out" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogInStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms
		{
			bool EnableViewportRendering;
		};
		static void NewProp_EnableViewportRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableViewportRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit(void* Obj)
	{
		((OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms*)Obj)->EnableViewportRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering = { "EnableViewportRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* enable/ disable the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "enable/ disable the viewport that renders at Editor time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "SetEditorViewportRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics
	{
		struct OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms
		{
			bool EnableViewportRendering;
		};
		static void NewProp_EnableViewportRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableViewportRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit(void* Obj)
	{
		((OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms*)Obj)->EnableViewportRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering = { "EnableViewportRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* enable/ disable the viewport that renders at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "enable/ disable the viewport that renders at PIE or Standalone game time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "SetRuntimeViewportRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* toggle the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that renders at Editor time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "ToggleEditorViewportRendering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* toggle the viewport that render at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that render at PIE or Standalone game time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "ToggleRuntimeViewportRendering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister()
	{
		return UOWLBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget, "DrawUMGToRenderTarget" }, // 3554543834
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering, "GetIsEditorViewportRendering" }, // 564471926
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering, "GetIsRuntimeViewportRendering" }, // 4000458371
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn, "OWLLogIn" }, // 2699291757
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus, "OWLLogInStatus" }, // 2573570187
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut, "OWLLogOut" }, // 2931701807
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering, "SetEditorViewportRendering" }, // 3751102518
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering, "SetRuntimeViewportRendering" }, // 2058616003
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering, "ToggleEditorViewportRendering" }, // 3261613692
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering, "ToggleRuntimeViewportRendering" }, // 1538953726
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::ClassParams = {
		&UOWLBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLBlueprintFunctionLibrary>()
	{
		return UOWLBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLBlueprintFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLBlueprintFunctionLibrary, UOWLBlueprintFunctionLibrary::StaticClass, TEXT("UOWLBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLBlueprintFunctionLibrary), 1742974543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_3162107210(TEXT("/Script/LivestreamingToolkit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
