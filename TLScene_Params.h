#pragma once

/**
 * Name: TL
 * Version: 0525
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TLScene.GameplayTask_AttachMagicDoll.OnMasterCharacterMovementUpdated
	 */
	struct UGameplayTask_AttachMagicDoll_OnMasterCharacterMovementUpdated_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OldLocation;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OldVelocity;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.GameplayTask_AttachMagicDoll.Attach
	 */
	struct UGameplayTask_AttachMagicDoll_Attach_Params
	{
	public:
		unsigned char                                              UnknownData_HBDT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSnActionAttachObjectData                           AttachObjectData;                                        // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PKK7[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameplayTask_AttachMagicDoll*                       ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.GameplayTask_AttachWorldObject.OnAttachedParentEndPlay
	 */
	struct UGameplayTask_AttachWorldObject_OnAttachedParentEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.GameplayTask_AttachWorldObject.OnAttachedCollisionActorEndPlay
	 */
	struct UGameplayTask_AttachWorldObject_OnAttachedCollisionActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.GameplayTask_AttachWorldObject.Attach
	 */
	struct UGameplayTask_AttachWorldObject_Attach_Params
	{
	public:
		unsigned char                                              UnknownData_T77K[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSnActionAttachObjectData                           AttachObjectData;                                        // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5BOU[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameplayTask_AttachWorldObject*                     ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.GameplayTask_Mount.OnMasterCharacterMovementUpdated
	 */
	struct UGameplayTask_Mount_OnMasterCharacterMovementUpdated_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OldLocation;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OldVelocity;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.ImageAttachmentComponent.AttachImage
	 */
	struct UImageAttachmentComponent_AttachImage_Params
	{
	public:
		class FString                                              ImagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.LevelStreamingAlwaysLoadedMod.HandleOnLevelLoaded
	 */
	struct ULevelStreamingAlwaysLoadedMod_HandleOnLevelLoaded_Params
	{	};

	/**
	 * Function TLScene.MapController.OnLevelStreamingCompleted
	 */
	struct UMapController_OnLevelStreamingCompleted_Params
	{	};

	/**
	 * Function TLScene.MapActorManager.OnActorDestroyed
	 */
	struct UMapActorManager_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.MapMiniActor.OnParticleEvent
	 */
	struct AMapMiniActor_OnParticleEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EmitterTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.MapRoomActor.OnEndOverlap
	 */
	struct AMapRoomActor_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.MapRoomActor.OnBeginOverlap
	 */
	struct AMapRoomActor_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_196C[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.MapRoomActionBindSocket.PostPoseUpdate
	 */
	struct UMapRoomActionBindSocket_PostPoseUpdate_Params
	{	};

	/**
	 * Function TLScene.MapRouteAnchorComponent.FixInvalidPositionZ
	 */
	struct UMapRouteAnchorComponent_FixInvalidPositionZ_Params
	{	};

	/**
	 * Function TLScene.MapWaterAnchorComponent.FixInvalidPositionZ
	 */
	struct UMapWaterAnchorComponent_FixInvalidPositionZ_Params
	{	};

	/**
	 * Function TLScene.MapWaterEdgeComponent.SwapAnchors
	 */
	struct UMapWaterEdgeComponent_SwapAnchors_Params
	{	};

	/**
	 * Function TLScene.SplineDecalActor.ConstructMeshDecal
	 */
	struct ASplineDecalActor_ConstructMeshDecal_Params
	{	};

	/**
	 * Function TLScene.TLAnimationStatics.SkeletalMeshAssiginNewSkeleton
	 */
	struct UTLAnimationStatics_SkeletalMeshAssiginNewSkeleton_Params
	{
	public:
		class USkeletalMesh*                                       InSkeletalMesh;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeleton*                                           InSkeleton;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLAnimationStatics.GetSkeletonBoneNames
	 */
	struct UTLAnimationStatics_GetSkeletonBoneNames_Params
	{
	public:
		class USkeleton*                                           InSkeleton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLAssetStatics.RenameAssetIfEditorBuild
	 */
	struct UTLAssetStatics_RenameAssetIfEditorBuild_Params
	{
	public:
		class UObject*                                             InAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InNewPackagePath;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InNewName;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLAssetStatics.FindSoftReferencesToObject
	 */
	struct UTLAssetStatics_FindSoftReferencesToObject_Params
	{
	public:
		struct FSoftObjectPath                                     TargetObject;                                            // 0x0000(0x0018)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReferencingObjects;                                      // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLAssetStatics.DuplicateAssetWithDialog
	 */
	struct UTLAssetStatics_DuplicateAssetWithDialog_Params
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PackagePath;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OriginalObject;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLAssetStatics.DuplicateAsset
	 */
	struct UTLAssetStatics_DuplicateAsset_Params
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PackagePath;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OriginalObject;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterAnimInstance.GetFacialAnimComponent
	 */
	struct UTLCharacterAnimInstance_GetFacialAnimComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureReachedJumpApex
	 */
	struct UCreatureRootMotionTask_CreatureFall_OnCreatureReachedJumpApex_Params
	{	};

	/**
	 * Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreaturemovementModeChanged
	 */
	struct UCreatureRootMotionTask_CreatureFall_OnCreaturemovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.CreatureRootMotionTask_CreatureFall.OnCreatureLanded
	 */
	struct UCreatureRootMotionTask_CreatureFall_OnCreatureLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetPlayerCharacterPartType
	 */
	struct UTLCharacterStatics_GetPlayerCharacterPartType_Params
	{
	public:
		ESnModelCompositeMasterPoseParts                           InMasterPosePart;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESnModelCompositeArmorPart                                 ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetPCPartSkinMaskTextureMaterialParamName
	 */
	struct UTLCharacterStatics_GetPCPartSkinMaskTextureMaterialParamName_Params
	{
	public:
		ESnModelCompositeArmorPart                                 InPCPartType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_49YI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetMasterPosePartWithPCPart
	 */
	struct UTLCharacterStatics_GetMasterPosePartWithPCPart_Params
	{
	public:
		ESnModelCompositeArmorPart                                 InPCPartType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESnModelCompositeMasterPoseParts                           ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetMasterPosePartWithNPCPart
	 */
	struct UTLCharacterStatics_GetMasterPosePartWithNPCPart_Params
	{
	public:
		ESnModelNpcCompositePart                                   InNPCPartType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESnModelCompositeMasterPoseParts                           ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetMasterPosePartOverlapWithPCPart
	 */
	struct UTLCharacterStatics_GetMasterPosePartOverlapWithPCPart_Params
	{
	public:
		ESnModelCompositeArmorPart                                 InPCPartType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESnModelCompositeMasterPosePartsOverlap                    ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterStatics.GetGender
	 */
	struct UTLCharacterStatics_GetGender_Params
	{
	public:
		class UTLPlayerCharacterAsset*                             PCAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaleFallback;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UHT5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCharacterSubAnimInstance.TLAnim_GetInverseSpeedBasedRate
	 */
	struct UTLCharacterSubAnimInstance_TLAnim_GetInverseSpeedBasedRate_Params
	{
	public:
		float                                                      InSeqBaseSpeed;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCheatManager.TLPlayDieAnimation
	 */
	struct UTLCheatManager_TLPlayDieAnimation_Params
	{	};

	/**
	 * Function TLScene.TLCheatManager.SetTargetActor
	 */
	struct UTLCheatManager_SetTargetActor_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLCinematicPlaySkippingControlActor.OnEnableSkip
	 */
	struct ATLCinematicPlaySkippingControlActor_OnEnableSkip_Params
	{	};

	/**
	 * Function TLScene.TLCinematicPlaySkippingControlActor.OnDisableSkip
	 */
	struct ATLCinematicPlaySkippingControlActor_OnDisableSkip_Params
	{	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ShouldSkipIntroGameState
	 */
	struct UTLDevelopmentStatics_ShouldSkipIntroGameState_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ShouldLoadLevelSequenceAsynchronously
	 */
	struct UTLDevelopmentStatics_ShouldLoadLevelSequenceAsynchronously_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ShouldAnimationAssetsBeLazyLoaded
	 */
	struct UTLDevelopmentStatics_ShouldAnimationAssetsBeLazyLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ShouldActionTreeBeLazyLoaded
	 */
	struct UTLDevelopmentStatics_ShouldActionTreeBeLazyLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ParseWorldInfoVectorString
	 */
	struct UTLDevelopmentStatics_ParseWorldInfoVectorString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutVector;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ParseWorldInfoStringShort
	 */
	struct UTLDevelopmentStatics_ParseWorldInfoStringShort_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutMapId;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutPlayerPos;                                            // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ParseWorldInfoString
	 */
	struct UTLDevelopmentStatics_ParseWorldInfoString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutMapId;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutPlayerPos;                                            // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutPlayerRotation;                                       // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraPos;                                            // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraFwd;                                            // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutCameraDistance;                                       // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ParseWorldInfoAttributeString
	 */
	struct UTLDevelopmentStatics_ParseWorldInfoAttributeString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAttributeName;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutAttributeValue;                                       // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsWorldCompositionLevelLODEnabled
	 */
	struct UTLDevelopmentStatics_IsWorldCompositionLevelLODEnabled_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsTutorialEnabled
	 */
	struct UTLDevelopmentStatics_IsTutorialEnabled_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsSoundEnabled
	 */
	struct UTLDevelopmentStatics_IsSoundEnabled_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsPlayerCharacterCustomizingEnabled
	 */
	struct UTLDevelopmentStatics_IsPlayerCharacterCustomizingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsLoadingUIAssetsDisabled
	 */
	struct UTLDevelopmentStatics_IsLoadingUIAssetsDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsFastNewCharacter
	 */
	struct UTLDevelopmentStatics_IsFastNewCharacter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsFastInGame
	 */
	struct UTLDevelopmentStatics_IsFastInGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsCreateInGameWidgetManually
	 */
	struct UTLDevelopmentStatics_IsCreateInGameWidgetManually_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.IsAutoSyncCutSceneTable
	 */
	struct UTLDevelopmentStatics_IsAutoSyncCutSceneTable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.EnableBudget
	 */
	struct UTLDevelopmentStatics_EnableBudget_Params
	{
	public:
		class FString                                              BudgetName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLDevelopmentStatics.ClearBudgets
	 */
	struct UTLDevelopmentStatics_ClearBudgets_Params
	{	};

	/**
	 * Function TLScene.TLEngineStatics.VolumeEncompassesActor
	 */
	struct UTLEngineStatics_VolumeEncompassesActor_Params
	{
	public:
		class AVolume*                                             Volume;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TestingActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.UsingDLSS
	 */
	struct UTLEngineStatics_UsingDLSS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLIsTrailsEnabled
	 */
	struct UTLEngineStatics_TLIsTrailsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLGetUseFlowingSandBall
	 */
	struct UTLEngineStatics_TLGetUseFlowingSandBall_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLGetTraceCollisionType
	 */
	struct UTLEngineStatics_TLGetTraceCollisionType_Params
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETraceTypeQuery                                            TraceType;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          CollisionChannel;                                        // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLGetPhysicalSurfaceFinalWeather
	 */
	struct UTLEngineStatics_TLGetPhysicalSurfaceFinalWeather_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ESnPhysicalSurface                                         OutSurface;                                              // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BEA1[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutTextureBlendingWeight;                                // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLGetFluidSimFootprintAutoGeneration
	 */
	struct UTLEngineStatics_TLGetFluidSimFootprintAutoGeneration_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLGetDebugFlowingSandBall
	 */
	struct UTLEngineStatics_TLGetDebugFlowingSandBall_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLCalcFlowingSandDecalRotationAndSpeed
	 */
	struct UTLEngineStatics_TLCalcFlowingSandDecalRotationAndSpeed_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutDecalRotation;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutDecalSpeed;                                           // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLBuildVelocityTexture
	 */
	struct UTLEngineStatics_TLBuildVelocityTexture_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.TLBuildNormalTexture
	 */
	struct UTLEngineStatics_TLBuildNormalTexture_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.ShowBloodSplatter
	 */
	struct UTLEngineStatics_ShowBloodSplatter_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.SetSuperSamplingMethod
	 */
	struct UTLEngineStatics_SetSuperSamplingMethod_Params
	{
	public:
		ETLEngineSuperSamplingMethod                               NewMethod;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.SetFSR2Sharpness
	 */
	struct UTLEngineStatics_SetFSR2Sharpness_Params
	{
	public:
		float                                                      Sharpness;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.SetFSR2Mode
	 */
	struct UTLEngineStatics_SetFSR2Mode_Params
	{
	public:
		int32_t                                                    FSR2Mode;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.SetDLSSSharpness
	 */
	struct UTLEngineStatics_SetDLSSSharpness_Params
	{
	public:
		float                                                      Sharpness;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.SetDLSSMode
	 */
	struct UTLEngineStatics_SetDLSSMode_Params
	{
	public:
		int32_t                                                    DLSSMode;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.RestoreDefaultDeviceProfile
	 */
	struct UTLEngineStatics_RestoreDefaultDeviceProfile_Params
	{	};

	/**
	 * Function TLScene.TLEngineStatics.OverrideDeviceProfileForMode
	 */
	struct UTLEngineStatics_OverrideDeviceProfileForMode_Params
	{
	public:
		ETLDeviceProfileOverrideMode                               NewMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.IsShowBloodSplatter
	 */
	struct UTLEngineStatics_IsShowBloodSplatter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.IsFSR2Supported
	 */
	struct UTLEngineStatics_IsFSR2Supported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.IsDLSSSupported
	 */
	struct UTLEngineStatics_IsDLSSSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.IsCinematicLevelSequenceModeAllowed
	 */
	struct UTLEngineStatics_IsCinematicLevelSequenceModeAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.GetSuperSamplingMethod
	 */
	struct UTLEngineStatics_GetSuperSamplingMethod_Params
	{
	public:
		ETLEngineSuperSamplingMethod                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.GetFirstGameplayTask
	 */
	struct UTLEngineStatics_GetFirstGameplayTask_Params
	{
	public:
		class UGameplayTasksComponent*                             InGameplayTasksComponent;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InClass;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.GetBaseDeviceProfileName
	 */
	struct UTLEngineStatics_GetBaseDeviceProfileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.GetActiveDeviceProfileName
	 */
	struct UTLEngineStatics_GetActiveDeviceProfileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.BuildVelocityTexture
	 */
	struct UTLEngineStatics_BuildVelocityTexture_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Outer;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.BuildNormalTexture
	 */
	struct UTLEngineStatics_BuildNormalTexture_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Outer;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.AllowCinematicLevelSequenceMode
	 */
	struct UTLEngineStatics_AllowCinematicLevelSequenceMode_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLEngineStatics.ActorIsPendingKillPendingOrHasLifeSpan
	 */
	struct UTLEngineStatics_ActorIsPendingKillPendingOrHasLifeSpan_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLForceFeedbackLibrary.StopForceFeedbackAll
	 */
	struct UTLForceFeedbackLibrary_StopForceFeedbackAll_Params
	{
	public:
		class UObject*                                             InWorldContextObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLForceFeedbackLibrary.StopForceFeedback
	 */
	struct UTLForceFeedbackLibrary_StopForceFeedback_Params
	{
	public:
		class UObject*                                             InWorldContextObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLForceFeedbackLibrary.PlayForceFeedback
	 */
	struct UTLForceFeedbackLibrary_PlayForceFeedback_Params
	{
	public:
		class UObject*                                             InWorldContextObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLooping;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreTimeDilation;                                     // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayWhilePaused;                                        // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLForceFeedbackLibrary.GetWorldByContext
	 */
	struct UTLForceFeedbackLibrary_GetWorldByContext_Params
	{
	public:
		class UObject*                                             InWorldContextObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLLandscapeSamplerComponent.GetLandscapeHeights
	 */
	struct UTLLandscapeSamplerComponent_GetLandscapeHeights_Params
	{
	public:
		struct FVector2D                                           Extent;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numWidth;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numHeight;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLLandscapeSamplerComponent.FindMajorSlopeNormal
	 */
	struct UTLLandscapeSamplerComponent_FindMajorSlopeNormal_Params
	{
	public:
		TArray<struct FVector>                                     Normals;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLLandscapeSamplerComponent.CalculateNormalsFromHeightfield
	 */
	struct UTLLandscapeSamplerComponent_CalculateNormalsFromHeightfield_Params
	{
	public:
		TArray<float>                                              heightField;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    numWidth;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numHeight;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMapBlueprintFunctionLibrary.UpdatePrimitiveBounds
	 */
	struct UTLMapBlueprintFunctionLibrary_UpdatePrimitiveBounds_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMapBlueprintFunctionLibrary.BuildHierarchicalInstancedStaticMesh
	 */
	struct UTLMapBlueprintFunctionLibrary_BuildHierarchicalInstancedStaticMesh_Params
	{
	public:
		class UHierarchicalInstancedStaticMeshComponent*           Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       async;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Force;                                                   // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMapRoomStatics.GetMapRoomAllComponents
	 */
	struct UTLMapRoomStatics_GetMapRoomAllComponents_Params
	{
	public:
		class Umaproom*                                            InMapRoom;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USceneComponent*>                             OutSceneComponents;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMapRoomStatics.GetMapRoomActorAllComponents
	 */
	struct UTLMapRoomStatics_GetMapRoomActorAllComponents_Params
	{
	public:
		class AMapRoomActor*                                       InMapRoomActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USceneComponent*>                             OutSceneComponents;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMyPCActorComponent.OnMovementModeChanged
	 */
	struct UTLMyPCActorComponent_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              CurrentMovementMode;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CurrentCustomMode;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PreviousMovementMode;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMyPCActorComponent.OnModelLoaded
	 */
	struct UTLMyPCActorComponent_OnModelLoaded_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLMyPCActorComponent.OnFootprint
	 */
	struct UTLMyPCActorComponent_OnFootprint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLPhysicsStatics.TLMultiSphereTraceForObjects
	 */
	struct UTLPhysicsStatics_TLMultiSphereTraceForObjects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NOX4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bTraceComplex;                                           // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ESPS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  OutHits;                                                 // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreSelf;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLScenarioActor.OnTransformedIn
	 */
	struct ATLScenarioActor_OnTransformedIn_Params
	{	};

	/**
	 * Function TLScene.TLScenarioActor.GetBoundTagName
	 */
	struct ATLScenarioActor_GetBoundTagName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLScenarioActor.GetBoundObjectActor
	 */
	struct ATLScenarioActor_GetBoundObjectActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLScenarioPreloadingVolume.OnEndOverlap
	 */
	struct ATLScenarioPreloadingVolume_OnEndOverlap_Params
	{
	public:
		class AActor*                                              MyActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLScenarioPreloadingVolume.OnBeginOverlap
	 */
	struct ATLScenarioPreloadingVolume_OnBeginOverlap_Params
	{
	public:
		class AActor*                                              MyActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLSceneCapture2DAutoResize.OnInterpToggle
	 */
	struct ATLSceneCapture2DAutoResize_OnInterpToggle_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLSplineParticleBlueprintComponent.ClearSegments
	 */
	struct UTLSplineParticleBlueprintComponent_ClearSegments_Params
	{	};

	/**
	 * Function TLScene.TLSplineParticleBlueprintComponent.ApplyProperties
	 */
	struct UTLSplineParticleBlueprintComponent_ApplyProperties_Params
	{	};

	/**
	 * Function TLScene.TLSplineParticleBlueprintComponent.AddSegment
	 */
	struct UTLSplineParticleBlueprintComponent_AddSegment_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLTransformTransitionSection.SetConstraintBindingID
	 */
	struct UTLTransformTransitionSection_SetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InConstraintBindingID;                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.TLTransformTransitionSection.GetConstraintBindingID
	 */
	struct UTLTransformTransitionSection_GetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCableComponent.SetAttachEndToComponent
	 */
	struct UUnrealCableComponent_SetAttachEndToComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCableComponent.SetAttachEndTo
	 */
	struct UUnrealCableComponent_SetAttachEndTo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCableComponent.GetCableParticleLocations
	 */
	struct UUnrealCableComponent_GetCableParticleLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCableComponent.GetAttachedComponent
	 */
	struct UUnrealCableComponent_GetAttachedComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCableComponent.GetAttachedActor
	 */
	struct UUnrealCableComponent_GetAttachedActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.SetRotationBP
	 */
	struct AUnrealCameraActor_SetRotationBP_Params
	{
	public:
		struct FRotator                                            InRotation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.SetPosisionBP
	 */
	struct AUnrealCameraActor_SetPosisionBP_Params
	{
	public:
		struct FVector                                             InPosition;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.SetFOVBP
	 */
	struct AUnrealCameraActor_SetFOVBP_Params
	{
	public:
		float                                                      InFOV;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.GetRotationBP
	 */
	struct AUnrealCameraActor_GetRotationBP_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.GetPosittionBP
	 */
	struct AUnrealCameraActor_GetPosittionBP_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.GetFOVBP
	 */
	struct AUnrealCameraActor_GetFOVBP_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCameraActor.GetCameraTypeBP
	 */
	struct AUnrealCameraActor_GetCameraTypeBP_Params
	{
	public:
		ESnCameraType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.TryChangeZoomStep
	 */
	struct AUnrealCharacterPreviewCameraActor_TryChangeZoomStep_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.SetToDefaultPosition
	 */
	struct AUnrealCharacterPreviewCameraActor_SetToDefaultPosition_Params
	{	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.SetOffCenterOffset
	 */
	struct AUnrealCharacterPreviewCameraActor_SetOffCenterOffset_Params
	{
	public:
		struct FVector2D                                           InCenterOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDistOffset;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.ResetPreviewCharacaterLookat
	 */
	struct AUnrealCharacterPreviewCameraActor_ResetPreviewCharacaterLookat_Params
	{	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.GetTargetActor
	 */
	struct AUnrealCharacterPreviewCameraActor_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.ForceSetZoomStep
	 */
	struct AUnrealCharacterPreviewCameraActor_ForceSetZoomStep_Params
	{
	public:
		int32_t                                                    InZoomStep;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCharacterPreviewCameraActor.EnablePreviewCharacaterLookat
	 */
	struct AUnrealCharacterPreviewCameraActor_EnablePreviewCharacaterLookat_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealContentsTriggerVolume.OnEndOverlap
	 */
	struct AUnrealContentsTriggerVolume_OnEndOverlap_Params
	{
	public:
		class AActor*                                              MyActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealContentsTriggerVolume.OnBeginOverlap
	 */
	struct AUnrealContentsTriggerVolume_OnBeginOverlap_Params
	{
	public:
		class AActor*                                              MyActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealCutSceneCameraActor.OnUpdateCameraCut
	 */
	struct AUnrealCutSceneCameraActor_OnUpdateCameraCut_Params
	{
	public:
		class UCameraComponent*                                    CinemaCameraComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealSceneBoidActor.TickMoveTimeline
	 */
	struct AUnrealSceneBoidActor_TickMoveTimeline_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealSceneBoidActor.OnPlayAnimBeforeArrive
	 */
	struct AUnrealSceneBoidActor_OnPlayAnimBeforeArrive_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidActor.OnPassingAtSplineStart
	 */
	struct AUnrealSceneBoidActor_OnPassingAtSplineStart_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidActor.OnArriveAtSplineEnd
	 */
	struct AUnrealSceneBoidActor_OnArriveAtSplineEnd_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidController.RoamingStart
	 */
	struct AUnrealSceneBoidController_RoamingStart_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidController.OnPlayerSeen
	 */
	struct AUnrealSceneBoidController_OnPlayerSeen_Params
	{
	public:
		bool                                                       bSeen;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealSceneBoidController.OnFinishedProwling
	 */
	struct AUnrealSceneBoidController_OnFinishedProwling_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidController.OnArrivedAtSplineEndPoint
	 */
	struct AUnrealSceneBoidController_OnArrivedAtSplineEndPoint_Params
	{	};

	/**
	 * Function TLScene.UnrealSceneBoidParticle.OnSensingLeave
	 */
	struct AUnrealSceneBoidParticle_OnSensingLeave_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLScene.UnrealSceneBoidParticle.OnSensingEnter
	 */
	struct AUnrealSceneBoidParticle_OnSensingEnter_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6KZA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
