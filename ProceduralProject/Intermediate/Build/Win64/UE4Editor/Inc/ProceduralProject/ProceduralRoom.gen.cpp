// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralProject/Actors/ProceduralRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralRoom() {}
// Cross Module References
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AProceduralRoom_NoRegister();
	PROCEDURALPROJECT_API UClass* Z_Construct_UClass_AProceduralRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AProceduralRoom::StaticRegisterNativesAProceduralRoom()
	{
	}
	UClass* Z_Construct_UClass_AProceduralRoom_NoRegister()
	{
		return AProceduralRoom::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateLineDebug_MetaData[];
#endif
		static void NewProp_bActivateLineDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateLineDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Floor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChairClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChairClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ProceduralRoom.h" },
		{ "ModuleRelativePath", "Actors/ProceduralRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Actors/ProceduralRoom.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug_SetBit(void* Obj)
	{
		((AProceduralRoom*)Obj)->bActivateLineDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug = { "bActivateLineDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProceduralRoom), &Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralRoom_Statics::NewProp_Floor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ProceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralRoom_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralRoom, Floor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_Floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_Floor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralRoom_Statics::NewProp_ChairClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Actors/ProceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralRoom_Statics::NewProp_ChairClass = { "ChairClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralRoom, ChairClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_ChairClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralRoom_Statics::NewProp_ChairClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralRoom_Statics::NewProp_bActivateLineDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralRoom_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralRoom_Statics::NewProp_ChairClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralRoom_Statics::ClassParams = {
		&AProceduralRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProceduralRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralRoom, 2155954805);
	template<> PROCEDURALPROJECT_API UClass* StaticClass<AProceduralRoom>()
	{
		return AProceduralRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralRoom(Z_Construct_UClass_AProceduralRoom, &AProceduralRoom::StaticClass, TEXT("/Script/ProceduralProject"), TEXT("AProceduralRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
