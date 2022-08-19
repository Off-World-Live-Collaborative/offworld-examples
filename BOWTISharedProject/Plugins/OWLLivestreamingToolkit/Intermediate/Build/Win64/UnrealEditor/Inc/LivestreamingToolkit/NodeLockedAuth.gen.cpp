// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/ServerAuth/NodeLockedAuth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeLockedAuth() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedLicenceData();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedValidityData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeLockedLicenceData;
class UScriptStruct* FNodeLockedLicenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedLicenceData, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedLicenceData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedLicenceData>()
{
	return FNodeLockedLicenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_licence_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_licence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_product_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_product;
		static const UECodeGen_Private::FStrPropertyParams NewProp_products_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_products_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_products;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expiry_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_expiry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallbackEndDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fallbackEndDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checksum_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_checksum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_licenceFormatVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_licenceFormatVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//#define NODE_LOCKED_DEBUG\n" },
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
		{ "ToolTip", "#define NODE_LOCKED_DEBUG" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedLicenceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence = { "licence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, licence), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product = { "product", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, product), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products_Inner = { "products", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products_MetaData[] = {
		{ "Comment", "// DEPRECATED IN LICENCE FORMAT 2\n" },
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
		{ "ToolTip", "DEPRECATED IN LICENCE FORMAT 2" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products = { "products", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, products), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry = { "expiry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, expiry), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate = { "fallbackEndDate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, fallbackEndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum = { "checksum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, checksum), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licenceFormatVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licenceFormatVersion = { "licenceFormatVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, licenceFormatVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licenceFormatVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licenceFormatVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_products,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licenceFormatVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedLicenceData",
		sizeof(FNodeLockedLicenceData),
		alignof(FNodeLockedLicenceData),
		Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedLicenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.InnerSingleton, Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeLockedLicenceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout;
class UScriptStruct* FNodeLockedVerificationFileLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedVerificationFileLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedVerificationFileLayout>()
{
	return FNodeLockedVerificationFileLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_licenceData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_licenceData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_licenceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedVerificationFileLayout>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_Inner = { "licenceData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNodeLockedLicenceData, METADATA_PARAMS(nullptr, 0) }; // 605775880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData = { "licenceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedVerificationFileLayout, licenceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData)) }; // 605775880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedVerificationFileLayout",
		sizeof(FNodeLockedVerificationFileLayout),
		alignof(FNodeLockedVerificationFileLayout),
		Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.InnerSingleton, Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeLockedValidityData;
class UScriptStruct* FNodeLockedValidityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeLockedValidityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeLockedValidityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedValidityData, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedValidityData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeLockedValidityData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedValidityData>()
{
	return FNodeLockedValidityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valid_MetaData[];
#endif
		static void NewProp_valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checksum_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_checksum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedValidityData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((FNodeLockedValidityData*)Obj)->valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNodeLockedValidityData), &Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_checksum_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_checksum = { "checksum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedValidityData, checksum), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_checksum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_checksum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewProp_checksum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedValidityData",
		sizeof(FNodeLockedValidityData),
		alignof(FNodeLockedValidityData),
		Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedValidityData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeLockedValidityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeLockedValidityData.InnerSingleton, Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeLockedValidityData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_NodeLockedAuth_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_NodeLockedAuth_h_Statics::ScriptStructInfo[] = {
		{ FNodeLockedLicenceData::StaticStruct, Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewStructOps, TEXT("NodeLockedLicenceData"), &Z_Registration_Info_UScriptStruct_NodeLockedLicenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeLockedLicenceData), 605775880U) },
		{ FNodeLockedVerificationFileLayout::StaticStruct, Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewStructOps, TEXT("NodeLockedVerificationFileLayout"), &Z_Registration_Info_UScriptStruct_NodeLockedVerificationFileLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeLockedVerificationFileLayout), 3637237087U) },
		{ FNodeLockedValidityData::StaticStruct, Z_Construct_UScriptStruct_FNodeLockedValidityData_Statics::NewStructOps, TEXT("NodeLockedValidityData"), &Z_Registration_Info_UScriptStruct_NodeLockedValidityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeLockedValidityData), 1678344550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_NodeLockedAuth_h_1196608472(TEXT("/Script/LivestreamingToolkit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_NodeLockedAuth_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_NodeLockedAuth_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
