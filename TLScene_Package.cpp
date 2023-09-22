/**
 * Name: TL
 * Version: 0525
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLCommonGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLCommonGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCommonGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCommonGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCommonGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCommonGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAggregatedLandscapeLOD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAggregatedLandscapeLOD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AggregatedLandscapeLOD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USystemAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USystemAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SystemAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_AnimDynamics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_AnimDynamics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotifyState_AnimDynamics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_BoneScaleControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_BoneScaleControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotifyState_BoneScaleControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_CharacterSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_CharacterSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_CharacterSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_DropLinkedItems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DropLinkedItems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_DropLinkedItems");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_EquipSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_EquipSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_EquipSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_EquipSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_EquipSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotifyState_EquipSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_FishingEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_FishingEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_FishingEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_HitStop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_HitStop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_HitStop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_NameplateUpdateMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_NameplateUpdateMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_NameplateUpdateMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PhysicalFootprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PhysicalFootprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_PhysicalFootprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SystemSct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SystemSct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_SystemSct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SystemSct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SystemSct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotifyState_SystemSct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_TLPlaySound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_TLPlaySound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_TLPlaySound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_Trigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_Trigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotify_Trigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_EnableIK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_EnableIK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.AnimNotifyState_EnableIK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindBoidRoamingStartPosition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindBoidRoamingStartPosition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTService_FindBoidRoamingStartPosition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindRunAwayTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindRunAwayTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTService_FindRunAwayTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SelectNextPathSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SelectNextPathSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTService_SelectNextPathSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MovingBySpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MovingBySpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_MovingBySpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MovingDirectFly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MovingDirectFly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_MovingDirectFly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MovingReverseBySpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MovingReverseBySpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_MovingReverseBySpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ProwlingSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ProwlingSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_ProwlingSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RoamingSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RoamingSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_RoamingSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_WaitContiPlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_WaitContiPlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.BTTask_WaitContiPlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentExternalTrackOverrideData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentExternalTrackOverrideData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentExternalTrackOverrideData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentBlenderManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentBlenderManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentBlenderManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentObjectBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentObjectBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentObjectBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentMaterialParameterCollectionBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentMaterialParameterCollectionBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentMaterialParameterCollectionBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentDirectionalLightBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentDirectionalLightBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentDirectionalLightBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentSpotLightBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentSpotLightBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentSpotLightBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentPointLightBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentPointLightBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentPointLightBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentSkyLightBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentSkyLightBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentSkyLightBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentSkyAtmosphereBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentSkyAtmosphereBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentSkyAtmosphereBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentVolumetricCloudBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentVolumetricCloudBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentVolumetricCloudBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentTLSkyBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentTLSkyBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentTLSkyBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentExponentialHeightFogBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentExponentialHeightFogBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentExponentialHeightFogBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentPostProcessVolumeBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentPostProcessVolumeBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentPostProcessVolumeBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentModuleBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentModuleBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentModuleBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentWeatherParticleBlenderV2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentWeatherParticleBlenderV2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentWeatherParticleBlenderV2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentPostProcessMaterialBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentPostProcessMaterialBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentPostProcessMaterialBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentMaterialSetBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentMaterialSetBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentMaterialSetBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentCharacterWindBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentCharacterWindBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentCharacterWindBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentLightingModuleBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentLightingModuleBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentLightingModuleBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentScabilityModuleBlender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentScabilityModuleBlender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentScabilityModuleBlender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFadingGroupActorConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadingGroupActorConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.FadingGroupActorConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFadingGroupActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFadingGroupActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.FadingGroupActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_AttachMagicDoll.OnMasterCharacterMovementUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OldLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OldVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_AttachMagicDoll::OnMasterCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_AttachMagicDoll.OnMasterCharacterMovementUpdated");
		
		UGameplayTask_AttachMagicDoll_OnMasterCharacterMovementUpdated_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.OldLocation = OldLocation;
		params.OldVelocity = OldVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_AttachMagicDoll.Attach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSnActionAttachObjectData                   AttachObjectData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_AttachMagicDoll* UGameplayTask_AttachMagicDoll::Attach(const struct FSnActionAttachObjectData& AttachObjectData, unsigned char Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_AttachMagicDoll.Attach");
		
		UGameplayTask_AttachMagicDoll_Attach_Params params {};
		params.AttachObjectData = AttachObjectData;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_AttachMagicDoll.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_AttachMagicDoll::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.GameplayTask_AttachMagicDoll");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_AttachWorldObject.OnAttachedParentEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_AttachWorldObject::OnAttachedParentEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_AttachWorldObject.OnAttachedParentEndPlay");
		
		UGameplayTask_AttachWorldObject_OnAttachedParentEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_AttachWorldObject.OnAttachedCollisionActorEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_AttachWorldObject::OnAttachedCollisionActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_AttachWorldObject.OnAttachedCollisionActorEndPlay");
		
		UGameplayTask_AttachWorldObject_OnAttachedCollisionActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_AttachWorldObject.Attach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSnActionAttachObjectData                   AttachObjectData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_AttachWorldObject* UGameplayTask_AttachWorldObject::Attach(const struct FSnActionAttachObjectData& AttachObjectData, unsigned char Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_AttachWorldObject.Attach");
		
		UGameplayTask_AttachWorldObject_Attach_Params params {};
		params.AttachObjectData = AttachObjectData;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_AttachWorldObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_AttachWorldObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.GameplayTask_AttachWorldObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.GameplayTask_Mount.OnMasterCharacterMovementUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OldLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OldVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_Mount::OnMasterCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.GameplayTask_Mount.OnMasterCharacterMovementUpdated");
		
		UGameplayTask_Mount_OnMasterCharacterMovementUpdated_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.OldLocation = OldLocation;
		params.OldVelocity = OldVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_Mount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_Mount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.GameplayTask_Mount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHiveEntityData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHiveEntityData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.HiveEntityData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCommonModelDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCommonModelDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCommonModelDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHiveEntitiyHatchlingMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHiveEntitiyHatchlingMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.HiveEntitiyHatchlingMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHiveEntitiyHatchlingContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHiveEntitiyHatchlingContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.HiveEntitiyHatchlingContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.ImageAttachmentComponent.AttachImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImagePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImageAttachmentComponent::AttachImage(const class FString& ImagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.ImageAttachmentComponent.AttachImage");
		
		UImageAttachmentComponent_AttachImage_Params params {};
		params.ImagePath = ImagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageAttachmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageAttachmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.ImageAttachmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeBlendableAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeBlendableAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.LandscapeBlendableAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeBlendedActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeBlendedActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.LandscapeBlendedActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMapUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMapUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMapUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeProxyUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeProxyUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.LandscapeProxyUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.LevelStreamingAlwaysLoadedMod.HandleOnLevelLoaded
	 * 		Flags  -> ()
	 */
	void ULevelStreamingAlwaysLoadedMod::HandleOnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.LevelStreamingAlwaysLoadedMod.HandleOnLevelLoaded");
		
		ULevelStreamingAlwaysLoadedMod_HandleOnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingAlwaysLoadedMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingAlwaysLoadedMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.LevelStreamingAlwaysLoadedMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingExternLoadable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingExternLoadable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.LevelStreamingExternLoadable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapController.OnLevelStreamingCompleted
	 * 		Flags  -> ()
	 */
	void UMapController::OnLevelStreamingCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapController.OnLevelStreamingCompleted");
		
		UMapController_OnLevelStreamingCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapActivationManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapActivationManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapActivationManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapActorManager.OnActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMapActorManager::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapActorManager.OnActorDestroyed");
		
		UMapActorManager_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapActorManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapActorManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapActorManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapAreaVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapAreaVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapAreaVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapAreaWallComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapAreaWallComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapAreaWallComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapAreaVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapAreaVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapAreaVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapAreaVolumeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapAreaVolumeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapAreaVolumeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapControllerTicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapControllerTicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapControllerTicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapDynamicTriggerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapDynamicTriggerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapDynamicTriggerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentAffectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentAffectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentAffectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapEnvironmentAffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapEnvironmentAffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentAffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentCharacterWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentCharacterWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentCharacterWind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealEnvironmentVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealEnvironmentVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealEnvironmentVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEnvironmentVolumeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEnvironmentVolumeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapEnvironmentVolumeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapFadingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapFadingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapFadingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapMiniActor.OnParticleEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EmitterTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMapMiniActor::OnParticleEvent(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapMiniActor.OnParticleEvent");
		
		AMapMiniActor_OnParticleEvent_Params params {};
		params.EventName = EventName;
		params.EmitterTime = EmitterTime;
		params.Location = Location;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapMiniActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapMiniActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapMiniActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapHiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapHiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapHiveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMapManagedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMapManagedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMapManagedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapMaterialPermutation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapMaterialPermutation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapMaterialPermutation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapMaterialPermutationUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapMaterialPermutationUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapMaterialPermutationUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapMiniOverrideComponentContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapMiniOverrideComponentContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapMiniOverrideComponentContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomActionContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomActionContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActionContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Umaproom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Umaproom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.maproom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapRoomActor.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMapRoomActor::OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapRoomActor.OnEndOverlap");
		
		AMapRoomActor_OnEndOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapRoomActor.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AMapRoomActor::OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapRoomActor.OnBeginOverlap");
		
		AMapRoomActor_OnBeginOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapRoomActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapRoomActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmbeddedMapRoomActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmbeddedMapRoomActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.EmbeddedMapRoomActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomActionLightAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomActionLightAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActionLightAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPartGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPartGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPartGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPartGroupLightAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPartGroupLightAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPartGroupLightAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomLightBillboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomLightBillboardComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.RoomLightBillboardComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomPointLightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomPointLightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.RoomPointLightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomSpotLightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomSpotLightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.RoomSpotLightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPointLightPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPointLightPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPointLightPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomSpotLightPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomSpotLightPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomSpotLightPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomVolumePart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomVolumePart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomVolumePart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomBrushPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomBrushPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomBrushPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomStaticMeshPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomStaticMeshPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomStaticMeshPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomSkeletalMeshPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomSkeletalMeshPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomSkeletalMeshPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomParticleSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomParticleSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.RoomParticleSystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomParticlePart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomParticlePart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomParticlePart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomDecalPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomDecalPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomDecalPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomNavModifierVolumePart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomNavModifierVolumePart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomNavModifierVolumePart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomEffectVolumePart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomEffectVolumePart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomEffectVolumePart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomActionTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomActionTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActionTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPartGroupTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPartGroupTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPartGroupTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapRoomActionBindSocket.PostPoseUpdate
	 * 		Flags  -> ()
	 */
	void UMapRoomActionBindSocket::PostPoseUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapRoomActionBindSocket.PostPoseUpdate");
		
		UMapRoomActionBindSocket_PostPoseUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomActionBindSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomActionBindSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActionBindSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPartGroupBindSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPartGroupBindSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPartGroupBindSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomSoundPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomSoundPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomSoundPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomActionWindAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomActionWindAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomActionWindAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRoomPartGroupWindAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRoomPartGroupWindAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRoomPartGroupWindAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteComponentInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteComponentInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteComponentInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteAnchorInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteAnchorInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteAnchorInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteEdgeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteEdgeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteEdgeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteConnectionInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteConnectionInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteConnectionInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteShapeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteShapeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteShapeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteShapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteShapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteShapeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapRouteAnchorComponent.FixInvalidPositionZ
	 * 		Flags  -> ()
	 */
	void UMapRouteAnchorComponent::FixInvalidPositionZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapRouteAnchorComponent.FixInvalidPositionZ");
		
		UMapRouteAnchorComponent_FixInvalidPositionZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteAnchorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteAnchorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteAnchorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteEdgeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteEdgeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteEdgeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapRouteConnectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapRouteConnectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteConnectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapRouteShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapRouteShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapRouteShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterComponentInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterComponentInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterComponentInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterAnchorInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterAnchorInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterAnchorInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterEdgeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterEdgeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterEdgeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterConnectionInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterConnectionInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterConnectionInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterShapeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterShapeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterShapeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterShapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterShapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterShapeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapWaterAnchorComponent.FixInvalidPositionZ
	 * 		Flags  -> ()
	 */
	void UMapWaterAnchorComponent::FixInvalidPositionZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapWaterAnchorComponent.FixInvalidPositionZ");
		
		UMapWaterAnchorComponent_FixInvalidPositionZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterAnchorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterAnchorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterAnchorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.MapWaterEdgeComponent.SwapAnchors
	 * 		Flags  -> ()
	 */
	void UMapWaterEdgeComponent::SwapAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.MapWaterEdgeComponent.SwapAnchors");
		
		UMapWaterEdgeComponent_SwapAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterEdgeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterEdgeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterEdgeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWaterConnectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWaterConnectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterConnectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapWaterShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapWaterShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MapWaterShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialInstanceMerged.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialInstanceMerged::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MaterialInstanceMerged");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialInstanceDynamicMerged.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialInstanceDynamicMerged::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.MaterialInstanceDynamicMerged");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMaterialSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMaterialSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMaterialSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMaterialSetMerged.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMaterialSetMerged::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMaterialSetMerged");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleTypeDataTLRibbon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleTypeDataTLRibbon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.ParticleModuleTypeDataTLRibbon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathFollowWorldDrawerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathFollowWorldDrawerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.PathFollowWorldDrawerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARecastNavMeshMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARecastNavMeshMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.RecastNavMeshMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneActorCommonInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneActorCommonInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneActorCommonInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLOutlineInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLOutlineInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLOutlineInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLHitReactionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLHitReactionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLHitReactionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAttachableSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAttachableSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAttachableSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPotentialMovingFloorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPotentialMovingFloorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPotentialMovingFloorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLDebugDrawActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLDebugDrawActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLDebugDrawActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneSimpleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneSimpleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneSimpleActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneAreaObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneAreaObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneAreaObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCachedCompositedMeshUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCachedCompositedMeshUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCachedCompositedMeshUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneFieldObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneFieldObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneFieldObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneGlobalObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneGlobalObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneGlobalObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneIndicatorObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneIndicatorObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneIndicatorObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneItemObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneItemObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneItemObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterPhysicsMotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterPhysicsMotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.CharacterPhysicsMotion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneVolumeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneVolumeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneVolumeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShowOnlyLevelsVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShowOnlyLevelsVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.ShowOnlyLevelsVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.SplineDecalActor.ConstructMeshDecal
	 * 		Flags  -> ()
	 */
	void ASplineDecalActor::ConstructMeshDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.SplineDecalActor.ConstructMeshDecal");
		
		ASplineDecalActor_ConstructMeshDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineDecalActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineDecalActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SplineDecalActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeDebugSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeDebugSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeDebugSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATRootNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATRootNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATRootNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATConditionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATConditionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATConditionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATTemplateNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATTemplateNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATTemplateNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATPostFinishActionTreeNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATPostFinishActionTreeNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATPostFinishActionTreeNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATActionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATActionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATActionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActionTreeWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActionTreeWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActionTreeWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActorPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActorPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActorPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActorPoolSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActorPoolSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActorPoolSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLActorPoolWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLActorPoolWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLActorPoolWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAnimationStatics.SkeletalMeshAssiginNewSkeleton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLAnimationStatics::SkeletalMeshAssiginNewSkeleton(class USkeletalMesh* InSkeletalMesh, class USkeleton* InSkeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAnimationStatics.SkeletalMeshAssiginNewSkeleton");
		
		UTLAnimationStatics_SkeletalMeshAssiginNewSkeleton_Params params {};
		params.InSkeletalMesh = InSkeletalMesh;
		params.InSkeleton = InSkeleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAnimationStatics.GetSkeletonBoneNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UTLAnimationStatics::GetSkeletonBoneNames(class USkeleton* InSkeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAnimationStatics.GetSkeletonBoneNames");
		
		UTLAnimationStatics_GetSkeletonBoneNames_Params params {};
		params.InSkeleton = InSkeleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAnimationStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAnimationStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAnimationStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAnimDynamicsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAnimDynamicsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAnimDynamicsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAssetStatics.RenameAssetIfEditorBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InNewPackagePath                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InNewName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLAssetStatics::RenameAssetIfEditorBuild(class UObject* InAsset, const class FString& InNewPackagePath, const class FString& InNewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAssetStatics.RenameAssetIfEditorBuild");
		
		UTLAssetStatics_RenameAssetIfEditorBuild_Params params {};
		params.InAsset = InAsset;
		params.InNewPackagePath = InNewPackagePath;
		params.InNewName = InNewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAssetStatics.FindSoftReferencesToObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             TargetObject                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             ReferencingObjects                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTLAssetStatics::FindSoftReferencesToObject(const struct FSoftObjectPath& TargetObject, TArray<class UObject*>* ReferencingObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAssetStatics.FindSoftReferencesToObject");
		
		UTLAssetStatics_FindSoftReferencesToObject_Params params {};
		params.TargetObject = TargetObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReferencingObjects != nullptr)
			*ReferencingObjects = params.ReferencingObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAssetStatics.DuplicateAssetWithDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AssetName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PackagePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OriginalObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTLAssetStatics::DuplicateAssetWithDialog(const class FString& AssetName, const class FString& PackagePath, class UObject* OriginalObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAssetStatics.DuplicateAssetWithDialog");
		
		UTLAssetStatics_DuplicateAssetWithDialog_Params params {};
		params.AssetName = AssetName;
		params.PackagePath = PackagePath;
		params.OriginalObject = OriginalObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLAssetStatics.DuplicateAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AssetName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PackagePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OriginalObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTLAssetStatics::DuplicateAsset(const class FString& AssetName, const class FString& PackagePath, class UObject* OriginalObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLAssetStatics.DuplicateAsset");
		
		UTLAssetStatics_DuplicateAsset_Params params {};
		params.AssetName = AssetName;
		params.PackagePath = PackagePath;
		params.OriginalObject = OriginalObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAssetStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAssetStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAssetStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_ActivateEventEnvironmentVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_ActivateEventEnvironmentVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_ActivateEventEnvironmentVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_EquipItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_EquipItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_EquipItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_HideEquippedItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_HideEquippedItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_HideEquippedItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_ModifyMapGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_ModifyMapGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_ModifyMapGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_MoveLeap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_MoveLeap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_MoveLeap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_MoveStraight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_MoveStraight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_MoveStraight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_MoveTeleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_MoveTeleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_MoveTeleport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayActionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayActionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayActionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayAimingAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayAimingAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayAimingAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayBlendSpaceAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayBlendSpaceAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayBlendSpaceAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCameraLag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCameraLag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCameraLag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCameraSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCameraSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCameraSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCompoundAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCompoundAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCompoundAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCompoundTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCompoundTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCompoundTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayCueSheet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayCueSheet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayCueSheet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayDecal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayDecal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayDecal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayDieAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayDieAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayDieAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayEnvFieldObstacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayEnvFieldObstacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayEnvFieldObstacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayFacialAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayFacialAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayFacialAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayFootprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayFootprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayFootprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayForceFeedback.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayForceFeedback::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayForceFeedback");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayFreezeAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayFreezeAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayFreezeAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayHitAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayHitAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayHitAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayHitBlockAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayHitBlockAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayHitBlockAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayHitStopAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayHitStopAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayHitStopAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayInteractionCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayInteractionCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayInteractionCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayLightning.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayLightning::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayLightning");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayLoopAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayLoopAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayLoopAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayMaterialParam.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayMaterialParam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayMaterialParam");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayParticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayParticle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayParticle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayPostProcessing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayPostProcessing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayPostProcessing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayResurrectAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayResurrectAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayResurrectAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlaySegmentAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlaySegmentAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlaySegmentAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlaySequentialAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlaySequentialAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlaySequentialAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlaySkidMark.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlaySkidMark::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlaySkidMark");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlaySnapshot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlaySnapshot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlaySnapshot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlaySound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlaySound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlaySound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayTimeLapse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayTimeLapse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayTimeLapse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_PlayTrail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_PlayTrail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_PlayTrail");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_SetCollisionProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_SetCollisionProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_SetCollisionProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_SetContiForEquippedItemFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_SetContiForEquippedItemFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_SetContiForEquippedItemFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_SetOpacity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_SetOpacity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_SetOpacity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATAction_SetRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATAction_SetRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATAction_SetRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_Environment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_Environment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_Environment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_MovingDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_MovingDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_MovingDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_Name.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_Name::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_Name");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_PhysicalFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_PhysicalFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_PhysicalFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_PhysicalSurface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_PhysicalSurface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_PhysicalSurface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_Probability.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_Probability::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_Probability");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLATCondition_Scale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLATCondition_Scale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLATCondition_Scale");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAudioCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAudioCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAudioCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAudioEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAudioEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAudioEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAudioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAudioSettingsPerUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAudioSettingsPerUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAudioSettingsPerUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAuxBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAuxBus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLAuxBus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealModelAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealModelAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealModelAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterAnimInstance.GetFacialAnimComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* UTLCharacterAnimInstance::GetFacialAnimComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterAnimInstance.GetFacialAnimComponent");
		
		UTLCharacterAnimInstance_GetFacialAnimComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreaturePathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreaturePathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.CreaturePathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreatureRootMotionTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreatureRootMotionTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.CreatureRootMotionTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureReachedJumpApex
	 * 		Flags  -> ()
	 */
	void UCreatureRootMotionTask_CreatureFall::OnCreatureReachedJumpApex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureReachedJumpApex");
		
		UCreatureRootMotionTask_CreatureFall_OnCreatureReachedJumpApex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreaturemovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCreatureRootMotionTask_CreatureFall::OnCreaturemovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreaturemovementModeChanged");
		
		UCreatureRootMotionTask_CreatureFall_OnCreaturemovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCreatureRootMotionTask_CreatureFall::OnCreatureLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureLanded");
		
		UCreatureRootMotionTask_CreatureFall_OnCreatureLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreatureRootMotionTask_CreatureFall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreatureRootMotionTask_CreatureFall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.CreatureRootMotionTask_CreatureFall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreatureRootMotionTask_CreatureMantle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreatureRootMotionTask_CreatureMantle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.CreatureRootMotionTask_CreatureMantle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundTriggers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundTriggers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SoundTriggers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterSoundData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterSoundData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterSoundData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetPlayerCharacterPartType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnModelCompositeMasterPoseParts                   InMasterPosePart                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESnModelCompositeArmorPart UTLCharacterStatics::GetPlayerCharacterPartType(ESnModelCompositeMasterPoseParts InMasterPosePart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetPlayerCharacterPartType");
		
		UTLCharacterStatics_GetPlayerCharacterPartType_Params params {};
		params.InMasterPosePart = InMasterPosePart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetPCPartSkinMaskTextureMaterialParamName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnModelCompositeArmorPart                         InPCPartType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UTLCharacterStatics::GetPCPartSkinMaskTextureMaterialParamName(ESnModelCompositeArmorPart InPCPartType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetPCPartSkinMaskTextureMaterialParamName");
		
		UTLCharacterStatics_GetPCPartSkinMaskTextureMaterialParamName_Params params {};
		params.InPCPartType = InPCPartType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetMasterPosePartWithPCPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnModelCompositeArmorPart                         InPCPartType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESnModelCompositeMasterPoseParts UTLCharacterStatics::GetMasterPosePartWithPCPart(ESnModelCompositeArmorPart InPCPartType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetMasterPosePartWithPCPart");
		
		UTLCharacterStatics_GetMasterPosePartWithPCPart_Params params {};
		params.InPCPartType = InPCPartType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetMasterPosePartWithNPCPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnModelNpcCompositePart                           InNPCPartType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESnModelCompositeMasterPoseParts UTLCharacterStatics::GetMasterPosePartWithNPCPart(ESnModelNpcCompositePart InNPCPartType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetMasterPosePartWithNPCPart");
		
		UTLCharacterStatics_GetMasterPosePartWithNPCPart_Params params {};
		params.InNPCPartType = InNPCPartType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetMasterPosePartOverlapWithPCPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnModelCompositeArmorPart                         InPCPartType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESnModelCompositeMasterPosePartsOverlap UTLCharacterStatics::GetMasterPosePartOverlapWithPCPart(ESnModelCompositeArmorPart InPCPartType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetMasterPosePartOverlapWithPCPart");
		
		UTLCharacterStatics_GetMasterPosePartOverlapWithPCPart_Params params {};
		params.InPCPartType = InPCPartType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterStatics.GetGender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLPlayerCharacterAsset*                     PCAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaleFallback                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UTLCharacterStatics::GetGender(class UTLPlayerCharacterAsset* PCAsset, bool bMaleFallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterStatics.GetGender");
		
		UTLCharacterStatics_GetGender_Params params {};
		params.PCAsset = PCAsset;
		params.bMaleFallback = bMaleFallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCharacterSubAnimInstance.TLAnim_GetInverseSpeedBasedRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeqBaseSpeed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTLCharacterSubAnimInstance::TLAnim_GetInverseSpeedBasedRate(float InSeqBaseSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCharacterSubAnimInstance.TLAnim_GetInverseSpeedBasedRate");
		
		UTLCharacterSubAnimInstance_TLAnim_GetInverseSpeedBasedRate_Params params {};
		params.InSeqBaseSpeed = InSeqBaseSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLockOnTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLockOnTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLLockOnTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLookAtTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLookAtTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLLookAtTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCharacterWorldManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCharacterWorldManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCharacterWorldManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCheatManager.TLPlayDieAnimation
	 * 		Flags  -> ()
	 */
	void UTLCheatManager::TLPlayDieAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCheatManager.TLPlayDieAnimation");
		
		UTLCheatManager_TLPlayDieAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCheatManager.SetTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLCheatManager::SetTargetActor(class AActor* InTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCheatManager.SetTargetActor");
		
		UTLCheatManager_SetTargetActor_Params params {};
		params.InTargetActor = InTargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLCinematicLevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLCinematicLevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCinematicLevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCinematicLevelSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCinematicLevelSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCinematicLevelSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCinematicLevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCinematicLevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCinematicLevelSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCinematicPlaySkippingControlActor.OnEnableSkip
	 * 		Flags  -> ()
	 */
	void ATLCinematicPlaySkippingControlActor::OnEnableSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCinematicPlaySkippingControlActor.OnEnableSkip");
		
		ATLCinematicPlaySkippingControlActor_OnEnableSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLCinematicPlaySkippingControlActor.OnDisableSkip
	 * 		Flags  -> ()
	 */
	void ATLCinematicPlaySkippingControlActor::OnDisableSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLCinematicPlaySkippingControlActor.OnDisableSkip");
		
		ATLCinematicPlaySkippingControlActor_OnDisableSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLCinematicPlaySkippingControlActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLCinematicPlaySkippingControlActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLCinematicPlaySkippingControlActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLContentEditorActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLContentEditorActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLContentEditorActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLContentsAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLContentsAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLContentsAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLContentsAssetPrerequisteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLContentsAssetPrerequisteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLContentsAssetPrerequisteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ShouldSkipIntroGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::ShouldSkipIntroGameState(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ShouldSkipIntroGameState");
		
		UTLDevelopmentStatics_ShouldSkipIntroGameState_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ShouldLoadLevelSequenceAsynchronously
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::ShouldLoadLevelSequenceAsynchronously()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ShouldLoadLevelSequenceAsynchronously");
		
		UTLDevelopmentStatics_ShouldLoadLevelSequenceAsynchronously_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ShouldAnimationAssetsBeLazyLoaded
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::ShouldAnimationAssetsBeLazyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ShouldAnimationAssetsBeLazyLoaded");
		
		UTLDevelopmentStatics_ShouldAnimationAssetsBeLazyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ShouldActionTreeBeLazyLoaded
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::ShouldActionTreeBeLazyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ShouldActionTreeBeLazyLoaded");
		
		UTLDevelopmentStatics_ShouldActionTreeBeLazyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ParseWorldInfoVectorString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::ParseWorldInfoVectorString(const class FString& inString, struct FVector* OutVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ParseWorldInfoVectorString");
		
		UTLDevelopmentStatics_ParseWorldInfoVectorString_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVector != nullptr)
			*OutVector = params.OutVector;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ParseWorldInfoStringShort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutMapId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPlayerPos                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::ParseWorldInfoStringShort(const class FString& inString, int32_t* OutMapId, struct FVector* OutPlayerPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ParseWorldInfoStringShort");
		
		UTLDevelopmentStatics_ParseWorldInfoStringShort_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapId != nullptr)
			*OutMapId = params.OutMapId;
		if (OutPlayerPos != nullptr)
			*OutPlayerPos = params.OutPlayerPos;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ParseWorldInfoString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutMapId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPlayerPos                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutPlayerRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraPos                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraFwd                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutCameraDistance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::ParseWorldInfoString(const class FString& inString, int32_t* OutMapId, struct FVector* OutPlayerPos, struct FRotator* OutPlayerRotation, struct FVector* OutCameraPos, struct FVector* OutCameraFwd, float* OutCameraDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ParseWorldInfoString");
		
		UTLDevelopmentStatics_ParseWorldInfoString_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapId != nullptr)
			*OutMapId = params.OutMapId;
		if (OutPlayerPos != nullptr)
			*OutPlayerPos = params.OutPlayerPos;
		if (OutPlayerRotation != nullptr)
			*OutPlayerRotation = params.OutPlayerRotation;
		if (OutCameraPos != nullptr)
			*OutCameraPos = params.OutCameraPos;
		if (OutCameraFwd != nullptr)
			*OutCameraFwd = params.OutCameraFwd;
		if (OutCameraDistance != nullptr)
			*OutCameraDistance = params.OutCameraDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ParseWorldInfoAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAttributeName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutAttributeValue                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::ParseWorldInfoAttributeString(const class FString& inString, const class FString& InAttributeName, class FString* OutAttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ParseWorldInfoAttributeString");
		
		UTLDevelopmentStatics_ParseWorldInfoAttributeString_Params params {};
		params.inString = inString;
		params.InAttributeName = InAttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttributeValue != nullptr)
			*OutAttributeValue = params.OutAttributeValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsWorldCompositionLevelLODEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::IsWorldCompositionLevelLODEnabled(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsWorldCompositionLevelLODEnabled");
		
		UTLDevelopmentStatics_IsWorldCompositionLevelLODEnabled_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsTutorialEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::IsTutorialEnabled(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsTutorialEnabled");
		
		UTLDevelopmentStatics_IsTutorialEnabled_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsSoundEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLDevelopmentStatics::IsSoundEnabled(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsSoundEnabled");
		
		UTLDevelopmentStatics_IsSoundEnabled_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsPlayerCharacterCustomizingEnabled
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsPlayerCharacterCustomizingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsPlayerCharacterCustomizingEnabled");
		
		UTLDevelopmentStatics_IsPlayerCharacterCustomizingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsLoadingUIAssetsDisabled
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsLoadingUIAssetsDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsLoadingUIAssetsDisabled");
		
		UTLDevelopmentStatics_IsLoadingUIAssetsDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsFastNewCharacter
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsFastNewCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsFastNewCharacter");
		
		UTLDevelopmentStatics_IsFastNewCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsFastInGame
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsFastInGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsFastInGame");
		
		UTLDevelopmentStatics_IsFastInGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsCreateInGameWidgetManually
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsCreateInGameWidgetManually()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsCreateInGameWidgetManually");
		
		UTLDevelopmentStatics_IsCreateInGameWidgetManually_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.IsAutoSyncCutSceneTable
	 * 		Flags  -> ()
	 */
	bool UTLDevelopmentStatics::IsAutoSyncCutSceneTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.IsAutoSyncCutSceneTable");
		
		UTLDevelopmentStatics_IsAutoSyncCutSceneTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.EnableBudget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BudgetName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLDevelopmentStatics::EnableBudget(const class FString& BudgetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.EnableBudget");
		
		UTLDevelopmentStatics_EnableBudget_Params params {};
		params.BudgetName = BudgetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLDevelopmentStatics.ClearBudgets
	 * 		Flags  -> ()
	 */
	void UTLDevelopmentStatics::ClearBudgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLDevelopmentStatics.ClearBudgets");
		
		UTLDevelopmentStatics_ClearBudgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLDevelopmentStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLDevelopmentStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLDevelopmentStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.VolumeEncompassesActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVolume*                                     Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TestingActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLEngineStatics::VolumeEncompassesActor(class AVolume* Volume, class AActor* TestingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.VolumeEncompassesActor");
		
		UTLEngineStatics_VolumeEncompassesActor_Params params {};
		params.Volume = Volume;
		params.TestingActor = TestingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.UsingDLSS
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::UsingDLSS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.UsingDLSS");
		
		UTLEngineStatics_UsingDLSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLIsTrailsEnabled
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::TLIsTrailsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLIsTrailsEnabled");
		
		UTLEngineStatics_TLIsTrailsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLGetUseFlowingSandBall
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::TLGetUseFlowingSandBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLGetUseFlowingSandBall");
		
		UTLEngineStatics_TLGetUseFlowingSandBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLGetTraceCollisionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChannelName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::TLGetTraceCollisionType(const class FName& ChannelName, ETraceTypeQuery* TraceType, ECollisionChannel* CollisionChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLGetTraceCollisionType");
		
		UTLEngineStatics_TLGetTraceCollisionType_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceType != nullptr)
			*TraceType = params.TraceType;
		if (CollisionChannel != nullptr)
			*CollisionChannel = params.CollisionChannel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLGetPhysicalSurfaceFinalWeather
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ESnPhysicalSurface                                 OutSurface                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutTextureBlendingWeight                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::TLGetPhysicalSurfaceFinalWeather(const struct FHitResult& HitResult, ESnPhysicalSurface* OutSurface, float* OutTextureBlendingWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLGetPhysicalSurfaceFinalWeather");
		
		UTLEngineStatics_TLGetPhysicalSurfaceFinalWeather_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSurface != nullptr)
			*OutSurface = params.OutSurface;
		if (OutTextureBlendingWeight != nullptr)
			*OutTextureBlendingWeight = params.OutTextureBlendingWeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLGetFluidSimFootprintAutoGeneration
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::TLGetFluidSimFootprintAutoGeneration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLGetFluidSimFootprintAutoGeneration");
		
		UTLEngineStatics_TLGetFluidSimFootprintAutoGeneration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLGetDebugFlowingSandBall
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::TLGetDebugFlowingSandBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLGetDebugFlowingSandBall");
		
		UTLEngineStatics_TLGetDebugFlowingSandBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLCalcFlowingSandDecalRotationAndSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutDecalRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutDecalSpeed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::TLCalcFlowingSandDecalRotationAndSpeed(TArray<struct FVector> Normals, int32_t Width, int32_t Height, float* OutDecalRotation, float* OutDecalSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLCalcFlowingSandDecalRotationAndSpeed");
		
		UTLEngineStatics_TLCalcFlowingSandDecalRotationAndSpeed_Params params {};
		params.Normals = Normals;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDecalRotation != nullptr)
			*OutDecalRotation = params.OutDecalRotation;
		if (OutDecalSpeed != nullptr)
			*OutDecalSpeed = params.OutDecalSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLBuildVelocityTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UTLEngineStatics::TLBuildVelocityTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLBuildVelocityTexture");
		
		UTLEngineStatics_TLBuildVelocityTexture_Params params {};
		params.Normals = Normals;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.TLBuildNormalTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UTLEngineStatics::TLBuildNormalTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.TLBuildNormalTexture");
		
		UTLEngineStatics_TLBuildNormalTexture_Params params {};
		params.Normals = Normals;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.ShowBloodSplatter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::ShowBloodSplatter(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.ShowBloodSplatter");
		
		UTLEngineStatics_ShowBloodSplatter_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.SetSuperSamplingMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETLEngineSuperSamplingMethod                       NewMethod                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::SetSuperSamplingMethod(ETLEngineSuperSamplingMethod NewMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.SetSuperSamplingMethod");
		
		UTLEngineStatics_SetSuperSamplingMethod_Params params {};
		params.NewMethod = NewMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.SetFSR2Sharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::SetFSR2Sharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.SetFSR2Sharpness");
		
		UTLEngineStatics_SetFSR2Sharpness_Params params {};
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.SetFSR2Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FSR2Mode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::SetFSR2Mode(int32_t FSR2Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.SetFSR2Mode");
		
		UTLEngineStatics_SetFSR2Mode_Params params {};
		params.FSR2Mode = FSR2Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.SetDLSSSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.SetDLSSSharpness");
		
		UTLEngineStatics_SetDLSSSharpness_Params params {};
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.SetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::SetDLSSMode(int32_t DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.SetDLSSMode");
		
		UTLEngineStatics_SetDLSSMode_Params params {};
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.RestoreDefaultDeviceProfile
	 * 		Flags  -> ()
	 */
	void UTLEngineStatics::RestoreDefaultDeviceProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.RestoreDefaultDeviceProfile");
		
		UTLEngineStatics_RestoreDefaultDeviceProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.OverrideDeviceProfileForMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETLDeviceProfileOverrideMode                       NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::OverrideDeviceProfileForMode(ETLDeviceProfileOverrideMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.OverrideDeviceProfileForMode");
		
		UTLEngineStatics_OverrideDeviceProfileForMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.IsShowBloodSplatter
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::IsShowBloodSplatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.IsShowBloodSplatter");
		
		UTLEngineStatics_IsShowBloodSplatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.IsFSR2Supported
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::IsFSR2Supported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.IsFSR2Supported");
		
		UTLEngineStatics_IsFSR2Supported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.IsDLSSSupported
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::IsDLSSSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.IsDLSSSupported");
		
		UTLEngineStatics_IsDLSSSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.IsCinematicLevelSequenceModeAllowed
	 * 		Flags  -> ()
	 */
	bool UTLEngineStatics::IsCinematicLevelSequenceModeAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.IsCinematicLevelSequenceModeAllowed");
		
		UTLEngineStatics_IsCinematicLevelSequenceModeAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.GetSuperSamplingMethod
	 * 		Flags  -> ()
	 */
	ETLEngineSuperSamplingMethod UTLEngineStatics::GetSuperSamplingMethod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.GetSuperSamplingMethod");
		
		UTLEngineStatics_GetSuperSamplingMethod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.GetFirstGameplayTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTasksComponent*                     InGameplayTasksComponent                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask* UTLEngineStatics::GetFirstGameplayTask(class UGameplayTasksComponent* InGameplayTasksComponent, class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.GetFirstGameplayTask");
		
		UTLEngineStatics_GetFirstGameplayTask_Params params {};
		params.InGameplayTasksComponent = InGameplayTasksComponent;
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.GetBaseDeviceProfileName
	 * 		Flags  -> ()
	 */
	class FString UTLEngineStatics::GetBaseDeviceProfileName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.GetBaseDeviceProfileName");
		
		UTLEngineStatics_GetBaseDeviceProfileName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.GetActiveDeviceProfileName
	 * 		Flags  -> ()
	 */
	class FString UTLEngineStatics::GetActiveDeviceProfileName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.GetActiveDeviceProfileName");
		
		UTLEngineStatics_GetActiveDeviceProfileName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.BuildVelocityTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UTLEngineStatics::BuildVelocityTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height, class UObject* Outer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.BuildVelocityTexture");
		
		UTLEngineStatics_BuildVelocityTexture_Params params {};
		params.Normals = Normals;
		params.Width = Width;
		params.Height = Height;
		params.Outer = Outer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.BuildNormalTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UTLEngineStatics::BuildNormalTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height, class UObject* Outer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.BuildNormalTexture");
		
		UTLEngineStatics_BuildNormalTexture_Params params {};
		params.Normals = Normals;
		params.Width = Width;
		params.Height = Height;
		params.Outer = Outer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.AllowCinematicLevelSequenceMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEngineStatics::AllowCinematicLevelSequenceMode(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.AllowCinematicLevelSequenceMode");
		
		UTLEngineStatics_AllowCinematicLevelSequenceMode_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLEngineStatics.ActorIsPendingKillPendingOrHasLifeSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLEngineStatics::ActorIsPendingKillPendingOrHasLifeSpan(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLEngineStatics.ActorIsPendingKillPendingOrHasLifeSpan");
		
		UTLEngineStatics_ActorIsPendingKillPendingOrHasLifeSpan_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLEngineStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLEngineStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLEngineStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSuperSamplingEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSuperSamplingEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSuperSamplingEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLEnvironmentMaterialParameterManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLEnvironmentMaterialParameterManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLEnvironmentMaterialParameterManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLEnvironmentSkyActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLEnvironmentSkyActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLEnvironmentSkyActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLFacialAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLFacialAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLFacialAnimationSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLFacialAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLFacialAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLFacialAnimationTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLFieldObjectAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLFieldObjectAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLFieldObjectAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLForceFeedbackLibrary.StopForceFeedbackAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InWorldContextObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLForceFeedbackLibrary::StopForceFeedbackAll(class UObject* InWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLForceFeedbackLibrary.StopForceFeedbackAll");
		
		UTLForceFeedbackLibrary_StopForceFeedbackAll_Params params {};
		params.InWorldContextObject = InWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLForceFeedbackLibrary.StopForceFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InWorldContextObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UForceFeedbackEffect*                        ForceFeedbackEffect                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLForceFeedbackLibrary::StopForceFeedback(class UObject* InWorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLForceFeedbackLibrary.StopForceFeedback");
		
		UTLForceFeedbackLibrary_StopForceFeedback_Params params {};
		params.InWorldContextObject = InWorldContextObject;
		params.ForceFeedbackEffect = ForceFeedbackEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLForceFeedbackLibrary.PlayForceFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InWorldContextObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UForceFeedbackEffect*                        ForceFeedbackEffect                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLooping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreTimeDilation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayWhilePaused                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLForceFeedbackLibrary::PlayForceFeedback(class UObject* InWorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const class FName& Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLForceFeedbackLibrary.PlayForceFeedback");
		
		UTLForceFeedbackLibrary_PlayForceFeedback_Params params {};
		params.InWorldContextObject = InWorldContextObject;
		params.ForceFeedbackEffect = ForceFeedbackEffect;
		params.Tag = Tag;
		params.bLooping = bLooping;
		params.bIgnoreTimeDilation = bIgnoreTimeDilation;
		params.bPlayWhilePaused = bPlayWhilePaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLForceFeedbackLibrary.GetWorldByContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InWorldContextObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorld* UTLForceFeedbackLibrary::GetWorldByContext(class UObject* InWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLForceFeedbackLibrary.GetWorldByContext");
		
		UTLForceFeedbackLibrary_GetWorldByContext_Params params {};
		params.InWorldContextObject = InWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLForceFeedbackLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLForceFeedbackLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLForceFeedbackLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGameCameraBlendingSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGameCameraBlendingSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLGameCameraBlendingSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGameCameraBlendingTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGameCameraBlendingTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLGameCameraBlendingTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGameData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGameData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLGameData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGameFXStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGameFXStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLGameFXStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLInGameLevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLInGameLevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLInGameLevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLInGameLevelSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLInGameLevelSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLInGameLevelSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLInGameLevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLInGameLevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLInGameLevelSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLDropItemAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLDropItemAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLDropItemAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSkinnedItemAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSkinnedItemAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSkinnedItemAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLItemAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLItemAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLItemAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLLandscapeSamplerComponent.GetLandscapeHeights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Extent                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UTLLandscapeSamplerComponent::GetLandscapeHeights(const struct FVector2D& Extent, int32_t numWidth, int32_t numHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLLandscapeSamplerComponent.GetLandscapeHeights");
		
		UTLLandscapeSamplerComponent_GetLandscapeHeights_Params params {};
		params.Extent = Extent;
		params.numWidth = numWidth;
		params.numHeight = numHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLLandscapeSamplerComponent.FindMajorSlopeNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UTLLandscapeSamplerComponent::FindMajorSlopeNormal(TArray<struct FVector> Normals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLLandscapeSamplerComponent.FindMajorSlopeNormal");
		
		UTLLandscapeSamplerComponent_FindMajorSlopeNormal_Params params {};
		params.Normals = Normals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLLandscapeSamplerComponent.CalculateNormalsFromHeightfield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      heightField                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UTLLandscapeSamplerComponent::CalculateNormalsFromHeightfield(TArray<float> heightField, int32_t numWidth, int32_t numHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLLandscapeSamplerComponent.CalculateNormalsFromHeightfield");
		
		UTLLandscapeSamplerComponent_CalculateNormalsFromHeightfield_Params params {};
		params.heightField = heightField;
		params.numWidth = numWidth;
		params.numHeight = numHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLandscapeSamplerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLandscapeSamplerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLLandscapeSamplerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLateReverbComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLateReverbComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLLateReverbComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLevelSequenceStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLevelSequenceStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLLevelSequenceStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMapBlueprintFunctionLibrary.UpdatePrimitiveBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMapBlueprintFunctionLibrary::UpdatePrimitiveBounds(class UPrimitiveComponent* PrimitiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMapBlueprintFunctionLibrary.UpdatePrimitiveBounds");
		
		UTLMapBlueprintFunctionLibrary_UpdatePrimitiveBounds_Params params {};
		params.PrimitiveComponent = PrimitiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMapBlueprintFunctionLibrary.BuildHierarchicalInstancedStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHierarchicalInstancedStaticMeshComponent*   Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               async                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLMapBlueprintFunctionLibrary::BuildHierarchicalInstancedStaticMesh(class UHierarchicalInstancedStaticMeshComponent* Component, bool async, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMapBlueprintFunctionLibrary.BuildHierarchicalInstancedStaticMesh");
		
		UTLMapBlueprintFunctionLibrary_BuildHierarchicalInstancedStaticMesh_Params params {};
		params.Component = Component;
		params.async = async;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMapBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMapBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMapBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMapRoomDebugVisualizerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMapRoomDebugVisualizerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMapRoomDebugVisualizerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMapRoomStatics.GetMapRoomAllComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class Umaproom*                                    InMapRoom                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USceneComponent*>                     OutSceneComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UTLMapRoomStatics::GetMapRoomAllComponents(class Umaproom* InMapRoom, TArray<class USceneComponent*>* OutSceneComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMapRoomStatics.GetMapRoomAllComponents");
		
		UTLMapRoomStatics_GetMapRoomAllComponents_Params params {};
		params.InMapRoom = InMapRoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSceneComponents != nullptr)
			*OutSceneComponents = params.OutSceneComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMapRoomStatics.GetMapRoomActorAllComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMapRoomActor*                               InMapRoomActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USceneComponent*>                     OutSceneComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UTLMapRoomStatics::GetMapRoomActorAllComponents(class AMapRoomActor* InMapRoomActor, TArray<class USceneComponent*>* OutSceneComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMapRoomStatics.GetMapRoomActorAllComponents");
		
		UTLMapRoomStatics_GetMapRoomActorAllComponents_Params params {};
		params.InMapRoomActor = InMapRoomActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSceneComponents != nullptr)
			*OutSceneComponents = params.OutSceneComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMapRoomStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMapRoomStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMapRoomStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMapEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMapEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMapEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMaterialSetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMaterialSetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMaterialSetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLModelStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLModelStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLModelStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMusic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMusic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMusic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMusicComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMusicComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMusicComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMusicManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMusicManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMusicManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLMusicVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLMusicVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMusicVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMyPCActorComponent.OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      CurrentMovementMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CurrentCustomMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PreviousMovementMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMyPCActorComponent::OnMovementModeChanged(EMovementMode CurrentMovementMode, unsigned char CurrentCustomMode, EMovementMode PreviousMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMyPCActorComponent.OnMovementModeChanged");
		
		UTLMyPCActorComponent_OnMovementModeChanged_Params params {};
		params.CurrentMovementMode = CurrentMovementMode;
		params.CurrentCustomMode = CurrentCustomMode;
		params.PreviousMovementMode = PreviousMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMyPCActorComponent.OnModelLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMyPCActorComponent::OnModelLoaded(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMyPCActorComponent.OnModelLoaded");
		
		UTLMyPCActorComponent_OnModelLoaded_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLMyPCActorComponent.OnFootprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMyPCActorComponent::OnFootprint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLMyPCActorComponent.OnFootprint");
		
		UTLMyPCActorComponent_OnFootprint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMyPCActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMyPCActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLMyPCActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLNonPlayerCharacterAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLNonPlayerCharacterAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLNonPlayerCharacterAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneNpcCustomizingRuntimeGeneratedData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneNpcCustomizingRuntimeGeneratedData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneNpcCustomizingRuntimeGeneratedData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLParticleDebugSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLParticleDebugSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLParticleDebugSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPhysicalFXMaterialInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPhysicalFXMaterialInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPhysicalFXMaterialInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLPhysicsStatics.TLMultiSphereTraceForObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLPhysicsStatics::TLMultiSphereTraceForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLPhysicsStatics.TLMultiSphereTraceForObjects");
		
		UTLPhysicsStatics_TLMultiSphereTraceForObjects_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		params.bIgnoreSelf = bIgnoreSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPhysicsStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPhysicsStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPhysicsStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPlayerCharacterAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPlayerCharacterAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPlayerCharacterAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPlayerCustomizeGenderAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPlayerCustomizeGenderAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPlayerCustomizeGenderAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPlayerOutfitPartGenderAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPlayerOutfitPartGenderAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPlayerOutfitPartGenderAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPlayFoAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPlayFoAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPlayFoAnimationSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPlayFoAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPlayFoAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPlayFoAnimationTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLPoolableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLPoolableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPoolableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLPooledActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLPooledActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLPooledActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLProjectilePool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLProjectilePool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLProjectilePool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLProjectileWorldManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLProjectileWorldManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLProjectileWorldManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLReverbVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLReverbVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLReverbVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLScenario.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLScenario::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLScenario");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLScenarioActor.OnTransformedIn
	 * 		Flags  -> ()
	 */
	void ATLScenarioActor::OnTransformedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLScenarioActor.OnTransformedIn");
		
		ATLScenarioActor_OnTransformedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLScenarioActor.GetBoundTagName
	 * 		Flags  -> ()
	 */
	class FName ATLScenarioActor::GetBoundTagName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLScenarioActor.GetBoundTagName");
		
		ATLScenarioActor_GetBoundTagName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLScenarioActor.GetBoundObjectActor
	 * 		Flags  -> ()
	 */
	class AActor* ATLScenarioActor::GetBoundObjectActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLScenarioActor.GetBoundObjectActor");
		
		ATLScenarioActor_GetBoundObjectActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLScenarioActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLScenarioActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLScenarioActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLScenarioPreloadingVolume.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATLScenarioPreloadingVolume::OnEndOverlap(class AActor* MyActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLScenarioPreloadingVolume.OnEndOverlap");
		
		ATLScenarioPreloadingVolume_OnEndOverlap_Params params {};
		params.MyActor = MyActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLScenarioPreloadingVolume.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATLScenarioPreloadingVolume::OnBeginOverlap(class AActor* MyActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLScenarioPreloadingVolume.OnBeginOverlap");
		
		ATLScenarioPreloadingVolume_OnBeginOverlap_Params params {};
		params.MyActor = MyActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLScenarioPreloadingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLScenarioPreloadingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLScenarioPreloadingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLSceneCapture2DAutoResize.OnInterpToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATLSceneCapture2DAutoResize::OnInterpToggle(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLSceneCapture2DAutoResize.OnInterpToggle");
		
		ATLSceneCapture2DAutoResize_OnInterpToggle_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLSceneCapture2DAutoResize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLSceneCapture2DAutoResize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSceneCapture2DAutoResize");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSceneFXBudgetControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSceneFXBudgetControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSceneFXBudgetControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLServerSequenceEffectSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLServerSequenceEffectSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLServerSequenceEffectSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLServerSequenceEffectTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLServerSequenceEffectTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLServerSequenceEffectTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSignificanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSignificanceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSkillDebugSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSkillDebugSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSkillDebugSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSoundBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSoundBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSoundBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSoundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSoundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSoundComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSoundEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSoundEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSoundEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLSoundVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLSoundVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSoundVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSplineParticleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSplineParticleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSplineParticleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLSplineParticleBlueprintComponent.ClearSegments
	 * 		Flags  -> ()
	 */
	void UTLSplineParticleBlueprintComponent::ClearSegments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLSplineParticleBlueprintComponent.ClearSegments");
		
		UTLSplineParticleBlueprintComponent_ClearSegments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLSplineParticleBlueprintComponent.ApplyProperties
	 * 		Flags  -> ()
	 */
	void UTLSplineParticleBlueprintComponent::ApplyProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLSplineParticleBlueprintComponent.ApplyProperties");
		
		UTLSplineParticleBlueprintComponent_ApplyProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLSplineParticleBlueprintComponent.AddSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLSplineParticleBlueprintComponent::AddSegment(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLSplineParticleBlueprintComponent.AddSegment");
		
		UTLSplineParticleBlueprintComponent_AddSegment_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSplineParticleBlueprintComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSplineParticleBlueprintComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSplineParticleBlueprintComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSpringArmComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSpringArmComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSpringArmComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTrailComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTrailComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLTrailComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLTransformTransitionSection.SetConstraintBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InConstraintBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTransformTransitionSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLTransformTransitionSection.SetConstraintBindingID");
		
		UTLTransformTransitionSection_SetConstraintBindingID_Params params {};
		params.InConstraintBindingID = InConstraintBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.TLTransformTransitionSection.GetConstraintBindingID
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UTLTransformTransitionSection::GetConstraintBindingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.TLTransformTransitionSection.GetConstraintBindingID");
		
		UTLTransformTransitionSection_GetConstraintBindingID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTransformTransitionSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTransformTransitionSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLTransformTransitionSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTransformTransitionTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTransformTransitionTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLTransformTransitionTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLVirtualSocketManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLVirtualSocketManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLVirtualSocketManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldFXActorPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldFXActorPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldFXActorPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATLWorldFXActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATLWorldFXActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldFXActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealAnimSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealAnimSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealAnimSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealAttachedItemAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealAttachedItemAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealAttachedItemAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealBakedMaterialSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealBakedMaterialSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealBakedMaterialSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCableComponent.SetAttachEndToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnrealCableComponent::SetAttachEndToComponent(class USceneComponent* Component, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCableComponent.SetAttachEndToComponent");
		
		UUnrealCableComponent_SetAttachEndToComponent_Params params {};
		params.Component = Component;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCableComponent.SetAttachEndTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ComponentProperty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnrealCableComponent::SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCableComponent.SetAttachEndTo");
		
		UUnrealCableComponent_SetAttachEndTo_Params params {};
		params.Actor = Actor;
		params.ComponentProperty = ComponentProperty;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCableComponent.GetCableParticleLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUnrealCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCableComponent.GetCableParticleLocations");
		
		UUnrealCableComponent_GetCableParticleLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCableComponent.GetAttachedComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UUnrealCableComponent::GetAttachedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCableComponent.GetAttachedComponent");
		
		UUnrealCableComponent_GetAttachedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCableComponent.GetAttachedActor
	 * 		Flags  -> ()
	 */
	class AActor* UUnrealCableComponent::GetAttachedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCableComponent.GetAttachedActor");
		
		UUnrealCableComponent_GetAttachedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.SetRotationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AUnrealCameraActor::SetRotationBP(const struct FRotator& InRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.SetRotationBP");
		
		AUnrealCameraActor_SetRotationBP_Params params {};
		params.InRotation = InRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.SetPosisionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCameraActor::SetPosisionBP(const struct FVector& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.SetPosisionBP");
		
		AUnrealCameraActor_SetPosisionBP_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.SetFOVBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFOV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCameraActor::SetFOVBP(float InFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.SetFOVBP");
		
		AUnrealCameraActor_SetFOVBP_Params params {};
		params.InFOV = InFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.GetRotationBP
	 * 		Flags  -> ()
	 */
	struct FRotator AUnrealCameraActor::GetRotationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.GetRotationBP");
		
		AUnrealCameraActor_GetRotationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.GetPosittionBP
	 * 		Flags  -> ()
	 */
	struct FVector AUnrealCameraActor::GetPosittionBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.GetPosittionBP");
		
		AUnrealCameraActor_GetPosittionBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.GetFOVBP
	 * 		Flags  -> ()
	 */
	float AUnrealCameraActor::GetFOVBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.GetFOVBP");
		
		AUnrealCameraActor_GetFOVBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCameraActor.GetCameraTypeBP
	 * 		Flags  -> ()
	 */
	ESnCameraType AUnrealCameraActor::GetCameraTypeBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCameraActor.GetCameraTypeBP");
		
		AUnrealCameraActor_GetCameraTypeBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealCameraModifierPostProcess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealCameraModifierPostProcess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCameraModifierPostProcess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSceneCameraPersonalization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSceneCameraPersonalization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLSceneCameraPersonalization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.TryChangeZoomStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCharacterPreviewCameraActor::TryChangeZoomStep(int32_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.TryChangeZoomStep");
		
		AUnrealCharacterPreviewCameraActor_TryChangeZoomStep_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.SetToDefaultPosition
	 * 		Flags  -> ()
	 */
	void AUnrealCharacterPreviewCameraActor::SetToDefaultPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.SetToDefaultPosition");
		
		AUnrealCharacterPreviewCameraActor_SetToDefaultPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.SetOffCenterOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InCenterOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDistOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCharacterPreviewCameraActor::SetOffCenterOffset(const struct FVector2D& InCenterOffset, float InDistOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.SetOffCenterOffset");
		
		AUnrealCharacterPreviewCameraActor_SetOffCenterOffset_Params params {};
		params.InCenterOffset = InCenterOffset;
		params.InDistOffset = InDistOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.ResetPreviewCharacaterLookat
	 * 		Flags  -> ()
	 */
	void AUnrealCharacterPreviewCameraActor::ResetPreviewCharacaterLookat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.ResetPreviewCharacaterLookat");
		
		AUnrealCharacterPreviewCameraActor_ResetPreviewCharacaterLookat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.GetTargetActor
	 * 		Flags  -> ()
	 */
	class AActor* AUnrealCharacterPreviewCameraActor::GetTargetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.GetTargetActor");
		
		AUnrealCharacterPreviewCameraActor_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.ForceSetZoomStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InZoomStep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCharacterPreviewCameraActor::ForceSetZoomStep(int32_t InZoomStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.ForceSetZoomStep");
		
		AUnrealCharacterPreviewCameraActor_ForceSetZoomStep_Params params {};
		params.InZoomStep = InZoomStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCharacterPreviewCameraActor.EnablePreviewCharacaterLookat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCharacterPreviewCameraActor::EnablePreviewCharacaterLookat(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCharacterPreviewCameraActor.EnablePreviewCharacaterLookat");
		
		AUnrealCharacterPreviewCameraActor_EnablePreviewCharacaterLookat_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealCharacterPreviewCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealCharacterPreviewCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCharacterPreviewCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCompositeBeardDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCompositeBeardDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCompositeBeardDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCompositeEyebrowDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCompositeEyebrowDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCompositeEyebrowDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCompositeFaceDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCompositeFaceDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCompositeFaceDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCompositeHairDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCompositeHairDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCompositeHairDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneCompositePartDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneCompositePartDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneCompositePartDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealContentsTriggerVolume.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealContentsTriggerVolume::OnEndOverlap(class AActor* MyActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealContentsTriggerVolume.OnEndOverlap");
		
		AUnrealContentsTriggerVolume_OnEndOverlap_Params params {};
		params.MyActor = MyActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealContentsTriggerVolume.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealContentsTriggerVolume::OnBeginOverlap(class AActor* MyActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealContentsTriggerVolume.OnBeginOverlap");
		
		AUnrealContentsTriggerVolume_OnBeginOverlap_Params params {};
		params.MyActor = MyActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealContentsTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealContentsTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealContentsTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealCutSceneCameraActor.OnUpdateCameraCut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            CinemaCameraComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealCutSceneCameraActor::OnUpdateCameraCut(class UCameraComponent* CinemaCameraComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealCutSceneCameraActor.OnUpdateCameraCut");
		
		AUnrealCutSceneCameraActor_OnUpdateCameraCut_Params params {};
		params.CinemaCameraComponent = CinemaCameraComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealCutSceneCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealCutSceneCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCutSceneCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealCutSceneCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealCutSceneCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealCutSceneCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealFootprintAppearance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealFootprintAppearance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealFootprintAppearance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealFreeLagCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealFreeLagCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealFreeLagCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealInitializeActorStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealInitializeActorStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealInitializeActorStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealLevelDummyActorSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealLevelDummyActorSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealLevelDummyActorSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneMakeupOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneMakeupOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneMakeupOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneWorldMakeupPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneWorldMakeupPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneWorldMakeupPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMapHiveMoveSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMapHiveMoveSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMapHiveMoveSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMapRoomLiaisonComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMapRoomLiaisonComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMapRoomLiaisonComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMaterialPermutation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMaterialPermutation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMaterialPermutation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMaterialSetConvertSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMaterialSetConvertSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMaterialSetConvertSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneCineTargetCameraAimingSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneCineTargetCameraAimingSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneCineTargetCameraAimingSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneCineTargetCameraAimingTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneCineTargetCameraAimingTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneCineTargetCameraAimingTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneCineTargetCameraAimingWayPointSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneCineTargetCameraAimingWayPointSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneCineTargetCameraAimingWayPointSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneCineTargetCameraAimingWayPointTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneCineTargetCameraAimingWayPointTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneCineTargetCameraAimingWayPointTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneContiAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneContiAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneContiAnimationSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneContiAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneContiAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneContiAnimationTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneContiSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneContiSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneContiSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneContiTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneContiTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneContiTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieScenePlayAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieScenePlayAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieScenePlayAnimationSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieScenePlayAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieScenePlayAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieScenePlayAnimationTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneScenarioActorSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneScenarioActorSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneScenarioActorSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneScenarioActorTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneScenarioActorTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneScenarioActorTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneScenarioLoopSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneScenarioLoopSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneScenarioLoopSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealMovieSceneScenarioLoopTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealMovieSceneScenarioLoopTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealMovieSceneScenarioLoopTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneNpcCompositePartDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneNpcCompositePartDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneNpcCompositePartDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealOverlaySkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealOverlaySkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealOverlaySkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealParticleModuleAdjustSpawnHeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealParticleModuleAdjustSpawnHeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealParticleModuleAdjustSpawnHeight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleSizeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleSizeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleSizeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleSizeByDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleSizeByDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleSizeByDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleSpawnController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleSpawnController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleSpawnController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleSpawnByWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleSpawnByWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleSpawnByWind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleStreakBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleStreakBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.ParticleModuleStreakBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneParticleModuleStreakAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneParticleModuleStreakAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneParticleModuleStreakAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleSuppressInRain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleSuppressInRain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleSuppressInRain");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneParticleModuleTLAuxiliaryBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneParticleModuleTLAuxiliaryBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneParticleModuleTLAuxiliaryBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneParticleModuleTLAuxilaryPreventAsyncTick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneParticleModuleTLAuxilaryPreventAsyncTick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneParticleModuleTLAuxilaryPreventAsyncTick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleTypeDataLightning.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleTypeDataLightning::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleTypeDataLightning");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleTypeDataStreak.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleTypeDataStreak::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleTypeDataStreak");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleVelocityBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleVelocityBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleVelocityBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneParticleModuleVelocityWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneParticleModuleVelocityWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneParticleModuleVelocityWind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealPhysicalConti.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealPhysicalConti::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealPhysicalConti");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealPoseableMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealPoseableMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealPoseableMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealPostProcessData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealPostProcessData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealPostProcessData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealProducerCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealProducerCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealProducerCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealRigidModelAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealRigidModelAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealRigidModelAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidActor.TickMoveTimeline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealSceneBoidActor::TickMoveTimeline(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidActor.TickMoveTimeline");
		
		AUnrealSceneBoidActor_TickMoveTimeline_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidActor.OnPlayAnimBeforeArrive
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidActor::OnPlayAnimBeforeArrive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidActor.OnPlayAnimBeforeArrive");
		
		AUnrealSceneBoidActor_OnPlayAnimBeforeArrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidActor.OnPassingAtSplineStart
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidActor::OnPassingAtSplineStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidActor.OnPassingAtSplineStart");
		
		AUnrealSceneBoidActor_OnPassingAtSplineStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidActor.OnArriveAtSplineEnd
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidActor::OnArriveAtSplineEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidActor.OnArriveAtSplineEnd");
		
		AUnrealSceneBoidActor_OnArriveAtSplineEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneBoidActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneBoidActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidController.RoamingStart
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidController::RoamingStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidController.RoamingStart");
		
		AUnrealSceneBoidController_RoamingStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidController.OnPlayerSeen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSeen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealSceneBoidController::OnPlayerSeen(bool bSeen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidController.OnPlayerSeen");
		
		AUnrealSceneBoidController_OnPlayerSeen_Params params {};
		params.bSeen = bSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidController.OnFinishedProwling
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidController::OnFinishedProwling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidController.OnFinishedProwling");
		
		AUnrealSceneBoidController_OnFinishedProwling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidController.OnArrivedAtSplineEndPoint
	 * 		Flags  -> ()
	 */
	void AUnrealSceneBoidController::OnArrivedAtSplineEndPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidController.OnArrivedAtSplineEndPoint");
		
		AUnrealSceneBoidController_OnArrivedAtSplineEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneBoidController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneBoidController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneBoidMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneBoidMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidParticle.OnSensingLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnrealSceneBoidParticle::OnSensingLeave(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidParticle.OnSensingLeave");
		
		AUnrealSceneBoidParticle_OnSensingLeave_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLScene.UnrealSceneBoidParticle.OnSensingEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AUnrealSceneBoidParticle::OnSensingEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLScene.UnrealSceneBoidParticle.OnSensingEnter");
		
		AUnrealSceneBoidParticle_OnSensingEnter_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneBoidParticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneBoidParticle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidParticle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneBoidPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneBoidPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneBoidSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneBoidSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneBoidTrackActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneBoidTrackActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidTrackActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneBoidTrackPathComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneBoidTrackPathComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneBoidTrackPathComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneBoneScaleDef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneBoneScaleDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneBoneScaleDef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSceneDebugCameraController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSceneDebugCameraController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneDebugCameraController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneFacialAnimationTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneFacialAnimationTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.SceneFacialAnimationTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneItemScaleConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneItemScaleConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneItemScaleConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneNpcCustomizing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneNpcCustomizing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneNpcCustomizing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealScenePlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealScenePlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealScenePlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealScenePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealScenePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealScenePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealScenePseudoFlinchingPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealScenePseudoFlinchingPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealScenePseudoFlinchingPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSceneRootComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSceneRootComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSceneRootComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSequencerCharacterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSequencerCharacterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSequencerCharacterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSimulationPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSimulationPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSimulationPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSkeleton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSkeleton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSkeleton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealSkidMarkMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealSkidMarkMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSkidMarkMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealSplineActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealSplineActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealSplineActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealStaticMeshFadeConfigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealStaticMeshFadeConfigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealStaticMeshFadeConfigComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealTLCineTargetCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealTLCineTargetCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealTLCineTargetCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealTLCineTargetCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealTLCineTargetCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealTLCineTargetCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnrealTLGameCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnrealTLGameCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealTLGameCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealTLGameCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealTLGameCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealTLGameCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnrealVirtualSocketSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnrealVirtualSocketSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.UnrealVirtualSocketSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspaceLevelInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspaceLevelInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspaceLevelInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspaceCategoryLevel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspaceCategoryLevel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspaceCategoryLevel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspaceCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspaceCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspaceCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspacePOI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspacePOI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspacePOI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspacePOIModuleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspacePOIModuleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspacePOIModuleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspaceLevelModuleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspaceLevelModuleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspaceLevelModuleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWorldWorkspaceOceanModuleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWorldWorkspaceOceanModuleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.TLWorldWorkspaceOceanModuleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldCompositionMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldCompositionMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.WorldCompositionMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldPartitionBakedMaterialSetContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldPartitionBakedMaterialSetContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.WorldPartitionBakedMaterialSetContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWorldPartitionMapMaterialPermutation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldPartitionMapMaterialPermutation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLScene.WorldPartitionMapMaterialPermutation");
		return ptr;
	}

}


