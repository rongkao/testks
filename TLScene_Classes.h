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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TLScene.TLCommonGameMode
	 * Size -> 0x0028 (FullSize[0x02F8] - InheritedSize[0x02D0])
	 */
	class ATLCommonGameMode : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_9DHH[0x28];                                  // 0x02D0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCommonGameInstance
	 * Size -> 0x00D0 (FullSize[0x0278] - InheritedSize[0x01A8])
	 */
	class UTLCommonGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_V94N[0xD0];                                  // 0x01A8(0x00D0) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AggregatedLandscapeLOD
	 * Size -> 0x00D0 (FullSize[0x0300] - InheritedSize[0x0230])
	 */
	class AAggregatedLandscapeLOD : public AActor
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProceduralMeshComponent*                            ProceduralMeshComponent;                                 // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9BT[0xC0];                                  // 0x0240(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SystemAnimation
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USystemAnimation : public UObject
	{
	public:
		TArray<struct FSystemAnimationSequential>                  Sequentials;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimData
	 * Size -> 0x2B108 (FullSize[0x2B138] - InheritedSize[0x0030])
	 */
	class UAnimData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              AnimInstanceClass[0x28];                                 // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              LocomotionAnimInstanceClass[0x28];                       // 0x0058(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UAnimBlueprint*                                      LinkedAnimBlueprint;                                     // 0x0080(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimBlueprint*                                      LinkedOverrideLocomotionBP;                              // 0x0088(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimDataMontageSet                                 MontageSets[0x24];                                       // 0x0090(0x1560) Edit, NativeAccessSpecifierPublic
		struct FStanceAnimationSet                                 LocomotionState[0x24];                                   // 0x15F0(0x286E0) Edit, NativeAccessSpecifierPublic
		struct FAnimDataBlendSpaceSet                              BlendSpaceSets[0x24];                                    // 0x29CD0(0x0B40) Edit, NativeAccessSpecifierPublic
		class UNCIKRig*                                            NCIKRig;                                                 // 0x2A810(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimDataSubstance>                          Substances;                                              // 0x2A818(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimDataSystemAnimation>                    SystemAnimations;                                        // 0x2A828(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAnimDataSequenceTable                              SequenceTables[0x24];                                    // 0x2A838(0x0900) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotifyState_AnimDynamics
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_AnimDynamics : public UAnimNotifyState
	{
	public:
		bool                                                       bEnable;                                                 // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VO0[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulationVelocityUpdateScale;                           // 0x0034(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotifyState_BoneScaleControl
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_BoneScaleControl : public UAnimNotifyState
	{
	public:
		TArray<struct FBoneScaleControlByAnimSeqenceOption>        TargetOption;                                            // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_CharacterSound
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CharacterSound : public UAnimNotify
	{
	public:
		class FName                                                CharacterSoundKey;                                       // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_DropLinkedItems
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_DropLinkedItems : public UAnimNotify
	{
	public:
		bool                                                       bRestore;                                                // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKA2[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomDelay;                                             // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropAllWeapons;                                         // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocket;                                            // 0x0041(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMTA[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_EquipSocket
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_EquipSocket : public UAnimNotify
	{
	public:
		TArray<struct FHandleEquipSocketInfo>                      HandleSocketInfos;                                       // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotifyState_EquipSocket
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_EquipSocket : public UAnimNotifyState
	{
	public:
		TArray<struct FHandleEquipSocketInfo>                      HandleSocketInfos;                                       // 0x0030(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_FishingEvent
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_FishingEvent : public UAnimNotify
	{
	public:
		ETLAnimNotifyFishingEvent                                  FishingEventType;                                        // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I26V[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_HitStop
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_HitStop : public UAnimNotify
	{
	public:
		bool                                                       bMyPcOnly;                                               // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESnHitStopAnimationType                                    Type;                                                    // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0D13[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Exponent;                                                // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Duration;                                                // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ActionSpeedScaleFactor;                                  // 0x0044(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_NameplateUpdateMode
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAnimNotify_NameplateUpdateMode : public UAnimNotify
	{
	public:
		ESnNameplateUpdateMode                                     UpdateMode;                                              // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MVAX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetFromRoot;                                          // 0x003C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeightOffsetFromHead;                                    // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendingDuration;                                        // 0x004C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_PhysicalFootprint
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PhysicalFootprint : public UAnimNotify
	{
	public:
		ESnFootprintSocketPoint                                    FootprintSocket;                                         // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipFootstepSound;                                      // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFJ0[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_SystemSct
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SystemSct : public UAnimNotify
	{
	public:
		ESnAnimNotifyTriggerSystemSct                              SystemSct;                                               // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2RG[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotifyState_SystemSct
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_SystemSct : public UAnimNotifyState
	{
	public:
		ESnAnimNotifyTriggerSystemSct                              SystemSct;                                               // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSA9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Condition;                                               // 0x0034(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X33N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_TLPlaySound
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UAnimNotify_TLPlaySound : public UAnimNotify
	{
	public:
		class UTLSoundEvent*                                       SoundEvent;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_042H[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotify_Trigger
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_Trigger : public UAnimNotify
	{
	public:
		class FName                                                TriggerName;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.AnimNotifyState_EnableIK
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_EnableIK : public UAnimNotifyState
	{
	public:
		EIKType                                                    IKType;                                                  // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInverse;                                                // 0x0031(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IJL5[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendInTime;                                             // 0x0034(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendOutTime;                                            // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             HandIKLookAtAxis;                                        // 0x003C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bArmIKProjectile;                                        // 0x0048(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandIKProjectile;                                       // 0x0049(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4LIQ[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTService_FindBoidRoamingStartPosition
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTService_FindBoidRoamingStartPosition : public UBTService_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTService_FindRunAwayTarget
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTService_FindRunAwayTarget : public UBTService_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTService_SelectNextPathSpline
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTService_SelectNextPathSpline : public UBTService_BlackboardBase
	{
	public:
		bool                                                       bGotoProwling : 1;                                       // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K6XH[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_MovingBySpline
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_MovingBySpline : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_MovingDirectFly
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTTask_MovingDirectFly : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRJZ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_MovingReverseBySpline
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_MovingReverseBySpline : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_ProwlingSpline
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_ProwlingSpline : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_RoamingSpline
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_RoamingSpline : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.BTTask_WaitContiPlay
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTTask_WaitContiPlay : public UBTTaskNode
	{
	public:
		class FName                                                ActionName;                                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8HP[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentExternalTrackOverrideData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentExternalTrackOverrideData : public UObject
	{
	public:
		TMap<struct FGuid, struct FMapEnvironmentExternalVolumeData> VolumeDataTable;                                         // 0x0028(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentBlenderManager
	 * Size -> 0x3508 (FullSize[0x3530] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentBlenderManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_05UQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapEnvironmentObjectBlender*>                SequenceObjectBlenders;                                  // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZMER[0xA0];                                  // 0x0040(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapEnvironmentModuleBlender*>                WeatherModuleBlenders;                                   // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UMapEnvironmentModuleBlender*>                VolumeModuleBlenders;                                    // 0x00F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UMapEnvironmentModuleBlender*>                WeatherIrrelevantBlenders;                               // 0x0100(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UMapEnvironmentPostProcessMaterialBlender*           PostProcessMaterialBlender;                              // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KS4G[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapEnvironmentExternalTrackOverrideData*            ExternalTrackOverrideData;                               // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7ORI[0x3408];                                // 0x0128(0x3408) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentBlender
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentBlender : public UObject
	{
	public:
		unsigned char                                              UnknownData_AM60[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentObjectBlender
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UMapEnvironmentObjectBlender : public UMapEnvironmentBlender
	{
	public:
		unsigned char                                              UnknownData_HJPP[0x68];                                  // 0x0038(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentMaterialParameterCollectionBlender
	 * Size -> 0x0048 (FullSize[0x00E8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentMaterialParameterCollectionBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_SPM7[0x48];                                  // 0x00A0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentDirectionalLightBlender
	 * Size -> 0x0EC8 (FullSize[0x0F68] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentDirectionalLightBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_ALTY[0xEC8];                                 // 0x00A0(0x0EC8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentSpotLightBlender
	 * Size -> 0x0138 (FullSize[0x01D8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentSpotLightBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_4PPB[0x138];                                 // 0x00A0(0x0138) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentPointLightBlender
	 * Size -> 0x0138 (FullSize[0x01D8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentPointLightBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_HYMO[0x138];                                 // 0x00A0(0x0138) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentSkyLightBlender
	 * Size -> 0x0850 (FullSize[0x08F0] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentSkyLightBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_28B4[0x850];                                 // 0x00A0(0x0850) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentSkyAtmosphereBlender
	 * Size -> 0x0B98 (FullSize[0x0C38] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentSkyAtmosphereBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_KQPU[0xB98];                                 // 0x00A0(0x0B98) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentVolumetricCloudBlender
	 * Size -> 0x0208 (FullSize[0x02A8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentVolumetricCloudBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_U8LY[0x208];                                 // 0x00A0(0x0208) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentTLSkyBlender
	 * Size -> 0x3D48 (FullSize[0x3DE8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentTLSkyBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_SOJG[0x3D48];                                // 0x00A0(0x3D48) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentExponentialHeightFogBlender
	 * Size -> 0x0C18 (FullSize[0x0CB8] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentExponentialHeightFogBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_VKND[0xC18];                                 // 0x00A0(0x0C18) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentPostProcessVolumeBlender
	 * Size -> 0x4E30 (FullSize[0x4ED0] - InheritedSize[0x00A0])
	 */
	class UMapEnvironmentPostProcessVolumeBlender : public UMapEnvironmentObjectBlender
	{
	public:
		unsigned char                                              UnknownData_RR73[0x4E30];                                // 0x00A0(0x4E30) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentModuleBlender
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UMapEnvironmentModuleBlender : public UMapEnvironmentBlender
	{
	public:
		unsigned char                                              UnknownData_PBMC[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentWeatherParticleBlenderV2
	 * Size -> 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentWeatherParticleBlenderV2 : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_8WFH[0xA8];                                  // 0x0050(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentPostProcessMaterialBlender
	 * Size -> 0x0128 (FullSize[0x0178] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentPostProcessMaterialBlender : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_6GMQ[0x128];                                 // 0x0050(0x0128) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentMaterialSetBlender
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentMaterialSetBlender : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_V9JK[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentCharacterWindBlender
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentCharacterWindBlender : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_4W05[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentLightingModuleBlender
	 * Size -> 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentLightingModuleBlender : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_DJ4D[0xA8];                                  // 0x0050(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentScabilityModuleBlender
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UMapEnvironmentScabilityModuleBlender : public UMapEnvironmentModuleBlender
	{
	public:
		unsigned char                                              UnknownData_144W[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.FadingGroupActorConfig
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFadingGroupActorConfig : public UObject
	{
	public:
		float                                                      FadeDuration;                                            // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOpacity;                                             // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.FadingGroupActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class AFadingGroupActor : public AActor
	{
	public:
		TArray<class AActor*>                                      FadingGroupActors;                                       // 0x0230(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.GameplayTask_AttachMagicDoll
	 * Size -> 0x0090 (FullSize[0x00F8] - InheritedSize[0x0068])
	 */
	class UGameplayTask_AttachMagicDoll : public UGameplayTask
	{
	public:
		struct FSnActionAttachObjectData                           AttachObjectData;                                        // 0x0068(0x0080) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6YF4[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnMasterCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
		class UGameplayTask_AttachMagicDoll* Attach(const struct FSnActionAttachObjectData& AttachObjectData, unsigned char Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.GameplayTask_AttachWorldObject
	 * Size -> 0x00A0 (FullSize[0x0108] - InheritedSize[0x0068])
	 */
	class UGameplayTask_AttachWorldObject : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             OnAttached;                                              // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FSnActionAttachObjectData                           AttachObjectData;                                        // 0x0078(0x0080) NativeAccessSpecifierPrivate
		class AActor*                                              AttachedParent;                                          // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZ46[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnAttachedParentEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnAttachedCollisionActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		class UGameplayTask_AttachWorldObject* Attach(const struct FSnActionAttachObjectData& AttachObjectData, unsigned char Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.GameplayTask_Mount
	 * Size -> 0x0148 (FullSize[0x01B0] - InheritedSize[0x0068])
	 */
	class UGameplayTask_Mount : public UGameplayTask
	{
	public:
		unsigned char                                              UnknownData_ZYB4[0x148];                                 // 0x0068(0x0148) MISSED OFFSET (PADDING)

	public:
		void OnMasterCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.HiveEntityData
	 * Size -> 0x0178 (FullSize[0x01A8] - InheritedSize[0x0030])
	 */
	class UHiveEntityData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              UnknownData_MDOI[0x158];                                 // 0x0030(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLCommonModelDefinition*                            Hatchling;                                               // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               PackageGuid;                                             // 0x0190(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TZ2X[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCommonModelDefinition
	 * Size -> 0x0088 (FullSize[0x0230] - InheritedSize[0x01A8])
	 */
	class UTLCommonModelDefinition : public UHiveEntityData
	{
	public:
		class UHiveEntityData*                                     MotherHiveEntity;                                        // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CameraPersonalization[0x28];                             // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      DefaultScale;                                            // 0x01D8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnDecalReceiveType                                        DecalReceiveType;                                        // 0x01DC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZTB[0x3];                                   // 0x01DD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       ForceMipStreaming;                                       // 0x01E0(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NameplatePositionOffsetEnabled;                          // 0x01E1(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSNM[0x2];                                   // 0x01E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NameplatePositionOffset;                                 // 0x01E4(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NameplatePositionOffsetFromHeadEnabled;                  // 0x01F0(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDPI[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NameplatePositionOffsetFromHead;                         // 0x01F4(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ControlledObjectNameplatePositionOffset;                 // 0x01F8(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlledObjectNameplatePositionOffsetFromHead;         // 0x0204(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UIFloaterPositionOffset;                                 // 0x0208(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VirtualSocketHeightScale;                                // 0x0214(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FindClosestSocketEnabled;                                // 0x0218(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70DL[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitSocketAdditionalRangeRadius;                          // 0x021C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutlineDisabled;                                        // 0x0220(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSelfOutline;                                       // 0x0221(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NoSelfOutline;                                           // 0x0222(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TargetOutlineDepthTest;                                  // 0x0223(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectBudgetCategory                                    FxBudget;                                                // 0x0224(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4P5[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockOpacityForSeconds;                                  // 0x0228(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3XW[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.HiveEntitiyHatchlingMap
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UHiveEntitiyHatchlingMap : public UTLCommonModelDefinition
	{
	public:
		struct FSoftObjectPath                                     basemodel;                                               // 0x0230(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapTrueSkyIgnoreFreeze;                                  // 0x0248(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34RW[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapEventEnvironmentVolumeRank1;                          // 0x0250(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapEventEnvironmentVolumeRank2;                          // 0x0260(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapEventEnvironmentVolumeRank3;                          // 0x0270(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.HiveEntitiyHatchlingContent
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UHiveEntitiyHatchlingContent : public UTLCommonModelDefinition
	{
	public:
		TArray<class FString>                                      EnvironmentVolumeGuids;                                  // 0x0230(0x0010) Edit, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FName                                                CueSheetSubLevelPackageName;                             // 0x0240(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.ImageAttachmentComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UImageAttachmentComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_DHQ4[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		void AttachImage(const class FString& ImagePath);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.LandscapeBlendableAssetUserData
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULandscapeBlendableAssetUserData : public UAssetUserData
	{
	public:
		unsigned char                                              LandscapeBlendedActor[0x28];                             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.LandscapeBlendedActor
	 * Size -> 0x0078 (FullSize[0x02B8] - InheritedSize[0x0240])
	 */
	class ALandscapeBlendedActor : public AStaticMeshActor
	{
	public:
		TWeakObjectPtr<class ALandscapeProxy>                      WeakLandscape;                                           // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2DArray*                                     Texture2DArray;                                          // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultTexture;                                          // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanPassTextures;                                        // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5PB[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UTexture2DArray*>                LandscapeMIToTextures;                                   // 0x0260(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bButtonToSave;                                           // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KSS[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMapUserData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLMapUserData : public UAssetUserData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.LandscapeProxyUserData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULandscapeProxyUserData : public UTLMapUserData
	{
	public:
		TLazyObjectPtr<class ALandscapeProxy>                      LandscapeProxy;                                          // 0x0028(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03I0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.LevelStreamingAlwaysLoadedMod
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class ULevelStreamingAlwaysLoadedMod : public ULevelStreamingAlwaysLoaded
	{
	public:
		void HandleOnLevelLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.LevelStreamingExternLoadable
	 * Size -> 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
	 */
	class ULevelStreamingExternLoadable : public ULevelStreamingDynamic
	{
	public:
		unsigned char                                              UnknownData_WUXO[0x30];                                  // 0x0150(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapController
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UMapController : public UObject
	{
	public:
		unsigned char                                              UnknownData_A4PR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapActorManager*                                    ActorManager;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapEnvironmentManager*                              EnvironmentManager;                                      // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapRouteManager*                                    RouteManager;                                            // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapWaterManager*                                    WaterManager;                                            // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapActivationManager*                               ActivationManager;                                       // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapFadingManager*                                   FadingManager;                                           // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapAreaVolumeManager*                               AreaManager;                                             // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KY3Z[0x138];                                 // 0x0068(0x0138) MISSED OFFSET (PADDING)

	public:
		void OnLevelStreamingCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapActivationManager
	 * Size -> 0x0418 (FullSize[0x0440] - InheritedSize[0x0028])
	 */
	class UMapActivationManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_AD0D[0x418];                                 // 0x0028(0x0418) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapActorManager
	 * Size -> 0x0280 (FullSize[0x02A8] - InheritedSize[0x0028])
	 */
	class UMapActorManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_5W8G[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FMapHiveActorGroup>               HiveActorGroupByTag;                                     // 0x0080(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1UM5[0x1D8];                                 // 0x00D0(0x01D8) MISSED OFFSET (PADDING)

	public:
		void OnActorDestroyed(class AActor* DestroyedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapAreaVolumeComponent
	 * Size -> 0x0038 (FullSize[0x04D0] - InheritedSize[0x0498])
	 */
	class UMapAreaVolumeComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_19PM[0x8];                                   // 0x0498(0x0008) Fix Super Size
		TArray<struct FVector2D>                                   AreaPoints;                                              // 0x04A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZFP[0x10];                                  // 0x04B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          AreaBodySetup;                                           // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAMY[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapAreaWallComponent
	 * Size -> 0x0028 (FullSize[0x04C0] - InheritedSize[0x0498])
	 */
	class UMapAreaWallComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  WallMaterial;                                            // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUAO[0x18];                                  // 0x04A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          WallBodySetup;                                           // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapAreaVolume
	 * Size -> 0x0158 (FullSize[0x0388] - InheritedSize[0x0230])
	 */
	class AMapAreaVolume : public AActor
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0230(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActivationTags[0x50];                                    // 0x0240(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      WallVisibleDistance;                                     // 0x0290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallTextureScale;                                        // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallTileScale;                                           // 0x0298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockingWall;                                           // 0x029C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeactivated;                                            // 0x029D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVYF[0x2];                                   // 0x029E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            WallMaterialInstanceDynamic;                             // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMapAreaVolumeComponent*                             AreaVolumeComponent;                                     // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMapAreaWallComponent*>                       AreaWallComponents;                                      // 0x02B0(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bAutoDestroyWhenDeactivated;                             // 0x02C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7QV[0x3F];                                  // 0x02C1(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  WallMaterial;                                            // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHideWalls;                                              // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BE5Y[0x17];                                  // 0x0309(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapAreaWallInfo>                            WallInfos;                                               // 0x0320(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AFUA[0x58];                                  // 0x0330(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapAreaVolumeManager
	 * Size -> 0x02C0 (FullSize[0x02E8] - InheritedSize[0x0028])
	 */
	class UMapAreaVolumeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_JD4J[0x2C0];                                 // 0x0028(0x02C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapControllerTicker
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AMapControllerTicker : public AActor
	{
	public:
		unsigned char                                              UnknownData_EH1Y[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapDynamicTriggerComponent
	 * Size -> 0x0028 (FullSize[0x04C0] - InheritedSize[0x0498])
	 */
	class UMapDynamicTriggerComponent : public UMeshComponent
	{
	public:
		class UBodySetup*                                          TriggerBodySetup;                                        // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x04A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L4K[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Vertices;                                                // 0x04A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKAA[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentAffectorComponent
	 * Size -> 0x00B0 (FullSize[0x0530] - InheritedSize[0x0480])
	 */
	class UMapEnvironmentAffectorComponent : public USphereComponent
	{
	public:
		int32_t                                                    Priority;                                                // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateEnvironmentPosition;                              // 0x0484(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateWeatherParticle;                                // 0x0485(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71ZY[0x2];                                   // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeatherParticleWeight;                                   // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideGameEnvironment;                                    // 0x048C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendGameEnvironment;                                   // 0x048D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QJY[0x2];                                   // 0x048E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameEnvironmentWeight;                                   // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceEnvironmentPaddingTime;                          // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateGameHour;                                         // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8XN[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameHour;                                                // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateTimeScale;                                        // 0x04A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83QI[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeScale;                                               // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLEnvironmentAffectorCloudOverride                 CloudOverride;                                           // 0x04A8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUpdateWeather;                                          // 0x04C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBZA[0x3];                                   // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMapEnvironmentWeather                                     Weather2;                                                // 0x04CC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7Y8[0x3];                                   // 0x04CD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              DisabledWeatherPostProcessMaterials[0x10];               // 0x04D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bUpdateWind;                                             // 0x04E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX3D[0x3];                                   // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindIntensity;                                           // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadLevel;                                              // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceLoad;                                              // 0x04E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_928X[0x6];                                   // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             Levels;                                                  // 0x04F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLoadDistanceVisibleLevelsForRenderMovie;                // 0x0500(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateTag;                                            // 0x0501(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFAV[0x6];                                   // 0x0502(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ActivationTags;                                          // 0x0508(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ActivationElapsedHours;                                  // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableForceBlendDuration;                               // 0x051C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRTU[0x3];                                   // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForceBlendDuration;                                      // 0x0520(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReleaseWeatherFreezing;                                 // 0x0524(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K99S[0xB];                                   // 0x0525(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentAffector
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AMapEnvironmentAffector : public AActor
	{
	public:
		class UMapEnvironmentAffectorComponent*                    AffectorComponent;                                       // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentCharacterWind
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentCharacterWind : public UObject
	{
	public:
		unsigned char                                              UnknownData_K7TT[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentManager
	 * Size -> 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentManager : public UObject
	{
	public:
		class UMapEnvironmentBlenderManager*                       BlenderManager;                                          // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapEnvironmentVolumeManager*                        VolumeManager;                                           // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLMaterialSetManager*                               MaterialSetManager;                                      // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLEnvironmentMaterialParameterManager*              MaterialParameterManager;                                // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D8LC[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapEnvironmentCharacterWind*                        CharacterWind;                                           // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7X81[0x40];                                  // 0x0078(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapEnvironmentTLSkyBlender*                         EnvironmentSkyBlender;                                   // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C5CG[0x90];                                  // 0x00C0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapEnvironmentAffectorComponent*                    PlayerEnvironmentAffector;                               // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WOZL[0x128];                                 // 0x0158(0x0128) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealEnvironmentVolume
	 * Size -> 0x2510 (FullSize[0x27B8] - InheritedSize[0x02A8])
	 */
	class AUnrealEnvironmentVolume : public AVolume
	{
	public:
		EMapEnvironmentVolumeType                                  VolumeType;                                              // 0x02A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3WNK[0x3];                                   // 0x02A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EMapEnvironmentWeather                                     MostWeightedActiveWeather;                               // 0x02AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9Q6Z[0x3];                                   // 0x02AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EMapEnvironmentWeather                                     RequestedVolumeWeather;                                  // 0x02B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D0Y4[0x3];                                   // 0x02B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EMapEnvironmentWeather                                     MostWeightedVolumeWeather;                               // 0x02B4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U05F[0x3];                                   // 0x02B5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      EditorWaterLevel;                                        // 0x02B8(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x02BC(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUnrealEnvVolumeLayer                                      Layer;                                                   // 0x02CC(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S474[0x7];                                   // 0x02CD(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBoundless;                                              // 0x02D4(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ID0[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OuterBorderWidth;                                        // 0x02D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSingleWeather;                                          // 0x02DC(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQCP[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivationTags[0x50];                                    // 0x02E0(0x0050) UNKNOWN PROPERTY: SetProperty
		EMapEnvironmentWaterType                                   WaterType;                                               // 0x0330(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TW3[0x3];                                   // 0x0331(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      MaxWaterDrougthHeight;                                   // 0x0334(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialWaterDroughtHeight;                               // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaterFlowWorldDirection;                                 // 0x033C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterFlowMinSpeed;                                       // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterFlowMaxSpeed;                                       // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WaterPlaneTag;                                           // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AStaticMeshActor*                                    BoundWaterPlane;                                         // 0x0358(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LightMaxDrawDistanceScale;                               // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInDuration;                                         // 0x0364(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutDuration;                                        // 0x0368(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSingleTime;                                          // 0x036C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T20Q[0x3];                                   // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TLazyObjectPtr<class AUnrealEnvironmentVolume>             WeatherBoundVolume;                                      // 0x0370(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q0V[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     CharacterWindParticleSystem;                             // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKMX[0x208];                                 // 0x0398(0x0208) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMapEnvironmentWeather, struct FMapEnvironmentWeatherDataContext> WeatherDataContextTable;                                 // 0x05A0(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZAJB[0x2158];                                // 0x05F0(0x2158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMapEnvironmentWeather, struct FMapEnvironmentWeatherData> WeatherDataTable;                                        // 0x2748(0x0050) Deprecated, NativeAccessSpecifierPrivate
		TLazyObjectPtr<class AStaticMeshActor>                     WaterPlane;                                              // 0x2798(0x001C) Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7SXM[0x4];                                   // 0x27B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapEnvironmentVolumeManager
	 * Size -> 0x04B0 (FullSize[0x04D8] - InheritedSize[0x0028])
	 */
	class UMapEnvironmentVolumeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_R53G[0x4B0];                                 // 0x0028(0x04B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapFadingManager
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UMapFadingManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_V1AN[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapMiniActor
	 * Size -> 0x0260 (FullSize[0x0490] - InheritedSize[0x0230])
	 */
	class AMapMiniActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_RR7B[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0238(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FGuid>                            ComponentIDByName;                                       // 0x0248(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5TT6[0x60];                                  // 0x0298(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapRoomActionContext*                               ActionContext;                                           // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		unsigned char                                              UnknownData_6MY2[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, class USceneComponent*>                 ComponentByGuid;                                         // 0x0310(0x0050) ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<struct FGuid, struct FMapMiniComponentOverrideData>   OverriddenComponentDataTable;                            // 0x0360(0x0050) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UTLMapRoomDebugVisualizerComponent*                  DebugVisualizerComp;                                     // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AMapMiniOverrideComponentContainer*                  OverrideComponentContainer;                              // 0x03B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NRUQ[0xD0];                                  // 0x03C0(0x00D0) MISSED OFFSET (PADDING)

	public:
		void OnParticleEvent(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapHiveActor
	 * Size -> 0x0238 (FullSize[0x06C8] - InheritedSize[0x0490])
	 */
	class AMapHiveActor : public AMapMiniActor
	{
	public:
		class UHiveEntityData*                                     HiveEntity;                                              // 0x0490(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistentObject;                                       // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClientOnly;                                             // 0x0499(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SY3[0x6];                                   // 0x049A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GroupTags;                                               // 0x04A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5W7[0x30];                                  // 0x04B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     BoundSceneObjects;                                       // 0x04E0(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
		struct FGuid                                               BuiltHivePackageGuid;                                    // 0x04F0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_STIP[0x38];                                  // 0x0500(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0538(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0540(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ModelComponentID;                                        // 0x0548(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     TemplateModelComponent;                                  // 0x0558(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class Umaproom*                                            maproom;                                                 // 0x0560(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               BuiltRoomPackageGuid;                                    // 0x0568(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7ES0[0x8];                                   // 0x0578(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivePartComponentGuids[0x50];                          // 0x0580(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ActiveCueSheetTags[0x50];                                // 0x05D0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_M4AY[0xA8];                                  // 0x0620(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMapManagedComponent
	 * Size -> 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
	 */
	class UUnrealMapManagedComponent : public UActorComponent
	{
	public:
		struct FGuid                                               GroupID;                                                 // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMapManagedTagActivation                            TagActivation2;                                          // 0x00C0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FMapManagedTagBinding                               TagBinding;                                              // 0x0140(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6WT[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapMaterialPermutation
	 * Size -> 0x00C8 (FullSize[0x02F8] - InheritedSize[0x0230])
	 */
	class AMapMaterialPermutation : public AInfo
	{
	public:
		bool                                                       CanBindBakedMaterialSet;                                 // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KSZ[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstance*>                           LandMaterialPermutations;                                // 0x0238(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, struct FMapBakedConditionList>           LandConditionTable;                                      // 0x0248(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, struct FGuid>                            ComponentVolumeBindings;                                 // 0x0298(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TArray<class UUnrealBakedMaterialSet*>                     BakedMaterialSets;                                       // 0x02E8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapMaterialPermutationUserData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMapMaterialPermutationUserData : public UTLMapUserData
	{
	public:
		TLazyObjectPtr<class AMapMaterialPermutation>              MapMaterialPermutationActor;                             // 0x0028(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I039[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapMiniOverrideComponentContainer
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class AMapMiniOverrideComponentContainer : public AActor
	{
	public:
		TMap<struct FGuid, struct FMapMiniComponentOverrideData>   ComponentOverrideDataByGuid;                             // 0x0230(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMapRoomInstanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActionContext
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UMapRoomActionContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_MWYW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapRoomAction*>                              Actions;                                                 // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B7WZ[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UMapRoomActionBindSocket*>         BindSocketActions;                                       // 0x0060(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomObject
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UMapRoomObject : public UObject
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMapRoomPart*>                                Parts;                                                   // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FGuid, class UMapRoomPart*>                    PartTable;                                               // 0x0048(0x0050) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.maproom
	 * Size -> 0x0218 (FullSize[0x02B0] - InheritedSize[0x0098])
	 */
	class Umaproom : public UMapRoomObject
	{
	public:
		bool                                                       bInheritCollisionProfile;                                // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreSkeleltalMeshCompCollision;                       // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DB8[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FGuid>                            OverrideSocketNameToPartGuid;                            // 0x00A0(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FVector>                          OverrideSocketNameToPositionOffset;                      // 0x00F0(0x0050) Deprecated, NativeAccessSpecifierPublic
		TMap<class FName, struct FTransform>                       OverrideSocketNameToTransforms;                          // 0x0140(0x0050) NativeAccessSpecifierPublic
		struct FGuid                                               PackageGuid;                                             // 0x0190(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W85B[0x58];                                  // 0x01A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapRoomPartGroup*>                           Groups;                                                  // 0x01F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FGuid, class UMapRoomPartGroup*>               GroupTable;                                              // 0x0208(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C234[0x58];                                  // 0x0258(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActor
	 * Size -> 0x00A0 (FullSize[0x0530] - InheritedSize[0x0490])
	 */
	class AMapRoomActor : public AMapMiniActor
	{
	public:
		class Umaproom*                                            maproom;                                                 // 0x0490(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMapManagedTagActivation                            TagActivation;                                           // 0x0498(0x0080) Edit, NativeAccessSpecifierPublic
		class AFadingGroupActor*                                   FadingGroupActor;                                        // 0x0518(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BuiltRoomPackageGuid;                                    // 0x0520(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.EmbeddedMapRoomActor
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class AEmbeddedMapRoomActor : public AMapRoomActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomAction
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMapRoomAction : public UObject
	{
	public:
		unsigned char                                              UnknownData_P5X8[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActionLightAnimation
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMapRoomActionLightAnimation : public UMapRoomAction
	{
	public:
		unsigned char                                              UnknownData_XIFZ[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPartGroup
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMapRoomPartGroup : public UObject
	{
	public:
		class FName                                                Name2;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       PartGuids;                                               // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPartGroupLightAnimation
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UMapRoomPartGroupLightAnimation : public UMapRoomPartGroup
	{
	public:
		float                                                      Duration;                                                // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E47X[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveScale;                                              // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CurveColor;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VariationDuration;                                       // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WY7H[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveVariation;                                          // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0078(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.RoomLightBillboardComponent
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class URoomLightBillboardComponent : public UBillboardComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.RoomPointLightComponent
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class URoomPointLightComponent : public UPointLightComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.RoomSpotLightComponent
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class URoomSpotLightComponent : public USpotLightComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPart
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMapRoomPart : public UMapRoomObject
	{
	public:
		class USceneComponent*                                     SourceComponent;                                         // 0x0098(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceiveParticleEvent;                                   // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeverRendered;                                          // 0x00A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizingPart;                                         // 0x00A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OptimizingFlags;                                         // 0x00A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x00A4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4J3[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPointLightPart
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMapRoomPointLightPart : public UMapRoomPart
	{
	public:
		class UPointLightComponent*                                SourcePointLightComponent;                               // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomSpotLightPart
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMapRoomSpotLightPart : public UMapRoomPart
	{
	public:
		class USpotLightComponent*                                 SourceSpotLightComponent;                                // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomVolumePart
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UMapRoomVolumePart : public UMapRoomPart
	{
	public:
		bool                                                       bIsCylinder;                                             // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYUH[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CylinderRadius;                                          // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CylinderHeight;                                          // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z7T[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VolumePoints;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                      VolumeHeight;                                            // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLZE[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBrushComponent*                                     SourceBrushComponent;                                    // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UModel*                                              VolumeModel;                                             // 0x00E0(0x0008) ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBodySetup*                                          VolumeBodySetup;                                         // 0x00E8(0x0008) ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomBrushPart
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMapRoomBrushPart : public UMapRoomPart
	{
	public:
		class UStaticMeshComponent*                                SourceStaticMeshComponent;                               // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomStaticMeshPart
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UMapRoomStaticMeshPart : public UMapRoomPart
	{
	public:
		class UStaticMeshComponent*                                SourceStaticMeshComponent;                               // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerOnlyCollision;                                    // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClientOnlyCollision;                                    // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderOnCollisionPawn;                                  // 0x00BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachmentSocket;                                       // 0x00BB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82XE[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomSkeletalMeshPart
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UMapRoomSkeletalMeshPart : public UMapRoomPart
	{
	public:
		class USkeletalMeshComponentBudgeted*                      SourceSkeletalMeshComponent;                             // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AnimMontagePath;                                         // 0x00B8(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AnimDataPath;                                            // 0x00D0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultSequence;                                         // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMovingCollision;                                  // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3H5[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.RoomParticleSystemComponent
	 * Size -> 0x0000 (FullSize[0x06E0] - InheritedSize[0x06E0])
	 */
	class URoomParticleSystemComponent : public UParticleSystemComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomParticlePart
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UMapRoomParticlePart : public UMapRoomPart
	{
	public:
		class UParticleSystemComponent*                            SourceParticleSystemComponent;                           // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHandleParticleEvent;                                    // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoActivateByPartSetting;                              // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNXA[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomDecalPart
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMapRoomDecalPart : public UMapRoomPart
	{
	public:
		class UDecalComponent*                                     SourceDecalComponent;                                    // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomNavModifierVolumePart
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UMapRoomNavModifierVolumePart : public UMapRoomVolumePart
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomEffectVolumePart
	 * Size -> 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
	 */
	class UMapRoomEffectVolumePart : public UMapRoomVolumePart
	{
	public:
		EMapRoomVolumeEffect                                       effect;                                                  // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92MJ[0x3];                                   // 0x00F1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_F8Y4[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActionTag
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMapRoomActionTag : public UMapRoomAction
	{
	public:
		unsigned char                                              UnknownData_FATK[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPartGroupTag
	 * Size -> 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
	 */
	class UMapRoomPartGroupTag : public UMapRoomPartGroup
	{
	public:
		bool                                                       bForNavigation;                                          // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAZ0[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMapManagedTagActivation                            TagActivation2;                                          // 0x0058(0x0080) Edit, NativeAccessSpecifierPublic
		struct FMapTagActivationSetting                            TagActivation;                                           // 0x00D8(0x0018) Deprecated, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x00F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActionBindSocket
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class UMapRoomActionBindSocket : public UMapRoomAction
	{
	public:
		unsigned char                                              UnknownData_N5NN[0x90];                                  // 0x0040(0x0090) MISSED OFFSET (PADDING)

	public:
		void PostPoseUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPartGroupBindSocket
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UMapRoomPartGroupBindSocket : public UMapRoomPartGroup
	{
	public:
		struct FGuid                                               TargetGuid;                                              // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLYA[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0070(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomSoundPart
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UMapRoomSoundPart : public UMapRoomPart
	{
	public:
		class UTLSoundComponent*                                   SourceSoundComponent;                                    // 0x00B0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FMapRoomSoundCue>                 OnParticleEventSounds;                                   // 0x00B8(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomActionWindAnimation
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMapRoomActionWindAnimation : public UMapRoomAction
	{
	public:
		unsigned char                                              UnknownData_W7MV[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRoomPartGroupWindAnimation
	 * Size -> 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
	 */
	class UMapRoomPartGroupWindAnimation : public UMapRoomPartGroup
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateByWindDireciton;                                  // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJLJ[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendSpeedScale;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAnimationLayer;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VBI[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapRoomWindAnimationSectionData>            SectionDataArrayForStop;                                 // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinSpeedForSlow;                                         // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJYR[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapRoomWindAnimationSectionData>            SectionDataArrayForSlow;                                 // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinSpeedForFast;                                         // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedForFast;                                         // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMapRoomWindAnimationSectionData>            SectionDataArrayForFast;                                 // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                        SectionAnimMontages[0x3];                                // 0x00A8(0x0018) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        GradeAnimMontages[0x3];                                  // 0x00C0(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x00D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteManager
	 * Size -> 0x0260 (FullSize[0x0288] - InheritedSize[0x0028])
	 */
	class UMapRouteManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_17LN[0x258];                                 // 0x0028(0x0258) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULineBatchComponent*                                 RoutePathComponent;                                      // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteComponentInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMapRouteComponentInfo : public UObject
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3589[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteAnchorInfo
	 * Size -> 0x00C0 (FullSize[0x0100] - InheritedSize[0x0040])
	 */
	class UMapRouteAnchorInfo : public UMapRouteComponentInfo
	{
	public:
		struct FVector                                             position;                                                // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCK2[0xAC];                                  // 0x0054(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteEdgeInfo
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMapRouteEdgeInfo : public UMapRouteComponentInfo
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteConnectionInfo
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMapRouteConnectionInfo : public UMapRouteComponentInfo
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteShapeInfo
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UMapRouteShapeInfo : public UObject
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForCitizen;                                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForMonster;                                             // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForPlayer;                                              // 0x004A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ2B[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnchorInfos[0x50];                                       // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              EdgeInfos[0x50];                                         // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ConnectionInfos[0x50];                                   // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_GO3O[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteShapeComponent
	 * Size -> 0x0068 (FullSize[0x0500] - InheritedSize[0x0498])
	 */
	class UMapRouteShapeComponent : public UMeshComponent
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0498(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJ57[0x20];                                  // 0x04A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     DebugShapeVertices;                                      // 0x04C8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector2D>                                   DebugShapeUVs;                                           // 0x04D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<uint32_t>                                           DebugShapeIndices;                                       // 0x04E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            ShapeMaterial;                                           // 0x04F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteAnchorComponent
	 * Size -> 0x0140 (FullSize[0x0640] - InheritedSize[0x0500])
	 */
	class UMapRouteAnchorComponent : public UMapRouteShapeComponent
	{
	public:
		class FString                                              Description;                                             // 0x0500(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldPosition;                                           // 0x0514(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0520(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GPriorityWeight;                                         // 0x0524(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HPriorityWeight;                                         // 0x0528(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PF1S[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   WaypointID;                                              // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WaypointIDText;                                          // 0x0538(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FFJ[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, TWeakObjectPtr<class UMapRouteEdgeComponent>> LinkedEdgByAnchorID;                                     // 0x0550(0x0050) Edit, ExportObject, Transient, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              LinkedEdgeIDs[0x50];                                     // 0x05A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              LinkedConnectionIDs[0x50];                               // 0x05F0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void FixInvalidPositionZ();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteEdgeComponent
	 * Size -> 0x0030 (FullSize[0x0530] - InheritedSize[0x0500])
	 */
	class UMapRouteEdgeComponent : public UMapRouteShapeComponent
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x0500(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0510(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0520(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXFJ[0xC];                                   // 0x0524(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteConnectionComponent
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class UMapRouteConnectionComponent : public UMapRouteEdgeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapRouteShapeActor
	 * Size -> 0x0178 (FullSize[0x03A8] - InheritedSize[0x0230])
	 */
	class AMapRouteShapeActor : public AActor
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0230(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForCitizen;                                             // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForMonster;                                             // 0x0241(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForPlayer;                                              // 0x0242(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8ZA[0xF5];                                  // 0x0243(0x00F5) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapRouteShapeComponent*>                     ShapeComponents;                                         // 0x0338(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<struct FShapeColorInfo, class UMaterialInstanceDynamic*> ShapeMaterials;                                          // 0x0348(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYZ4[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterManager
	 * Size -> 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
	 */
	class UMapWaterManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_7TQR[0x258];                                 // 0x0028(0x0258) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterComponentInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMapWaterComponentInfo : public UObject
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B7Q[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterAnchorInfo
	 * Size -> 0x00B8 (FullSize[0x00F8] - InheritedSize[0x0040])
	 */
	class UMapWaterAnchorInfo : public UMapWaterComponentInfo
	{
	public:
		struct FVector                                             position;                                                // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URAR[0xA8];                                  // 0x0050(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterEdgeInfo
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMapWaterEdgeInfo : public UMapWaterComponentInfo
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterConnectionInfo
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMapWaterConnectionInfo : public UMapWaterComponentInfo
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterShapeInfo
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UMapWaterShapeInfo : public UObject
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForCitizen;                                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForMonster;                                             // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForPlayer;                                              // 0x004A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForWater;                                               // 0x004B(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB78[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnchorInfos[0x50];                                       // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              EdgeInfos[0x50];                                         // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ConnectionInfos[0x50];                                   // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_MBSP[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterShapeComponent
	 * Size -> 0x0060 (FullSize[0x04F8] - InheritedSize[0x0498])
	 */
	class UMapWaterShapeComponent : public UMeshComponent
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0498(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60TV[0x20];                                  // 0x04A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     DebugShapeVertices;                                      // 0x04C8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector2D>                                   DebugShapeUVs;                                           // 0x04D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<uint32_t>                                           DebugShapeIndices;                                       // 0x04E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterAnchorComponent
	 * Size -> 0x0158 (FullSize[0x0650] - InheritedSize[0x04F8])
	 */
	class UMapWaterAnchorComponent : public UMapWaterShapeComponent
	{
	public:
		class FString                                              Description;                                             // 0x04F8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0508(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldPosition;                                           // 0x050C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GPriorityWeight;                                         // 0x051C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HPriorityWeight;                                         // 0x0520(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXEF[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   WaypointID;                                              // 0x0528(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WaypointIDText;                                          // 0x0530(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBO3[0x8];                                   // 0x0540(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, class UMapWaterEdgeComponent*>          LinkedEdgeByAnchorID;                                    // 0x0548(0x0050) Edit, ExportObject, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              LinkedEdgeIDs[0x50];                                     // 0x0598(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              LinkedConnectionIDs[0x50];                               // 0x05E8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_J4AZ[0x10];                                  // 0x0638(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetComponent*                                    NameplateComponent;                                      // 0x0648(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void FixInvalidPositionZ();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterEdgeComponent
	 * Size -> 0x0038 (FullSize[0x0530] - InheritedSize[0x04F8])
	 */
	class UMapWaterEdgeComponent : public UMapWaterShapeComponent
	{
	public:
		struct FGuid                                               StartAnchorID;                                           // 0x04F8(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EndAnchorID;                                             // 0x0508(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0518(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterFlowMinSpeed;                                       // 0x051C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterFlowMaxSpeed;                                       // 0x0520(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AQ4[0xC];                                   // 0x0524(0x000C) MISSED OFFSET (PADDING)

	public:
		void SwapAnchors();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterConnectionComponent
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class UMapWaterConnectionComponent : public UMapWaterEdgeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MapWaterShapeActor
	 * Size -> 0x0168 (FullSize[0x0398] - InheritedSize[0x0230])
	 */
	class AMapWaterShapeActor : public AActor
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0230(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELNZ[0xF0];                                  // 0x0240(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMapWaterShapeComponent*>                     ShapeComponents;                                         // 0x0330(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  TextMaterial;                                            // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            AnchorMaterial;                                          // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            EdgeMaterial;                                            // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ConnectionMaterial;                                      // 0x0358(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SelectedAnchorMaterial;                                  // 0x0360(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SelectedEdgeMaterial;                                    // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SelectedConnectionMaterial;                              // 0x0370(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SelectedInvalidAnchorMaterial;                           // 0x0378(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            InvalidAnchorMaterial;                                   // 0x0380(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAFH[0x10];                                  // 0x0388(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MaterialInstanceMerged
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UMaterialInstanceMerged : public UMaterialInstanceConstant
	{
	public:
		unsigned char                                              UnknownData_9FHM[0x28];                                  // 0x0318(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.MaterialInstanceDynamicMerged
	 * Size -> 0x0150 (FullSize[0x04B0] - InheritedSize[0x0360])
	 */
	class UMaterialInstanceDynamicMerged : public UMaterialInstanceDynamic
	{
	public:
		unsigned char                                              UnknownData_VMR6[0x150];                                 // 0x0360(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMaterialSet
	 * Size -> 0x00A8 (FullSize[0x03B8] - InheritedSize[0x0310])
	 */
	class UUnrealMaterialSet : public UMaterialInstance
	{
	public:
		bool                                                       bBakeOnly;                                               // 0x0310(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGC6[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialSetCondition>                       ConditionList;                                           // 0x0318(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                CurrentCondition;                                        // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ActualParent;                                            // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  PrevParent;                                              // 0x0338(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, ESnPhysicalSurface>                      LayerPhysicalSurfaces;                                   // 0x0340(0x0050) Edit, NativeAccessSpecifierPublic
		float                                                      Opacity;                                                 // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKO2[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialSetPermutationCache>                PermutationCaches;                                       // 0x0398(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialSetMIDInitialParams>                MaterialSetMIDInitialParams;                             // 0x03A8(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMaterialSetMerged
	 * Size -> 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
	 */
	class UUnrealMaterialSetMerged : public UUnrealMaterialSet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.ParticleModuleTypeDataTLRibbon
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UParticleModuleTypeDataTLRibbon : public UParticleModuleTypeDataRibbon
	{
	public:
		float                                                      MaxTrailLength;                                          // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBindStartToEmitter;                                     // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothTrail;                                            // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYZ7[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ParticleMergeTolerance;                                  // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CornerCuttingWeight;                                     // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CornerCuttingCount;                                      // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05HY[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.PathFollowWorldDrawerComponent
	 * Size -> 0x0098 (FullSize[0x0290] - InheritedSize[0x01F8])
	 */
	class UPathFollowWorldDrawerComponent : public USceneComponent
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x01F8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y583[0x18];                                  // 0x0200(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SplineStaticMesh;                                        // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USplineMeshComponent*>                        SplineMeshes;                                            // 0x0220(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CN49[0x48];                                  // 0x0230(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSplineParticleComponent*                          SplineParticleComponent;                                 // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QY90[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.RecastNavMeshMod
	 * Size -> 0x0000 (FullSize[0x04E8] - InheritedSize[0x04E8])
	 */
	class ARecastNavMeshMod : public ARecastNavMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneActorCommonInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USceneActorCommonInterface : public UGameplayTaskOwnerInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLOutlineInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLOutlineInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLHitReactionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLHitReactionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAttachableSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLAttachableSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPotentialMovingFloorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLPotentialMovingFloorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLDebugDrawActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLDebugDrawActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneSimpleActor
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class AUnrealSceneSimpleActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_EXFB[0x20];                                  // 0x0230(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUnrealSceneRootComponent*                           SceneRootComponent;                                      // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLActionTreeComponent*                              ActionTreeComponent;                                     // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CCPD[0x28];                                  // 0x0268(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QU54[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneAreaObject
	 * Size -> 0x0250 (FullSize[0x04F0] - InheritedSize[0x02A0])
	 */
	class ASceneAreaObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_WXB3[0x250];                                 // 0x02A0(0x0250) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCachedCompositedMeshUserData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USceneCachedCompositedMeshUserData : public UAssetUserData
	{
	public:
		ESnModelCompositeHairMode                                  HairMode;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeEarMode                                   EarMode;                                                 // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeFaceType                                  FaceType;                                                // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAAS[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneFieldObject
	 * Size -> 0x0320 (FullSize[0x05C0] - InheritedSize[0x02A0])
	 */
	class ASceneFieldObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_DVMY[0x238];                                 // 0x02A0(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLFieldObjectAsset*                                 FieldObjectAsset;                                        // 0x04D8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldPlaceOnWaterPlane;                                // 0x04E0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLFOPriority                                              FOPriority;                                              // 0x04E1(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5ZYK[0xC6];                                  // 0x04E2(0x00C6) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       PickingBox;                                              // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                PickingCylinder;                                         // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BTGQ[0x8];                                   // 0x05B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneGlobalObject
	 * Size -> 0x01F0 (FullSize[0x0490] - InheritedSize[0x02A0])
	 */
	class ASceneGlobalObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_X5LD[0x1F0];                                 // 0x02A0(0x01F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneIndicatorObject
	 * Size -> 0x01F0 (FullSize[0x0490] - InheritedSize[0x02A0])
	 */
	class ASceneIndicatorObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_FAVU[0x1F0];                                 // 0x02A0(0x01F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneItemObject
	 * Size -> 0x0218 (FullSize[0x04B8] - InheritedSize[0x02A0])
	 */
	class ASceneItemObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_THFC[0x200];                                 // 0x02A0(0x0200) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLDropItemAsset*                                    DropItemAsset;                                           // 0x04A0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW0H[0x10];                                  // 0x04A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.CharacterPhysicsMotion
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UCharacterPhysicsMotion : public UObject
	{
	public:
		TArray<struct FCharacterPhysicsControllerOption>           PrimaryForce;                                            // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterPhysicsControllerOption>           SecondaryForce;                                          // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterPhysicsMotionLimitSetting>         MotionLimit;                                             // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterPhysicsMotionBlendingSetting>      BlendingSetting;                                         // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EPhysicsActionType                                         ActionType;                                              // 0x0068(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_5RJW[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneVolumeObject
	 * Size -> 0x02B8 (FullSize[0x0558] - InheritedSize[0x02A0])
	 */
	class ASceneVolumeObject : public AUnrealSceneSimpleActor
	{
	public:
		unsigned char                                              UnknownData_7YGT[0x2B8];                                 // 0x02A0(0x02B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.ShowOnlyLevelsVolume
	 * Size -> 0x00C0 (FullSize[0x0368] - InheritedSize[0x02A8])
	 */
	class AShowOnlyLevelsVolume : public AVolume
	{
	public:
		unsigned char                                              WorldAssetsToDraw[0x10];                                 // 0x02A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ShowOnlyLevelAndActorNames[0x50];                        // 0x02B8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_O0Y7[0x60];                                  // 0x0308(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SplineDecalActor
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class ASplineDecalActor : public AActor
	{
	public:
		bool                                                       bEditing;                                                // 0x0230(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QT9K[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Width;                                                   // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartFadingLength;                                       // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndFadingLength;                                         // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideGapReduction;                                        // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SamplingStep;                                            // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TilingLength;                                            // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceMarginAbove;                                        // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceMarginBelow;                                        // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZOffset;                                                 // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseProjectedSurfaceNormal;                              // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotate90;                                               // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeOnly;                                          // 0x025A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FURI[0x1];                                   // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SmoothIterations;                                        // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplitLength;                                             // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW1I[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplineComponent;                                         // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProceduralMeshComponent*                            ProceduralMeshComponent;                                 // 0x0270(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLSplineParticleComponent*                          SplineParticleComponent;                                 // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ConstructMeshDecal();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeComponent
	 * Size -> 0x00F0 (FullSize[0x01A0] - InheritedSize[0x00B0])
	 */
	class UTLActionTreeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GSO0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActionSystemOwner[0x10];                                 // 0x00C0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_AJT8[0xD0];                                  // 0x00D0(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeDebugSettings
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UTLActionTreeDebugSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_VG5X[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHudEnabled;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLE5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterestRadius;                                          // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLocator;                                            // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJWQ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWorldDebuggerHudTextOptions                      TextOptions;                                             // 0x003C(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		ETLActionTreeDebugVerbosity                                ActionTreeDebugVerbosity;                                // 0x004C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0KR[0x3];                                   // 0x004D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bDisplayActionTreeFilterEnabled;                         // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDG0[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayActionTreeFilter;                                 // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayActorFilterEnabled;                              // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6EO[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayActorNameFilter;                                  // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DisplayActorIDListFilter[0x50];                          // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bUseMaxActionTreesToDisplay;                             // 0x00D0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0DW[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxActionTreesToDisplay;                                 // 0x00D4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxActionNodesToDisplay;                             // 0x00D8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIFY[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxActionNodesToDisplay;                                 // 0x00DC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSuppressActionList;                                  // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY8C[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SuppressActionList[0x50];                                // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bAllowedActionTreeFilterEnabled;                         // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MR7A[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AllowedActionTreeFilter;                                 // 0x0140(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockedActionTreeFilterEnabled;                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GG25[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BlockedActionTreeFilter;                                 // 0x0158(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceEvalTrueConditionFilterEnabled;                    // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8MA[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ForceEvalTrueConditionFilter;                            // 0x0170(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLActionTreeOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UTLActionTreeSection : public UMovieSceneSection
	{
	public:
		ESnScenarioContiOverrideType                               ContiOverrideType;                                       // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioContiActionModelType                            ContiModelApplyType;                                     // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EML[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ActionTreeAssetPath;                                     // 0x00F0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetLifeTimeAsSectionDuration;                           // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeLoopAnimation;                                   // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableAnimSpeedModifier;                               // 0x010A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8D2[0x1];                                   // 0x010B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConditionName;                                           // 0x010C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ContiKeyName;                                            // 0x0114(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TargetId;                                                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionSpeed;                                             // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionScale;                                             // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneTrack
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UUnrealMovieSceneTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLActionTreeTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_6DTR[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATNode
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UTLATNode : public UObject
	{
	public:
		class FString                                              NodeName;                                                // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTLATNode*>                                   Children;                                                // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UTLActionTree*                                       SourceActionTree;                                        // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3S3[0x60];                                  // 0x0060(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATRootNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UTLATRootNode : public UTLATNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATConditionNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UTLATConditionNode : public UTLATNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATTemplateNode
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UTLATTemplateNode : public UTLATNode
	{
	public:
		class FName                                                TemplateName;                                            // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATPostFinishActionTreeNode
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UTLATPostFinishActionTreeNode : public UTLATNode
	{
	public:
		class UTLActionTree*                                       SubActionTree;                                           // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATActionNode
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UTLATActionNode : public UTLATNode
	{
	public:
		bool                                                       bTriggerIfParentFinished;                                // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNZE[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TriggerEvent;                                            // 0x00C4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawEnabled;                                       // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMuted;                                                // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7SZ[0x6];                                   // 0x00CE(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAllowTriggerIfParentFinished;                           // 0x00D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HBF8[0xB];                                   // 0x00D5(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTree
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UTLActionTree : public UPrimaryDataAsset
	{
	public:
		class UTLATRootNode*                                       RootNode;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEffectDirectionOverride>                    EffectDirectionOverrideList;                             // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActionTreeWorldSubsystem
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UTLActionTreeWorldSubsystem : public UWorldSubsystem
	{
	public:
		TMap<class UTLActionTree*, struct FTLActionTreeLoadInfo>   ActionTreeLoadInfo;                                      // 0x0030(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H2PE[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActorPool
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UTLActorPool : public UObject
	{
	public:
		TArray<class ATLPooledActor*>                              PooledActors;                                            // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IBTQ[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActorPoolSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTLActorPoolSettings : public UObject
	{
	public:
		TArray<class FName>                                        ActorPoolClasses;                                        // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLActorPoolWorldSubsystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UTLActorPoolWorldSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_FR29[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTLActorPool*>                                ActorPools;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAmbientSound
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ATLAmbientSound : public AActor
	{
	public:
		class UTLSoundComponent*                                   SoundComponent;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAnimationStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLAnimationStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool SkeletalMeshAssiginNewSkeleton(class USkeletalMesh* InSkeletalMesh, class USkeleton* InSkeleton);
		TArray<class FName> GetSkeletonBoneNames(class USkeleton* InSkeleton);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAnimDynamicsAsset
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UTLAnimDynamicsAsset : public UObject
	{
	public:
		class USkeletalMesh*                                       TargetMesh;                                              // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoCollisionForFirstNode;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6F1[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BodySeachExtentPadding;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyLimitScale;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearDamping;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularDamping;                                       // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumSticklikeRatio;                                   // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFlatnessRatio;                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumAngularLimit;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdaptiveLocalJointOffset;                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPI7[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DefaultLocalJointOffset;                                 // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTLAnimDynamicsChain>                        Chains;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAssetManager
	 * Size -> 0x0130 (FullSize[0x05A8] - InheritedSize[0x0478])
	 */
	class UTLAssetManager : public UAssetManager
	{
	public:
		unsigned char                                              UnknownData_O0JB[0x8];                                   // 0x0478(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     GameDataPath;                                            // 0x0480(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLGameData*                                         GameData;                                                // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FString, TWeakObjectPtr<class UObject>>         ObjectCache;                                             // 0x04A0(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HL4F[0x48];                                  // 0x04F0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     WorldCompositionPersistentLevel;                         // 0x0538(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     WorldPartitionPersistentLevel;                           // 0x0550(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      NeverCookWorldCompositionDirectories;                    // 0x0568(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     ContentsAssetDataPath;                                   // 0x0578(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLContentsAssetData*                                ContentsAssetData;                                       // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D7HO[0x10];                                  // 0x0598(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAssetStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLAssetStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool RenameAssetIfEditorBuild(class UObject* InAsset, const class FString& InNewPackagePath, const class FString& InNewName);
		void FindSoftReferencesToObject(const struct FSoftObjectPath& TargetObject, TArray<class UObject*>* ReferencingObjects);
		class UObject* DuplicateAssetWithDialog(const class FString& AssetName, const class FString& PackagePath, class UObject* OriginalObject);
		class UObject* DuplicateAsset(const class FString& AssetName, const class FString& PackagePath, class UObject* OriginalObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_ActivateEventEnvironmentVolume
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_ActivateEventEnvironmentVolume : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionPlayRankSkillType                                 RankType;                                                // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB5D[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_EquipItem
	 * Size -> 0x0080 (FullSize[0x0160] - InheritedSize[0x00E0])
	 */
	class UTLATAction_EquipItem : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnDuration;                                       // 0x00E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQG4[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationSec;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        EquipSocketPoint;                                        // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHMA[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ItemAsset;                                               // 0x00F0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCharacterSlotItem;                                    // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulate;                                               // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFX2[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulateDelayTimeSec;                                    // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleToVelocityByAnimation;                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsMaxImpulseMagnitude;                              // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemSocketPoint;                                         // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0120(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       SocketPointHide;                                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllPointHide;                                            // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EYU[0xE];                                   // 0x0152(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_HideEquippedItem
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UTLATAction_HideEquippedItem : public UTLATActionNode
	{
	public:
		ESnModelSocketPoint                                        EquipSocketPoint;                                        // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetAllSocket;                                        // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_526K[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESnModelSocketPoint>                                EquipSocketPoints;                                       // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6PU[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeSec;                                            // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_442U[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_ModifyMapGraph
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_ModifyMapGraph : public UTLATActionNode
	{
	public:
		struct FGuid                                               ShapeID;                                                 // 0x00E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionMapGraphOperationType                             OperationType;                                           // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFIZ[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_MoveLeap
	 * Size -> 0x0168 (FullSize[0x0248] - InheritedSize[0x00E0])
	 */
	class UTLATAction_MoveLeap : public UTLATActionNode
	{
	public:
		float                                                      MoveDelayTimeSec;                                        // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndMotionTimeSec;                                        // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseHeight;                                              // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDynamicHeight;                                          // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MU75[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         HeightRange;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         DistanceRange;                                           // 0x0100(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeightTime;                                           // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiddleLength;                                            // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  MoveHeightCurve;                                         // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
		ESnMovementFormulaType                                     FormulaType;                                             // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MKL[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         FormulaSpeedScalar;                                      // 0x01A4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9NC[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  MoveSpeedCurve;                                          // 0x01B8(0x0088) Edit, NativeAccessSpecifierPublic
		ESnModelMovementAnimation                                  SystemAnimation;                                         // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetSocketMove;                                       // 0x0241(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetDirectionRotate;                                  // 0x0242(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseRotate;                                          // 0x0243(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRotate;                                            // 0x0244(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFullbodyMotion;                                         // 0x0245(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34UB[0x2];                                   // 0x0246(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_MoveStraight
	 * Size -> 0x00B8 (FullSize[0x0198] - InheritedSize[0x00E0])
	 */
	class UTLATAction_MoveStraight : public UTLATActionNode
	{
	public:
		float                                                      MoveDurationSec;                                         // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveDelayTimeSec;                                        // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndMotionTimeSec;                                        // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelMovementAnimation                                  SystemAnimation;                                         // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementFormulaType                                     FormulaType;                                             // 0x00ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7G5[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         FormulaSpeedScalar;                                      // 0x00F0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  MoveSpeedCurve;                                          // 0x0100(0x0088) Edit, NativeAccessSpecifierPublic
		float                                                      StrictlyLinearFormulaThreshold;                          // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetDirectionRotate;                                  // 0x018C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseRotate;                                          // 0x018D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRotate;                                            // 0x018E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFullbodyMotion;                                         // 0x018F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnGround;                                               // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreCollision;                                        // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11L4[0x6];                                   // 0x0192(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_MoveTeleport
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_MoveTeleport : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetPoint;                                             // 0x00E4(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreDistanceCheck;                                    // 0x00F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWA2[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayActionTree
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayActionTree : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6YG[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActionTreeToPlay[0x28];                                  // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayAimingAnimation
	 * Size -> 0x00C8 (FullSize[0x01A8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayAimingAnimation : public UTLATActionNode
	{
	public:
		struct FAnimationParam                                     Param;                                                   // 0x00E0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bUseLowerBodyMotion;                                     // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        StartPosSocket;                                          // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnAimingAnimationTarget                                   TargetPosType;                                           // 0x0186(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H77Q[0x1];                                   // 0x0187(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetPosHeightScale;                                    // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocket;                                            // 0x018C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA34[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PeakHeight;                                              // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PeakVector;                                              // 0x0194(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayAnimation
	 * Size -> 0x00D0 (FullSize[0x01B0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayAnimation : public UTLATActionNode
	{
	public:
		struct FAnimationParam                                     Param;                                                   // 0x00E0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bUseAiming;                                              // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KFR[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAimingAnimationSetting                             AimingOption;                                            // 0x0188(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M50G[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayBlendSpaceAnimation
	 * Size -> 0x00A8 (FullSize[0x0188] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayBlendSpaceAnimation : public UTLATActionNode
	{
	public:
		struct FAnimationParam                                     Param;                                                   // 0x00E0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              AxisX;                                                   // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              AxisY;                                                   // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_428H[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCameraLag
	 * Size -> 0x0058 (FullSize[0x0138] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCameraLag : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendFunction;                                           // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBYE[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bApplyInGameCameraOnly;                                  // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyNonInGameCameraOnly;                               // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWXA[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCameraSet
	 * Size -> 0x0060 (FullSize[0x0140] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCameraSet : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendInFunction;                                         // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YCH[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendInExp;                                              // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendOutFunction;                                        // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1AS[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendOutExp;                                             // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetPitchAngle;                                        // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetYawAngle;                                          // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVAngle;                                                // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddZoomDistance;                                         // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoalDistance;                                            // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitDistance;                                            // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitPitchAngle;                                          // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitYawAngle;                                            // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping : 1;                                            // 0x0138(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedRestore : 1;                                        // 0x0138(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStopBlendInByCameraRotate : 1;                       // 0x0138(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4TC[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCameraShake
	 * Size -> 0x0118 (FullSize[0x01F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCameraShake : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAirborneObjectIgnoreCameraShake;                        // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTooShortDistanceIgnoreCameraShake;                      // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8D7[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TooShortDistance;                                        // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyInGameCameraOnly;                                  // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseWidgetWhenNodeExecute;                             // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyNonInGameCameraOnly;                               // 0x0102(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIGN[0x1];                                   // 0x0103(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionDistanceFadeOptionData                     DistanceFadeOption;                                      // 0x0104(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseCameraDistanceFade;                                  // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCameraDistanceMaxIsFadeOut;                             // 0x0135(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THM1[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         CameraDistanceFadeRange;                                 // 0x0138(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLooping;                                              // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXH1[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OscillationDuration;                                     // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationBlendInTime;                                  // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationBlendOutTime;                                 // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExitLoopingWithoutBlendOut;                             // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockCameraWhileLoopShaking;                             // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16R4[0x2];                                   // 0x015A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeSec;                                            // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnTimeScale;                                      // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC1F[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeScale;                                               // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FROscillator                                        RotOscillation;                                          // 0x0168(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVOscillator                                        LocOscillation;                                          // 0x018C(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        FOVOscillation;                                          // 0x01B0(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStartInitLocation;                                      // 0x01BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJLH[0x3];                                   // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartBlendTime;                                          // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPitchAngle;                                         // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartYawAngleOffset;                                     // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDistance;                                           // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalBlendSec;                                           // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimScale;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimBlendInTime;                                         // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimBlendOutTime;                                        // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomAnimSegmentDuration;                               // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomAnimSegment : 1;                                  // 0x01E8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5WZ[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnim*                                         Anim;                                                    // 0x01F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCompoundAnimation
	 * Size -> 0x00C8 (FullSize[0x01A8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCompoundAnimation : public UTLATActionNode
	{
	public:
		ESnAnimationTrack                                          Track;                                                   // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceFullBody;                                          // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPlaying;                                            // 0x00E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMoveDuration;                                        // 0x00E3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAiming;                                              // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STE1[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAimingAnimationSetting                             AimingOption;                                            // 0x00EC(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseAdditive;                                            // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZGP[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendSpaceAnimSetting                              AdditiveSetting;                                         // 0x0114(0x003C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCompoundAnimationParam                             StartParam;                                              // 0x0150(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCompoundAnimationParam                             LoopParam;                                               // 0x0164(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCompoundAnimationParam                             EndParam;                                                // 0x0178(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDiscreteLoop;                                           // 0x018C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BMCF[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendInTime;                                             // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTimeBetweenStartLoop;                               // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTimeBetweenLoopEnd;                                 // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopSequenceOneShot;                                    // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9H08[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCompoundTime
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCompoundTime : public UTLATActionNode
	{
	public:
		float                                                      TotDurationSec;                                          // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelaySec;                                           // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDurationSec;                                        // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndDurationSec;                                          // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayCueSheet
	 * Size -> 0x0050 (FullSize[0x0130] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayCueSheet : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionPlayTargetType                                    PlayTarget;                                              // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionCueSheetOperationType                             OperationType;                                           // 0x00E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB2E[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CueName;                                                 // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHiveEntityData*                                     HiveEntity;                                              // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LevelSequencePath;                                       // 0x00F8(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncPlaybackPosition;                                   // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDestroy;                                            // 0x0111(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5QL[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ScenarioExclusiveTags;                                   // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      FadeDuration;                                            // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ApplyAudioTag;                                           // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6R1Q[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayDecal
	 * Size -> 0x0220 (FullSize[0x0300] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayDecal : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FShowConditionOptionData                            ShowConditionOption;                                     // 0x0144(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LinkedDecal;                                             // 0x0150(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentType                                          NodeParentType;                                          // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAirborneObjectSkipSpawn;                                // 0x016A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitInheritTransformWhenActionExecuted;                 // 0x016B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePoint;                                      // 0x016C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFindClosestGroundPosition;                              // 0x016D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQD4[0x2];                                   // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClosestGroundPositionRangeScale;                         // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDirectionType                                     DirectionType;                                           // 0x0174(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoRayCastForVirtualSocket;                              // 0x0175(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHitActionPointAsRayCastTarget;                       // 0x0176(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStitchToGround;                                         // 0x0177(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StitchedToGroundFadeStartDistance;                       // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StitchedToGroundFadeDuration;                            // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeScreenSize;                                          // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x0186(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnTimeScaleToFade;                                // 0x0187(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInSec;                                               // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeSec;                                                 // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnMultipleTimes;                                     // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstComponentFixedPos;                                 // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnDecalMultipleSpawnType                                  MultipleSpawnType;                                       // 0x0192(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F96F[0x1];                                   // 0x0193(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnedDecalLifeTime;                                    // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmitOnce;                                               // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PX6[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnRatePerSecond;                                      // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MultipleSpawnPositionInfo;                               // 0x01A0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUQQ[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlayDecalCurvedVector                      OffsetAnimationCurve;                                    // 0x01B0(0x0040) Edit, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotation;                                           // 0x01F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotationRandomOffset;                               // 0x01FC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionPlayDecalCurvedVector                      RotationAnimationRpmCurve;                               // 0x0208(0x0040) Edit, NativeAccessSpecifierPublic
		struct FVector                                             WorldOffset;                                             // 0x0248(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetRandomness;                                        // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectScaleRelativeTo;                                  // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectRelativeTarget                                  ScaleRelativeTarget;                                     // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSymmetric;                                            // 0x025A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectSymmetricScaleType                              SymmetricType;                                           // 0x025B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectLocalOffsetRelativeTo;                            // 0x025C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectRelativeTarget                                  LocalOffsetRelativeTarget;                               // 0x025D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorOverrideScale;                                     // 0x025E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BW0[0x1];                                   // 0x025F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleRandomness;                                         // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSnActionPlayDecalCurvedVector                      ScalingAnimationCurve;                                   // 0x0268(0x0040) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseCustomHeight : 1;                                    // 0x02A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQZJ[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomHeight;                                            // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SortOrder;                                               // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XS8B[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLCurvedScalar>                             RuntimeCurvedScalars;                                    // 0x02B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedColor>                              RuntimeCurvedColors;                                     // 0x02C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x02D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x02D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7SP[0x2];                                   // 0x02DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x02DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MapRoomPartName;                                         // 0x02E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x02E8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HGM[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x02EC(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x02FC(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6VS[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayDieAnimation
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayDieAnimation : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicsActionType                                         ActionType;                                              // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicsActionPowerLevel                                   PowerLevel;                                              // 0x00E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropItems;                                              // 0x00E6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitEffectDirection                                        HitEffectDirection;                                      // 0x00E7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleToVelocityByAnimation;                              // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2ED[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayEnvFieldObstacle
	 * Size -> 0x00F8 (FullSize[0x01D8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayEnvFieldObstacle : public UTLATActionNode
	{
	public:
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00E0(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnFoliageInteraction                                      InteractionType;                                         // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentType                                          NodeParentType;                                          // 0x012D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x012E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePoint;                                      // 0x012F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HH9Z[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RadiusScaleCurve[0x28];                                  // 0x0138(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector2D                                           RadiusScaleRange;                                        // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MKM[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IntensityScaleCurve[0x28];                               // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector2D                                           IntensityScaleRange;                                     // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x01A0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H91Y[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalOffsetCurve[0x28];                                  // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayFacialAnimation
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayFacialAnimation : public UTLATActionNode
	{
	public:
		class FName                                                FacialAnimationId;                                       // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeDelay;                                               // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVIT[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayFootprint
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayFootprint : public UTLATActionNode
	{
	public:
		ESnPlayLevel                                               PlayLevel;                                               // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0GX[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationSec;                                             // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTimeSec;                                          // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2L6[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayForceFeedback
	 * Size -> 0x0048 (FullSize[0x0128] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayForceFeedback : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              ForceFeedbackEffectPath[0x28];                           // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      DelayTimeSec;                                            // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI7S[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayFreezeAnimation
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayFreezeAnimation : public UTLATActionNode
	{
	public:
		ESnActionPlayOption                                        ActionPlayOptionType;                                    // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G54A[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTimeSec;                                            // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPendingDurationSec;                                   // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayHitAnimation
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayHitAnimation : public UTLATActionNode
	{
	public:
		float                                                      DelayTime;                                               // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffsetTime;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageScale;                                             // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageReactionSpeedScale;                                // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPseudoFlinchingConfigLayer                              PseudoFlinchingConfigLayer;                              // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverseHitDirection;                                    // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKinematicBonesUpdateEnabled;                            // 0x00FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R69N[0x5];                                   // 0x00FB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayHitBlockAnimation
	 * Size -> 0x00B8 (FullSize[0x0198] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayHitBlockAnimation : public UTLATActionNode
	{
	public:
		ESnActionPlayOption                                        ActionPlayOptionType;                                    // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4ID[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RewindPlayRate;                                          // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTimeSec;                                            // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPendingDurationSec;                                   // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimationParam                                     HitBlockMotion;                                          // 0x00F0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6XS[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayHitStopAnimation
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayHitStopAnimation : public UTLATActionNode
	{
	public:
		ESnActionPlayOption                                        ActionPlayOptionType;                                    // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnHitStopAnimationType                                    UpdateType;                                              // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYOB[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitStopDurationSec;                                      // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendingWeightFunctionExponent;                          // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionSpeedScaleFactor;                                  // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTimeSec;                                            // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPendingDurationSec;                                   // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayInteractionCamera
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayInteractionCamera : public UTLATActionNode
	{
	public:
		class FName                                                PresetName;                                              // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping : 1;                                            // 0x00EC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26GS[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   InteractionObjectId;                                     // 0x00F0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6BO[0x24];                                  // 0x00F4(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayLight
	 * Size -> 0x0948 (FullSize[0x0A28] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayLight : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnNodeParentType                                          NodeParentType;                                          // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x0145(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePoint;                                      // 0x0146(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFindClosestGroundPosition;                              // 0x0147(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClosestGroundPositionRangeScale;                         // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoRayCastForVirtualSocket;                              // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitInheritTransformWhenActionExecuted;                 // 0x014D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x014E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4E8[0x1];                                   // 0x014F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInTime;                                              // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTime;                                             // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x015C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x015D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x015E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHCP[0x1];                                   // 0x015F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x0164(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldOffset;                                             // 0x0170(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotate;                                             // 0x017C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnlightenOnlyLight;                                     // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightUnits                                                IntensityUnits;                                          // 0x0189(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CPZ[0x6];                                   // 0x018A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLCurvedScalar                                     IntensityCurve;                                          // 0x0190(0x0100) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayLightCurvedScalar                      Intensity;                                               // 0x0290(0x0040) NativeAccessSpecifierPublic
		bool                                                       bUseTemperature;                                         // 0x02D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68EC[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLCurvedScalar                                     TemperatureCurve;                                        // 0x02D8(0x0100) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayLightCurvedScalar                      Temperature;                                             // 0x03D8(0x0040) NativeAccessSpecifierPublic
		struct FTLCurvedColor                                      LightColorCurve;                                         // 0x0418(0x0288) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayLightCurvedColor                       LightColor;                                              // 0x06A0(0x0048) NativeAccessSpecifierPublic
		struct FTLCurvedScalar                                     IndirectLightingIntensityCurve;                          // 0x06E8(0x0100) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayLightCurvedScalar                      IndirectLightingIntensity;                               // 0x07E8(0x0040) NativeAccessSpecifierPublic
		struct FTLCurvedScalar                                     VolumetricScatteringIntensityCurve;                      // 0x0828(0x0100) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayLightCurvedScalar                      VolumetricScatteringIntensity;                           // 0x0928(0x0040) NativeAccessSpecifierPublic
		bool                                                       bCastDynamicShadows;                                     // 0x0968(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JLV[0x3];                                   // 0x0969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowResolutionScale;                                   // 0x096C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowBias;                                              // 0x0970(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowSharpen;                                           // 0x0974(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactShadowLength;                                     // 0x0978(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContactShadowLengthInWS;                                // 0x097C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTranslucentLighting;                              // 0x097D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransmission;                                           // 0x097E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GBG[0x1];                                   // 0x097F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDrawDistance;                                         // 0x0980(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceFadeRange;                                    // 0x0984(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x0988(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x098C(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGRB[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LightFunctionMaterial[0x28];                             // 0x0990(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             LightFunctionScale;                                      // 0x09B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T57O[0x4];                                   // 0x09C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IESTexture[0x28];                                        // 0x09C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseIESBrightness;                                       // 0x09F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSUN[0x3];                                   // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IESBrightnessScale;                                      // 0x09F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LightFunctionFadeDistance;                               // 0x09F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisabledBrightness;                                      // 0x09FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInverseSquaredFalloff;                               // 0x0A00(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UC4T[0x3];                                   // 0x0A01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LightFalloffExponent;                                    // 0x0A04(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceRadius;                                            // 0x0A08(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftSourceRadius;                                        // 0x0A0C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x0A10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpotLight;                                              // 0x0A14(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XU4[0x3];                                   // 0x0A15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InnerConeAngle;                                          // 0x0A18(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterConeAngle;                                          // 0x0A1C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0A20(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIFFDesaturation;                                     // 0x0A21(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX40[0x6];                                   // 0x0A22(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayLightning
	 * Size -> 0x0198 (FullSize[0x0278] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayLightning : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x0145(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NONH[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6RU[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FXAsset[0x28];                                           // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDirectionType                                     DirectionType;                                           // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x017A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x017B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorOverrideScale;                                     // 0x017D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPKS[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoltWeavingType                                           WeavingType;                                             // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothCorner;                                           // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAV7[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArcHeightScale;                                          // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArcRatioScale;                                           // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSnActionPlayLightningPointConfig                   SourcePointConfig;                                       // 0x0190(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DetachSourceAfterSeconds;                                // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSnActionPlayLightningPointConfig                   TargetPointConfig;                                       // 0x01D4(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTargetSelf;                                             // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYUN[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSnActionPlayLightningPointConfig>           SelfTargetPointConfigs;                                  // 0x0218(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bTargetBlockByMesh;                                      // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1N9[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TargetFXAsset[0x28];                                     // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bSpawnPerEdge;                                           // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x025A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PEA[0x1];                                   // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0260(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGU8[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0264(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x0274(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GWV[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayLoopAnimation
	 * Size -> 0x00E0 (FullSize[0x01C0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayLoopAnimation : public UTLATActionNode
	{
	public:
		struct FAnimationParam                                     Param;                                                   // 0x00E0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bUseAiming;                                              // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPVN[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAimingAnimationSetting                             AimingOption;                                            // 0x0188(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDiscreteLoop;                                           // 0x01AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVPY[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ReadySequence;                                           // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReadyTimeSec;                                            // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopTimeMargin;                                          // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayMaterialParam
	 * Size -> 0x0128 (FullSize[0x0208] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayMaterialParam : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FadeInTimeSec;                                           // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTimeSec;                                          // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMaterialParamPriority                                   Priority;                                                // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyMaterialSetCondition;                              // 0x014D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YO6[0x2];                                   // 0x014E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MaterialSetCondition;                                    // 0x0150(0x0008) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlayMaterialParamCurvedScalar>      Scalars;                                                 // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlayMaterialParamCurvedColor>       Colors;                                                  // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedScalar>                             RuntimeCurvedScalars;                                    // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedColor>                              RuntimeCurvedColors;                                     // 0x0188(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlayMaterialParamTexture>           Textures;                                                // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bApplyToWholeModel;                                      // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeBody;                                            // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeEquipedItem;                                     // 0x01AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49PG[0x1];                                   // 0x01AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SlotsForItem;                                            // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIFFDesaturation;                                     // 0x01B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLV2[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TargetMaterialSlotNames[0x50];                           // 0x01B8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayParticle
	 * Size -> 0x02E0 (FullSize[0x03C0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayParticle : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FShowConditionOptionData                            ShowConditionOption;                                     // 0x0144(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRA5[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ParticleSystemToPlay[0x28];                              // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseSkeletalMesh;                                        // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9X3[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlaySkeletalMeshEffectConfigData           SkeletalMeshConfig;                                      // 0x0188(0x00A0) Edit, NativeAccessSpecifierPublic
		bool                                                       bAttachToCamera;                                         // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDP3[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceFromCamera;                                      // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnCameraSocketPoint                                       CameraSocketPoint;                                       // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentType                                          NodeParentType;                                          // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x0232(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitInheritTransformWhenActionExecuted;                 // 0x0233(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePoint;                                      // 0x0234(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOverrideLayer;                                   // 0x0235(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFindClosestGroundPosition;                              // 0x0236(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADZH[0x1];                                   // 0x0237(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClosestGroundPositionRangeScale;                         // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePointLookedAt;                              // 0x023C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePointBlocked;                               // 0x023D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDirectionType                                     DirectionType;                                           // 0x023E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStitchToGround;                                         // 0x023F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StitchedToGroundFadeStartDistance;                       // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StitchedToGroundFadeDuration;                            // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceStitchToWaterLevel;                                // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomWorldOffset;                                   // 0x0249(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByHitDirection;                                 // 0x024A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectScaleRelativeTo;                                  // 0x024B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectRelativeTarget                                  ScaleRelativeTarget;                                     // 0x024C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSymmetric;                                            // 0x024D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectSymmetricScaleType                              SymmetricType;                                           // 0x024E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectLocalOffsetRelativeTo;                            // 0x024F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectRelativeTarget                                  LocalOffsetRelativeTarget;                               // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXML[0x2];                                   // 0x0252(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x025A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoRayCastForVirtualSocket;                              // 0x025B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHitActionPointAsRayCastTarget;                       // 0x025C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WE6C[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldOffset;                                             // 0x0260(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomWorldOffsetX;                                      // 0x026C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomWorldOffsetY;                                      // 0x027C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomWorldOffsetZ;                                      // 0x028C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorOverrideScale;                                     // 0x029C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y525[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlayEffectLocalTransformData               LocalTransform;                                          // 0x02A0(0x00B8) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FParticleSysParam>                           InstanceParameters;                                      // 0x0358(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x0368(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x0369(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QVB[0x2];                                   // 0x036A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         HitEffectDirectionAdjustRange_DEP;                       // 0x0370(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MapRoomPartName;                                         // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        MapRoomPartNames;                                        // 0x0388(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIncludeAllMapRoomPart;                                  // 0x0398(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseParticleObstacle;                                    // 0x0399(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5IQ[0x2];                                   // 0x039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ParticleObstacleRadius;                                  // 0x039C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleObstacleIntensity;                               // 0x03A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x03A4(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DDD[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x03A8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x03B8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77VP[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayPostProcessing
	 * Size -> 0x0110 (FullSize[0x01F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayPostProcessing : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSnActionDistanceFadeOptionData                     DistanceFadeOption;                                      // 0x0148(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FadeInTimeSec;                                           // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTimeSec;                                          // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6KR[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     PostProcessData;                                         // 0x0188(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScreenSpaceMousePosition;                            // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateScreenSpaceMousePositionEveryFrame;               // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWorldSpaceSpawnPosition;                             // 0x01A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScreenSpaceSpawnPosition;                            // 0x01A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateScreenSpaceSpawnPositionEveryFrame;               // 0x01A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExtendsScale;                                        // 0x01A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNMF[0x2];                                   // 0x01A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSnActionPlayPostProcessingCurvedScalar>     CurvedScalars;                                           // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlayPostProcessingCurvedColor>      CurvedColors;                                            // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedScalar>                             RuntimeCurvedScalars;                                    // 0x01C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedColor>                              RuntimeCurvedColors;                                     // 0x01D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCasterExclusiveOutline;                                 // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetExclusiveOutline;                                 // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyInGameCameraOnly;                                  // 0x01EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyNonInGameCameraOnly;                               // 0x01EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNZY[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayProjectile
	 * Size -> 0x0460 (FullSize[0x0540] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayProjectile : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncHitDelay;                                           // 0x00FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPSY[0x1];                                   // 0x00FB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeSec;                                            // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnFlightDuration;                                 // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyTimeScaleToFX;                                     // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC3A[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandardFlightDuractionSec;                              // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldTimeSec;                                             // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionProjectileType                                    ProjectileType;                                          // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBHU[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProjectileOffsetData                               StartLocationOffset;                                     // 0x0110(0x0044) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FProjectileOffsetData                               EndLocationOffset;                                       // 0x0154(0x0044) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FProjectileMortarData                               MortarData;                                              // 0x0198(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FProjectileArrowData                                ArrowData;                                               // 0x01BC(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        ArcherSocket;                                            // 0x01FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        HitTargetSocket;                                         // 0x01FD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        BlockedTargetSocket;                                     // 0x01FE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5DH[0x1];                                   // 0x01FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlayProjectileHeadData                     HeadConfig;                                              // 0x0200(0x0058) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayProjectileTrailData                    TrailConfig;                                             // 0x0258(0x0228) Edit, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     HitTargetParticle;                                       // 0x0480(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HitTargetActionTree[0x28];                               // 0x0498(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bAffectScaleRelativeTo;                                  // 0x04C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectRelativeTarget                                  ScaleRelativeTarget;                                     // 0x04C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSymmetric;                                            // 0x04C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFXObjectSymmetricScaleType                              SymmetricType;                                           // 0x04C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER72[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     SoundEventRef;                                           // 0x04C8(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x04E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x04E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEVU[0x2];                                   // 0x04E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x04E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoveringAltitude;                                        // 0x04E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoveringHeadFixedDirection;                             // 0x04EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R2I[0x3];                                   // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoveringStartTime;                                       // 0x04F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAimDirectionAdjust;                                     // 0x04F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO53[0x3];                                   // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimDirectionAdjustDuration;                              // 0x04F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoRayCastForVirtualSocket;                              // 0x04FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4T1[0x3];                                   // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalTranslationCurve[0x28];                             // 0x0500(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0528(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIOM[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x052C(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x053C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85MB[0x3];                                   // 0x053D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayResurrectAnimation
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayResurrectAnimation : public UTLATActionNode
	{
	public:
		EPhysicsActionType                                         ActionType;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HIP[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlaySegmentAnimation
	 * Size -> 0x00A8 (FullSize[0x0188] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlaySegmentAnimation : public UTLATActionNode
	{
	public:
		struct FAnimationParam                                     Param;                                                   // 0x00E0(0x00A4) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		float                                                      SegmentTimeSec;                                          // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlaySequentialAnimation
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlaySequentialAnimation : public UTLATActionNode
	{
	public:
		TArray<struct FAnimationParam>                             SequentialParams;                                        // 0x00E0(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bDiscreteLoop;                                           // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAiming;                                              // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OVW[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAimingAnimationSetting                             AimingOption;                                            // 0x00F4(0x0024) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlaySkidMark
	 * Size -> 0x00B0 (FullSize[0x0190] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlaySkidMark : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCAR[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     LinkedSkidMark;                                          // 0x0148(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAirborneObjectSkipSpawn;                                // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x0162(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJ3R[0x1];                                   // 0x0163(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInTime;                                              // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeSec;                                                 // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxQuadNum;                                              // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadLength;                                              // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadWidth;                                               // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadDuration;                                            // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadFadeOutTime;                                         // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidMarkLength;                                          // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x0184(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlaySnapshot
	 * Size -> 0x0360 (FullSize[0x0440] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlaySnapshot : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8KW[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ForcedLOD;                                               // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQWY[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnInterval;                                           // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotSpawnWhenHided;                                    // 0x0154(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnToWorld;                                           // 0x0155(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAnimation;                                          // 0x0156(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61EC[0x1];                                   // 0x0157(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeTime;                                                // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmitOnce;                                               // 0x015C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSnapshotEmitOnceLifetimeBehavior                        EmitOnceLifeTimeBehavior;                                // 0x015D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x015E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5YE[0x1];                                   // 0x015F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInsideSphereOfInterest;                                 // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByHitDirection;                                 // 0x0165(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      AimPoint;                                                // 0x0166(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDTO[0x1];                                   // 0x0167(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereRadius;                                            // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectUV;                                              // 0x016C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7SH[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectScale;                                            // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeBody;                                            // 0x0174(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9V3Z[0x3];                                   // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ArmorPartsBitMask;                                       // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeEquipedItem;                                     // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY6N[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SlotsForItem;                                            // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2KI[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IncludeMeshes[0x50];                                     // 0x0188(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ExcludeMeshes[0x50];                                     // 0x01D8(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bIgnoreParentOpacity;                                    // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x0229(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSnapshotCustomStencilType                               CustomStencilType;                                       // 0x022A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x022B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInTimeSec;                                           // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTimeSec;                                          // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QA77[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OpacityCurve[0x28];                                      // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FRunTimeFloatCurvePropertyHelper                    OpacityCurveRunTime;                                     // 0x0260(0x0088) Edit, NativeAccessSpecifierPublic
		float                                                      NormalExtrudeMagnitude;                                  // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGF6[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              NormalExtrudeMagnitudeCurve[0x28];                       // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FRunTimeFloatCurvePropertyHelper                    NormalExtrudeMagnitudeCurveRunTime;                      // 0x0318(0x0088) Edit, NativeAccessSpecifierPublic
		bool                                                       bOverrideMaterial;                                       // 0x03A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBJU[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Material[0x28];                                          // 0x03A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSnActionPlaySnapshotOverrideMaterial               OverrideMaterialSetting;                                 // 0x03D0(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFK9[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSnActionPlaySnapshotCurvedScalar>           CurvedScalars;                                           // 0x03D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlaySnapshotCurvedColor>            CurvedColors;                                            // 0x03E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedScalar>                             RuntimeCurvedScalars;                                    // 0x03F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLCurvedColor>                              RuntimeCurvedColors;                                     // 0x0408(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x0418(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x0419(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61PV[0x2];                                   // 0x041A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x041C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseObjectHeight;                                        // 0x0420(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99D5[0x3];                                   // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0424(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0428(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKR8[0x3];                                   // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x042C(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x043C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZ43[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlaySound
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlaySound : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlaySoundCue>                       Cues;                                                    // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CheckPhysicalSurface;                                    // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceVerticalDirection;                                 // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L17X[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayTimeLapse
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayTimeLapse : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLapseStop;                                              // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6D7[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetGameHour;                                          // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastForward;                                            // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15C4[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   CycleDays;                                               // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_PlayTrail
	 * Size -> 0x0250 (FullSize[0x0330] - InheritedSize[0x00E0])
	 */
	class UTLATAction_PlayTrail : public UTLATActionNode
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x00E0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x00F8(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x0145(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSJE[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x014D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x014E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDirectionByContiParam;                                  // 0x014F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverseDirection;                                       // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJH6[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TrailFX[0x28];                                           // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSnActionPlayTrailShapeDetailData                   TrailShapeConfig;                                        // 0x0180(0x0020) Edit, NativeAccessSpecifierPublic
		ESnEffectSourceType                                        Source;                                                  // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        ItemSlot;                                                // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOverrideLayer;                                   // 0x01A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeParentInheritType                                   NodeParentInheritType;                                   // 0x01A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      NodeReferencePoint;                                      // 0x01A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXCA[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlaySkeletalMeshEffectConfigData           ProvidedSkeletalMeshConfig;                              // 0x01A8(0x00A0) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayEffectLocalTransformData               LocalTransform;                                          // 0x0248(0x00B8) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FParticleSysParam>                           InstanceParameters;                                      // 0x0300(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseIFFColor;                                            // 0x0310(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x0311(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0K4[0x2];                                   // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0318(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR1V[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x031C(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x032C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIL4[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_SetCollisionProfile
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTLATAction_SetCollisionProfile : public UTLATActionNode
	{
	public:
		bool                                                       bOverrideProfileName;                                    // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QU8[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ProfileName;                                             // 0x00E4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKU2[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_SetContiForEquippedItemFX
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UTLATAction_SetContiForEquippedItemFX : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnDuration;                                       // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnContiForEquippedItemMode                                Mode;                                                    // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EY08[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ItemFX;                                                  // 0x00F0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        SocketPoint;                                             // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEquippedItemContiTarget                                 ItemContiTargetType;                                     // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEquippedItemContiLayer                                  Layer;                                                   // 0x010A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0WE[0x5];                                   // 0x010B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_SetOpacity
	 * Size -> 0x0048 (FullSize[0x0128] - InheritedSize[0x00E0])
	 */
	class UTLATAction_SetOpacity : public UTLATActionNode
	{
	public:
		float                                                      DelayTimeSec;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyActionSpeedToDelayTime;                            // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetSourceOpacity;                                       // 0x00E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DS4M[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceOpacity;                                           // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetOpacity;                                           // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OpacityCurve[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverridableTransitionTime;                              // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDX5[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionTimeSec;                                       // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestoreTransitionTimeSec;                                // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMKB[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATAction_SetRotation
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UTLATAction_SetRotation : public UTLATActionNode
	{
	public:
		ESnActionRotationType                                      RotationType;                                            // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3GH[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnDuration;                                            // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTurnDurationAsAngle10Ratio;                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithTurnAnimation;                                      // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTBM[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverrideTurnMotion;                                      // 0x00EC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModelRotationSync;                                      // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_618I[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TargetRotation;                                          // 0x00F8(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4R2[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_Environment
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_Environment : public UTLATConditionNode
	{
	public:
		bool                                                       bAnyTimeType : 1;                                        // 0x00C0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEP4[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnActionConditionEnvironment                              EnvironmentTime;                                         // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWP5[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_MovingDistance
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_MovingDistance : public UTLATConditionNode
	{
	public:
		struct FFloatRange                                         DistanceRange;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_Name
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_Name : public UTLATConditionNode
	{
	public:
		bool                                                       bMultiOrderedCondition;                                  // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionConditionGroup                                    GroupType;                                               // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FV4[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConditionName;                                           // 0x00C4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VXE[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ConditionNames;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_PhysicalFX
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_PhysicalFX : public UTLATConditionNode
	{
	public:
		bool                                                       bAnyAttacker : 1;                                        // 0x00C0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C296[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnPhysicalFXMaterial                                      PhysicalFXAttacker;                                      // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YS2X[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnyDefender : 1;                                        // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO02[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnPhysicalFXMaterial                                      PhysicalFXDefender;                                      // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ASZ[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_PhysicalSurface
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_PhysicalSurface : public UTLATConditionNode
	{
	public:
		bool                                                       bAnySurface : 1;                                         // 0x00C0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TPE[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnPhysicalSurface                                         PhysicalSurface;                                         // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NTB[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnySocket : 1;                                          // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H43A[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnModelSocketPoint                                        TargetSocketPoint;                                       // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BK0[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTargetPosition : 1;                                     // 0x00D0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD14[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bForceVerticalDirection;                                 // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreWeatherTag;                                       // 0x00D5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCAM[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_Probability
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_Probability : public UTLATConditionNode
	{
	public:
		bool                                                       bDefault : 1;                                            // 0x00C0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLET[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         probability;                                             // 0x00C4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG43[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLATCondition_Scale
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UTLATCondition_Scale : public UTLATConditionNode
	{
	public:
		bool                                                       bAnyScale : 1;                                           // 0x00C0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0MI[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         ScaleRange;                                              // 0x00C4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPZQ[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAudioCheatManager
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTLAudioCheatManager : public UObject
	{
	public:
		class ATLAmbientSound*                                     NoiseActor;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAudioEngineSubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UTLAudioEngineSubsystem : public UEngineSubsystem
	{
	public:
		class UTLAudioManager*                                     AudioManager;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLMusicManager*                                     MusicManager;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLAudioCheatManager*                                CheatManager;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HSQ0[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAudioManager
	 * Size -> 0x0538 (FullSize[0x0560] - InheritedSize[0x0028])
	 */
	class UTLAudioManager : public UObject
	{
	public:
		TArray<class UTLSoundEvent*>                               SpecialSoundEvents;                                      // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PPL8[0x528];                                 // 0x0038(0x0528) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAudioSettings
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UTLAudioSettings : public UObject
	{
	public:
		TArray<struct FTLAudioSpecialSoundConfig>                  SpecialSounds;                                           // 0x0028(0x0010) Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FTLAudioHitSoundSetting>                     HitSoundSettings;                                        // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		float                                                      EliteCSRangeRadius;                                      // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EliteCSDeactivateRangeRadiusOffset;                      // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     EliteCSPlayEvent;                                        // 0x0050(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     EliteCSStopEvent;                                        // 0x0068(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BossCSRangeRadius;                                       // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BossCSDeactivateRangeRadiusOffset;                       // 0x0084(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     BossCSPlayEvent;                                         // 0x0088(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     BossCSStopEvent;                                         // 0x00A0(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RBCSCombatDuration;                                      // 0x00B8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicalFootprintWaterLowMidDepth;                       // 0x00BC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicalFootprintWaterMidHighDepth;                      // 0x00C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0AF[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAudioSettingsPerUser
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UTLAudioSettingsPerUser : public UObject
	{
	public:
		bool                                                       bShowGenerationBanksButton;                              // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAddBanksToP4Button;                                 // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFadeBand;                                           // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInOutBoundaryOffset;                                // 0x002B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoundarySphere;                                     // 0x002C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoundaryLine;                                       // 0x002D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0ED[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              FadeBandLineColor;                                       // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              InOutBoundaryOffsetLineColor;                            // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UpdateMapSoundInEditor;                                  // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockRangeBasedCSInEditor;                              // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMIO[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLAuxBus
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UTLAuxBus : public UAkAuxBus
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacter
	 * Size -> 0x52B8 (FullSize[0x5780] - InheritedSize[0x04C8])
	 */
	class ATLCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_6DB7[0x8];                                   // 0x04C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ACDT[0x228];                                 // 0x04D0(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLCharacterAsset*                                   CharacterAsset;                                          // 0x06F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CustomAnimBP;                                            // 0x0700(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                MovementCylinderComponent;                               // 0x0718(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUnrealSceneRootComponent*                           SceneRootComponent;                                      // 0x0720(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLActionTreeComponent*                              ActionTreeComponent;                                     // 0x0728(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUnrealAnimSkeletalMeshComponent*                    PolymorphHumanSpareComponent;                            // 0x0730(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableAnimation : 1;                                   // 0x0738(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimComponentUsesFixedSkelBounds : 1;                   // 0x0738(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSecondaryAnimationScalability : 1;                // 0x0738(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S31N[0xA3];                                  // 0x0739(0x00A3) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollideSlidingCheckMargin;                               // 0x07DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollideSlidingCheckDebug;                               // 0x07E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C4U[0x7];                                   // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPathFollowWorldDrawerComponent*                     PathFollowWorldDrawer;                                   // 0x07E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNavigationInvokerComponent*                         NavInvokerComponent;                                     // 0x07F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallingDamageThreshold;                                  // 0x07F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W5K[0x4];                                   // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLCharacterSubAnimInstance*                         CharacterSubAnimInstance;                                // 0x0800(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUDZ[0x8];                                   // 0x0808(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCreaturePathFollowingComponent*                     PathFollowingComponent;                                  // 0x0810(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SignificanceOrder;                                       // 0x0818(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETLCharacterShadowType                                     CharacterShadowType;                                     // 0x081C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETLCharacterPriority                                       CharacterPriority;                                       // 0x081D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TICC[0x2];                                   // 0x081E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VisibleTogglePendingFrame;                               // 0x0820(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DDOG[0x6C];                                  // 0x0824(0x006C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x0890(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2CQC[0x4880];                                // 0x0898(0x4880) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUnrealSceneSimpleActor*                             AttachedParent;                                          // 0x5118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ASU6[0x660];                                 // 0x5120(0x0660) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealModelAnimInstance
	 * Size -> 0x0DF0 (FullSize[0x10A8] - InheritedSize[0x02B8])
	 */
	class UUnrealModelAnimInstance : public UAnimInstance
	{
	public:
		class UAnimData*                                           AnimData;                                                // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              AppearanceComponent;                                     // 0x02C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLAnimDynamicsAsset*                                AppearanceAnimDynamics;                                  // 0x02C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysNodePriority                                    AnimDynamicsSimulationPriority;                          // 0x02D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelBoneSimulationMode                                 SecondaryAnimMode;                                       // 0x02D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJH5[0x2];                                   // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondaryAnimationBlendTime;                             // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H65V[0xDD0];                                 // 0x02D8(0x0DD0) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterAnimInstance
	 * Size -> 0x1308 (FullSize[0x23B0] - InheritedSize[0x10A8])
	 */
	class UTLCharacterAnimInstance : public UUnrealModelAnimInstance
	{
	public:
		class UClass*                                              BaseSubInstance;                                         // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AdvanceSubInstance;                                      // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleStanceChanged;                                    // 0x10B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U74U[0x3];                                   // 0x10B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpperWeight;                                             // 0x10BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LowerWeight;                                             // 0x10C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseIkinema;                                             // 0x10C4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UA7H[0x3];                                   // 0x10C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementSpeed;                                           // 0x10C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsMoving;                                                // 0x10CC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseMovingSlot;                                           // 0x10CD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseFootIk;                                               // 0x10CE(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSwimOrFalling;                                         // 0x10CF(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsTemporaryAir;                                          // 0x10D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSlopeMotion;                                           // 0x10D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseLookAtIk;                                             // 0x10D2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7FIE[0x1];                                   // 0x10D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtAlpha;                                             // 0x10D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EyeLookAtAlpha;                                          // 0x10D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseArmIk;                                                // 0x10DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3VOR[0x3];                                   // 0x10DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weapon2hGripPoseIKWeight;                                // 0x10E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HandsOnBodyIKWeight;                                     // 0x10E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisableLookAtIkWeight;                                   // 0x10E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisableFootIKRightWeight;                                // 0x10EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisableFootIKLeftWeight;                                 // 0x10F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FootPlacementIKWeight;                                   // 0x10F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FA3V[0x8];                                   // 0x10F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Weapon2hGripIKTargetTransform;                           // 0x1100(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          MovingAttackRightFoot;                                   // 0x1130(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          MovingAttackLeftFoot;                                    // 0x1160(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          MovingAttackPelvis;                                      // 0x1190(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      MoveLeanAngle;                                           // 0x11C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveRollLeanAngle;                                       // 0x11C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             MoveLeanLookAtTarget;                                    // 0x11C8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveLeanLookAtAlpha;                                     // 0x11D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLeftFootFoward;                                         // 0x11D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R94K[0x3];                                   // 0x11D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtPosition;                                          // 0x11DC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LookAtBodyPosition;                                      // 0x11E8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            HeadLookAtRotation;                                      // 0x11F4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          RightEyeTransform;                                       // 0x1200(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LeftEyeTransform;                                        // 0x1230(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      EyeLidClosingRatio;                                      // 0x1260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmIKRightWeight;                                        // 0x1264(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmIKLeftWeight;                                         // 0x1268(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ArmIKRightTarget;                                        // 0x126C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ArmIKLeftTarget;                                         // 0x1278(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRightArmIKOn;                                           // 0x1284(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLeftArmIKOn;                                            // 0x1285(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRightHandIKOn;                                          // 0x1286(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLeftHandIKOn;                                           // 0x1287(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6ZD1[0x8];                                   // 0x1288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHandTransform;                                      // 0x1290(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LeftHandTransform;                                       // 0x12C0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        AnimBase;                                                // 0x12F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        AnimDefault;                                             // 0x12F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        AnimMovement;                                            // 0x1300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   AnimSequenceForSequencer;                                // 0x1308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlaySequencerAnim;                                      // 0x1310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlaySequencerFacialAnim;                                // 0x1311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AGKH[0x2];                                   // 0x1312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SequencerBlendInTime;                                    // 0x1314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SequencerBlendOutTime;                                   // 0x1318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BlendSpaceDefaultSwapState;                              // 0x131C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBlendSpaceAnimationInfo                            BlendSpaceDefaultA;                                      // 0x1320(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBlendSpaceAnimationInfo                            BlendSpaceDefaultB;                                      // 0x1340(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      BlendSpaceDefaultBlendInTime;                            // 0x1360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendSpaceDefaultBlendOutTime;                           // 0x1364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayingBlendSpaceDefault;                               // 0x1368(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AD71[0x7];                                   // 0x1369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         AdditiveAnimBase;                                        // 0x1370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AdditiveAnimAlphaBase;                                   // 0x1378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BlendSpaceAdditiveSwapState;                             // 0x137C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBlendSpaceAnimationInfo                            BlendSpaceAdditiveA;                                     // 0x1380(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBlendSpaceAnimationInfo                            BlendSpaceAdditiveB;                                     // 0x13A0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      BlendSpaceAdditiveBlendInTime;                           // 0x13C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendSpaceAdditiveBlendOutTime;                          // 0x13C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayingBlendSpaceAdditive;                              // 0x13C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5QN5[0x3];                                   // 0x13C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RigidBodyVelocityUpdateScale;                            // 0x13CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneFacialAnimationTable*                          FacialAnimationTable;                                    // 0x13D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              FacialAnimationComponent;                                // 0x13D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FacialAnimationWeight;                                   // 0x13E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FacialForceOwn;                                          // 0x13E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFacialLipOnly;                                          // 0x13E5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESnModelCompositeHelmetType                                HelmetType;                                              // 0x13E6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FPGP[0x1];                                   // 0x13E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LayeredBlendStartBoneName;                               // 0x13E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayeredBlendBoneDepth;                                   // 0x13F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HE5K[0x4];                                   // 0x13F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNCIKRig*                                            NCIKRig;                                                 // 0x13F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNCIKFootPlacementProcessor*                         NCIKFootProcessor;                                       // 0x1400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PCLookAtWeight1;                                         // 0x1408(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PCLookAtWeight2;                                         // 0x140C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PCLookAtWeight3;                                         // 0x1410(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PCLookAtWeight4;                                         // 0x1414(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LookAtIK1stTarget;                                       // 0x1418(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LookAtIK1stWeight;                                       // 0x1420(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LookAtIK2ndTarget;                                       // 0x142C(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LookAtIK2ndWeight;                                       // 0x1434(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LookAtIK3rdTarget;                                       // 0x1440(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LookAtIK3rdWeight;                                       // 0x1448(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LookAtIK4thTarget;                                       // 0x1454(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LookAtIK4thWeight;                                       // 0x145C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                NpcLookAtRangeCheckBone;                                 // 0x1468(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TrailBoneName;                                           // 0x1470(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TrailChainLength;                                        // 0x1478(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAnimDynamicsEnabled;                                    // 0x147C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DBUA[0x3];                                   // 0x147D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimDynamicsWeight;                                      // 0x1480(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCaptureHitStopPose;                                     // 0x1484(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyHitStopBlending;                                   // 0x1485(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZB94[0x2];                                   // 0x1486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitStopBlendingDuration;                                 // 0x1488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedHitStopBlendingDuration;                          // 0x148C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitStopCurrentPoseBlendingAlpha;                         // 0x1490(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitStopSnapshotPoseBlendingAlpha;                        // 0x1494(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitStopWeightExponent;                                   // 0x1498(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FinalUseLookAt;                                          // 0x149C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0KJV[0x3];                                   // 0x149D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtIKWeight;                                          // 0x14A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmIKWeight;                                             // 0x14A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmIKRight;                                              // 0x14A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmIKLeft;                                               // 0x14AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Weapon2hGripIKOn;                                        // 0x14B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DefaultLowerBody;                                        // 0x14B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DefaultUpoperBody;                                       // 0x14B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H79X[0x1];                                   // 0x14B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpperBodyWeightInverse;                                  // 0x14B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GroundAngle;                                             // 0x14B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXWX[0xEF4];                                 // 0x14BC(0x0EF4) MISSED OFFSET (PADDING)

	public:
		class USkeletalMeshComponent* GetFacialAnimComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterAsset
	 * Size -> 0x1460 (FullSize[0x1690] - InheritedSize[0x0230])
	 */
	class UTLCharacterAsset : public UTLCommonModelDefinition
	{
	public:
		unsigned char                                              BaseMesh[0x28];                                          // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ModelPreviewScale;                                       // 0x0258(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSheatingEnabled;                                        // 0x025C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnStanceType                                              DefaultStance;                                           // 0x025D(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNZH[0x2];                                   // 0x025E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultSubstance;                                        // 0x0260(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventSkipContiPlay;                                   // 0x0268(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStayActionTreeForAODecal;                            // 0x0269(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXAN[0x2];                                   // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimUpdateRateNormalThreshold;                           // 0x026C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimUpdateRateLowThreshold;                              // 0x0270(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimUpdateRateLowestThreshold;                           // 0x0274(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStayActionTreeIgnoreFxBudget;                           // 0x0278(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGVS[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StayActionTree[0x28];                                    // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StayActionTreeForControlled[0x28];                       // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FootprintAppearance[0x28];                               // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FootprintActionTree[0x28];                               // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector2D                                           FootprintSize;                                           // 0x0320(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootprintHeight;                                         // 0x0328(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPhysicalFXMaterial                                      PhysicalFXMaterialHit;                                   // 0x032C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPhysicalFXMaterial                                      PhysicalFXMaterialBody;                                  // 0x032D(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O916[0x2];                                   // 0x032E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BoneScale[0x28];                                         // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharacterSound[0x28];                                    // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharacterPhysicsMotion[0x28];                            // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESnModelBoneSimulationMode                                 DefaultBoneSimulationMode;                               // 0x03A8(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DO03[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnimDynamicsForDefaultBoneSimulationMode[0x28];          // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bAnimRetargetingEnabled;                                 // 0x03D8(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_843K[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnimRetargetingAppearanceMesh[0x28];                     // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimRetargetingPostAnimBP[0x28];                         // 0x0408(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bMovementComponentIgnoreVolumeOverlap;                   // 0x0430(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7O0[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnBlendTimeDefault;                                    // 0x0434(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnBlendTime90;                                         // 0x0438(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnBlendTime180;                                        // 0x043C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnBlendTimeUseAngularVelocity;                        // 0x0440(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X005[0x3];                                   // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularVelocity;                                         // 0x0444(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseSpeedForDynamicAngularVelocity;                      // 0x0448(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMantleUse;                                              // 0x044C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteLocomotionAnimPlayRate;                         // 0x044D(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNextgenMovesystemUse;                                   // 0x044E(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHQB[0x1];                                   // 0x044F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   LightingChannelMask;                                     // 0x0450(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslucentSortOrder;                                    // 0x0454(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FXScaleRelativeToPCSize;                                 // 0x0458(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionHiveScaleCategory                                 FXScaleCategory;                                         // 0x0464(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XUL[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualSocketMaxCount;                                   // 0x0468(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIGN[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TraceEnabledBonesSetting[0x28];                          // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TransformInActionTree[0x28];                             // 0x0498(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TransformOutActionTree[0x28];                            // 0x04C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AlternativeIdleActionTree[0x28];                         // 0x04E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      AlternativeIdlePlayPercentage;                           // 0x0510(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TemperatureReactionOverridePercentage;                   // 0x0514(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlternativeIdleFirstSequenceProbability;                 // 0x0518(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlternativeIdleSecondSequenceProbability;                // 0x051C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCycleAlternativeRun;                                  // 0x0520(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCycleAlternativeRun;                                  // 0x0524(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AttachedItemRightHand[0x28];                             // 0x0528(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemLeftHand[0x28];                              // 0x0550(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemShield[0x28];                                // 0x0578(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemQuiver[0x28];                                // 0x05A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemItem01[0x28];                                // 0x05C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemItem02[0x28];                                // 0x05F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemItem03[0x28];                                // 0x0618(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AttachedItemItem04[0x28];                                // 0x0640(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimData[0x28];                                          // 0x0668(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIdleFacialUse;                                          // 0x0690(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q69V[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FacialAnimationTable[0x28];                              // 0x0698(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bQuadTrailBoneEnabled;                                   // 0x06C0(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSCI[0x3];                                   // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                QuadTrailBoneName;                                       // 0x06C4(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuadTrailChainLength;                                    // 0x06CC(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BaseModelType;                                           // 0x06D0(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHiveEntityCharacterModelTypeBaseMaterialOverrideConfig BaseOverrideMaterialConfig;                              // 0x06D8(0x0010) Edit, Transient, NativeAccessSpecifierPublic
		struct FHiveEntityCharacterModelTypeBoneScaleWeights       BoneScaleWeights;                                        // 0x06E8(0x032C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3B6K[0x4];                                   // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHiveEntityModelTypeHitReactionConfig               HitReactionConfig;                                       // 0x0A18(0x0248) Transient, NativeAccessSpecifierPublic
		struct FHiveEntityCharacterModelTypeItemGripOffsetConfig   ItemGripOffsetConfig;                                    // 0x0C60(0x0A20) Transient, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        AlternativeIdleAllowedSubstanceList;                     // 0x1680(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterMovementComponent
	 * Size -> 0x0320 (FullSize[0x0E10] - InheritedSize[0x0AF0])
	 */
	class UTLCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		bool                                                       bOrientToTurnTargetRotation;                             // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSZY[0x3];                                   // 0x0AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnTimesMovingOnGround[0x3];                            // 0x0AF4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnTimeSwimming;                                        // 0x0B00(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocity;                                         // 0x0B04(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwimmingCapsuleRatio;                                    // 0x0B08(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlidingTerminalVelocityMultipler;                        // 0x0B0C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlidingMaxZVelocity;                                     // 0x0B10(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJN5[0x48];                                  // 0x0B14(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSmoothSyncDeltaTime;                                  // 0x0B5C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSmoothSyncDeltaTime;                                  // 0x0B60(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZWP[0x14];                                  // 0x0B64(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATLCharacter*                                        CreatureOwner;                                           // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCreaturePathFollowingComponent*                     PathFollowingComponent;                                  // 0x0B80(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECreatureSimulatedUpdateMode                               SimulatedUpdateMode;                                     // 0x0B88(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECreatureSimulatedUpdateMode                               PendingSimulatedUpdateMode;                              // 0x0B89(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JHW1[0x6E];                                  // 0x0B8A(0x006E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCreatureRootMotionTask*                             ActiveRootMotionTask;                                    // 0x0BF8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCreatureRootMotionTask*                             PredictingRootMotionTask;                                // 0x0C00(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_80TN[0x208];                                 // 0x0C08(0x0208) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.CreaturePathFollowingComponent
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class UCreaturePathFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_PGFP[0x8];                                   // 0x0250(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.CreatureRootMotionTask
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCreatureRootMotionTask : public UObject
	{
	public:
		class UTLCharacterMovementComponent*                       CreatureMovement;                                        // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QGE2[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.CreatureRootMotionTask_CreatureFall
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UCreatureRootMotionTask_CreatureFall : public UCreatureRootMotionTask
	{
	public:
		unsigned char                                              UnknownData_2U0N[0xA8];                                  // 0x0038(0x00A8) MISSED OFFSET (PADDING)

	public:
		void OnCreatureReachedJumpApex();
		void OnCreaturemovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void OnCreatureLanded(const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.CreatureRootMotionTask_CreatureMantle
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UCreatureRootMotionTask_CreatureMantle : public UCreatureRootMotionTask
	{
	public:
		unsigned char                                              UnknownData_G6ZF[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SoundTriggers
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USoundTriggers : public UObject
	{
	public:
		class FString                                              Sequence;                                                // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StanceType;                                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTLCharacterSoundTrigger>                    SoundTriggers;                                           // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseParentsTriggers;                                     // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMY2[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterSoundData
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UTLCharacterSoundData : public UObject
	{
	public:
		TArray<class USoundTriggers*>                              Triggers;                                                // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UTLCharacterSoundData*                               ParentCharacterSoundData;                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTLCharacterSoundProps                              CharacterProperties;                                     // 0x0048(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<ETLCharacterSoundEvents, class UTLSoundEvent*>        CharacterSoundEvents;                                    // 0x0050(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FName, struct FTLCharacterSoundKey>             SoundKeyData;                                            // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       DisableFootstepSound;                                    // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseRangeBasedCharacterSound;                             // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI0U[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeRadius;                                             // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeRadiusMaxZLimit;                                    // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeRadiusMinZLimit;                                    // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLMusic*                                            RangeMusic;                                              // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DeactivateRangeBasedCharacterSoundOnDie;                 // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DynamicRBCSHeight;                                       // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PEX[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeactivateRangeRadiusOffset;                             // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CountingGameParam;                                       // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivateOnlyInBattleWithMyPC;                            // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM01[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSoundEvent*                                       PlayCharacterAmbientEvent;                               // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       StopCharacterAmbientEvent;                               // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CASMinCount;                                             // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P62C[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLCharacterStatics : public UBlueprintFunctionLibrary
	{
	public:
		ESnModelCompositeArmorPart GetPlayerCharacterPartType(ESnModelCompositeMasterPoseParts InMasterPosePart);
		class FName GetPCPartSkinMaskTextureMaterialParamName(ESnModelCompositeArmorPart InPCPartType);
		ESnModelCompositeMasterPoseParts GetMasterPosePartWithPCPart(ESnModelCompositeArmorPart InPCPartType);
		ESnModelCompositeMasterPoseParts GetMasterPosePartWithNPCPart(ESnModelNpcCompositePart InNPCPartType);
		ESnModelCompositeMasterPosePartsOverlap GetMasterPosePartOverlapWithPCPart(ESnModelCompositeArmorPart InPCPartType);
		class FName GetGender(class UTLPlayerCharacterAsset* PCAsset, bool bMaleFallback);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterSubAnimInstance
	 * Size -> 0x15F8 (FullSize[0x18B0] - InheritedSize[0x02B8])
	 */
	class UTLCharacterSubAnimInstance : public UAnimInstance
	{
	public:
		class ATLCharacter*                                        Creature;                                                // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStanceAnimationSet                                 AnimationSet;                                            // 0x02C0(0x11F8) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x14B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x14C4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CreatureScale;                                           // 0x14D0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x14DC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x14E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Velocity2D;                                              // 0x14EC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed2D;                                                 // 0x14F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x14F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrevMaxSpeed;                                            // 0x14FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAccelerating;                                         // 0x1500(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGrounded;                                             // 0x1501(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInAir;                                                // 0x1502(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJumpBeforeLanding;                                    // 0x1503(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJump;                                                 // 0x1504(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSwimming;                                             // 0x1505(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSwimEnter;                                            // 0x1506(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimSwimEnterByJump;                                    // 0x1507(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAnimFalling;                                          // 0x1508(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipJumpStartMotion;                                    // 0x1509(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJumpStartByFalling;                                     // 0x150A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BAX[0x1];                                   // 0x150B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimJumpByFallingStartOffset;                            // 0x150C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAnimLandingFromHigh;                                  // 0x1510(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8O8[0x3];                                   // 0x1511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                substance;                                               // 0x1514(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementMode                                            MovementMode;                                            // 0x151C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0B1[0x3];                                   // 0x151D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRootMotionAnimData                                 CreatureRootMotionData;                                  // 0x1520(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRunTimeAnimationSeqNames                           RunTimeAnimSeqNames;                                     // 0x1530(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AnimationPlayRate;                                       // 0x1558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleAnimationPlayRate;                                   // 0x155C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InverseSpeedBasedRate;                                   // 0x1560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentAnimStateName;                                    // 0x1564(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PreviousAnimStateName;                                   // 0x156C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GroundNormal;                                            // 0x1574(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundAngle;                                             // 0x1580(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveDirection;                                           // 0x1584(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousMoveDirection;                                   // 0x1590(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToMoveDirectionYaw;                                      // 0x159C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaMoveDirectionYaw;                                   // 0x15A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoveDirectionChanged;                                   // 0x15A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInputLocked;                                            // 0x15A5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipMoveEndState;                                       // 0x15A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOnMove;                                             // 0x15A7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveDirectionChangeMinAngle;                             // 0x15A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDrivenRotationOutAngle;                              // 0x15AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RandomWalkName;                                          // 0x15B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSocialWalk;                                          // 0x15B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBTA[0x7];                                   // 0x15B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLRandomPlayerSequenceEntry                        NpcSocialWalk0;                                          // 0x15C0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTLRandomPlayerSequenceEntry                        NpcSocialWalk1;                                          // 0x1610(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTLRandomPlayerSequenceEntry                        NpcSocialWalk2;                                          // 0x1660(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTLRandomPlayerSequenceEntry                        NpcSocialWalk3;                                          // 0x16B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MoveRollLeanAngle;                                       // 0x1700(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditiveAnimAlphaBase;                                   // 0x1704(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveLeanLookAtTarget;                                    // 0x1708(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveLeanLookAtAlpha;                                     // 0x1714(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditiveJumpAlpha;                                       // 0x1718(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnInPlace;                                            // 0x171C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96BG[0x3];                                   // 0x171D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnInPlaceAnimPlayRate;                                 // 0x1720(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnInPlaceAnimDrivenCurveModifier;                      // 0x1724(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceStopTurn;                                          // 0x1728(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothSyncAnimation;                                    // 0x1729(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLockOnTurn;                                          // 0x172A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterSocialIdle;                                     // 0x172B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocialIdleAnimName;                                      // 0x172C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickStopRandomIdle;                                    // 0x1734(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayedSocialSceneConti;                                 // 0x1735(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JOI[0x2];                                   // 0x1736(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovementMountInfo                                  MountInfo;                                               // 0x1738(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJT7[0x8];                                   // 0x1748(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimData*                                           AnimData;                                                // 0x1750(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IsolatedCurveValueSpeed;                                 // 0x1758(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IsolatedCurveValueRotation;                              // 0x175C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJ8D[0x150];                                 // 0x1760(0x0150) MISSED OFFSET (PADDING)

	public:
		float TLAnim_GetInverseSpeedBasedRate(float InSeqBaseSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLLockOnTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLLockOnTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLLookAtTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLLookAtTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCharacterWorldManager
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UTLCharacterWorldManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_ZWZ5[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCheatManager
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UTLCheatManager : public UCheatManager
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TLPlayDieAnimation();
		void SetTargetActor(class AActor* InTargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCinematicLevelSequenceActor
	 * Size -> 0x0128 (FullSize[0x03E0] - InheritedSize[0x02B8])
	 */
	class ATLCinematicLevelSequenceActor : public ALevelSequenceActor
	{
	public:
		unsigned char                                              UnknownData_PWYZ[0x128];                                 // 0x02B8(0x0128) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCinematicLevelSequenceInstanceData
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UTLCinematicLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_XJ0P[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCinematicLevelSequencePlayer
	 * Size -> 0x0138 (FullSize[0x0738] - InheritedSize[0x0600])
	 */
	class UTLCinematicLevelSequencePlayer : public ULevelSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_SMT7[0x138];                                 // 0x0600(0x0138) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLCinematicPlaySkippingControlActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ATLCinematicPlaySkippingControlActor : public AActor
	{
	public:
		class UTLCinematicLevelSequencePlayer*                     ScenarioPlayer;                                          // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     InitComponent;                                           // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnEnableSkip();
		void OnDisableSkip();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLContentEditorActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLContentEditorActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLContentsAssetData
	 * Size -> 0x02C0 (FullSize[0x02F0] - InheritedSize[0x0030])
	 */
	class UTLContentsAssetData : public UPrimaryDataAsset
	{
	public:
		struct FSoftObjectPath                                     DefaultImageMaterialPath;                                // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultCwProgressBarMaterialPath;                        // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultCcwProgressBarMaterialPath;                       // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultCwProgressBarEdgeMaterialPath;                    // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     BlankSprite;                                             // 0x0090(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     BlankTexture;                                            // 0x00A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizeCamera[0x28];                                   // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CustomSceneCamera[0x28];                                 // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FSoftObjectPath                                     DamageFloaterScaleCurve;                                 // 0x0110(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     NamePlateScaleCurve;                                     // 0x0128(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     NamePlateOpacityCurve;                                   // 0x0140(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     NamePlateOpacityCurveMassCombatMode;                     // 0x0158(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     NamePlateZPositionOffsetCurve;                           // 0x0170(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     InteractableMarkOpacityCurve;                            // 0x0188(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ChatBallonScaleCurve;                                    // 0x01A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ChatBallonOpacityCurve;                                  // 0x01B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ChatBallonOpacityCurve_Far;                              // 0x01D0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlidingCameraMoveCurve;                                  // 0x01E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlidingJumpCurve;                                        // 0x0200(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableTextBlockStyle;                                     // 0x0218(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableKeyIcon;                                            // 0x0230(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableKeyIconSecond;                                      // 0x0248(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableKeyIconDualShock;                                   // 0x0260(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableEmoji;                                              // 0x0278(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableMarkupImage;                                        // 0x0290(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableColor;                                              // 0x02A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableDesignerPresetMale;                                 // 0x02C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TableDesignerPresetFemale;                               // 0x02D8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLContentsAssetPrerequisteData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UTLContentsAssetPrerequisteData : public UPrimaryDataAsset
	{
	public:
		TArray<struct FSoftObjectPath>                             UIAssets;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Widgets[0x10];                                           // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLDeveloperSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UTLDeveloperSettings : public UDeveloperSettings
	{
	public:
		ETLEngineSuperSamplingMethod                               SuperSamplingMethodInEditor;                             // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSyncCutSceneTable;                                  // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPreloadingStartupAssetsInEditor;                    // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLazyLoadAnimationAssetsInEditor;                        // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableLoadingUIAssetsInEditor;                         // 0x003C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisablePCCustomizingInEditor;                           // 0x003D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastInGame;                                             // 0x003E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastNewCharacter;                                       // 0x003F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateInGameWidgetManually;                             // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLazyLoadActionTreeAssetsInEditor;                       // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAsyncLoadLevelSequencesInEditor;                        // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipIntroGameStateInPIE;                                // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableTutorialInPIE;                                   // 0x0044(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSoundInPIE;                                      // 0x0045(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableWorldCompositionLevelLODInPIE;                   // 0x0046(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableWorldPartitionHLODInPIE;                         // 0x0047(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLDevelopmentStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLDevelopmentStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool ShouldSkipIntroGameState(class UWorld* World);
		bool ShouldLoadLevelSequenceAsynchronously();
		bool ShouldAnimationAssetsBeLazyLoaded();
		bool ShouldActionTreeBeLazyLoaded();
		bool ParseWorldInfoVectorString(const class FString& inString, struct FVector* OutVector);
		bool ParseWorldInfoStringShort(const class FString& inString, int32_t* OutMapId, struct FVector* OutPlayerPos);
		bool ParseWorldInfoString(const class FString& inString, int32_t* OutMapId, struct FVector* OutPlayerPos, struct FRotator* OutPlayerRotation, struct FVector* OutCameraPos, struct FVector* OutCameraFwd, float* OutCameraDistance);
		bool ParseWorldInfoAttributeString(const class FString& inString, const class FString& InAttributeName, class FString* OutAttributeValue);
		bool IsWorldCompositionLevelLODEnabled(class UWorld* World);
		bool IsTutorialEnabled(class UWorld* World);
		bool IsSoundEnabled(class UWorld* World);
		bool IsPlayerCharacterCustomizingEnabled();
		bool IsLoadingUIAssetsDisabled();
		bool IsFastNewCharacter();
		bool IsFastInGame();
		bool IsCreateInGameWidgetManually();
		bool IsAutoSyncCutSceneTable();
		void EnableBudget(const class FString& BudgetName);
		void ClearBudgets();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLEngineStatics
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTLEngineStatics : public UBlueprintFunctionLibrary
	{
	public:
		float                                                      FlowingSandDecalFlowSpeedScaler;                         // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD1E[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool VolumeEncompassesActor(class AVolume* Volume, class AActor* TestingActor);
		bool UsingDLSS();
		bool TLIsTrailsEnabled();
		bool TLGetUseFlowingSandBall();
		void TLGetTraceCollisionType(const class FName& ChannelName, ETraceTypeQuery* TraceType, ECollisionChannel* CollisionChannel);
		void TLGetPhysicalSurfaceFinalWeather(const struct FHitResult& HitResult, ESnPhysicalSurface* OutSurface, float* OutTextureBlendingWeight);
		bool TLGetFluidSimFootprintAutoGeneration();
		bool TLGetDebugFlowingSandBall();
		void TLCalcFlowingSandDecalRotationAndSpeed(TArray<struct FVector> Normals, int32_t Width, int32_t Height, float* OutDecalRotation, float* OutDecalSpeed);
		class UTexture2D* TLBuildVelocityTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height);
		class UTexture2D* TLBuildNormalTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height);
		void ShowBloodSplatter(bool bShow);
		void SetSuperSamplingMethod(ETLEngineSuperSamplingMethod NewMethod);
		void SetFSR2Sharpness(float Sharpness);
		void SetFSR2Mode(int32_t FSR2Mode);
		void SetDLSSSharpness(float Sharpness);
		void SetDLSSMode(int32_t DLSSMode);
		void RestoreDefaultDeviceProfile();
		void OverrideDeviceProfileForMode(ETLDeviceProfileOverrideMode NewMode);
		bool IsShowBloodSplatter();
		bool IsFSR2Supported();
		bool IsDLSSSupported();
		bool IsCinematicLevelSequenceModeAllowed();
		ETLEngineSuperSamplingMethod GetSuperSamplingMethod();
		class UGameplayTask* GetFirstGameplayTask(class UGameplayTasksComponent* InGameplayTasksComponent, class UClass* InClass);
		class FString GetBaseDeviceProfileName();
		class FString GetActiveDeviceProfileName();
		class UTexture2D* BuildVelocityTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height, class UObject* Outer);
		class UTexture2D* BuildNormalTexture(TArray<struct FVector> Normals, int32_t Width, int32_t Height, class UObject* Outer);
		void AllowCinematicLevelSequenceMode(bool bAllow);
		bool ActorIsPendingKillPendingOrHasLifeSpan(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSuperSamplingEditorSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTLSuperSamplingEditorSettings : public UObject
	{
	public:
		ETLEngineSuperSamplingMethod                               SuperSamplingMethod;                                     // 0x0028(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLZO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLEnvironmentMaterialParameterManager
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UTLEnvironmentMaterialParameterManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_GYWD[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        GlobalMPC;                                               // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OD39[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraParameterCollection*                         GlobalNPC;                                               // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTE6[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLEnvironmentSkyActor
	 * Size -> 0x0650 (FullSize[0x0880] - InheritedSize[0x0230])
	 */
	class ATLEnvironmentSkyActor : public AActor
	{
	public:
		TLazyObjectPtr<class AStaticMeshActor>                     SkySphere;                                               // 0x0230(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class AVolumetricCloud>                     VolumetricCloud;                                         // 0x024C(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ASkyAtmosphere>                       SkyAtmosphere;                                           // 0x0268(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class AExponentialHeightFog>                HeightFog;                                               // 0x0284(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ADirectionalLight>                    SunLight;                                                // 0x02A0(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ADirectionalLight>                    MoonLight;                                               // 0x02BC(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ASkyLight>                            SkyLight;                                                // 0x02D8(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class APostProcessVolume>                   PostProcessVoume;                                        // 0x02F4(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class AWaterMeshActor>                      WaterMesh;                                               // 0x0310(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverallIntensity;                                        // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalBalance;                                      // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPDM[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  SkyMaterial;                                             // 0x0338(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SkyMID;                                                  // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SkyLightColor;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkyLightIntensity;                                       // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkyLightTemperature;                                     // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SkyLightLowerHemisphereTintColor;                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkyContrast;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkySaturation;                                           // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SkyLightOnlyColor;                                       // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            CloudWispsTexture;                                       // 0x0388(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudWispsOpacity;                                       // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FixedLightCubeModColor;                                  // 0x0394(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedLightCubeModIntensity;                              // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTLFixedLightCubeSource>                     SourceFixedLightCubes;                                   // 0x03A8(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		class UTextureRenderTargetCube*                            TargetFixedLightCube;                                    // 0x03B8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NightBrightness;                                         // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvercastNightBrightness;                                 // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NightSkyGrow;                                            // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NightSkyGrowColor;                                       // 0x03CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LightPollution;                                          // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LightPollutionColor;                                     // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalLightsAbsentBrightness;                       // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InvertedAbsorptionColor;                                 // 0x03F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbsorptionScale;                                         // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        RayleighScatteringColor;                                 // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesaturateRayleighScatteringWhenCloudy;                  // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrightenRayleighScatteringWhenCloudy;                    // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTwoDirectionalLights;                              // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZ98[0x3];                                   // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SunLightColor;                                           // 0x0424(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunSourceAngle;                                          // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunLightIntensity;                                       // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunVolumetricScatteringIntensity;                        // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunSpecularScale;                                        // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunNorthYaw;                                             // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunSoftness;                                             // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SunScaleAtHorizon;                                       // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MoonLightColor;                                          // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonSourceAngle;                                         // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonLightIntensity;                                      // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonVolumetricScatteringIntensity;                       // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonSpecularScale;                                       // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            MoonTexture;                                             // 0x0470(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonTextureRotation;                                     // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonScaleAtHorizon;                                      // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MoonTextureColor;                                        // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonTextureIntensity;                                    // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonGlowIntensity;                                       // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewMoonLightBrigntness;                                  // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoonPhase;                                               // 0x049C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DarkSideBrightness;                                      // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR3R[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            TilingStarsTexture;                                      // 0x04A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StarsTiling;                                             // 0x04B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        StarsColor;                                              // 0x04B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StarsIntensity;                                          // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StarsSpeed;                                              // 0x04C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StarsPhase;                                              // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterOceanOpacity;                                       // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogDensity;                                              // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogDensityCloudy;                                        // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogDensityDistribution;                                  // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogDensityScale;                                         // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FogInscatteringColor;                                    // 0x04E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DirectionalInscatteringColor;                            // 0x04F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeighFogFalloff;                                         // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightFogFalloffCloudy;                                  // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogStartDistance;                                        // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogStartDistanceCloudy;                                  // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogStartDistanceExponent;                                // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkyAtmosphereInfluenceScale;                             // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HeightFogTintColor;                                      // 0x051C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleFogColorWhenCloudy;                                 // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogColorStrengthDay;                                     // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogColorStrengthNight;                                   // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraFogBrightnessWhenCloudyAtNight;                     // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDWW[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  VolumetricCloudMaterial;                                 // 0x0540(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            VolumetricCloudMID;                                      // 0x0548(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseCloudSize;                                           // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudScale;                                              // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudDensity;                                            // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZDisturbance;                                            // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtinctionScaleTop;                                      // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtinctionScaleBottom;                                   // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopBottomDistribution;                                   // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TaperPosition;                                           // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MacroVariation;                                          // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MacroScale;                                              // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumErosion;                                          // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShiftCurve;                                              // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubNoiseScale;                                           // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubNoiseAmount;                                          // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToSampleMaxCount;                                // 0x0588(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGH8[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          VolumetricNoiseTexture;                                  // 0x0590(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVolumeTexture*                                      LowQualityVolumeTexture;                                 // 0x0598(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVolumeTexture*                                      HighQualityVolumeTexture;                                // 0x05A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVolumeTexture*                                      EpicQualityVolumeTexture;                                // 0x05A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseCloudsMipLevel;                                      // 0x05B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighFrequencyNoiseAmount;                                // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighFrequencyMipIncreaseByDistance;                      // 0x05B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CloudAlbedo;                                             // 0x05BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CloudTopEmissiveColor;                                   // 0x05CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CloudBottomEmissiveColor;                                // 0x05DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricCloudAffectSkyLightAlbedo;                     // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricCloudAffectSkyLightEmissive;                   // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiscatteringIntensity;                                // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiScatteringEccentricity;                             // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiScatteringOcclusion;                                // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseG;                                                  // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseG2;                                                 // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseBlend;                                              // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudPhaseDirection;                                     // 0x060C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudPhase;                                              // 0x0610(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudDirection;                                          // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudSpeed;                                              // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudExtinctionSpeed;                                    // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceBetweenLayers;                                   // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Layer2Density;                                           // 0x0624(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Layer2Extinction;                                        // 0x0628(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Layer2MipOffset;                                         // 0x062C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Layer2CloudScale;                                        // 0x0630(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterLightCastShadows;                               // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterLightLanternAttenuationRadius;         // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSJC[0x2];                                   // 0x063A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterLightLanternAttenuationRadius;                  // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterLightShadowAttenuationRadius;          // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6GZ[0x3];                                   // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterLightShadowAttenuationRadius;                   // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterLightColor;                            // 0x0648(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPUI[0x3];                                   // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CharacterLightColor;                                     // 0x064C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterLightLanternIntensityRange;            // 0x065C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMNP[0x3];                                   // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CharacterLightLanternIntensityRange;                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterLightShadowIntensityRange;             // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSJ8[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CharacterLightShadowIntensityRange;                      // 0x066C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXN7[0x20C];                                 // 0x0674(0x020C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLFacialAnimationSection
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UTLFacialAnimationSection : public UMovieSceneSection
	{
	public:
		class FName                                                FacialAnimationId;                                       // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartOffset;                                             // 0x00F0(0x0004) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQOK[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLFacialAnimationTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLFacialAnimationTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_EPCZ[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLFieldObjectAsset
	 * Size -> 0x03E8 (FullSize[0x0618] - InheritedSize[0x0230])
	 */
	class UTLFieldObjectAsset : public UTLCommonModelDefinition
	{
	public:
		struct FSoftObjectPath                                     basemodel;                                               // 0x0230(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ModelMeshType;                                           // 0x0248(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AnimDynamicsAssetForEquippedItemAndFO;                   // 0x0250(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     animdatafile;                                            // 0x0268(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultSequence;                                         // 0x0280(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimUpdateRateNormalThreshold;                           // 0x0288(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimUpdateRateLowThreshold;                              // 0x028C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimUpdateRateLowestThreshold;                           // 0x0290(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OHQ[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     CharacterSound;                                          // 0x0298(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CanCharacterStepUpOn;                                    // 0x02B0(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipSkelMeshCompOptimizing;                              // 0x02B4(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysTickPoseAndRefreshBones;                           // 0x02B5(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GI2[0x2];                                   // 0x02B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NameplatePosInheritType;                                 // 0x02B8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StayContiIgnoreFxBudget;                                 // 0x02BC(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXF3[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     StayContiFile;                                           // 0x02C0(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RigidCompositeDefaultFadeDuration;                       // 0x02D8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   LightingChannelMask;                                     // 0x02DC(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CameraCollisionIgnore;                                   // 0x02E0(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateMovementNode;                                      // 0x02E1(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MapHiveActorMovable;                                     // 0x02E2(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWTA[0x1];                                   // 0x02E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ShadowCastingMode;                                       // 0x02E4(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPositioHeightOffset;                                // 0x02E8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPhysicalFXMaterial                                      PhysicalFXMaterialBody;                                  // 0x02EC(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVU7[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     TransformInContiFile;                                    // 0x02F0(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TransformOutContiFile;                                   // 0x0308(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelMapRoomActorGuid;                                   // 0x0320(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LevelMapRoomActorPosition;                               // 0x0330(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LevelMapRoomActorRotation;                               // 0x033C(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LevelMapRoomActorScale;                                  // 0x0348(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTFK[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelMapRoomActorSubLevelPackageName;                    // 0x0350(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MapHiveActorAffectableByWeather;                         // 0x0360(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCV2[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CarrierSocket;                                           // 0x0364(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CarrierParentSocket;                                     // 0x036C(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CarrierSocketTranslationOffset;                          // 0x0374(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CarrierSocketRotationOffset;                             // 0x0380(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELRX[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHiveEntityModelTypeHitReactionConfig               HitReactionConfig;                                       // 0x0390(0x0248) Transient, NativeAccessSpecifierPublic
		float                                                      PhysicsActionForceScales[0x5];                           // 0x05D8(0x0014) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsActionRadiusScales[0x5];                          // 0x05EC(0x0014) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsActionVerticalAssists[0x5];                       // 0x0600(0x0014) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3XD[0x4];                                   // 0x0614(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLForceFeedbackLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLForceFeedbackLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void StopForceFeedbackAll(class UObject* InWorldContextObject);
		void StopForceFeedback(class UObject* InWorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect);
		void PlayForceFeedback(class UObject* InWorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const class FName& Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
		class UWorld* GetWorldByContext(class UObject* InWorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLGameCameraBlendingSection
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UTLGameCameraBlendingSection : public UMovieSceneSection
	{
	public:
		ETLGameCameraBlendingMode                                  BlendingMode;                                            // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendingFunction;                                        // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A42S[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLGameCameraBlendingTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLGameCameraBlendingTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_FT7A[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLGameData
	 * Size -> 0x0B08 (FullSize[0x0B38] - InheritedSize[0x0030])
	 */
	class UTLGameData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              GlobalMPC[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PermutationMPC[0x28];                                    // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OceanMPC[0x28];                                          // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GlobalNPC[0x28];                                         // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvInfluenceMaterial[0x28];                              // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvInfluenceFadeMaterial[0x28];                          // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvFieldBrushObstacle[0x28];                             // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvFieldBrushObstacleDecay[0x28];                        // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvInfluenceRenderTarget[0x28];                          // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvFieldTexture[0x28];                                   // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ExternalTrackOverride[0x28];                             // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RouteShapeMaterial[0x28];                                // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PathFollowWStaticMesh[0x28];                             // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PathFollowMapRoom[0x28];                                 // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TimeLapseCurve[0x28];                                    // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MapWaterShapeMaterial[0x28];                             // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FarLandscapeMaterial[0x28];                              // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CollisionCylinderComplex[0x28];                          // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CollisionCylinderSimple[0x28];                           // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomizingSkinColorSpaceHiveEntity[0x28];               // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomizingDefaultColorSpaceHiveEntity[0x28];            // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ModelCharacterMergedMaterialForPC[0x28];                 // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ModelCharacterMergedMaterialForNPC[0x28];                // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ModelCharacterMergedMaterialIrisTexture[0x28];           // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompositePCDefaultSkinTexture[0x28];                     // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompositePCAtlasMaterialSet[0x28];                       // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MyPCComponentClass[0x28];                                // 0x0440(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CompoistePCPresetMale1[0x28];                            // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompoistePCPresetMale2[0x28];                            // 0x0490(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompoistePCPresetMale3[0x28];                            // 0x04B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompoistePCPresetFemale1[0x28];                          // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompoistePCPresetFemale2[0x28];                          // 0x0508(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompoistePCPresetFemale3[0x28];                          // 0x0530(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemSwordConfig[0x28];                                   // 0x0558(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemBowConfig[0x28];                                     // 0x0580(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemWandConfig[0x28];                                    // 0x05A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemCrossbowConfig[0x28];                                // 0x05D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemStaffConfig[0x28];                                   // 0x05F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemSword2hConfig[0x28];                                 // 0x0620(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemDaggerConfig[0x28];                                  // 0x0648(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemShieldConfig[0x28];                                  // 0x0670(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemGrimoireConfig[0x28];                                // 0x0698(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemQuiverConfig[0x28];                                  // 0x06C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemSheathConfig[0x28];                                  // 0x06E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CameraSettingTable[0x28];                                // 0x0710(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CameraCommonConfigTable[0x28];                           // 0x0738(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CameraPresetTable[0x28];                                 // 0x0760(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CameraPersonalizationDefault[0x28];                      // 0x0788(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FootprintPhysicalActionTree[0x28];                       // 0x07B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PreloadActionTreeTable[0x28];                            // 0x07D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSoftObjectPath                                     AlternativeIdleDefaultPcActionTree;                      // 0x0800(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlternativeIdleDefaultNpcActionTree;                     // 0x0818(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlternativeGlidingIdleActionTree;                        // 0x0830(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlternativeSwimmingIdleActionTree;                       // 0x0848(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     RunBoostingActionTree;                                   // 0x0860(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     RunAlternativeActionTree;                                // 0x0878(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DivingActionTree;                                        // 0x0890(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     EmergeFromWaterActionTree;                               // 0x08A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlidingDiveActionTree;                                   // 0x08C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlidingJumpActionTree;                                   // 0x08D8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AODecalStayActionTree;                                   // 0x08F0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultPolymorphOutActionTree;                           // 0x0908(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultPolymorphInActionTree;                            // 0x0920(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultPolymorphLevelSequence[0x28];                     // 0x0938(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CarrierTransformSequencer[0x28];                         // 0x0960(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SystemAnimationData[0x28];                               // 0x0988(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SystemAnimationSequential[0x28];                         // 0x09B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSoftObjectPath                                     AttachedItemAnimBP;                                      // 0x09D8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlobalPostAnimBP;                                        // 0x09F0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeaponSheathingInfo[0x28];                               // 0x0A08(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WeaponSheathingSocketOffset[0x28];                       // 0x0A30(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CompositePartGlobalSetting[0x28];                        // 0x0A58(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSoftObjectPath                                     DropmeshErrorNotExist;                                   // 0x0A80(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SimpleSpringSystem[0x28];                                // 0x0A98(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SimpleRodsSystem[0x28];                                  // 0x0AC0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StableSpringSystem[0x28];                                // 0x0AE8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StableRodsSystem[0x28];                                  // 0x0B10(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLGameEngine
	 * Size -> 0x0000 (FullSize[0x0D88] - InheritedSize[0x0D88])
	 */
	class UTLGameEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLGameFXStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLGameFXStatics : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLInGameLevelSequenceActor
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class ATLInGameLevelSequenceActor : public ALevelSequenceActor
	{
	public:
		unsigned char                                              UnknownData_TIYJ[0x30];                                  // 0x02B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLInGameLevelSequenceInstanceData
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UTLInGameLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_YYZJ[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLInGameLevelSequencePlayer
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UTLInGameLevelSequencePlayer : public ULevelSequencePlayer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLDropItemAsset
	 * Size -> 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
	 */
	class UTLDropItemAsset : public UTLCommonModelDefinition
	{
	public:
		struct FSoftObjectPath                                     dropmodel;                                               // 0x0230(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StayContiIgnoreFxBudget;                                 // 0x0248(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFJ1[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     StayContiFile;                                           // 0x0250(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DropItemUseRotation;                                     // 0x0268(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DropItemHide;                                            // 0x0269(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUBC[0x2];                                   // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DropItemDropAxisRotation;                                // 0x026C(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            DropItemDropAxisRotateVariation;                         // 0x0278(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            DropItemRotationRate;                                    // 0x0284(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DropItemRootLocalOffset;                                 // 0x0290(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DropItemRootWorldOffset;                                 // 0x029C(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropItemScale;                                           // 0x02A8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DropItemUseRotationAfterDrop;                            // 0x02AC(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K49V[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DropItemRotationRateAfterDrop;                           // 0x02B0(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DropItemNameplateOffset;                                 // 0x02BC(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSkinnedItemAsset
	 * Size -> 0x0028 (FullSize[0x02F0] - InheritedSize[0x02C8])
	 */
	class UTLSkinnedItemAsset : public UTLDropItemAsset
	{
	public:
		struct FSoftObjectPath                                     basemodel;                                               // 0x02C8(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AlternativeSocketSearchPoint;                            // 0x02E0(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsMaxImpulseMagnitude;                              // 0x02E8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNBJ[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLItemAsset
	 * Size -> 0x00A8 (FullSize[0x0370] - InheritedSize[0x02C8])
	 */
	class UTLItemAsset : public UTLDropItemAsset
	{
	public:
		struct FSoftObjectPath                                     basemodel;                                               // 0x02C8(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     StayContiFileForEquipped;                                // 0x02E0(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AnimDynamicsAssetForEquippedItemAndFO;                   // 0x02F8(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ItemAnimMontage;                                         // 0x0310(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemAnimStateMachineUse;                                 // 0x0328(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemAnimStateMachineNoTransition;                        // 0x0329(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemUseBoneSimulation;                                   // 0x032A(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemHideOutline;                                         // 0x032B(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPhysicalFXMaterial                                      PhysicalFXMaterialHit;                                   // 0x032C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemUseOwnBound;                                         // 0x032D(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCA2[0x2];                                   // 0x032E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PhysicsMaxImpulseMagnitude;                              // 0x0330(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEPY[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ItemScalePerCompositeModelCategory;                      // 0x0338(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemUseAbsoluteRotation;                                 // 0x0350(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSKA[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ItemInitialYawForAbsoluteRotation;                       // 0x0354(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ItemUseAbsoluteScale;                                    // 0x0358(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XY9L[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHiveEntityCharacterModelTypeBaseMaterialOverrideConfig BaseOverrideMaterialConfig;                              // 0x0360(0x0010) Edit, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLLandscapeSamplerComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UTLLandscapeSamplerComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_LT1S[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		TArray<float> GetLandscapeHeights(const struct FVector2D& Extent, int32_t numWidth, int32_t numHeight);
		struct FVector FindMajorSlopeNormal(TArray<struct FVector> Normals);
		TArray<struct FVector> CalculateNormalsFromHeightfield(TArray<float> heightField, int32_t numWidth, int32_t numHeight);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLLateReverbComponent
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class UTLLateReverbComponent : public UAkLateReverbComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLLevelSequenceStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLLevelSequenceStatics : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMapBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLMapBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdatePrimitiveBounds(class UPrimitiveComponent* PrimitiveComponent);
		bool BuildHierarchicalInstancedStaticMesh(class UHierarchicalInstancedStaticMeshComponent* Component, bool async, bool Force);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMapRoomDebugVisualizerComponent
	 * Size -> 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
	 */
	class UTLMapRoomDebugVisualizerComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMapRoomStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLMapRoomStatics : public UBlueprintFunctionLibrary
	{
	public:
		void GetMapRoomAllComponents(class Umaproom* InMapRoom, TArray<class USceneComponent*>* OutSceneComponents);
		void GetMapRoomActorAllComponents(class AMapRoomActor* InMapRoomActor, TArray<class USceneComponent*>* OutSceneComponents);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMapEditorSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTLMapEditorSettings : public UObject
	{
	public:
		bool                                                       bMaterialSetInPlay;                                      // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnvironmentActiveInEditor;                              // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRoomAnimation;                                       // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrassParticle;                                          // 0x002B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRouteShapeInEditor;                                 // 0x002C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWaterShapeInEditor;                                 // 0x002D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkylightFastCapture;                                    // 0x002E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGO5[0x1];                                   // 0x002F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMaterialSetManager
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class UTLMaterialSetManager : public UObject
	{
	public:
		TArray<TWeakObjectPtr<class UUnrealBakedMaterialSet>>      LiveMaterialSets;                                        // 0x0028(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THWJ[0xA0];                                  // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           EnvFieldBrushMaterialSet;                                // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           EnvFieldBrushMaterialSetFade;                            // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           EnvFieldBrushObstacle;                                   // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           EnvFieldBrushObstacleDecay;                              // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              EnvFieldRenderTarget;                                    // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EnvFieldCpuTexture;                                      // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7QB[0x228];                                 // 0x0108(0x0228) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLModelStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLModelStatics : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMusic
	 * Size -> 0x0208 (FullSize[0x0230] - InheritedSize[0x0028])
	 */
	class UTLMusic : public UObject
	{
	public:
		class UTLMusic*                                            BaseMusic;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74JF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSoundEvent*                                       PlayEvent;                                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       StopEvent;                                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       PauseEvent;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       ResumeEvent;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PausePreviousMusic;                                      // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9KD[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   PauseTransitionDurationMs;                               // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StateGroup;                                              // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultTypeAsFallback;                               // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R80[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ETLAudioMusicOutroType, struct FTLAudioMusicOutroData> OutroData;                                               // 0x0088(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bUsePaletteMode;                                         // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaletteTriggerGrouping;                                 // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X75A[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPaletteMusicRandomTrigger                          TimeTrigger;                                             // 0x00E0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPaletteMusicRandomTrigger                          DistanceTrigger;                                         // 0x0108(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FPaletteMusicStateCondition>                 DisableStateConditions;                                  // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bReplayMode;                                             // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1W9[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxReplayTime;                                           // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReplayStateGroup;                                        // 0x0148(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReplayState;                                             // 0x0158(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetPlayCount;                                            // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCZW[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlayCount;                                            // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConstraintMapRegionTypes[0x50];                          // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
		ETLAudioMusicOutroType                                     DefaultConstraintMapRegionTypeOutro;                     // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYOV[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ETLConstraintMapRegionType, ETLAudioMusicOutroType>   ExceptionalConstraintMapRegionTypeOutros;                // 0x01C8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPaletteMusicStateCondition                         DisableStateCondition;                                   // 0x0218(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMusicComponent
	 * Size -> 0x00B8 (FullSize[0x02B0] - InheritedSize[0x01F8])
	 */
	class UTLMusicComponent : public USceneComponent
	{
	public:
		class UTLMusic*                                            MusicAsset;                                              // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowOverlap;                                           // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCR2[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeBand;                                                // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InOutBoundaryOffset;                                     // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePaletteMode;                                         // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaletteTriggerGrouping;                                 // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRX1[0x6];                                   // 0x0212(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPaletteMusicRandomTrigger                          TimeTrigger;                                             // 0x0218(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPaletteMusicRandomTrigger                          DistanceTrigger;                                         // 0x0240(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        AudioTags;                                               // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ReverseAudioTagsBehavior;                                // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK74[0x37];                                  // 0x0279(0x0037) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMusicManager
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UTLMusicManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_U8G9[0x1B8];                                 // 0x0028(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMusicVolume
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class ATLMusicVolume : public AVolume
	{
	public:
		class UTLMusicComponent*                                   MusicComponent;                                          // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLMyPCActorComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTLMyPCActorComponent : public UActorComponent
	{
	public:
		void OnMovementModeChanged(EMovementMode CurrentMovementMode, unsigned char CurrentCustomMode, EMovementMode PreviousMovementMode, unsigned char PreviousCustomMode);
		void OnModelLoaded(class USkeletalMeshComponent* SkeletalMeshComponent);
		void OnFootprint(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLNonPlayerCharacterAsset
	 * Size -> 0x03E0 (FullSize[0x1A70] - InheritedSize[0x1690])
	 */
	class UTLNonPlayerCharacterAsset : public UTLCharacterAsset
	{
	public:
		bool                                                       bAlwaysTickPoseAndRefreshBones;                          // 0x1690(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAXR[0x7];                                   // 0x1691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PhysicsSimulationDisabledBones;                          // 0x1698(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		TArray<class FName>                                        PhysicsSimulationDisabledSequences;                      // 0x16A8(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		ESnActionNpcFXCategory                                     NpcFxImportance;                                         // 0x16B8(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XOQ[0x7];                                   // 0x16B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHiveEntityCharacterModelTypeNpcCompositePartCustomizingConfig NpcCompositePartCustomizingConfig;                       // 0x16C0(0x0280) Transient, NativeAccessSpecifierPublic
		unsigned char                                              NpcCustomizingSetting[0x28];                             // 0x1940(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NpcCompositeSlot_01[0x28];                               // 0x1968(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NpcCompositeSlot_02[0x28];                               // 0x1990(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NpcCompositeSlot_03[0x28];                               // 0x19B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NpcCompositeSlot_04[0x28];                               // 0x19E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NpcCompositeSlot_05[0x28];                               // 0x1A08(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FHiveEntityCharacterModelTypeNpcOverrideSocketConfig NpcCompositeOverrideSocketConfig;                        // 0x1A30(0x0010) Edit, Transient, NativeAccessSpecifierPublic
		int32_t                                                    AttachedItemLeftHandMountSocketOverride;                 // 0x1A40(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttachedItemRightHandMountSocketOverride;                // 0x1A44(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttachedItemShieldMountSocketOverride;                   // 0x1A48(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleLeftHandNPC;                                    // 0x1A4C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleRightHandNPC;                                   // 0x1A50(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleShieldNPC;                                      // 0x1A54(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleQuiverNPC;                                      // 0x1A58(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleItem01NPC;                                      // 0x1A5C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleItem02NPC;                                      // 0x1A60(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleItem03NPC;                                      // 0x1A64(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemScaleItem04NPC;                                      // 0x1A68(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY58[0x4];                                   // 0x1A6C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneNpcCustomizingRuntimeGeneratedData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USceneNpcCustomizingRuntimeGeneratedData : public UObject
	{
	public:
		TArray<int32_t>                                            MaterialIndexToPartMapping;                              // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLParticleDebugSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UTLParticleDebugSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_GVD2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHudEnabled;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverviewEnabled;                                        // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3H76[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           OverviewLocation;                                        // 0x0034(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLWorldDebuggerHudTextOptions                      TextOptions;                                             // 0x003C(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RadiusFilter;                                            // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemFilterEnabled;                                    // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X124[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SystemFilter;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorFilterEnabled;                                     // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8DH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActorFilter;                                             // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLParticleDebugHudVerbosity                               SystemDebugVerbosity;                                    // 0x0080(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3TI[0x3];                                   // 0x0081(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSystemShowEmitter;                                      // 0x0084(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemShowLocator;                                      // 0x0085(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemShowBounds;                                       // 0x0086(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemShowTickEnabledOnlyInWorld;                       // 0x0087(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGlobalPerformanceInfo;                              // 0x0088(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZAT[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPhysicalFXMaterialInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLPhysicalFXMaterialInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPhysicsStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLPhysicsStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool TLMultiSphereTraceForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPlayerCharacterAsset
	 * Size -> 0x0220 (FullSize[0x18B0] - InheritedSize[0x1690])
	 */
	class UTLPlayerCharacterAsset : public UTLCharacterAsset
	{
	public:
		bool                                                       bUseInitialMakeupPreset;                                 // 0x1690(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VRG[0x7];                                   // 0x1691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InitialMakeupPreset[0x28];                               // 0x1698(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                CompositeModelCategory;                                  // 0x16C0(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EquipItemScale;                                          // 0x16C8(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A8M[0x4];                                   // 0x16CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OverrideSocketMesh[0x28];                                // 0x16D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomHair[0x28];                                        // 0x16F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomBeard[0x28];                                       // 0x1720(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomEyebrow[0x28];                                     // 0x1748(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomLongBeard[0x28];                                   // 0x1770(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomSkinFace[0x28];                                    // 0x1798(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomHelmet[0x28];                                      // 0x17C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomTorso[0x28];                                       // 0x17E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomPants[0x28];                                       // 0x1810(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomGloves[0x28];                                      // 0x1838(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomBoots[0x28];                                       // 0x1860(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomCape[0x28];                                        // 0x1888(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPlayerCustomizeGenderAsset
	 * Size -> 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
	 */
	class UTLPlayerCustomizeGenderAsset : public UTLCommonModelDefinition
	{
	public:
		struct FSoftObjectPath                                     CompositeHumanMaleResource;                              // 0x0230(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CompositeHumanFemaleResource;                            // 0x0248(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CompositeDevTestAResource;                               // 0x0260(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CompositeDevTestBResource;                               // 0x0278(0x0018) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPlayerOutfitPartGenderAsset
	 * Size -> 0x00A8 (FullSize[0x0370] - InheritedSize[0x02C8])
	 */
	class UTLPlayerOutfitPartGenderAsset : public UTLDropItemAsset
	{
	public:
		unsigned char                                              HumanMalePart[0x28];                                     // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HumanFemalePart[0x28];                                   // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DevTestAPart[0x28];                                      // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DevTestBPart[0x28];                                      // 0x0340(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESnPhysicalFXMaterial                                      PhysicalFXMaterialBody;                                  // 0x0368(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9J7[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPlayFoAnimationSection
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UTLPlayFoAnimationSection : public UMovieSceneSection
	{
	public:
		class FName                                                SequenceName;                                            // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        BlendInTime;                                             // 0x00F0(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        BlendOutTime;                                            // 0x00F4(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SequenceDuration;                                        // 0x00F8(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWXY[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPlayFoAnimationTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLPlayFoAnimationTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_CV1T[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPoolableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLPoolableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLPooledActor
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class ATLPooledActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_55AI[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLActorPool*                                        AssignedPool;                                            // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2GB0[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLProjectilePool
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTLProjectilePool : public UTLActorPool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLProjectile
	 * Size -> 0x01F8 (FullSize[0x0440] - InheritedSize[0x0248])
	 */
	class ATLProjectile : public ATLPooledActor
	{
	public:
		unsigned char                                              UnknownData_H9R3[0x98];                                  // 0x0248(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalOffsetCurveAsset[0x28];                             // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HitTargetActionTree[0x28];                               // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_VB4H[0x28];                                  // 0x0330(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUnrealSceneRootComponent*                           SceneRootComponent;                                      // 0x0358(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6043[0xE0];                                  // 0x0360(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLProjectileWorldManager
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UTLProjectileWorldManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_7NFS[0x80];                                  // 0x0030(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLReverbVolume
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class ATLReverbVolume : public AAkReverbVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLScenario
	 * Size -> 0x0288 (FullSize[0x02B0] - InheritedSize[0x0028])
	 */
	class UTLScenario : public UAssetUserData
	{
	public:
		int32_t                                                    LevelSequenceDurationMs;                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCutSceneCameraSetting;                          // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCutSceneCamera;                                      // 0x002E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFindNearestCameraLocation;                              // 0x002F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NearestCameraCandidateTagName;                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLCutSceneMaterialQuality                                 MaterialQuality;                                         // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOffSuperSampling;                                   // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMyPc;                                                // 0x003A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetMyPcSubStances;                                    // 0x003B(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableRebase;                                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMF2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     LevelPreLoadLocations;                                   // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseCameraAsOrigin;                                      // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBXB[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OriginOffset;                                            // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PreSceneContiPath;                                       // 0x0060(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreSceneContiDuration;                                   // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableCutsceneCameraBlend;                             // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraBlendIn;                                       // 0x007D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceStartSequencerDuringCameraBlend;                   // 0x007E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZDW[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraBlendInTime;                                       // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   CameraBlendInFunction;                                   // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JKH[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraBlendInExponent;                                   // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraBlendInStartPitch;                                 // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraBlendInStartYaw;                                   // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraBlendOut;                                      // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceEndSequencerDuringCameraBlend;                     // 0x0095(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInGameCameraStartBlendAtCurrentCutSceneCamera;          // 0x0096(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOST[0x1];                                   // 0x0097(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InGameCameraBlendOutDuration;                            // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraBlendOutTime;                                      // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   CameraBlendOutFunction;                                  // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_504P[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraBlendOutExponent;                                  // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncWithCineCameraActor;                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY57[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnableObjectTransform>                   CineCameraEndPosSyncInfos;                               // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bUseGameCameraRotation;                                  // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYY9[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ManualCameraRotation;                                    // 0x00C4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseBackViewGameCamera;                                  // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGameCameraDistance;                                  // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RV2U[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameCameraDistance;                                      // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConnetToNextScenario;                                   // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkippable;                                              // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bObjectInvisibleModeEnabled;                             // 0x00DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InvisibleObjectSettings;                                 // 0x00DB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideMapAreaVolume;                                      // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W3J[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     StopConti;                                               // 0x00E0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CueSheetTagNameOnFinished;                               // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECueSheetOpType                                            CueSheetOpType;                                          // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePcMoveToStart;                                       // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS8W[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PcMoveMaxDuration;                                       // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PcMoveStartSyncDuration;                                 // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PcMoveStartSyncDistance;                                 // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomSmoothSyncAnimation;                           // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMMI[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PcStartPosition;                                         // 0x0114(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PcStartRotation;                                         // 0x0120(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PcWalkStartDistance;                                     // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PcWalkSpeed;                                             // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMyPcEndPosResetType                                       MyPcEndPosResetType;                                     // 0x0134(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8K3[0x3];                                   // 0x0135(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TMap<class FName, struct FSpawnableMyPcObjectTransform>    MyPcEndPosSyncInfosByTag;                                // 0x0138(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseNPCMoveToStart;                                      // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WM0[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NPCMoveMaxDuration;                                      // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MainNPCGuid;                                             // 0x0190(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NPCStartPosition;                                        // 0x0198(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            NPCStartRotation;                                        // 0x01A4(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EScenarioAudioSnapshot                                     AudioSnapshot;                                           // 0x01B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA0P[0x3];                                   // 0x01B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bBlockUISound;                                           // 0x01B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRewindMusic;                                            // 0x01B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZXT[0x2];                                   // 0x01B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, bool>                                    MyPcFinalVisibilities;                                   // 0x01B8(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, struct FTLScenarioActorBoundObjectFinalProperty> SceneObjectFinalProperties;                              // 0x0208(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FTLScenarioActorBoundObjectFinalProperty> FixedHiveActorFinalProperties;                           // 0x0258(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCNG[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLScenarioActor
	 * Size -> 0x0230 (FullSize[0x0460] - InheritedSize[0x0230])
	 */
	class ATLScenarioActor : public AActor
	{
	public:
		class FString                                              DebugName;                                               // 0x0230(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioActorType                                       ActorType;                                               // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioActorAnimationMode                              AnimationMode;                                           // 0x0241(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CKE[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     CustomAnimBP;                                            // 0x0248(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAlternativeAnim;                                     // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KE1L[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ObjectGuid;                                              // 0x0268(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               HiveActorGuid;                                           // 0x0270(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MapRoomDefaultAttachComponentGuid;                       // 0x0280(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLastSubShot;                                          // 0x0290(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RXV[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHiveEntityData*                                     HiveEntity;                                              // 0x0298(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFixedLevelLodZero;                                      // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMKR[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUnrealInitializeActorStateComponent*                InitializeActorStateComponent;                           // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTransformTrack;                                   // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyRelatveTransform;                                  // 0x02B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCapsuleBottomAsPivot;                                // 0x02B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvisibleArmorPartsEnabled;                             // 0x02B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYF1[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESnModelCompositeArmorPart>                         InvisibleArmorParts;                                     // 0x02B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCollisionDisabled;                                      // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOffStayConti;                                       // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOffStayContiForControlled;                          // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioActorZPosUpdateMode                             ZPosUpdateMode;                                          // 0x02CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioActorFootIKMode                                 FootIKMode;                                              // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnTeleportMode                                            TeleportType;                                            // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideStance;                                         // 0x02CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnStanceType                                              stance;                                                  // 0x02CF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnStanceType                                              SecondaryStance;                                         // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSubStance;                                      // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSubStanceType                                           substance;                                               // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImmediatelyCarry;                                       // 0x02D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSubStanceChangeSheatheAnimationMode                     SheatheAnimationMode;                                    // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSubstanceChangeBlending;                         // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bObjectInvisibleModeEnabled;                             // 0x02D6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisibility;                                             // 0x02D7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Opacity;                                                 // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastInsetShadow;                                        // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderInMainPass;                                       // 0x02DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth;                                      // 0x02DE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNYQ[0x1];                                   // 0x02DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnDecalReceiveType                                        DecalRecieveType;                                        // 0x02E0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0WZ[0x3];                                   // 0x02E1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_1TGX[0x17C];                                 // 0x02E4(0x017C) MISSED OFFSET (PADDING)

	public:
		void OnTransformedIn();
		class FName GetBoundTagName();
		class AActor* GetBoundObjectActor();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLScenarioPreloadingVolume
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class ATLScenarioPreloadingVolume : public AVolume
	{
	public:
		ETLScenarioPreloadingReleaseType                           PreloadingReleaseType;                                   // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CJE[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PreloadingReleaseTag;                                    // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGWD[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     LevelSequencePath;                                       // 0x02B8(0x0018) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             LevelSequencePathList;                                   // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTLI[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class AActor* MyActor, class AActor* OtherActor);
		void OnBeginOverlap(class AActor* MyActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSceneCapture2DAutoResize
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class ATLSceneCapture2DAutoResize : public ASceneCapture
	{
	public:
		class USceneCaptureComponent2D*                            CaptureComponent2D;                                      // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EA64[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnInterpToggle(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSceneFXBudgetControl
	 * Size -> 0x0358 (FullSize[0x0380] - InheritedSize[0x0028])
	 */
	class UTLSceneFXBudgetControl : public UObject
	{
	public:
		struct FTLSceneFXBudgetControlConfigGroup                  Ultra;                                                   // 0x0028(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  High;                                                    // 0x00A0(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  Medium;                                                  // 0x0118(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  Low;                                                     // 0x0190(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  ProjectileHigh;                                          // 0x0208(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  ProjectileMedium;                                        // 0x0280(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigGroup                  ProjectileLow;                                           // 0x02F8(0x0078) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfigTiming                 Timing;                                                  // 0x0370(0x000C) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXO0[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLServerSequenceEffectSection
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UTLServerSequenceEffectSection : public UMovieSceneSection
	{
	public:
		ETLServerSequenceEffect                                    effect;                                                  // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLServerSequenceEffectTransformType                       TransformType;                                           // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLServerSequenceEffectVolumeType                          VolumeType;                                              // 0x00EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FK1C[0x1];                                   // 0x00EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x00EC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CylinderRadius;                                          // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CylinderHeight;                                          // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtent;                                               // 0x0100(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E07Y[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLServerSequenceEffectTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLServerSequenceEffectTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_CNCC[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSignificanceManager
	 * Size -> 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
	 */
	class UTLSignificanceManager : public USignificanceManager
	{
	public:
		unsigned char                                              UnknownData_T31Z[0x18];                                  // 0x0120(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSkillDebugSettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UTLSkillDebugSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_KPCK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMO6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AutoNPCSkillID;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoNPCSkillTargetFPS;                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfSkillsToDisplay;                                    // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZombieTime;                                              // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLSkillDebugVerbosity                                     DebugVerbosity;                                          // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSCK[0x3];                                   // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSaveResultToLog;                                        // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A25N[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LogFileName;                                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSoundBank
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UTLSoundBank : public UAkAudioBank
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSoundComponent
	 * Size -> 0x00F0 (FullSize[0x04D0] - InheritedSize[0x03E0])
	 */
	class UTLSoundComponent : public UAkComponent
	{
	public:
		bool                                                       bOverrideAttenuation;                                    // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICPY[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OmniRadius;                                              // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeBand;                                                // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeScalingFactor;                                     // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AudioTags;                                               // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ReverseAudioTagsBehavior;                                // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWGV[0xCF];                                  // 0x0401(0x00CF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSoundEvent
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UTLSoundEvent : public UAkAudioEvent
	{
	public:
		unsigned char                                              UnknownData_PURQ[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSoundVolume
	 * Size -> 0x0098 (FullSize[0x0340] - InheritedSize[0x02A8])
	 */
	class ATLSoundVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_O77B[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSoundEvent*                                       OnEnterSoundEvent;                                       // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnLeaveSoundEvent;                                       // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GlobalStingerEvent;                                      // 0x02C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalStingerPlayPreventTimeSec;                         // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowOverlap;                                           // 0x02DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2EN[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoStopWhenLeave;                                      // 0x02E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDZB[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeBand;                                                // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InOutBoundaryOffset;                                     // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AudioTags;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ReverseAudioTagsBehavior;                                // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDynamicEmitterPosition;                                 // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAttenuation;                                    // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWO2[0x1];                                   // 0x0303(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSpread;                                               // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFQF[0x38];                                  // 0x0308(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSplineParticleComponent
	 * Size -> 0x0108 (FullSize[0x0300] - InheritedSize[0x01F8])
	 */
	class UTLSplineParticleComponent : public USceneComponent
	{
	public:
		class Umaproom*                                            PatternMapRoom;                                          // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PatternSize;                                             // 0x0200(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpawnRange;                                      // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpawnRangeDuration;                              // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleBlendingOutLength;                               // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E1Y[0x30];                                  // 0x0218(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               BuiltRoomPackageGuid;                                    // 0x0248(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DecalPatternMaterial;                                    // 0x0258(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UParticleSystemComponent*>                    ParticlePatternComponentArray;                           // 0x0260(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<int32_t, struct FTLSplineParticleBlock>               ParticleBlockTable;                                      // 0x0270(0x0050) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FTLSplineParticleBlock>                      AbandonedBlocks;                                         // 0x02C0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KJNZ[0x30];                                  // 0x02D0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSplineParticleBlueprintComponent
	 * Size -> 0x0030 (FullSize[0x0330] - InheritedSize[0x0300])
	 */
	class UTLSplineParticleBlueprintComponent : public UTLSplineParticleComponent
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0300(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSize;                                                // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalScale;                                              // 0x030C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  DecalTransforms;                                         // 0x0318(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBWY[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		void ClearSegments();
		void ApplyProperties();
		void AddSegment(const struct FTransform& Transform);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSpringArmComponent
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class UTLSpringArmComponent : public USpringArmComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLTrailComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UTLTrailComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_I2RZ[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLTransformTransitionSection
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UTLTransformTransitionSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x00E8(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetBone;                                              // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLTransformTransitionInterpolationType                    InterpolationType;                                       // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OperationType;                                           // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLSB[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
		struct FMovieSceneObjectBindingID GetConstraintBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLTransformTransitionTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UTLTransformTransitionTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_DMJG[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLVirtualSocketManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLVirtualSocketManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldFXActorPool
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTLWorldFXActorPool : public UTLActorPool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldFXActor
	 * Size -> 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
	 */
	class ATLWorldFXActor : public ATLPooledActor
	{
	public:
		unsigned char                                              UnknownData_XP2I[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUnrealSceneRootComponent*                           SceneRootComponent;                                      // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T179[0x18];                                  // 0x0258(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESnEffectBudgetCategory                                    FXBudgetCategory;                                        // 0x0270(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y3WJ[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldSubsystem
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UTLWorldSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_BRN1[0x90];                                  // 0x0030(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealAnimSkeletalMeshComponent
	 * Size -> 0x0438 (FullSize[0x1320] - InheritedSize[0x0EE8])
	 */
	class UUnrealAnimSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		class USkeletalMeshComponent*                              FacialAnimationComponent;                                // 0x0EE8(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              PartSlaveComponents[0xE];                                // 0x0EF0(0x0070) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroomComponent*                                     GroomComponent;                                          // 0x0F60(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingGroomComponent;                                    // 0x0F68(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVV6[0x7];                                   // 0x0F69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      OverlappedPartSlaveComponents_Torso;                     // 0x0F70(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USkeletalMeshComponent*>                      OverlappedPartSlaveComponents_Pants;                     // 0x0F80(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USkeletalMeshComponent*>                      OverlappedPartSlaveComponents_Gloves;                    // 0x0F90(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USkeletalMeshComponent*>                      OverlappedPartSlaveComponents_Boots;                     // 0x0FA0(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USkinnedMeshComponent*>                       RecyclePoolSnapshotComponents;                           // 0x0FB0(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USkinnedMeshComponent*>                       ActiveSnapshotComponents;                                // 0x0FC0(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UCharacterPhysicsMotion*                             CharPhysicsMotion;                                       // 0x0FD0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMergePartSkeletons;                                     // 0x0FD8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JEJ[0x347];                                 // 0x0FD9(0x0347) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealAttachedItemAnimInstance
	 * Size -> 0x0048 (FullSize[0x10F0] - InheritedSize[0x10A8])
	 */
	class UUnrealAttachedItemAnimInstance : public UUnrealModelAnimInstance
	{
	public:
		class ATLCharacter*                                        Creature;                                                // 0x10A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimMontageData;                                         // 0x10B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   IdleSequence;                                            // 0x10B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   MoveSequence;                                            // 0x10C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   JumpSequence;                                            // 0x10C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterIdleState;                                      // 0x10D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterMoveState;                                      // 0x10D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterJumpState;                                      // 0x10D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEQ8[0x1];                                   // 0x10D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentOwnerAnimState;                                   // 0x10D4(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleStanceChanged;                                    // 0x10DC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMasterPoseParts;                                        // 0x10DD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimRetargetingCopyPose;                                // 0x10DE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GI99[0x11];                                  // 0x10DF(0x0011) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealBakedMaterialSet
	 * Size -> 0x01A8 (FullSize[0x04C0] - InheritedSize[0x0318])
	 */
	class UUnrealBakedMaterialSet : public UMaterialInstanceConstant
	{
	public:
		TArray<struct FBakedMaterialSetCondition>                  ConditionList;                                           // 0x0318(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               VolumeID;                                                // 0x0328(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentCondition;                                        // 0x0338(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  BaseParent;                                              // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ReleaseParent;                                           // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, ESnPhysicalSurface>                      LayerPhysicalSurfaces;                                   // 0x0350(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              WeakBoundComponents[0x50];                               // 0x03A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              BoundComponents[0x50];                                   // 0x03F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              WeakBoundMIDs[0x50];                                     // 0x0440(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bAffectsWorld;                                           // 0x0490(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8TX[0x2F];                                  // 0x0491(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCableComponent
	 * Size -> 0x00A8 (FullSize[0x0540] - InheritedSize[0x0498])
	 */
	class UUnrealCableComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ERUO[0x8];                                   // 0x0498(0x0008) Fix Super Size
		struct FComponentReference                                 AttachEndTo;                                             // 0x04A0(0x0028) Edit, NativeAccessSpecifierPublic
		class FName                                                AttachEndToSocketName;                                   // 0x04C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLocation;                                             // 0x04D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartLocation;                                           // 0x04DC(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x04E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableLength;                                             // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x04F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubstepTime;                                             // 0x04F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SolverIterations;                                        // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStiffness;                                        // 0x04FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x04FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JYY[0x2];                                   // 0x04FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionFriction;                                       // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CableForce;                                              // 0x0504(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableGravityScale;                                       // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableWidth;                                              // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSides;                                                // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterial;                                            // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTY3[0x20];                                  // 0x0520(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetAttachEndToComponent(class USceneComponent* Component, const class FName& SocketName);
		void SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName);
		void GetCableParticleLocations(TArray<struct FVector>* Locations);
		class USceneComponent* GetAttachedComponent();
		class AActor* GetAttachedActor();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCameraActor
	 * Size -> 0x00FC (FullSize[0x08CC] - InheritedSize[0x07D0])
	 */
	class AUnrealCameraActor : public ACameraActor
	{
	public:
		bool                                                       bIgnoreChangeToDefaultCamera;                            // 0x07D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateAspectRatioByViewportRatio;                       // 0x07D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0VV[0x3A];                                  // 0x07D2(0x003A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraFov;                                               // 0x080C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RBF5[0x50];                                  // 0x0810(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSpringArmComponent*                               SpringArmComp;                                           // 0x0860(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KKQN[0x64];                                  // 0x0868(0x0064) Fix size for supers

	public:
		void SetRotationBP(const struct FRotator& InRotation);
		void SetPosisionBP(const struct FVector& InPosition);
		void SetFOVBP(float InFOV);
		struct FRotator GetRotationBP();
		struct FVector GetPosittionBP();
		float GetFOVBP();
		ESnCameraType GetCameraTypeBP();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCameraModifierPostProcess
	 * Size -> 0x0588 (FullSize[0x05D0] - InheritedSize[0x0048])
	 */
	class UUnrealCameraModifierPostProcess : public UCameraModifier
	{
	public:
		unsigned char                                              UnknownData_15YO[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                Settings;                                                // 0x0050(0x0570) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x05C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D835[0xC];                                   // 0x05C4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLSceneCameraPersonalization
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTLSceneCameraPersonalization : public UObject
	{
	public:
		TArray<struct FTLSceneCameraPersonalizationCustomizingCamera> CustomizingCameraConfigs;                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLSceneCameraPersonalizationCustomizingCamera> CustomizingCameraPhotoConfigs;                           // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCharacterPreviewCameraActor
	 * Size -> 0x0124 (FullSize[0x09F0] - InheritedSize[0x08CC])
	 */
	class AUnrealCharacterPreviewCameraActor : public AUnrealCameraActor
	{
	public:
		float                                                      TargetOffsetInterpSpeed;                                 // 0x08CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetDistanceInterpSpeed;                               // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraInterpSpeed;                                       // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltAngle_Min;                                           // 0x08D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltAngle_Max;                                           // 0x08DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModelRotateDPIWeight;                                    // 0x08E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModelRotateSpeedWeight;                                  // 0x08E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CameraSceneOffCenterOffset;                              // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraSceneDistOffset;                                   // 0x08F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZoomSteps;                                               // 0x08F4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentZoom;                                             // 0x08F8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltAngle;                                               // 0x08FC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLookat;                                           // 0x0900(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvaliableLookat;                                        // 0x0901(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTemporaryPauseLookAt;                                   // 0x0902(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJ1N[0x1];                                   // 0x0903(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookatActivateDistance;                                  // 0x0904(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookatAreaRatio;                                         // 0x0908(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTemporaryBlockModelRotation;                            // 0x090C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTickOnBecomingViewTarget;                         // 0x090D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreviewCameraMode                                         PreviewMode;                                             // 0x090E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJBG[0x9];                                   // 0x090F(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSceneCameraPersonalization*                       CameraSetting;                                           // 0x0918(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePostProcessingSetting;                               // 0x0920(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MT24[0xCF];                                  // 0x0921(0x00CF) MISSED OFFSET (PADDING)

	public:
		void TryChangeZoomStep(int32_t Offset);
		void SetToDefaultPosition();
		void SetOffCenterOffset(const struct FVector2D& InCenterOffset, float InDistOffset);
		void ResetPreviewCharacaterLookat();
		class AActor* GetTargetActor();
		void ForceSetZoomStep(int32_t InZoomStep);
		void EnablePreviewCharacaterLookat(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCompositeBeardDef
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class USceneCompositeBeardDef : public UPrimaryDataAsset
	{
	public:
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BeardMesh[0x28];                                         // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkinMaskTexture[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseOverrideMaterial;                                    // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNVU[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneBeardOverrideMaterial>                 OverrideMaterials;                                       // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneBeardPerFace>                          FaceMapping;                                             // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCompositeEyebrowDef
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class USceneCompositeEyebrowDef : public UPrimaryDataAsset
	{
	public:
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Mesh[0x28];                                              // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkinMaskTexture[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FSceneEyebrowPerFace>                        FaceMapping;                                             // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCompositeFaceDef
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class USceneCompositeFaceDef : public UPrimaryDataAsset
	{
	public:
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FaceMesh[0x28];                                          // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESnModelCompositeFaceType                                  FaceType;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJ2D[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EarMeshDefault[0x28];                                    // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FSceneFaceEarVariation>                      EarMeshVariation;                                        // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideMaterial;                                    // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKKL[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneFaceOverrideMaterial>                  OverrideMaterials;                                       // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneFaceDefSeamline>                       NeckSkinSeamlineLodData;                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCompositeHairDef
	 * Size -> 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
	 */
	class USceneCompositeHairDef : public UPrimaryDataAsset
	{
	public:
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Standard[0x28];                                          // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StandardAnimDynamics[0x28];                              // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseOwnAnimBP;                                           // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandardOverrideMaterial;                               // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U59M[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneHairOverrideMaterial>                  StandardOverrideMaterials;                               // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ShowTorsoCollar;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByTorso;                                        // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S11R[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneHairModePart>                          HairModeParts;                                           // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              HairGroomAsset[0x28];                                    // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HairGroomPhysicsAsset[0x28];                             // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HairGroomBindingAsset[0x28];                             // 0x0110(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             HairGroomComponentTranslation;                           // 0x0138(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HairGroomComponentRotation;                              // 0x0144(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseSkeletalMeshInGame;                                  // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3T7[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneCompositePartDef
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class USceneCompositePartDef : public UPrimaryDataAsset
	{
	public:
		ESnModelCompositeArmorPart                                 Slot;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECompositePartFitting                                      Fitting;                                                 // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeHairMode                                  HairMode;                                                // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeEarMode                                   EarMode;                                                 // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeHelmetType                                HelmetMode;                                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeTorsoType                                 TorsoMode;                                               // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMET[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Main[0x28];                                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MainAnimDynamics[0x28];                                  // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseOwnAnimationBP;                                      // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeArmorPartOverlapPriority                  MainOverlapPriority;                                     // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMainOverrideMaterial;                                   // 0x009A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7HL[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneOverrideMaterial>                      MainOverrideMaterials;                                   // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvisibleSkin;                                          // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL0M[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkinMesh[0x28];                                          // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkinMaskTexture[0x28];                                   // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FSceneCPDSkinLodMesh>                        ClippingLodData;                                         // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneOverlapAreaPart>                       ConnectionAlpha;                                         // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneOverlapAreaPart>                       ConnectionBeta;                                          // 0x0128(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              CollarMeshAsset[0x28];                                   // 0x0138(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ShowTorsoCollar;                                         // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowBeard;                                               // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYHY[0x2];                                   // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSceneBoneReference                                 CapeHookLeftBoneName;                                    // 0x0164(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CapeHookLeftOffset;                                      // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      CapeHookLeftOffsetAxis;                                  // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCapeHookLeftOffsetAxisNegativeDir;                      // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM12[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSceneBoneReference                                 CapeHookMiddleBoneName;                                  // 0x017C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CapeHookMiddleOffset;                                    // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      CapeHookMiddleOffsetAxis;                                // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCapeHookMiddleOffsetAxisNegativeDir;                    // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ7U[0x2];                                   // 0x0192(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSceneBoneReference                                 CapeHookRightBoneName;                                   // 0x0194(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CapeHookRightOffset;                                     // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      CapeHookRightOffsetAxis;                                 // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCapeHookRightOffsetAxisNegativeDir;                     // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HH3[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneOverrideSocketOffset>                  OverrideSocketOffset;                                    // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealContentsTriggerVolume
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class AUnrealContentsTriggerVolume : public AVolume
	{
	public:
		EContentsVolumeCategoryType                                Category;                                                // 0x02A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USK1[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventName;                                               // 0x02AC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIQM[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class AActor* MyActor, class AActor* OtherActor);
		void OnBeginOverlap(class AActor* MyActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCutSceneCameraActor
	 * Size -> 0x0134 (FullSize[0x0A00] - InheritedSize[0x08CC])
	 */
	class AUnrealCutSceneCameraActor : public AUnrealCameraActor
	{
	public:
		unsigned char                                              UnknownData_ZO10[0x4];                                   // 0x08CC(0x0004) Fix Super Size
		unsigned char                                              UnknownData_K7TX[0x130];                                 // 0x08D0(0x0130) MISSED OFFSET (PADDING)

	public:
		void OnUpdateCameraCut(class UCameraComponent* CinemaCameraComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealCutSceneCameraComponent
	 * Size -> 0x0004 (FullSize[0x08E0] - InheritedSize[0x08DC])
	 */
	class UUnrealCutSceneCameraComponent : public UCineCameraComponent
	{
	public:
		unsigned char                                              UnknownData_0FG7[0x4];                                   // 0x08DC(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealFootprintAppearance
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUnrealFootprintAppearance : public UDataAsset
	{
	public:
		TArray<struct FFootprintAppearanceMapping>                 Mappings;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealFreeLagCameraActor
	 * Size -> 0x0044 (FullSize[0x0910] - InheritedSize[0x08CC])
	 */
	class AUnrealFreeLagCameraActor : public AUnrealCameraActor
	{
	public:
		unsigned char                                              UnknownData_H08D[0x4];                                   // 0x08CC(0x0004) Fix Super Size
		unsigned char                                              UnknownData_UEGA[0x40];                                  // 0x08D0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealInitializeActorStateComponent
	 * Size -> 0x00C8 (FullSize[0x02C0] - InheritedSize[0x01F8])
	 */
	class UUnrealInitializeActorStateComponent : public USceneComponent
	{
	public:
		struct FSnActionChangeStanceData                           StanceData;                                              // 0x01F8(0x0050) Edit, NativeAccessSpecifierPublic
		struct FSnActionChangeSubStanceData                        SubStanceData;                                           // 0x0248(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FSnActionStateEquipItemHiveData>             EquipItemDatas;                                          // 0x02A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZWA[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealLevelDummyActorSetting
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UUnrealLevelDummyActorSetting : public UObject
	{
	public:
		unsigned char                                              SpawnEntity[0x28];                                       // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimSequence[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Progress;                                                // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U2B[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneMakeupOption
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UUnrealSceneMakeupOption : public UObject
	{
	public:
		ESceneMakeupOptionType                                     Type;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSJP[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneMakeupOptionHairBaseColor>             HairBaseColorData;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionHairTipColor>              HairTipColorData;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionSkinColor>                 SkinColorData;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionFaceTattooMask>            FaceTattooMaskData;                                      // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionFaceTattooColor>           FaceTattooColorData;                                     // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionBlusherColor>              BlusherColorData;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionIrisColor_Left>            IrisColor_LeftData;                                      // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionEyeDeco>                   EyeDecoData;                                             // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionLipMask>                   LipMaskData;                                             // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionLipColor>                  LipColorData;                                            // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionBeardColor>                BeardColorData;                                          // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionIrisColor_Right>           IrisColor_RightData;                                     // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionEyelashColor>              EyelashColorData;                                        // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionColorSpaceImage>           ColorSpaceImageData;                                     // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionCircularColorSpaceImage>   CircularColorSpaceImageData;                             // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionWarpaintingMask>           WarpaintingMaskData;                                     // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionEyebrowMask>               EyebrowMaskData;                                         // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSceneMakeupOptionFaceTattooColor2>          FaceTattooColor2Data;                                    // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneWorldMakeupPreset
	 * Size -> 0x05B0 (FullSize[0x05D8] - InheritedSize[0x0028])
	 */
	class USceneWorldMakeupPreset : public UObject
	{
	public:
		class FString                                              Description;                                             // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneScaleGroupWeights[0x65];                             // 0x0038(0x0194) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                BoneScaleGroupSettings[0x65];                            // 0x01CC(0x00CA) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBU6[0x2];                                   // 0x0296(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHiveEntityData*                                     TablePicks[0x7];                                         // 0x0298(0x0038) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                TablePickSettings[0x7];                                  // 0x02D0(0x000E) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLEM[0x2];                                   // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Textures[0x6];                                           // 0x02E0(0x0030) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                TextureSettings[0x6];                                    // 0x0310(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_533P[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ObjectPaths[0x3];                                        // 0x0320(0x0048) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                ObjectPathSettings[0x3];                                 // 0x0368(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84XA[0x2];                                   // 0x036E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMakeupPresetColorInfo                              Colors[0x12];                                            // 0x0370(0x00D8) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                ColorSettings[0x12];                                     // 0x0448(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Values[0x22];                                            // 0x046C(0x0088) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                ValueSettings[0x22];                                     // 0x04F4(0x0044) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UHiveEntityData*                                     Parts[0x6];                                              // 0x0538(0x0030) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMakeupPresetSetting                                PartSettings[0x6];                                       // 0x0568(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNJ3[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMakeupPresetShaderConstantTestOption>       CustomColorTestOption;                                   // 0x0578(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 TableUIDs;                                               // 0x0588(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMapHiveMoveSequenceInstanceData
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UUnrealMapHiveMoveSequenceInstanceData : public UDefaultLevelSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_EWBG[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMapRoomLiaisonComponent
	 * Size -> 0x01B8 (FullSize[0x03B0] - InheritedSize[0x01F8])
	 */
	class UUnrealMapRoomLiaisonComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_X3VA[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_X2QE[0x100];                                 // 0x0200(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class USceneComponent*>                  AttachmentSocketComponents;                              // 0x0300(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GG5H[0x60];                                  // 0x0350(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMaterialPermutation
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UUnrealMaterialPermutation : public UObject
	{
	public:
		TArray<class UMaterialInstance*>                           PermutationInstances;                                    // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              PermutationInstancePtrs[0x10];                           // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_PL1E[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMaterialSetConvertSettings
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UUnrealMaterialSetConvertSettings : public UObject
	{
	public:
		unsigned char                                              NewMaterial[0x28];                                       // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bConvertParameters;                                      // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearAllPreviousParameters;                             // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearConditionListOnSuccess;                            // 0x0052(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZ1O[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUnrealMaterialSetRule>                      TextureRules;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FUnrealMaterialSetRule>                      ScalarRules;                                             // 0x0068(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FUnrealMaterialSetRule>                      VectorRules;                                             // 0x0078(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneCineTargetCameraAimingSection
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneCineTargetCameraAimingSection : public UMovieSceneSection
	{
	public:
		class FName                                                SocketName;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x00F0(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneCineTargetCameraAimingTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UUnrealMovieSceneCineTargetCameraAimingTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_HXME[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          ConstraintSections;                                      // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneCineTargetCameraAimingWayPointSection
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneCineTargetCameraAimingWayPointSection : public UMovieSceneSection
	{
	public:
		class FName                                                SocketName;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x00F0(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneCineTargetCameraAimingWayPointTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UUnrealMovieSceneCineTargetCameraAimingWayPointTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_IN59[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          ConstraintSections;                                      // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneContiAnimationSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneContiAnimationSection : public UMovieSceneSection
	{
	public:
		class FString                                              DisplayName;                                             // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SequenceName;                                            // 0x00F8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContiAnimationPlay                                        PlayType;                                                // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTN1[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        BlendIn;                                                 // 0x0104(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        BlendOut;                                                // 0x0108(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        OriginalDuration;                                        // 0x010C(0x0004) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendInTimeFrame_DEPREACATED;                            // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0114(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendOutTimeFrame;                                       // 0x0118(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x011C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OriginalDurationFrame;                                   // 0x0120(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0124(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneContiAnimationTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UUnrealMovieSceneContiAnimationTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_8IF6[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneContiSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneContiSection : public UMovieSceneSection
	{
	public:
		ESnScenarioContiOverrideType                               ContiOverrideType;                                       // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnScenarioContiActionModelType                            ContiModelApplyType;                                     // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D98U[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ContiFile;                                               // 0x00F0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetLifeTimeAsSectionDuration;                           // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VSE[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConditionName;                                           // 0x010C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ContiKeyName;                                            // 0x0114(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TargetId;                                                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionSpeed;                                             // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionScale;                                             // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneContiTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UUnrealMovieSceneContiTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_FQVM[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieScenePlayAnimationSection
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieScenePlayAnimationSection : public UMovieSceneSection
	{
	public:
		class FName                                                SequenceName;                                            // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   AnimSequence;                                            // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   FallbackAnimSequence;                                    // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoop;                                                 // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAEE[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFacialAnim;                                       // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV1N[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        BlendIn;                                                 // 0x010C(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        BlendOut;                                                // 0x0110(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartOffset;                                             // 0x0114(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndMarginTime;                                           // 0x0118(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayAnimationSound;                                     // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OWO[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        SequenceLength;                                          // 0x0120(0x0004) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0124(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendInTimeFrame;                                        // 0x0128(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x012C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendOutTimeFrame;                                       // 0x0130(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OffsetFrame;                                             // 0x0134(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieScenePlayAnimationTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UUnrealMovieScenePlayAnimationTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_3BVC[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneScenarioActorSection
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneScenarioActorSection : public UMovieSceneSection
	{
	public:
		class UHiveEntityData*                                     HiveEntity;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHiveCategory                                              SpawnHiveCategory;                                       // 0x00F0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BG8H[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpawnHiveKey;                                            // 0x00F8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneScenarioActorTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UUnrealMovieSceneScenarioActorTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_A7G3[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneScenarioLoopSection
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UUnrealMovieSceneScenarioLoopSection : public UMovieSceneSection
	{
	public:
		class FName                                                SectionName;                                             // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealMovieSceneScenarioLoopTrack
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UUnrealMovieSceneScenarioLoopTrack : public UUnrealMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_HJEM[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneNpcCompositePartDef
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class USceneNpcCompositePartDef : public UPrimaryDataAsset
	{
	public:
		ESnModelNpcCompositePart                                   Slot;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJI5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Asset[0x28];                                             // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimDynamics[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseOwnAnimBP;                                           // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMaterial;                                       // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXV2[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneNpcOverrideMaterial>                   OverrideMaterials;                                       // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TranslucencySortDistanceOffset;                          // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATDW[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealOverlaySkeletalMeshComponent
	 * Size -> 0x0008 (FullSize[0x0EF0] - InheritedSize[0x0EE8])
	 */
	class UUnrealOverlaySkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_NF8P[0x8];                                   // 0x0EE8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealParticleModuleAdjustSpawnHeight
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UUnrealParticleModuleAdjustSpawnHeight : public UParticleModuleLocationBase
	{
	public:
		struct FRawDistributionFloat                               StartZOffset;                                            // 0x0030(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      RayCastDistance;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RayCastStartPositionOffset;                              // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllowedTotalRayCastCount;                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KillParticleIfAllowedTotalRayCastCountExceeded;          // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4T3[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleSizeBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleSizeBase : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleSizeByDistance
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleSizeByDistance : public USceneParticleModuleSizeBase
	{
	public:
		struct FRawDistributionVector                              SizeScaleByDistance;                                     // 0x0030(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleSpawnController
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleSpawnController : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleSpawnByWind
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleSpawnByWind : public USceneParticleModuleSpawnController
	{
	public:
		bool                                                       bOverrideSpawnPercent;                                   // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7WJ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnPercentWindNone;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPercentWindBreeze;                                  // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPercentWindLight;                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPercentWindHeavy;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQCG[0x1C];                                  // 0x0044(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.ParticleModuleStreakBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UParticleModuleStreakBase : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneParticleModuleStreakAnchor
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UUnrealSceneParticleModuleStreakAnchor : public UParticleModuleStreakBase
	{
	public:
		ESnStreakAnchorColorMode                                   ColorMode;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NGS[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        StartColor;                                              // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        EndColor;                                                // 0x0044(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TexV;                                                    // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleSuppressInRain
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleSuppressInRain : public USceneParticleModuleSpawnController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneParticleModuleTLAuxiliaryBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUnrealSceneParticleModuleTLAuxiliaryBase : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneParticleModuleTLAuxilaryPreventAsyncTick
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUnrealSceneParticleModuleTLAuxilaryPreventAsyncTick : public UUnrealSceneParticleModuleTLAuxiliaryBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleTypeDataLightning
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleTypeDataLightning : public UParticleModuleTypeDataBase
	{
	public:
		int32_t                                                    MaxBoltCount;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InterpolationPoints;                                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysOn;                                               // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F78Q[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TextureTileDistance;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QR09[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               TextureScroll;                                           // 0x0048(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bSmooth;                                                 // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVCS[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Noise;                                                   // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               VarianceFactor;                                          // 0x0080(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               VarianceScale;                                           // 0x00B0(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		ELightningTaperMethod                                      TaperMethod;                                             // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XG0O[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               TaperFactor;                                             // 0x00E8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               TaperScale;                                              // 0x0118(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WMH[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleTypeDataStreak
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleTypeDataStreak : public UParticleModuleTypeDataBase
	{
	public:
		bool                                                       bDeadTrailsOnDeactivate : 1;                             // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePreviousTangentRecalculation : 1;                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTangentRecalculationEveryFrame : 1;                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVI6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TilingDistance;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTilingDistanceIsTrailMaxLength;                         // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F29L[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceTessellationStepSize;                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TangentTessellationStepSize;                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WidthTessellationStepSize;                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVelocityPrediction;                                  // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3IE[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartSensitiveVelocityPredictionDegree;                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullySensitiveVelocityPredictionDegree;                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAnchorCount;                                          // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnchorToAnchorSegmentCount;                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchorToAnchorSegmentSmoothness;                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopAnchor;                                             // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderTangents;                                         // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ7N[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleVelocityBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleVelocityBase : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneParticleModuleVelocityWind
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class USceneParticleModuleVelocityWind : public USceneParticleModuleVelocityBase
	{
	public:
		struct FRawDistributionVector                              InitVelocity;                                            // 0x0030(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               WindAffectSpeedOverLife;                                 // 0x0078(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bInitVelocityAlignWind;                                  // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1ZX[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealPhysicalConti
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUnrealPhysicalConti : public UDataAsset
	{
	public:
		TArray<struct FPhysicalContiMapping>                       Mappings;                                                // 0x0030(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealPhysicalMaterial
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UUnrealPhysicalMaterial : public UPhysicalMaterial
	{
	public:
		ESnPhysicalSurface                                         ScenePhysicalSurface;                                    // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDS0[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQueryMapPhysicalMaterialScalarParameter>    ScalarParameters;                                        // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealPoseableMeshComponent
	 * Size -> 0x0010 (FullSize[0x0830] - InheritedSize[0x0820])
	 */
	class UUnrealPoseableMeshComponent : public UPoseableMeshComponent
	{
	public:
		bool                                                       bTickCopyPose;                                           // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65XD[0xF];                                   // 0x0821(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealPostProcessData
	 * Size -> 0x0570 (FullSize[0x05A0] - InheritedSize[0x0030])
	 */
	class UUnrealPostProcessData : public UDataAsset
	{
	public:
		struct FPostProcessSettings                                Settings;                                                // 0x0030(0x0570) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealProducerCameraActor
	 * Size -> 0x0054 (FullSize[0x0920] - InheritedSize[0x08CC])
	 */
	class AUnrealProducerCameraActor : public AUnrealCameraActor
	{
	public:
		unsigned char                                              UnknownData_7JQK[0x4];                                   // 0x08CC(0x0004) Fix Super Size
		unsigned char                                              UnknownData_K5FT[0x50];                                  // 0x08D0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealRigidModelAnimInstance
	 * Size -> 0x0098 (FullSize[0x1140] - InheritedSize[0x10A8])
	 */
	class UUnrealRigidModelAnimInstance : public UUnrealModelAnimInstance
	{
	public:
		TWeakObjectPtr<class UAnimMontage>                         AnimBasePtr;                                             // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                DefaultSequence;                                         // 0x10B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P83A[0x88];                                  // 0x10B8(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AUnrealSceneActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_P02K[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidActor
	 * Size -> 0x0268 (FullSize[0x04F8] - InheritedSize[0x0290])
	 */
	class AUnrealSceneBoidActor : public APawn
	{
	public:
		unsigned char                                              UnknownData_LC1B[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUnrealSceneBoidMovementComponent*                   MovementComponent;                                       // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RootSceneComponent;                                      // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   BoidActivationTimeCategoryFilter;                        // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WUA[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHiveEntityData*                                     BoidModel;                                               // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHiveKey                                            BoidHiveKey;                                             // 0x02B8(0x000C) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHP1[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUnrealSceneBoidTrackActor*                          RoamingTrackActor;                                       // 0x02C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SplineRoamingCurveTrack;                                 // 0x02D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AUnrealSceneBoidTrackActor*                          RunAwayTrackActor;                                       // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SplineRunAwayCurveTrack;                                 // 0x02E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AUnrealSceneBoidTrackActor*                          FlyPatrolTrackActor;                                     // 0x02E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SplineFlyPatrolCurveTrack;                               // 0x02F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AUnrealSceneBoidTrackActor*                          ComeBackTrackActor;                                      // 0x02F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SplineComebackCurveTrack;                                // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerSensingRadius;                                     // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerSensingInterval;                                   // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USphereComponent*                                    VisionVolume;                                            // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TakeOffConti;                                            // 0x0320(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ArriveAtConti;                                           // 0x0338(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayTimeBeforeArrive;                                    // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y94R[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     AlarmConti;                                              // 0x0358(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CommonSpeed;                                             // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAV1[0x180];                                 // 0x0378(0x0180) MISSED OFFSET (PADDING)

	public:
		void TickMoveTimeline(float Value);
		void OnPlayAnimBeforeArrive();
		void OnPassingAtSplineStart();
		void OnArriveAtSplineEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidController
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class AUnrealSceneBoidController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_9E4N[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUnrealSceneBoidActor*                               BoidActor;                                               // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G71P[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		void RoamingStart();
		void OnPlayerSeen(bool bSeen);
		void OnFinishedProwling();
		void OnArrivedAtSplineEndPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidMovementComponent
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UUnrealSceneBoidMovementComponent : public UFloatingPawnMovement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidParticle
	 * Size -> 0x01D8 (FullSize[0x0408] - InheritedSize[0x0230])
	 */
	class AUnrealSceneBoidParticle : public AActor
	{
	public:
		unsigned char                                              UnknownData_X2EC[0x80];                                  // 0x0230(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   BoidActivationTimeCategoryFilter;                        // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S23Z[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            BoidParticleComponent;                                   // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticleColor;                                           // 0x02C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ParticleSize;                                            // 0x02D0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpawnRateScale;                                  // 0x02DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UShapeComponent*                                     InteractionVolume;                                       // 0x02E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoidParticleParameters                             SensingOut;                                              // 0x02E8(0x0030) Edit, NativeAccessSpecifierPublic
		struct FBoidParticleParameters                             SensingIn;                                               // 0x0318(0x0030) Edit, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     stayconti;                                               // 0x0348(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayOnceSensingIn;                                      // 0x0360(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XHCN[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     OnSensingConti;                                          // 0x0368(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayOnceSensingOut;                                     // 0x0380(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUMU[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     OutSensingConti;                                         // 0x0388(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FParticleScalarParameterNameAndValue>        NonSensingScalarParameters;                              // 0x03A0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FParticleVectorParameterNameAndValue>        NonSensingVectorParameters;                              // 0x03B0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FParticleColorParameterNameAndValue>         NonSensingColorParameters;                               // 0x03C0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FParticleScalarParameterNameAndValue>        SensingScalarParameters;                                 // 0x03D0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FParticleVectorParameterNameAndValue>        SensingVectorParameters;                                 // 0x03E0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FParticleColorParameterNameAndValue>         SensingColorParameters;                                  // 0x03F0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHVL[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSensingLeave(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnSensingEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidPathFollowingComponent
	 * Size -> 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
	 */
	class UUnrealSceneBoidPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_VZB4[0x18];                                  // 0x0250(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidSkeletalMeshComponent
	 * Size -> 0x0008 (FullSize[0x0EF0] - InheritedSize[0x0EE8])
	 */
	class UUnrealSceneBoidSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_46LQ[0x8];                                   // 0x0EE8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidTrackActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AUnrealSceneBoidTrackActor : public ATargetPoint
	{
	public:
		class UUnrealSceneBoidTrackPathComponent*                  PathComponent;                                           // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneBoidTrackPathComponent
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UUnrealSceneBoidTrackPathComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_53M6[0x8];                                   // 0x0558(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneBoneScaleDef
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USceneBoneScaleDef : public UObject
	{
	public:
		class USkeleton*                                           Skeleton;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSceneBoneScaleGroup>                        Groups;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneDebugCameraController
	 * Size -> 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
	 */
	class AUnrealSceneDebugCameraController : public ADebugCameraController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.SceneFacialAnimationTable
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USceneFacialAnimationTable : public UPrimaryDataAsset
	{
	public:
		class USkeletalMesh*                                       FaceSkeletalMesh;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Categories;                                              // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneFacialAnimationDef>                    Definitions;                                             // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneItemScaleConfig
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UUnrealSceneItemScaleConfig : public UObject
	{
	public:
		float                                                      humanmale;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      humanfemale;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      goblinmale;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      goblinfemale;                                            // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      undeadmale;                                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      undeadfemale;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      orcmale;                                                 // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      orcfemale;                                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      elfmale;                                                 // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      elffemale;                                               // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      darkelfmale;                                             // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      darkelffemale;                                           // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      plantmale;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      plantfemale;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      vampiremale;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      vampirefemale;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      demonmale;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      demonfemale;                                             // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      devtesta;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      devtestb;                                                // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DJ0[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneNpcCustomizing
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UUnrealSceneNpcCustomizing : public UObject
	{
	public:
		struct FSceneNpcCustomizingNonComposite                    NonComposite;                                            // 0x0028(0x0168) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealScenePlayerCameraManager
	 * Size -> 0x0B40 (FullSize[0x33C0] - InheritedSize[0x2880])
	 */
	class AUnrealScenePlayerCameraManager : public APlayerCameraManager
	{
	public:
		unsigned char                                              UnknownData_DQXF[0xB40];                                 // 0x2880(0x0B40) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealScenePlayerController
	 * Size -> 0x0028 (FullSize[0x05A8] - InheritedSize[0x0580])
	 */
	class AUnrealScenePlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_I25M[0x18];                                  // 0x0580(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    FollowCameraComponent;                                   // 0x0598(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E578[0x8];                                   // 0x05A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealScenePseudoFlinchingPreset
	 * Size -> 0x0A18 (FullSize[0x0A40] - InheritedSize[0x0028])
	 */
	class UUnrealScenePseudoFlinchingPreset : public UObject
	{
	public:
		float                                                      FBPower;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LRPower;                                                 // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL0C[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScenePseudoFlinchingBoneConfig                     BoneConfigs[0x33];                                       // 0x0038(0x0990) Edit, NativeAccessSpecifierPublic
		struct FScenePseudoFlinchingNailedBoneConfig               NailedBoneNames[0xA];                                    // 0x09C8(0x0078) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSceneRootComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UUnrealSceneRootComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_XSTK[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSequencerCharacterAnimInstance
	 * Size -> 0x0008 (FullSize[0x10B0] - InheritedSize[0x10A8])
	 */
	class UUnrealSequencerCharacterAnimInstance : public UUnrealModelAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SYB0[0x8];                                   // 0x10A8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSimulationPhysicalMaterial
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UUnrealSimulationPhysicalMaterial : public UPhysicalMaterial
	{
	public:
		bool                                                       bOverrideLinearDamping;                                  // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3KQ[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDamping;                                           // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularDamping;                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LL9[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularDamping;                                          // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMassInBodySetting;                                // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreImpulse;                                          // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FV80[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSkeleton
	 * Size -> 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
	 */
	class UUnrealSkeleton : public USkeleton
	{
	public:
		class USkeleton*                                           ParentSkeleton;                                          // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSkidMarkMeshComponent
	 * Size -> 0x00A8 (FullSize[0x0540] - InheritedSize[0x0498])
	 */
	class UUnrealSkidMarkMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_NKFN[0x8];                                   // 0x0498(0x0008) Fix Super Size
		unsigned char                                              UnknownData_U4R7[0x18];                                  // 0x04A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSkidMarkVertex>                             ProcVertexBuffer;                                        // 0x04B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H20S[0x78];                                  // 0x04C8(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealSplineActor
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class AUnrealSplineActor : public AActor
	{
	public:
		TMap<class FString, class UMaterialInterface*>             BakedMaterialSetByMaterialSetName;                       // 0x0230(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealStaticMeshFadeConfigComponent
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UUnrealStaticMeshFadeConfigComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_6ATW[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      OffsetFromBottom;                                        // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionGapHeight;                                     // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDuration;                                          // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutOfSightResponseDelay;                                 // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealTLCineTargetCameraActor
	 * Size -> 0x0000 (FullSize[0x0830] - InheritedSize[0x0830])
	 */
	class AUnrealTLCineTargetCameraActor : public ACineCameraActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealTLCineTargetCameraComponent
	 * Size -> 0x0054 (FullSize[0x0930] - InheritedSize[0x08DC])
	 */
	class UUnrealTLCineTargetCameraComponent : public UCineCameraComponent
	{
	public:
		struct FVector                                             AimingOffsetFromTargetPoint;                             // 0x08DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimingOffsetFromWayPoint;                                // 0x08E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IE4A[0x3C];                                  // 0x08F4(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealTLGameCameraActor
	 * Size -> 0x0344 (FullSize[0x0C10] - InheritedSize[0x08CC])
	 */
	class AUnrealTLGameCameraActor : public AUnrealCameraActor
	{
	public:
		unsigned char                                              UnknownData_BGG5[0x4];                                   // 0x08CC(0x0004) Fix Super Size
		unsigned char                                              UnknownData_ERWP[0x340];                                 // 0x08D0(0x0340) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealTLGameCameraComponent
	 * Size -> 0x0010 (FullSize[0x07F0] - InheritedSize[0x07E0])
	 */
	class UUnrealTLGameCameraComponent : public UCameraComponent
	{
	public:
		unsigned char                                              UnknownData_GDYT[0x10];                                  // 0x07E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.UnrealVirtualSocketSetting
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UUnrealVirtualSocketSetting : public UObject
	{
	public:
		TArray<class FName>                                        EnabledBones;                                            // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspaceLevelInfo
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspaceLevelInfo : public UObject
	{
	public:
		class FName                                                LevelPackageName;                                        // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelLayer;                                              // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StreamingDistanceText;                                   // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StreamingDistanceText_LOD1;                              // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          LevelOffset;                                             // 0x0060(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LevelPosition;                                           // 0x006C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LevelSize;                                               // 0x0078(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          LevelOffsetInFileHeader;                                 // 0x0084(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LevelPositionInFileHeader;                               // 0x0090(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LevelSizeInFileHeader;                                   // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHiddenInWorldView;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVD8[0x27];                                  // 0x00A9(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspaceCategoryLevel
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspaceCategoryLevel : public UObject
	{
	public:
		class FName                                                LevelPackageName;                                        // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspaceCategory
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspaceCategory : public UObject
	{
	public:
		class FName                                                CategoryName;                                            // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTLWorldWorkspaceCategory*>                   Subcategories;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTLWorldWorkspaceCategoryLevel*>              Levels;                                                  // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspace
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspace : public UObject
	{
	public:
		class FName                                                PersistentLevelPackageName;                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLWorldWorkspaceCategory*                           RootCategory;                                            // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTLWorldWorkspaceLevelInfo*>                  LevelInfos;                                              // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, class UTLWorldWorkspaceLevelInfo*>       LevelInfoMap;                                            // 0x0048(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TMap<class FName, class UTLWorldWorkspaceLevelInfo*>       LevelInfoByLevelName;                                    // 0x0098(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     ModuleDataArray;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspacePOI
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspacePOI : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CameraPosition;                                          // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraRotation;                                          // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x006C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HE9D[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspacePOIModuleData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspacePOIModuleData : public UObject
	{
	public:
		TArray<class UTLWorldWorkspacePOI*>                        Points;                                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspaceLevelModuleData
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspaceLevelModuleData : public UObject
	{
	public:
		float                                                      LightIntensity;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LightColor;                                              // 0x002C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OceanHeight;                                             // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        WaterColor;                                              // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.TLWorldWorkspaceOceanModuleData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTLWorldWorkspaceOceanModuleData : public UObject
	{
	public:
		class FName                                                TargetLevelName;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TLazyObjectPtr<class UMaterialInterface>>           MaterialFilters;                                         // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FString                                              VolumeNamePrefix;                                        // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VolumeNamePostfix;                                       // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OceanTop;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OceanBottom;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.WorldCompositionMod
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	class UWorldCompositionMod : public UWorldComposition
	{
	public:
		float                                                      UnloadMinTimeAfterWorldAssetLevelLoad;                   // 0x0068(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZTK1[0xA4];                                  // 0x006C(0x00A4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.WorldPartitionBakedMaterialSetContainer
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UWorldPartitionBakedMaterialSetContainer : public UAssetUserData
	{
	public:
		TArray<class UUnrealBakedMaterialSet*>                     BakedMaterialSets;                                       // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              LandscapeMaterials[0x50];                                // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLScene.WorldPartitionMapMaterialPermutation
	 * Size -> 0x0000 (FullSize[0x02F8] - InheritedSize[0x02F8])
	 */
	class AWorldPartitionMapMaterialPermutation : public AMapMaterialPermutation
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
