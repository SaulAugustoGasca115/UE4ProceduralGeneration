// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralProject/Actors/Components/ReverseTimeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseTimeComponent() {}
// Cross Module References
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister();
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_UReverseTimeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ProceduralProject();
// End Cross Module References
	void UReverseTimeComponent::StaticRegisterNativesUReverseTimeComponent()
	{
	}
	UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister()
	{
		return UReverseTimeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReverseTimeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverseTimeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/Components/ReverseTimeComponent.h" },
		{ "ModuleRelativePath", "Actors/Components/ReverseTimeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverseTimeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverseTimeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams = {
		&UReverseTimeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverseTimeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverseTimeComponent, 2937476695);
	template<> PROCEDURALPROJECT_API UClass* StaticClass<UReverseTimeComponent>()
	{
		return UReverseTimeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverseTimeComponent(Z_Construct_UClass_UReverseTimeComponent, &UReverseTimeComponent::StaticClass, TEXT("/Script/ProceduralProject"), TEXT("UReverseTimeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverseTimeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
