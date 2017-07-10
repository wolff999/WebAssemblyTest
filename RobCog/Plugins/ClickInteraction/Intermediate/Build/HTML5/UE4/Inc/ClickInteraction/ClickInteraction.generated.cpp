// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ClickInteraction.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ClickInteraction() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();

	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCMovement_NoRegister();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCMovement();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCOpenClose_NoRegister();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCOpenClose();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCRotateButton_NoRegister();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCRotateButton();
	CLICKINTERACTION_API class UScriptStruct* Z_Construct_UScriptStruct_FPickupAnimation();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCPickup_NoRegister();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_UCPickup();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	CLICKINTERACTION_API class UClass* Z_Construct_UClass_ACharacterController();
	CLICKINTERACTION_API class UPackage* Z_Construct_UPackage__Script_ClickInteraction();
	void UCMovement::StaticRegisterNativesUCMovement()
	{
	}
	UClass* Z_Construct_UClass_UCMovement_NoRegister()
	{
		return UCMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UCMovement()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ClickInteraction();
			OuterClass = UCMovement::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UCMovement> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Character/Components/CMovement.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CMovement.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Use Forward Declaration. Including the header in COpenClose.cpp"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCMovement, 2041897191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCMovement(Z_Construct_UClass_UCMovement, &UCMovement::StaticClass, TEXT("/Script/ClickInteraction"), TEXT("UCMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMovement);
	void UCOpenClose::StaticRegisterNativesUCOpenClose()
	{
	}
	UClass* Z_Construct_UClass_UCOpenClose_NoRegister()
	{
		return UCOpenClose::StaticClass();
	}
	UClass* Z_Construct_UClass_UCOpenClose()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ClickInteraction();
			OuterClass = UCOpenClose::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLocksComponent, UCOpenClose, bool);
				UProperty* NewProp_bLocksComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLocksComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLocksComponent, UCOpenClose), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bLocksComponent, UCOpenClose), sizeof(bool), true);
				UProperty* NewProp_ForceToApply = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForceToApply"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ForceToApply, UCOpenClose), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCOpenClose> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Character/Components/COpenClose.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/COpenClose.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Use Forward Declaration. Including the header in COpenClose.cpp"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("Category"), TEXT("COpenClose"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/COpenClose.h"));
				MetaData->SetValue(NewProp_ForceToApply, TEXT("Category"), TEXT("COpenClose"));
				MetaData->SetValue(NewProp_ForceToApply, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/COpenClose.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCOpenClose, 3304091753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCOpenClose(Z_Construct_UClass_UCOpenClose, &UCOpenClose::StaticClass, TEXT("/Script/ClickInteraction"), TEXT("UCOpenClose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCOpenClose);
	void UCRotateButton::StaticRegisterNativesUCRotateButton()
	{
	}
	UClass* Z_Construct_UClass_UCRotateButton_NoRegister()
	{
		return UCRotateButton::StaticClass();
	}
	UClass* Z_Construct_UClass_UCRotateButton()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ClickInteraction();
			OuterClass = UCRotateButton::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLocksComponent, UCRotateButton, bool);
				UProperty* NewProp_bLocksComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLocksComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLocksComponent, UCRotateButton), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bLocksComponent, UCRotateButton), sizeof(bool), true);
				UProperty* NewProp_ForceToApply = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForceToApply"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ForceToApply, UCRotateButton), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCRotateButton> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Character/Components/CRotateButton.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CRotateButton.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Use Forward Declaration. Including the header in CRotateButton.cpp"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("Category"), TEXT("CRotateButton"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CRotateButton.h"));
				MetaData->SetValue(NewProp_ForceToApply, TEXT("Category"), TEXT("CRotateButton"));
				MetaData->SetValue(NewProp_ForceToApply, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CRotateButton.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCRotateButton, 302792327);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCRotateButton(Z_Construct_UClass_UCRotateButton, &UCRotateButton::StaticClass, TEXT("/Script/ClickInteraction"), TEXT("UCRotateButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRotateButton);
class UScriptStruct* FPickupAnimation::StaticStruct()
{
	extern CLICKINTERACTION_API class UPackage* Z_Construct_UPackage__Script_ClickInteraction();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLICKINTERACTION_API class UScriptStruct* Z_Construct_UScriptStruct_FPickupAnimation();
		extern CLICKINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FPickupAnimation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupAnimation, Z_Construct_UPackage__Script_ClickInteraction(), TEXT("PickupAnimation"), sizeof(FPickupAnimation), Get_Z_Construct_UScriptStruct_FPickupAnimation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPickupAnimation(FPickupAnimation::StaticStruct, TEXT("/Script/ClickInteraction"), TEXT("PickupAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_ClickInteraction_StaticRegisterNativesFPickupAnimation
{
	FScriptStruct_ClickInteraction_StaticRegisterNativesFPickupAnimation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PickupAnimation")),new UScriptStruct::TCppStructOps<FPickupAnimation>);
	}
} ScriptStruct_ClickInteraction_StaticRegisterNativesFPickupAnimation;
	UScriptStruct* Z_Construct_UScriptStruct_FPickupAnimation()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClickInteraction();
		extern uint32 Get_Z_Construct_UScriptStruct_FPickupAnimation_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PickupAnimation"), sizeof(FPickupAnimation), Get_Z_Construct_UScriptStruct_FPickupAnimation_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PickupAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FPickupAnimation>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Character/Structs/PickupAnimation.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPickupAnimation_CRC() { return 4183972993U; }
	void UCPickup::StaticRegisterNativesUCPickup()
	{
	}
	UClass* Z_Construct_UClass_UCPickup_NoRegister()
	{
		return UCPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_UCPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ClickInteraction();
			OuterClass = UCPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLocksComponent, UCPickup, bool);
				UProperty* NewProp_bLocksComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLocksComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLocksComponent, UCPickup), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bLocksComponent, UCPickup), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UCPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Character/Components/CPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Use Forward Declaration. Including the header in CPickup.cpp"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("Category"), TEXT("CPickup"));
				MetaData->SetValue(NewProp_bLocksComponent, TEXT("ModuleRelativePath"), TEXT("Private/Character/Components/CPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPickup, 1362261132);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPickup(Z_Construct_UClass_UCPickup, &UCPickup::StaticClass, TEXT("/Script/ClickInteraction"), TEXT("UCPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPickup);
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
	}
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACharacterController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_ClickInteraction();
			OuterClass = ACharacterController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BothHandPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BothHandPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BothHandPosition, ACharacterController), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_RightHandPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightHandPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightHandPosition, ACharacterController), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_LeftHandPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftHandPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftHandPosition, ACharacterController), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsDebugMode, ACharacterController, bool);
				UProperty* NewProp_bIsDebugMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsDebugMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsDebugMode, ACharacterController), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIsDebugMode, ACharacterController), sizeof(bool), true);
				UProperty* NewProp_RaycastRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RaycastRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RaycastRange, ACharacterController), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACharacterController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Character/CharacterController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
				MetaData->SetValue(NewProp_BothHandPosition, TEXT("Category"), TEXT("CharacterController"));
				MetaData->SetValue(NewProp_BothHandPosition, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
				MetaData->SetValue(NewProp_RightHandPosition, TEXT("Category"), TEXT("CharacterController"));
				MetaData->SetValue(NewProp_RightHandPosition, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
				MetaData->SetValue(NewProp_LeftHandPosition, TEXT("Category"), TEXT("CharacterController"));
				MetaData->SetValue(NewProp_LeftHandPosition, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
				MetaData->SetValue(NewProp_bIsDebugMode, TEXT("Category"), TEXT("CharacterController"));
				MetaData->SetValue(NewProp_bIsDebugMode, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
				MetaData->SetValue(NewProp_RaycastRange, TEXT("Category"), TEXT("CharacterController"));
				MetaData->SetValue(NewProp_RaycastRange, TEXT("ModuleRelativePath"), TEXT("Private/Character/CharacterController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterController, 3198835853);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterController(Z_Construct_UClass_ACharacterController, &ACharacterController::StaticClass, TEXT("/Script/ClickInteraction"), TEXT("ACharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
	UPackage* Z_Construct_UPackage__Script_ClickInteraction()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ClickInteraction")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x3F2428F7;
			Guid.B = 0x15E32545;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
