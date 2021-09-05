// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralProject/Actors/ChairActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChairActor() {}
// Cross Module References
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AChairActor_NoRegister();
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AChairActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AChairActor::StaticRegisterNativesAChairActor()
	{
	}
	UClass* Z_Construct_UClass_AChairActor_NoRegister()
	{
		return AChairActor::StaticClass();
	}
	struct Z_Construct_UClass_AChairActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChairComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChairComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChairActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChairActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ChairActor.h" },
		{ "ModuleRelativePath", "Actors/ChairActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChairActor_Statics::NewProp_ChairComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ChairActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChairActor_Statics::NewProp_ChairComponent = { "ChairComponent", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChairActor, ChairComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChairActor_Statics::NewProp_ChairComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChairActor_Statics::NewProp_ChairComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChairActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChairActor_Statics::NewProp_ChairComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChairActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChairActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChairActor_Statics::ClassParams = {
		&AChairActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChairActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChairActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChairActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChairActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChairActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChairActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChairActor, 1672028477);
	template<> PROCEDURALPROJECT_API UClass* StaticClass<AChairActor>()
	{
		return AChairActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChairActor(Z_Construct_UClass_AChairActor, &AChairActor::StaticClass, TEXT("/Script/ProceduralProject"), TEXT("AChairActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChairActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
