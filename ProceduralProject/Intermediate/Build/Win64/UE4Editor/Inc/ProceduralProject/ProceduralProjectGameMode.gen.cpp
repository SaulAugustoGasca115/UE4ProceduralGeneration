// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralProject/ProceduralProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralProjectGameMode() {}
// Cross Module References
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AProceduralProjectGameMode_NoRegister();
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AProceduralProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralProject();
// End Cross Module References
	void AProceduralProjectGameMode::StaticRegisterNativesAProceduralProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProceduralProjectGameMode_NoRegister()
	{
		return AProceduralProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceduralProjectGameMode.h" },
		{ "ModuleRelativePath", "ProceduralProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralProjectGameMode_Statics::ClassParams = {
		&AProceduralProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralProjectGameMode, 4278506282);
	template<> PROCEDURALPROJECT_API UClass* StaticClass<AProceduralProjectGameMode>()
	{
		return AProceduralProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralProjectGameMode(Z_Construct_UClass_AProceduralProjectGameMode, &AProceduralProjectGameMode::StaticClass, TEXT("/Script/ProceduralProject"), TEXT("AProceduralProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
