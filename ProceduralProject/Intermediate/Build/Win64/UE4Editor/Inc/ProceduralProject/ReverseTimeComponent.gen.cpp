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
	DEFINE_FUNCTION(UReverseTimeComponent::execSetReversingTime)
	{
		P_GET_UBOOL(Z_Param_InReversingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReversingTime(Z_Param_InReversingTime);
		P_NATIVE_END;
	}
	void UReverseTimeComponent::StaticRegisterNativesUReverseTimeComponent()
	{
		UClass* Class = UReverseTimeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetReversingTime", &UReverseTimeComponent::execSetReversingTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics
	{
		struct ReverseTimeComponent_eventSetReversingTime_Parms
		{
			bool InReversingTime;
		};
		static void NewProp_InReversingTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InReversingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::NewProp_InReversingTime_SetBit(void* Obj)
	{
		((ReverseTimeComponent_eventSetReversingTime_Parms*)Obj)->InReversingTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::NewProp_InReversingTime = { "InReversingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseTimeComponent_eventSetReversingTime_Parms), &Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::NewProp_InReversingTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::NewProp_InReversingTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Components/ReverseTimeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReverseTimeComponent, nullptr, "SetReversingTime", nullptr, nullptr, sizeof(ReverseTimeComponent_eventSetReversingTime_Parms), Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister()
	{
		return UReverseTimeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReverseTimeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UReverseTimeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReverseTimeComponent_SetReversingTime, "SetReversingTime" }, // 3888307423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/Components/ReverseTimeComponent.h" },
		{ "IsBlueprintBase", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UReverseTimeComponent, 556869249);
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
