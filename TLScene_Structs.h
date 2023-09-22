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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum TLScene.ESnMovementMode
	 */
	enum class ESnMovementMode : uint8_t
	{
		kSnMovementModeRun         = 0,
		kSnMovementModeWalk        = 1,
		kSnMovementModeJournalHint = 2,
		kSnMovementModeSwim        = 3,
		kSnMovementModeGliding     = 4,
		kSnMovementModeClimbing    = 5,
		kSnMovementModeFlying      = 6,
		kSnMovementModes           = 7,
		MAX                        = 8
	};

	/**
	 * Enum TLScene.EUnrealEnvironmentTrackValueType
	 */
	enum class EUnrealEnvironmentTrackValueType : uint8_t
	{
		Float       = 0,
		Vector2D    = 1,
		Vector      = 2,
		Vector4     = 3,
		Color       = 4,
		Transform3D = 5,
		Transform   = 6,
		Bool        = 7,
		Rotator     = 8,
		MAX         = 9
	};

	/**
	 * Enum TLScene.EUnrealEnvironmentTrackTargetType
	 */
	enum class EUnrealEnvironmentTrackTargetType : uint8_t
	{
		ObjectProperty    = 0,
		MaterialParameter = 1,
		MAX               = 2
	};

	/**
	 * Enum TLScene.EHiveEntityType
	 */
	enum class EHiveEntityType : uint8_t
	{
		Default  = 0,
		KeyValue = 1,
		Count    = 2,
		MAX      = 3
	};

	/**
	 * Enum TLScene.EHiveCategory
	 */
	enum class EHiveCategory : uint8_t
	{
		Map                   = 0,
		PC                    = 1,
		Npc                   = 2,
		Fo                    = 3,
		Item                  = 4,
		ItemComposite         = 5,
		ItemSkinnedAttachable = 6,
		Scenario              = 7,
		Customizing           = 8,
		Content               = 9,
		Count                 = 10,
		MAX                   = 11
	};

	/**
	 * Enum TLScene.ETLInteractionCameraTargetRotationType
	 */
	enum class ETLInteractionCameraTargetRotationType : uint8_t
	{
		Original            = 0,
		ForceRotation       = 1,
		ForceNotRotation    = 2,
		ForceManualRotation = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLScene.ETLInteractionCameraPositionType
	 */
	enum class ETLInteractionCameraPositionType : uint8_t
	{
		Normal       = 0,
		AttachToMyPc = 1,
		MAX          = 2
	};

	/**
	 * Enum TLScene.ETLInteractionCameraTriggerType
	 */
	enum class ETLInteractionCameraTriggerType : uint8_t
	{
		Always = 0,
		Once   = 1,
		MAX    = 2
	};

	/**
	 * Enum TLScene.EInteractionCameraLookatType
	 */
	enum class EInteractionCameraLookatType : uint8_t
	{
		None         = 0,
		Center       = 1,
		Player       = 2,
		Target       = 3,
		Position     = 4,
		TargetSocket = 5,
		MAX          = 6
	};

	/**
	 * Enum TLScene.ESnSceneRootZLocationMode
	 */
	enum class ESnSceneRootZLocationMode : uint8_t
	{
		CapsuleCenter = 0,
		CapsuleBottom = 1,
		None          = 2,
		MAX           = 3
	};

	/**
	 * Enum TLScene.EMapRoomPartOptimizing
	 */
	enum class EMapRoomPartOptimizing : uint8_t
	{
		Invisible           = 0,
		LongTickInvterval   = 1,
		DeactivateComponent = 2,
		MAX                 = 3
	};

	/**
	 * Enum TLScene.ETLStopPosSyncType
	 */
	enum class ETLStopPosSyncType : uint8_t
	{
		NoSync     = 0,
		SmoothSync = 1,
		Teleport   = 2,
		MAX        = 3
	};

	/**
	 * Enum TLScene.ETLScenarioLoadingType
	 */
	enum class ETLScenarioLoadingType : uint8_t
	{
		Sync              = 0,
		AsyncAutoPlayRate = 1,
		AsyncAndDelayed   = 2,
		SkipNotReady      = 3,
		MAX               = 4
	};

	/**
	 * Enum TLScene.ETLAnimNotifyFishingEvent
	 */
	enum class ETLAnimNotifyFishingEvent : uint8_t
	{
		CompleteCastFishingFloat = 0,
		CompleteFishingWaiting   = 1,
		MAX                      = 2
	};

	/**
	 * Enum TLScene.ETLAttachObjectType
	 */
	enum class ETLAttachObjectType : uint8_t
	{
		AttachCarrier   = 0,
		AttachMagicDoll = 1,
		AttachNone      = 2,
		MAX             = 3
	};

	/**
	 * Enum TLScene.ETLServerSequenceEffect
	 */
	enum class ETLServerSequenceEffect : uint8_t
	{
		CarrierServerEffectUnset    = 0,
		CarrierServerEffectType1    = 1,
		CarrierServerEffectType2    = 2,
		CarrierServerEffectType3    = 3,
		CarrierServerEffectType4    = 4,
		CarrierServerEffectType5    = 5,
		CarrierServerEffectType6    = 6,
		CarrierServerEffectType7    = 7,
		CarrierServerEffectType8    = 8,
		CarrierServerEffectType9    = 9,
		CarrierServerEffectType10   = 10,
		CarrierServerEffectType11   = 11,
		CarrierServerEffectType12   = 12,
		CarrierServerEffectType13   = 13,
		CarrierServerEffectType14   = 14,
		CarrierServerEffectType15   = 15,
		CarrierServerEffectType16   = 16,
		CarrierServerEffectType17   = 17,
		CarrierServerEffectType18   = 18,
		CarrierServerEffectType19   = 19,
		CarrierServerEffectType20   = 20,
		CarrierServerEffectType21   = 21,
		CarrierServerEffectType22   = 22,
		CarrierServerEffectType23   = 23,
		CarrierServerEffectType24   = 24,
		CarrierServerEffectType25   = 25,
		CarrierServerEffectType26   = 26,
		CarrierServerEffectType27   = 27,
		CarrierServerEffectType28   = 28,
		CarrierServerEffectType29   = 29,
		CarrierServerEffectType30   = 30,
		CarrierServerEffectType31   = 31,
		CarrierServerEffectType32   = 32,
		CarrierServerEffectType33   = 33,
		CarrierServerEffectType34   = 34,
		CarrierServerEffectType35   = 35,
		CarrierServerEffectType36   = 36,
		CarrierServerEffectType37   = 37,
		CarrierServerEffectType38   = 38,
		CarrierServerEffectType39   = 39,
		CarrierServerEffectType40   = 40,
		CarrierServerEffectType41   = 41,
		CarrierServerEffectType42   = 42,
		CarrierServerEffectType43   = 43,
		CarrierServerEffectType44   = 44,
		CarrierServerEffectType45   = 45,
		CarrierServerEffectType46   = 46,
		CarrierServerEffectType47   = 47,
		CarrierServerEffectType48   = 48,
		CarrierServerEffectType49   = 49,
		CarrierServerEffectType50   = 50,
		CarrierServerEffectType51   = 51,
		CarrierServerEffectType52   = 52,
		CarrierServerEffectType53   = 53,
		CarrierServerEffectType54   = 54,
		CarrierServerEffectType55   = 55,
		CarrierServerEffectType56   = 56,
		CarrierServerEffectType57   = 57,
		CarrierServerEffectType58   = 58,
		CarrierServerEffectType59   = 59,
		CarrierServerEffectType60   = 60,
		CarrierServerEffectType61   = 61,
		CarrierServerEffectType62   = 62,
		CarrierServerEffectType_Max = 63,
		MAX                         = 64
	};

	/**
	 * Enum TLScene.ETLServerSequenceEffectVolumeType
	 */
	enum class ETLServerSequenceEffectVolumeType : uint8_t
	{
		Cylinder = 0,
		Box      = 1,
		MAX      = 2
	};

	/**
	 * Enum TLScene.ETLServerSequenceEffectTransformType
	 */
	enum class ETLServerSequenceEffectTransformType : uint8_t
	{
		World         = 0,
		ScenarioActor = 1,
		MAX           = 2
	};

	/**
	 * Enum TLScene.ETLCutScenePcEndPosOffsetType
	 */
	enum class ETLCutScenePcEndPosOffsetType : uint8_t
	{
		None   = 0,
		Circle = 1,
		Rect   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.ECueSheetOpType
	 */
	enum class ECueSheetOpType : uint8_t
	{
		PlayCueSheet = 0,
		StopCueSheet = 1,
		MAX          = 2
	};

	/**
	 * Enum TLScene.EScenarioAudioSnapshot
	 */
	enum class EScenarioAudioSnapshot : uint8_t
	{
		None        = 0,
		CinemaTypeA = 1,
		CinemaTypeB = 2,
		CinemaTypeC = 3,
		CinemaTypeD = 4,
		CinemaTypeE = 5,
		MAX         = 6
	};

	/**
	 * Enum TLScene.ESnSubStanceChangeSheatheAnimationMode
	 */
	enum class ESnSubStanceChangeSheatheAnimationMode : uint8_t
	{
		kSnDefault              = 0,
		kSnPlaySheatheAnimation = 1,
		kSnNoSheatheAnimation   = 2,
		MAX                     = 3
	};

	/**
	 * Enum TLScene.ESnHitStopAnimationType
	 */
	enum class ESnHitStopAnimationType : uint8_t
	{
		kSnStopAtHitPose    = 0,
		kSnBlendWithHitPose = 1,
		MAX                 = 2
	};

	/**
	 * Enum TLScene.ESnJumpType
	 */
	enum class ESnJumpType : uint8_t
	{
		RunningJump       = 0,
		InstantJumpOrFall = 1,
		LowMantle         = 2,
		HighMantle        = 3,
		LowRunningMantle  = 4,
		HighRunningMantle = 5,
		SwimMantle        = 6,
		FallingCatch      = 7,
		NoAnimationJump   = 8,
		JumpTypes         = 9,
		MAX               = 10
	};

	/**
	 * Enum TLScene.ESnActionConditionGroup
	 */
	enum class ESnActionConditionGroup : uint8_t
	{
		kSnActionConitionGroupGeneral          = 0,
		kSnActionConitionGroupWeapon           = 1,
		kSnActionConitionGroupAbnormalState    = 2,
		kSnActionConitionGroupSkillEndPosition = 3,
		kSnActionConitionGroupProjectileAmmo   = 4,
		kSnActionConitionGroupPolymorph        = 5,
		kSnActionConitionGroupMovementType     = 6,
		kSnActionConitionTargetAngle           = 7,
		kSnActionConditionGroups               = 8,
		MAX                                    = 9
	};

	/**
	 * Enum TLScene.ESnEquippedItemContiTarget
	 */
	enum class ESnEquippedItemContiTarget : uint8_t
	{
		kSnOverrideToAttachSocket  = 0,
		kSnUseOriginalContiSetting = 1,
		MAX                        = 2
	};

	/**
	 * Enum TLScene.ESnEquippedItemContiLayer
	 */
	enum class ESnEquippedItemContiLayer : uint8_t
	{
		kSnBase         = 0,
		kSnAdditionalFX = 1,
		MAX             = 2
	};

	/**
	 * Enum TLScene.ESnContiForEquippedItemMode
	 */
	enum class ESnContiForEquippedItemMode : uint8_t
	{
		kSnPlay = 0,
		kSnStop = 1,
		MAX     = 2
	};

	/**
	 * Enum TLScene.ESnBoidActivationTimeCategory
	 */
	enum class ESnBoidActivationTimeCategory : uint8_t
	{
		Day   = 0,
		Night = 1,
		Types = 2,
		MAX   = 3
	};

	/**
	 * Enum TLScene.ESnAdditiveAnimationTarget
	 */
	enum class ESnAdditiveAnimationTarget : uint8_t
	{
		kSnVirtualSocket = 0,
		kSnModelSocket   = 1,
		MAX              = 2
	};

	/**
	 * Enum TLScene.ESnAimingAnimationTarget
	 */
	enum class ESnAimingAnimationTarget : uint8_t
	{
		kSnFixedPoint    = 0,
		kSnVirtualSocket = 1,
		kSnModelSocket   = 2,
		kSnMortarShot    = 3,
		MAX              = 4
	};

	/**
	 * Enum TLScene.ESnNameplateUpdateMode
	 */
	enum class ESnNameplateUpdateMode : uint8_t
	{
		kSnHiveDefaultSettting = 0,
		kSnSequenceOverride    = 1,
		MAX                    = 2
	};

	/**
	 * Enum TLScene.ESnNameplatePosInherit
	 */
	enum class ESnNameplatePosInherit : uint8_t
	{
		kSnDefault    = 0,
		kSnMapRoomTop = 1,
		Types         = 2,
		MAX           = 3
	};

	/**
	 * Enum TLScene.ESnFoliageInteraction
	 */
	enum class ESnFoliageInteraction : uint8_t
	{
		kSnPhysicalObstacle    = 0,
		kSnColorOverride       = 1,
		kSnFoliageInteractions = 2,
		MAX                    = 3
	};

	/**
	 * Enum TLScene.ESnNpcSector
	 */
	enum class ESnNpcSector : uint8_t
	{
		kSnSector1 = 0,
		kSnSector2 = 1,
		kSnSector3 = 2,
		kSnSector4 = 3,
		kSnSectors = 4,
		MAX        = 5
	};

	/**
	 * Enum TLScene.EVirtualSocketSpace
	 */
	enum class EVirtualSocketSpace : uint8_t
	{
		kSnWorldSpace          = 0,
		kSnComponentSpace      = 1,
		kSnVirtualSocketSpaces = 2,
		MAX                    = 3
	};

	/**
	 * Enum TLScene.EContentsVolumeCategoryType
	 */
	enum class EContentsVolumeCategoryType : uint8_t
	{
		kSnContentsVolumeCategoryDefault           = 0,
		kSnContentsVolumeCategoryTutorial          = 1,
		kSnContentsVolumeCategoryJournal           = 2,
		kSnContentsVolumeCategoryInteractionCamera = 3,
		kSnContentsVolumeCategoryTypes             = 4,
		MAX                                        = 5
	};

	/**
	 * Enum TLScene.EContentsVolumeEventType
	 */
	enum class EContentsVolumeEventType : uint8_t
	{
		kSnContentsVolumeEventEnter = 0,
		kSnContentsVolumeEventLeave = 1,
		kSnContentsVolumeEventTypes = 2,
		MAX                         = 3
	};

	/**
	 * Enum TLScene.ESnInteractionCollisionType
	 */
	enum class ESnInteractionCollisionType : uint8_t
	{
		Unset   = 0,
		Box     = 1,
		Capsule = 2,
		MAX     = 3
	};

	/**
	 * Enum TLScene.ESnSFXLodQuality
	 */
	enum class ESnSFXLodQuality : uint8_t
	{
		kSnSFXLodHigh   = 0,
		kSnSFXLodMedium = 1,
		kSnSFXLodLow    = 2,
		kSnSFXLods      = 3,
		MAX             = 4
	};

	/**
	 * Enum TLScene.ESnPlayLevel
	 */
	enum class ESnPlayLevel : uint8_t
	{
		kSnPlayLevelAlways = 0,
		kSnPlayLevelNormal = 1,
		kSnPlayLevelDeco   = 2,
		kSnPlayLevels      = 3,
		MAX                = 4
	};

	/**
	 * Enum TLScene.ESnJumpWarmupAllowedType
	 */
	enum class ESnJumpWarmupAllowedType : uint8_t
	{
		JumpOnly         = 0,
		MantleOnly       = 1,
		JumpIfMantleFail = 2,
		MAX              = 3
	};

	/**
	 * Enum TLScene.ESnMountType
	 */
	enum class ESnMountType : uint8_t
	{
		kSnMountWolf  = 0,
		kSnMountSiege = 1,
		kSnMountModes = 2,
		MAX           = 3
	};

	/**
	 * Enum TLScene.ESnMovementSequenceState
	 */
	enum class ESnMovementSequenceState : uint8_t
	{
		kSnMovementSequencePlay       = 0,
		kSnMovementSequenceStop       = 1,
		kSnMovementSequenceStateCount = 2,
		MAX                           = 3
	};

	/**
	 * Enum TLScene.ESnMovementPRSState
	 */
	enum class ESnMovementPRSState : uint8_t
	{
		kSnMovementPRSStart              = 0,
		kSnMovementPRSGoing              = 1,
		kSnMovementPRSGoingScenarioActor = 2,
		kSnMovementPRSEnd                = 3,
		kSnMovementPRSEndServerSync      = 4,
		kSnMovementPRSStateCount         = 5,
		MAX                              = 6
	};

	/**
	 * Enum TLScene.ESnMovementFormulaType
	 */
	enum class ESnMovementFormulaType : uint8_t
	{
		kSnMovementFormulaLinear         = 0,
		kSnMovementFormulaAcceleration   = 1,
		kSnMovementFormulaDeceleration   = 2,
		kSnMovementFormulaLinearFreeFall = 3,
		kSnMovementFormulaCurve          = 4,
		kSnMovementFormulas              = 5,
		MAX                              = 6
	};

	/**
	 * Enum TLScene.ESnCameraSocketPoint
	 */
	enum class ESnCameraSocketPoint : uint8_t
	{
		Center      = 0,
		TopLeft     = 1,
		Top         = 2,
		TopRight    = 3,
		Right       = 4,
		BottomRight = 5,
		Bottom      = 6,
		BottomLeft  = 7,
		Left        = 8,
		Types       = 9,
		MAX         = 10
	};

	/**
	 * Enum TLScene.ESnCameraType
	 */
	enum class ESnCameraType : uint8_t
	{
		kSnCameraTLGame         = 0,
		kSnCameraProducer       = 1,
		kSnCameraCutScene       = 2,
		kSnCameraFreeLag        = 3,
		kSnCameraNull           = 4,
		kSnCameraLobbyCustomize = 5,
		kSnCameraCustomScene    = 6,
		kSnCameraTypes          = 7,
		MAX                     = 8
	};

	/**
	 * Enum TLScene.ESnPseudoFlinchingCurveApplyMode
	 */
	enum class ESnPseudoFlinchingCurveApplyMode : uint8_t
	{
		Center = 0,
		Left   = 1,
		Right  = 2,
		Move   = 3,
		Types  = 4,
		MAX    = 5
	};

	/**
	 * Enum TLScene.ESnPseudoFlinchingConfigLayer
	 */
	enum class ESnPseudoFlinchingConfigLayer : uint8_t
	{
		Normal = 0,
		High   = 1,
		Count  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.ESnHitAnimationType
	 */
	enum class ESnHitAnimationType : uint8_t
	{
		kSnSequence          = 0,
		kSnPseudoFlinching   = 1,
		kSnHitAnimationTypes = 2,
		MAX                  = 3
	};

	/**
	 * Enum TLScene.ESnZoneRangeType
	 */
	enum class ESnZoneRangeType : uint8_t
	{
		Sphere2d          = 0,
		Sphere3d          = 1,
		Box2d             = 2,
		Box3d             = 3,
		ParentBoundingBox = 4,
		Types             = 5,
		MAX               = 6
	};

	/**
	 * Enum TLScene.ESnMaterialParamPriority
	 */
	enum class ESnMaterialParamPriority : uint8_t
	{
		Base      = 0,
		Priority0 = 1,
		Priority1 = 2,
		Weather   = 3,
		Priority3 = 4,
		System    = 5,
		Types     = 6,
		MAX       = 7
	};

	/**
	 * Enum TLScene.ESnSnapshotCustomStencilType
	 */
	enum class ESnSnapshotCustomStencilType : uint8_t
	{
		None      = 0,
		CategoryA = 1,
		CategoryB = 2,
		CategoryC = 3,
		Types     = 4,
		MAX       = 5
	};

	/**
	 * Enum TLScene.ESnSnapshotEmitOnceLifetimeBehavior
	 */
	enum class ESnSnapshotEmitOnceLifetimeBehavior : uint8_t
	{
		PlayOnce               = 0,
		PlayOnceWithoutDespawn = 1,
		Repeat                 = 2,
		Types                  = 3,
		MAX                    = 4
	};

	/**
	 * Enum TLScene.ESnEffectContentIntension
	 */
	enum class ESnEffectContentIntension : uint8_t
	{
		Neutral  = 0,
		Friendly = 1,
		Hostile  = 2,
		Types    = 3,
		MAX      = 4
	};

	/**
	 * Enum TLScene.ESnEffectContentImportance
	 */
	enum class ESnEffectContentImportance : uint8_t
	{
		High   = 0,
		Medium = 1,
		Low    = 2,
		Types  = 3,
		MAX    = 4
	};

	/**
	 * Enum TLScene.ESnEffectBudgetCategory
	 */
	enum class ESnEffectBudgetCategory : uint8_t
	{
		CharacterUltra   = 0,
		CharacterHigh    = 1,
		CharacterMedium  = 2,
		CharacterLow     = 3,
		ProjectileHigh   = 4,
		ProjectileMedium = 5,
		ProjectileLow    = 6,
		Types            = 7,
		MAX              = 8
	};

	/**
	 * Enum TLScene.ESnColorManipulation
	 */
	enum class ESnColorManipulation : uint8_t
	{
		Ignore      = 0,
		Override    = 1,
		Mod         = 2,
		Mod2X       = 3,
		BlendAlpha  = 4,
		Add         = 5,
		AddSmooth   = 6,
		Subtract    = 7,
		SubtractInv = 8,
		Min         = 9,
		Max         = 10,
		Types       = 11
	};

	/**
	 * Enum TLScene.ESnEffectSourceType
	 */
	enum class ESnEffectSourceType : uint8_t
	{
		EquippedItem        = 0,
		Character           = 1,
		ProviedSkeletalMesh = 2,
		MAX                 = 3
	};

	/**
	 * Enum TLScene.ESnEffectDestroyType
	 */
	enum class ESnEffectDestroyType : uint8_t
	{
		Immediately      = 0,
		SuppressSpawning = 1,
		FadeOut          = 2,
		NotSet           = 3,
		MAX              = 4
	};

	/**
	 * Enum TLScene.ESnEffectDirectionType
	 */
	enum class ESnEffectDirectionType : uint8_t
	{
		kSnEffectDirectionByDefault = 0,
		kSnEffectDirectionByInverse = 1,
		kSnEffectDirectionByRandom  = 2,
		MAX                         = 3
	};

	/**
	 * Enum TLScene.ESnDecalMultipleSpawnType
	 */
	enum class ESnDecalMultipleSpawnType : uint8_t
	{
		kSnRandomPos             = 0,
		kSnSameIntervalPosOffset = 1,
		kSnSameIntervalRotation  = 2,
		MAX                      = 3
	};

	/**
	 * Enum TLScene.ESnDecalReceiveType
	 */
	enum class ESnDecalReceiveType : uint8_t
	{
		Auto  = 0,
		On    = 1,
		Off   = 2,
		Count = 3,
		MAX   = 4
	};

	/**
	 * Enum TLScene.ESnFxModelChangeResponse
	 */
	enum class ESnFxModelChangeResponse : uint8_t
	{
		StopImmediately   = 0,
		TransferToNewBody = 1,
		MAX               = 2
	};

	/**
	 * Enum TLScene.ESnFXObjectSymmetricScaleType
	 */
	enum class ESnFXObjectSymmetricScaleType : uint8_t
	{
		SymmetricScaleWithRadiusRate = 0,
		SymmetricScaleWithHeightRate = 1,
		SymmetricScaleWithMaxAxis    = 2,
		Types                        = 3,
		MAX                          = 4
	};

	/**
	 * Enum TLScene.ESnFXObjectRelativeTarget
	 */
	enum class ESnFXObjectRelativeTarget : uint8_t
	{
		PCSize    = 0,
		ItemScale = 1,
		Types     = 2,
		MAX       = 3
	};

	/**
	 * Enum TLScene.ESnFXVisibleCondition
	 */
	enum class ESnFXVisibleCondition : uint8_t
	{
		Any             = 0,
		IdleOnlyShow    = 1,
		NonIdleOnlyShow = 2,
		MoveOnlyShow    = 3,
		NonMoveOnlyShow = 4,
		EquipedShow     = 5,
		Types           = 6,
		MAX             = 7
	};

	/**
	 * Enum TLScene.EBoltWeavingType
	 */
	enum class EBoltWeavingType : uint8_t
	{
		SourceToTargetOnly = 0,
		Nearest            = 1,
		AlreadyPlotted     = 2,
		Types              = 3,
		MAX                = 4
	};

	/**
	 * Enum TLScene.ESnModelAnimDynamicsSimulationPriority
	 */
	enum class ESnModelAnimDynamicsSimulationPriority : uint8_t
	{
		High   = 0,
		Medium = 1,
		Low    = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.ESnModelBoneSimulationMode
	 */
	enum class ESnModelBoneSimulationMode : uint8_t
	{
		NoSimulation        = 0,
		AnimBP_AnimDynamics = 1,
		Physics             = 2,
		Types               = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLScene.ESnShadowCastingMode
	 */
	enum class ESnShadowCastingMode : uint8_t
	{
		Default    = 0,
		NoShadow   = 1,
		CastShadow = 2,
		Types      = 3,
		MAX        = 4
	};

	/**
	 * Enum TLScene.ESnModelNpcCompositePart
	 */
	enum class ESnModelNpcCompositePart : uint8_t
	{
		Slot1 = 0,
		Slot2 = 1,
		Slot3 = 2,
		Slot4 = 3,
		Slot5 = 4,
		Count = 5,
		MAX   = 6
	};

	/**
	 * Enum TLScene.ESnModelBoneScaleGroup
	 */
	enum class ESnModelBoneScaleGroup : uint8_t
	{
		Custom_00 = 0,
		Custom_01 = 1,
		Custom_02 = 2,
		Custom_03 = 3,
		Custom_04 = 4,
		Custom_05 = 5,
		Custom_06 = 6,
		Custom_07 = 7,
		Custom_08 = 8,
		Custom_09 = 9,
		Custom    = 10,
		Custom01  = 11,
		Custom02  = 12,
		Custom03  = 13,
		Custom04  = 14,
		Custom05  = 15,
		Custom06  = 16,
		Custom07  = 17,
		Custom08  = 18,
		Custom09  = 19,
		Custom10  = 20,
		Custom11  = 21,
		Custom12  = 22,
		Custom13  = 23,
		Custom14  = 24,
		Custom15  = 25,
		Custom16  = 26,
		Custom17  = 27,
		Custom18  = 28,
		Custom19  = 29,
		Custom20  = 30,
		Custom21  = 31,
		Custom22  = 32,
		Custom23  = 33,
		Custom24  = 34,
		Custom25  = 35,
		Custom26  = 36,
		Custom27  = 37,
		Custom28  = 38,
		Custom29  = 39,
		Custom30  = 40,
		Custom31  = 41,
		Custom32  = 42,
		Custom33  = 43,
		Custom34  = 44,
		Custom35  = 45,
		Custom36  = 46,
		Custom37  = 47,
		Custom38  = 48,
		Custom39  = 49,
		Custom40  = 50,
		Custom41  = 51,
		Custom42  = 52,
		Custom43  = 53,
		Custom44  = 54,
		Custom45  = 55,
		Custom46  = 56,
		Custom47  = 57,
		Custom48  = 58,
		Custom49  = 59,
		Custom50  = 60,
		Custom51  = 61,
		Custom52  = 62,
		Custom53  = 63,
		Custom54  = 64,
		Custom55  = 65,
		Custom56  = 66,
		Custom57  = 67,
		Custom58  = 68,
		Custom59  = 69,
		Custom60  = 70,
		Custom61  = 71,
		Custom62  = 72,
		Custom63  = 73,
		Custom64  = 74,
		Custom65  = 75,
		Custom66  = 76,
		Custom67  = 77,
		Custom68  = 78,
		Custom69  = 79,
		Custom70  = 80,
		Custom71  = 81,
		Custom72  = 82,
		Custom73  = 83,
		Custom74  = 84,
		Custom75  = 85,
		Custom76  = 86,
		Custom77  = 87,
		Custom78  = 88,
		Custom79  = 89,
		Custom80  = 90,
		Custom81  = 91,
		Custom82  = 92,
		Custom83  = 93,
		Custom84  = 94,
		Custom85  = 95,
		Custom86  = 96,
		Custom87  = 97,
		Custom88  = 98,
		Custom89  = 99,
		Custom90  = 100,
		Count     = 101,
		MAX       = 102
	};

	/**
	 * Enum TLScene.ESnModelCompositeArmorPartOverlapPriority
	 */
	enum class ESnModelCompositeArmorPartOverlapPriority : uint8_t
	{
		PRIORITY   = 0,
		PRIORITY01 = 1,
		PRIORITY02 = 2,
		PRIORITY03 = 3,
		PRIORITY04 = 4,
		PRIORITY05 = 5,
		PRIORITY06 = 6,
		PRIORITY07 = 7,
		PRIORITY08 = 8,
		PRIORITY09 = 9,
		Count      = 10,
		MAX        = 11
	};

	/**
	 * Enum TLScene.ESnModelCompositeMasterPosePartsOverlap
	 */
	enum class ESnModelCompositeMasterPosePartsOverlap : uint8_t
	{
		Torso  = 0,
		Pants  = 1,
		Gloves = 2,
		Boots  = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum TLScene.ESnModelCompositeMasterPoseParts
	 */
	enum class ESnModelCompositeMasterPoseParts : uint8_t
	{
		Cape        = 0,
		Helmet      = 1,
		Torso       = 2,
		Pants       = 3,
		Gloves      = 4,
		Boots       = 5,
		TorsoCollar = 6,
		Hair        = 7,
		Beard       = 8,
		Eyebrow     = 9,
		Face        = 10,
		Ear         = 11,
		LongBeard   = 12,
		Base        = 13,
		Count       = 14,
		MAX         = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeArmorPart
	 */
	enum class ESnModelCompositeArmorPart : uint8_t
	{
		Cape   = 0,
		Helmet = 1,
		Torso  = 2,
		Pants  = 3,
		Gloves = 4,
		Boots  = 5,
		Count  = 6,
		MAX    = 7
	};

	/**
	 * Enum TLScene.ESnModelCompositeTorsoType
	 */
	enum class ESnModelCompositeTorsoType : uint8_t
	{
		A_TYPE = 0,
		B_TYPE = 1,
		C_TYPE = 2,
		D_TYPE = 3,
		E_TYPE = 4,
		F_TYPE = 5,
		G_TYPE = 6,
		H_TYPE = 7,
		I_TYPE = 8,
		J_TYPE = 9,
		K_TYPE = 10,
		L_TYPE = 11,
		M_TYPE = 12,
		N_TYPE = 13,
		Count  = 14,
		MAX    = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeHelmetType
	 */
	enum class ESnModelCompositeHelmetType : uint8_t
	{
		A_TYPE = 0,
		B_TYPE = 1,
		C_TYPE = 2,
		D_TYPE = 3,
		E_TYPE = 4,
		F_TYPE = 5,
		G_TYPE = 6,
		H_TYPE = 7,
		I_TYPE = 8,
		J_TYPE = 9,
		K_TYPE = 10,
		L_TYPE = 11,
		M_TYPE = 12,
		N_TYPE = 13,
		Count  = 14,
		MAX    = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeFaceType
	 */
	enum class ESnModelCompositeFaceType : uint8_t
	{
		A_TYPE = 0,
		B_TYPE = 1,
		C_TYPE = 2,
		D_TYPE = 3,
		E_TYPE = 4,
		F_TYPE = 5,
		G_TYPE = 6,
		H_TYPE = 7,
		I_TYPE = 8,
		J_TYPE = 9,
		K_TYPE = 10,
		L_TYPE = 11,
		M_TYPE = 12,
		N_TYPE = 13,
		Count  = 14,
		MAX    = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeEarMode
	 */
	enum class ESnModelCompositeEarMode : uint8_t
	{
		A_TYPE = 0,
		B_TYPE = 1,
		C_TYPE = 2,
		D_TYPE = 3,
		E_TYPE = 4,
		F_TYPE = 5,
		G_TYPE = 6,
		H_TYPE = 7,
		I_TYPE = 8,
		J_TYPE = 9,
		K_TYPE = 10,
		L_TYPE = 11,
		M_TYPE = 12,
		N_TYPE = 13,
		Count  = 14,
		MAX    = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeHairMode
	 */
	enum class ESnModelCompositeHairMode : uint8_t
	{
		A_TYPE = 0,
		B_TYPE = 1,
		C_TYPE = 2,
		D_TYPE = 3,
		E_TYPE = 4,
		F_TYPE = 5,
		G_TYPE = 6,
		H_TYPE = 7,
		I_TYPE = 8,
		J_TYPE = 9,
		K_TYPE = 10,
		L_TYPE = 11,
		M_TYPE = 12,
		N_TYPE = 13,
		Count  = 14,
		MAX    = 15
	};

	/**
	 * Enum TLScene.ESnModelCompositeModelSubcategory
	 */
	enum class ESnModelCompositeModelSubcategory : uint8_t
	{
		Sub   = 0,
		Sub01 = 1,
		Sub02 = 2,
		Sub03 = 3,
		Count = 4,
		MAX   = 5
	};

	/**
	 * Enum TLScene.ESnAnimNotifyTriggerSystemSct
	 */
	enum class ESnAnimNotifyTriggerSystemSct : uint8_t
	{
		kSnAnimNotifyTriggerSystemSctRunBoosting     = 0,
		kSnAnimNotifyTriggerSystemSctRunAlternative  = 1,
		kSnAnimNotifyTriggerSystemSctDiving          = 2,
		kSnAnimNotifyTriggerSystemSctEmergeFromWater = 3,
		kSnAnimNotifyTriggerSystemSctIdleSocial      = 4,
		kSnAnimNotifyTriggerSystemScts               = 5,
		MAX                                          = 6
	};

	/**
	 * Enum TLScene.ESnActionEquipSocketHandleOptions
	 */
	enum class ESnActionEquipSocketHandleOptions : uint8_t
	{
		Move    = 0,
		Mount   = 1,
		Unmount = 2,
		Hide    = 3,
		Show    = 4,
		MoveEnd = 5,
		Types   = 6,
		MAX     = 7
	};

	/**
	 * Enum TLScene.ESnFootprintSocketPoint
	 */
	enum class ESnFootprintSocketPoint : uint8_t
	{
		kSnFootprintSocketRightFoot = 0,
		kSnFootprintSocketLeftFoot  = 1,
		kSnFootprintSocketRightHand = 2,
		kSnFootprintSocketLeftHand  = 3,
		kSnFootprintSocketPoints    = 4,
		MAX                         = 5
	};

	/**
	 * Enum TLScene.ESnShowBonesFilterOption
	 */
	enum class ESnShowBonesFilterOption : uint8_t
	{
		EmbeddedSocket    = 0,
		MapRoomOwn        = 1,
		MapRoomStatic     = 2,
		MapRoomSkeletal   = 3,
		MapRoomDuplicated = 4,
		Count             = 5,
		MAX               = 6
	};

	/**
	 * Enum TLScene.ESnLayeredBlendBone
	 */
	enum class ESnLayeredBlendBone : uint8_t
	{
		kSnLayeredBlendPelvis = 0,
		kSnLayeredBlendSpine  = 1,
		kSnLayeredBlendSpine1 = 2,
		kSnLayeredBlendSpine2 = 3,
		kSnLayeredBlendSpine3 = 4,
		kSnLayeredBlendNeck   = 5,
		kSnLayeredBlendBones  = 6,
		MAX                   = 7
	};

	/**
	 * Enum TLScene.ESnModelSocketPoint
	 */
	enum class ESnModelSocketPoint : uint8_t
	{
		kSnModelSocketNone                      = 0,
		kSnModelSocketLeftHand                  = 1,
		kSnModelSocketRightHand                 = 2,
		kSnModelSocketLeftShoulder              = 3,
		kSnModelSocketRightShoulder             = 4,
		kSnModelSocketShield                    = 5,
		kSnModelSocketCap                       = 6,
		kSnModelSocketAura                      = 7,
		kSnModelSocketRightWaist                = 8,
		kSnModelSocketLeftWaist                 = 9,
		kSnModelSocketRightFoot                 = 10,
		kSnModelSocketLeftFoot                  = 11,
		kSnModelSocketRightEye                  = 12,
		kSnModelSocketLeftEye                   = 13,
		kSnModelSocketProjectile                = 14,
		kSnModelSocketRoot                      = 15,
		kSnModelSocketTop                       = 16,
		kSnModelCameraOffsetRoot                = 17,
		kSnModelSocketItemFX01                  = 18,
		kSnModelSocketItemFX02                  = 19,
		kSnModelSocketItem01                    = 20,
		kSnModelSocketItem02                    = 21,
		kSnModelSocketItem03                    = 22,
		kSnModelSocketItem04                    = 23,
		kSnModelSocketFOEffect01                = 24,
		kSnModelSocketFOEffect02                = 25,
		kSnModelSocketFOEffect03                = 26,
		kSnModelSocketFOEffect04                = 27,
		kSnModelSocketFOEffect05                = 28,
		kSnModelSocketFOInteractionStart        = 29,
		kSnModelSocketFOInteractionEnd          = 30,
		kSnModelSocketFOInteraction01           = 31,
		kSnModelSocketFOInteraction02           = 32,
		kSnModelSocketLeftStirrup               = 33,
		kSnModelSocketRightStirrup              = 34,
		kSnModelSocketCenterStirrup             = 35,
		kSnModelSocketMount01                   = 36,
		kSnModelSocketMount02                   = 37,
		kSnModelSocketMount03                   = 38,
		kSnModelSocketMount04                   = 39,
		kSnModelSocketMount05                   = 40,
		kSnModelSocketMount06                   = 41,
		kSnModelSocketMount07                   = 42,
		kSnModelSocketMount08                   = 43,
		kSnModelSocketHit                       = 44,
		kSnModelSocketHitFront                  = 45,
		kSnModelSocketHitRight                  = 46,
		kSnModelSocketHitLeft                   = 47,
		kSnModelSocketHitBack                   = 48,
		kSnModelSocketHitExtra01                = 49,
		kSnModelSocketHitExtra02                = 50,
		kSnModelSocketHitExtra03                = 51,
		kSnModelSocketHitExtra04                = 52,
		kSnModelSocketHitLast                   = 53,
		kSnModelSocketCustom01                  = 54,
		kSnModelSocketCustom02                  = 55,
		kSnModelSocketCustom03                  = 56,
		kSnModelSocketCustom04                  = 57,
		kSnModelSocketCustom05                  = 58,
		kSnModelSocketCustom06                  = 59,
		kSnModelSocketCustom07                  = 60,
		kSnModelSocketCustom08                  = 61,
		kSnModelSocketCustom09                  = 62,
		kSnModelSocketCustom10                  = 63,
		kSnModelSocketLeftHandSecondary         = 64,
		kSnModelSocketRightHandSecondary        = 65,
		kSnModelSocketShieldSecondary           = 66,
		kSnModelSocketEquipMountRightShoulderA  = 67,
		kSnModelSocketEquipMountRightShoulderB  = 68,
		kSnModelSocketEquipMountLeftShoulderA   = 69,
		kSnModelSocketEquipMountLeftShoulderB   = 70,
		kSnModelSocketEquipMountRightWaist      = 71,
		kSnModelSocketEquipMountLeftWaist       = 72,
		kSnModelSocketEquipMountBackA           = 73,
		kSnModelSocketEquipMountBackB           = 74,
		kSnModelSocketEquipMountBackC           = 75,
		kSnModelSocketEquipMountBackD           = 76,
		kSnModelSocketEquipMountRightHip        = 77,
		kSnModelSocketEquipMountCommonLeftHand  = 78,
		kSnModelSocketEquipMountCommonRightHand = 79,
		kSnModelSocketEquipMountCommonShield    = 80,
		kSnModelSocketEquipMountQuiver          = 81,
		kSnModelSocketLeftItemProjectile        = 82,
		kSnModelSocketRightItemProjectile       = 83,
		kSnModelSocketWeapon2hGrip              = 84,
		kSnModelSocketTail                      = 85,
		kSnModelSocketMagicDoll                 = 86,
		kSnModelSocketFoInteraction             = 87,
		kSnModelSocketInteractionCamera         = 88,
		kSnModelSocketCounterMove               = 89,
		kSnModelSocketCounterMove01             = 90,
		kSnModelSocketGround01                  = 91,
		kSnModelSocketGround02                  = 92,
		kSnModelSocketGround03                  = 93,
		kSnModelSocketGround04                  = 94,
		kSnModelSocketGround05                  = 95,
		kSnModelSocketGround06                  = 96,
		kSnModelSocketGround07                  = 97,
		kSnModelSocketGround08                  = 98,
		kSnModelSocketLeftWrist                 = 99,
		kSnModelSocketRightWrist                = 100,
		kSnModelSocketBuff                      = 101,
		kSnModelSocketFOEffect06                = 102,
		kSnModelSocketVirtual                   = 103,
		kSnModelSocketPoints                    = 104,
		MAX                                     = 105
	};

	/**
	 * Enum TLScene.ESnModelMovementAnimation
	 */
	enum class ESnModelMovementAnimation : uint8_t
	{
		kSnModelMovementAnimJump                     = 0,
		kSnModelMovementAnimJumpLowStep              = 1,
		kSnModelMovementAnimJumpHighStep             = 2,
		kSnModelMovementAnimJumpLowRunningStep       = 3,
		kSnModelMovementAnimJumpHighRunningStep      = 4,
		kSnModelMovementAnimJumpSwimStep             = 5,
		kSnModelMovementAnimJumpFallingCatch         = 6,
		kSnModelMovementAnimFalling                  = 7,
		kSnModelMovementAnimKnockDown                = 8,
		kSnModelMovementAnimKnockDownFront           = 9,
		kSnModelMovementAnimKnockBack                = 10,
		kSnModelMovementAnimKnockBackFront           = 11,
		kSnModelMovementAnimKnockBackFloat           = 12,
		kSnModelMovementAnimKnockBackRoll            = 13,
		kSnModelMovementAnimKnockBackShort           = 14,
		kSnModelMovementAnimKnockBackMiddle          = 15,
		kSnModelMovementAnimKnockBackLong            = 16,
		kSnModelMovementAnimAirborne                 = 17,
		kSnModelMovementAnimBringOnFront             = 18,
		kSnModelMovementAnimBringOnBack              = 19,
		kSnModelMovementAnimAimingUp                 = 20,
		kSnModelMovementAnimAimingDown               = 21,
		kSnModelMovementStepBack                     = 22,
		kSnModelMovementCrowdSurfingShort_DEPRECATED = 23,
		kSnModelMovementCrowdSurfingLong_DEPRECATED  = 24,
		kSnModelMovementCrowdSurfing                 = 25,
		kSnModelMovementAnimations                   = 26,
		MAX                                          = 27
	};

	/**
	 * Enum TLScene.ESnBlendSpaceDefaultLayerAxis
	 */
	enum class ESnBlendSpaceDefaultLayerAxis : uint8_t
	{
		kSnBlendSpaceAxisContiParamX               = 0,
		kSnBlendSpaceAxisContiParamY               = 1,
		kSnBlendSpaceAxisSpeed                     = 2,
		kSnBlendSpaceAxisMoveDirection             = 3,
		kSnBlendSpaceAxisTargetDirectionHorizontal = 4,
		kSnBlendSpaceAxisTargetDirectionVertical   = 5,
		kSnBlendSpaceDefaultLayerAxisTypes         = 6,
		MAX                                        = 7
	};

	/**
	 * Enum TLScene.ESnBaseAnimState
	 */
	enum class ESnBaseAnimState : uint8_t
	{
		kSnBaeAnimStateIdle       = 0,
		kSnBaeAnimStateMove       = 1,
		kSnBaeAnimStateMoveLockOn = 2,
		kSnBaeAnimStateMoveStart  = 3,
		kSnBaeAnimStateMoveEnd    = 4,
		kSnBaeAnimStateMovingTurn = 5,
		kSnBaeAnimStateSmoothSync = 6,
		kSnBaeAnimStateTurn       = 7,
		kSnBaeAnimStateJump       = 8,
		kSnBaeAnimStateMount      = 9,
		kSnBaeAnimStateSwim       = 10,
		kSnBaeAnimStateGliding    = 11,
		kSnBaeAnimStateClimbing   = 12,
		kSnBaeAnimStateMovement   = 13,
		kSnBaeAnimStateTypes      = 14,
		MAX                       = 15
	};

	/**
	 * Enum TLScene.ESnAnimationLayer
	 */
	enum class ESnAnimationLayer : uint8_t
	{
		kSnAnimationLayerDefault  = 0,
		kSnAnimationLayerMovement = 1,
		kSnAnimationLayerBase     = 2,
		kSnAnimationLayerCount    = 3,
		MAX                       = 4
	};

	/**
	 * Enum TLScene.ESnAnimationTrack
	 */
	enum class ESnAnimationTrack : uint8_t
	{
		kSnAnimationTrackFull  = 0,
		kSnAnimationTrackLower = 1,
		kSnAnimationTrackUpper = 2,
		kSnAnimationTracks     = 3,
		MAX                    = 4
	};

	/**
	 * Enum TLScene.ESnWeaponType
	 */
	enum class ESnWeaponType : uint8_t
	{
		kWeaponSword2h  = 0,
		kWeaponStaff    = 1,
		kWeaponBow      = 2,
		kWeaponDagger   = 3,
		kWeaponSword    = 4,
		kWeaponCrossbow = 5,
		kWeaponWand     = 6,
		kWeaponGrimoire = 7,
		kWeaponShield   = 8,
		kWeaponScroll   = 9,
		kWeaponSpear    = 10,
		kWeaponCount    = 11,
		MAX             = 12
	};

	/**
	 * Enum TLScene.ESnSubStanceType
	 */
	enum class ESnSubStanceType : uint8_t
	{
		kSnSubStanceNone      = 0,
		kSnSubStanceNormal    = 1,
		kSnSubStanceCombat    = 2,
		kSnSubStanceDefense   = 3,
		kSnSubStanceSnipe     = 4,
		kSnSubStanceSwim      = 5,
		kSnSubStanceGliding   = 6,
		kSnSubStanceSiegeMode = 7,
		kSnSubStanceStealth   = 8,
		kSnSubStanceCustomize = 9,
		kSnSubStanceFishing   = 10,
		kSnSubStances         = 11,
		MAX                   = 12
	};

	/**
	 * Enum TLScene.ESnStanceType
	 */
	enum class ESnStanceType : uint8_t
	{
		kSnStanceUnarmed           = 0,
		kSnStanceSword2h           = 1,
		kSnStanceStaff             = 2,
		kSnStanceBow               = 3,
		kSnStanceDagger            = 4,
		kSnStanceDagger_Dagger     = 5,
		kSnStanceDagger_Crossbow   = 6,
		kSnStanceDagger_Grimoire   = 7,
		kSnStanceDagger_Shield     = 8,
		kSnStanceDagger_Scroll     = 9,
		kSnStanceSword1h           = 10,
		kSnStanceSword1h_Dagger    = 11,
		kSnStanceSword1h_Crossbow  = 12,
		kSnStanceSword1h_Grimoire  = 13,
		kSnStanceSword1h_Shield    = 14,
		kSnStanceSword1h_Scroll    = 15,
		kSnStanceCrossbow          = 16,
		kSnStanceCrossbow_Dagger   = 17,
		kSnStanceCrossbow_Crossbow = 18,
		kSnStanceCrossbow_Grimoire = 19,
		kSnStanceCrossbow_Shield   = 20,
		kSnStanceCrossbow_Scroll   = 21,
		kSnStanceWand              = 22,
		kSnStanceWand_Dagger       = 23,
		kSnStanceWand_Crossbow     = 24,
		kSnStanceWand_Grimoire     = 25,
		kSnStanceWand_Shield       = 26,
		kSnStanceWand_Scroll       = 27,
		kSnStanceBareHand          = 28,
		kSnStanceBareHand_Dagger   = 29,
		kSnStanceBareHand_Crossbow = 30,
		kSnStanceBareHand_Grimoire = 31,
		kSnStanceBareHand_Shield   = 32,
		kSnStanceBareHand_Scroll   = 33,
		kSnStanceSpear             = 34,
		kSnStanceFallback          = 35,
		kSnStanceTypes             = 36,
		MAX                        = 37
	};

	/**
	 * Enum TLScene.ESnModelMeshType
	 */
	enum class ESnModelMeshType : uint8_t
	{
		kSnModelMeshDefault  = 0,
		kSnModelMeshStatic   = 1,
		kSnModelMeshSkeletal = 2,
		kSnModelMeshMapRoom  = 3,
		kSnModelMeshParticle = 4,
		kSnModelMeshTypes    = 5,
		MAX                  = 6
	};

	/**
	 * Enum TLScene.ESnModelLODMode
	 */
	enum class ESnModelLODMode : uint8_t
	{
		Auto   = 0,
		Force0 = 1,
		Force1 = 2,
		Force2 = 3,
		Force3 = 4,
		MAX    = 5
	};

	/**
	 * Enum TLScene.ESnModelType
	 */
	enum class ESnModelType : uint8_t
	{
		kSnModelBase           = 0,
		kSnModelSoft           = 1,
		kSnModelRigid          = 2,
		kSnModelRigidComposite = 3,
		kSnModelItem           = 4,
		kSnModelEffect         = 5,
		kSnModelNull           = 6,
		kSnModelSnapshot       = 7,
		kSnModelLightning      = 8,
		kSnModelRope           = 9,
		kSnModelDecal          = 10,
		kSnModelSkidMark       = 11,
		kSnModelLight          = 12,
		kSnModelTypes          = 13,
		MAX                    = 14
	};

	/**
	 * Enum TLScene.ESnNodeKillPolicy
	 */
	enum class ESnNodeKillPolicy : uint8_t
	{
		kSnNodeKillPolicyDefault           = 0,
		kSnNodeKillPolicyImmediate         = 1,
		kSnNodeKillPolicyLifeTime          = 2,
		kSnNodeKillPolicyFadeOut250MS      = 3,
		kSnNodeKillPolicyFadeOut500MS      = 4,
		kSnNodeKillPolicyFadeOut1Sec       = 5,
		kSnNodeKillPolicyFadeOutCustomSecs = 6,
		kSnNodeKillPolicies                = 7,
		MAX                                = 8
	};

	/**
	 * Enum TLScene.ESnNodeReferencePoint
	 */
	enum class ESnNodeReferencePoint : uint8_t
	{
		kSnNodeReferenceLeftHand            = 0,
		kSnNodeReferenceRightHand           = 1,
		kSnNodeReferenceLeftWrist           = 2,
		kSnNodeReferenceRightWrist          = 3,
		kSnNodeReferenceLeftShoulder        = 4,
		kSnNodeReferenceRightShoulder       = 5,
		kSnNodeReferenceShield              = 6,
		kSnNodeReferenceCap                 = 7,
		kSnNodeReferenceAura                = 8,
		kSnNodeReferenceBuff                = 9,
		kSnNodeReferenceRightFoot           = 10,
		kSnNodeReferenceLeftFoot            = 11,
		kSnNodeReferenceRightEye            = 12,
		kSnNodeReferenceLeftEye             = 13,
		kSnNodeReferenceProjectile          = 14,
		kSnNodeReferenceRoot                = 15,
		kSnNodeReferenceTop                 = 16,
		kSnNodeReferenceCamOffsetRoot       = 17,
		kSnNodeReferenceRightHandItemFX01   = 18,
		kSnNodeReferenceRightHandItemFX02   = 19,
		kSnNodeReferenceLeftHandItemFX01    = 20,
		kSnNodeReferenceLeftHandItemFX02    = 21,
		kSnNodeReferenceShieldItemFX01      = 22,
		kSnNodeReferenceShieldItemFX02      = 23,
		kSnNodeReferenceItem01              = 24,
		kSnNodeReferenceItem02              = 25,
		kSnNodeReferenceItem03              = 26,
		kSnNodeReferenceItem04              = 27,
		kSnNodeReferenceFOEffect01          = 28,
		kSnNodeReferenceFOEffect02          = 29,
		kSnNodeReferenceFOEffect03          = 30,
		kSnNodeReferenceFOEffect04          = 31,
		kSnNodeReferenceFOEffect05          = 32,
		kSnNodeReferenceFOEffect06          = 33,
		kSnNodeReferenceLeftStirrup         = 34,
		kSnNodeReferenceRightStirrup        = 35,
		kSnNodeReferenceCenterStirrup       = 36,
		kSnNodeReferenceMount01             = 37,
		kSnNodeReferenceMount02             = 38,
		kSnNodeReferenceMount03             = 39,
		kSnNodeReferenceMount04             = 40,
		kSnNodeReferenceMount05             = 41,
		kSnNodeReferenceMount06             = 42,
		kSnNodeReferenceMount07             = 43,
		kSnNodeReferenceMount08             = 44,
		kSnNodeReferenceLeftItemProjectile  = 45,
		kSnNodeReferenceRightItemProjectile = 46,
		kSnNodeReferenceTail                = 47,
		kSnNodeReferenceMagicDoll           = 48,
		kSnNodeReferenceCounterMove         = 49,
		kSnNodeReferenceCounterMove01       = 50,
		kSnNodeReferenceGround01            = 51,
		kSnNodeReferenceGround02            = 52,
		kSnNodeReferenceGround03            = 53,
		kSnNodeReferenceGround04            = 54,
		kSnNodeReferenceGround05            = 55,
		kSnNodeReferenceGround06            = 56,
		kSnNodeReferenceGround07            = 57,
		kSnNodeReferenceGround08            = 58,
		kSnNodeReferenceVirtual             = 59,
		kSnNodeReferenceHit                 = 60,
		kSnNodeReferenceHitFront            = 61,
		kSnNodeReferenceHitRight            = 62,
		kSnNodeReferenceHitLeft             = 63,
		kSnNodeReferenceHitBack             = 64,
		kSnNodeReferenceHitExtra01          = 65,
		kSnNodeReferenceHitExtra02          = 66,
		kSnNodeReferenceHitExtra03          = 67,
		kSnNodeReferenceHitExtra04          = 68,
		kSnNodeReferenceHitMelee01          = 69,
		kSnNodeReferenceHitMelee02          = 70,
		kSnNodeReferenceHitMelee03          = 71,
		kSnNodeReferenceHitMelee04          = 72,
		kSnNodeReferenceHitMelee05          = 73,
		kSnNodeReferenceHitMelee06          = 74,
		kSnNodeReferenceHitMelee07          = 75,
		kSnNodeReferenceHitMelee08          = 76,
		kSnNodeReferenceCustom01            = 77,
		kSnNodeReferenceCustom02            = 78,
		kSnNodeReferenceCustom03            = 79,
		kSnNodeReferenceCustom04            = 80,
		kSnNodeReferenceCustom05            = 81,
		kSnNodeReferenceCustom06            = 82,
		kSnNodeReferenceCustom07            = 83,
		kSnNodeReferenceCustom08            = 84,
		kSnNodeReferenceCustom09            = 85,
		kSnNodeReferenceCustom10            = 86,
		kSnNodeReferencePoints              = 87,
		MAX                                 = 88
	};

	/**
	 * Enum TLScene.ESnNodeParentInheritType
	 */
	enum class ESnNodeParentInheritType : uint8_t
	{
		kSnNodeParentInheritPos                = 0,
		kSnNodeParentInheritPosScale           = 1,
		kSnNodeParentInheritPRS                = 2,
		kSnNodeParentInheritVehicle_DEPRECATED = 3,
		kSnNodeParentInheritNO                 = 4,
		MAX                                    = 5
	};

	/**
	 * Enum TLScene.ESnNodeParentType
	 */
	enum class ESnNodeParentType : uint8_t
	{
		kSnNodeParentDefault   = 0,
		kSnNodeParentWorld     = 1,
		kSnNodeParentEquipItem = 2,
		kSnNodeParentTypes     = 3,
		MAX                    = 4
	};

	/**
	 * Enum TLScene.ETLFOPriority
	 */
	enum class ETLFOPriority : uint8_t
	{
		Highest = 0,
		High    = 1,
		Medium  = 2,
		Low     = 3,
		Num     = 4,
		MAX     = 5
	};

	/**
	 * Enum TLScene.EPhysicsActionPowerLevel
	 */
	enum class EPhysicsActionPowerLevel : uint8_t
	{
		kSnPhysicsActionPowerLow    = 0,
		kSnPhysicsActionPowerMedium = 1,
		kSnPhysicsActionPowerHigh   = 2,
		kSnPhysicsActionPowers      = 3,
		MAX                         = 4
	};

	/**
	 * Enum TLScene.EPhysicsActionType
	 */
	enum class EPhysicsActionType : uint8_t
	{
		kSnPhysicsActionNormal        = 0,
		kSnPhysicsActionCollapse      = 1,
		kSnPhysicsActionCollapseFront = 2,
		kSnPhysicsActionCollapseBack  = 3,
		kSnPhysicsActionBombEffect    = 4,
		kSnPhysicsActions             = 5,
		MAX                           = 6
	};

	/**
	 * Enum TLScene.EHitEffectDirection
	 */
	enum class EHitEffectDirection : uint8_t
	{
		kSnNeutral             = 0,
		kSnLeftToRight         = 1,
		kSnRightToLeft         = 2,
		kSnBottomToTop         = 3,
		kSnTopToBottom         = 4,
		kSnFrontToBack         = 5,
		kSnBackToFront         = 6,
		kSnHitEffectDirections = 7,
		MAX                    = 8
	};

	/**
	 * Enum TLScene.EAnimationRuleType
	 */
	enum class EAnimationRuleType : uint8_t
	{
		kRuleSequenceOnly                    = 0,
		kRuleSystemAnimAndWieldType          = 1,
		kRuleSequenceSubsequenceAndWieldType = 2,
		MAX                                  = 3
	};

	/**
	 * Enum TLScene.ESnActionMapGraphOperationType
	 */
	enum class ESnActionMapGraphOperationType : uint8_t
	{
		kSnActionMapGraphOpBlockEdge   = 0,
		kSnActionMapGraphOpUnblockEdge = 1,
		kSnActionMapGraphOpTypes       = 2,
		MAX                            = 3
	};

	/**
	 * Enum TLScene.ESnActionEquipMountOptions
	 */
	enum class ESnActionEquipMountOptions : uint8_t
	{
		MountNone      = 0,
		MountLeftHand  = 1,
		MountRightHand = 2,
		MountAll       = 3,
		Types          = 4,
		MAX            = 5
	};

	/**
	 * Enum TLScene.ESnActionModelSocketCharacterEquips
	 */
	enum class ESnActionModelSocketCharacterEquips : uint8_t
	{
		LeftHand   = 0,
		RightHand  = 1,
		Shield     = 2,
		Cap        = 3,
		Aura       = 4,
		MountRight = 5,
		MountLeft  = 6,
		RightWaist = 7,
		LeftWaist  = 8,
		RightFoot  = 9,
		LeftFoot   = 10,
		RightEye   = 11,
		LeftEye    = 12,
		Projectile = 13,
		Root       = 14,
		Top        = 15,
		Item01     = 16,
		Item02     = 17,
		Item03     = 18,
		Item04     = 19,
		Tail       = 20,
		Types      = 21,
		MAX        = 22
	};

	/**
	 * Enum TLScene.ESnActionEffectSortOrder
	 */
	enum class ESnActionEffectSortOrder : uint8_t
	{
		Ui2        = 0,
		Ui1        = 1,
		Ui0        = 2,
		Distortion = 3,
		Order9     = 4,
		Order8     = 5,
		Order7     = 6,
		Order6     = 7,
		Order5     = 8,
		Order4     = 9,
		Order3     = 10,
		Order2     = 11,
		Order1     = 12,
		Order0     = 13,
		Types      = 14,
		MAX        = 15
	};

	/**
	 * Enum TLScene.ESnActionTimeLapseSaveType
	 */
	enum class ESnActionTimeLapseSaveType : uint8_t
	{
		kSnActionTimeLapseSaveNone = 0,
		kSnActionTimeLapseSavePush = 1,
		kSnActionTimeLapseSavePop  = 2,
		Types                      = 3,
		MAX                        = 4
	};

	/**
	 * Enum TLScene.ESnActionPlayRankSkillType
	 */
	enum class ESnActionPlayRankSkillType : uint8_t
	{
		kSnActionPlayRank1 = 0,
		kSnActionPlayRank2 = 1,
		kSnActionPlayRank3 = 2,
		kSnActionRanks     = 3,
		MAX                = 4
	};

	/**
	 * Enum TLScene.ESnActionPlayTargetType
	 */
	enum class ESnActionPlayTargetType : uint8_t
	{
		kSnActionPlayObject  = 0,
		kSnActionPlayWorld   = 1,
		kSnActionPlayScene   = 2,
		kSnActionPlayTargets = 3,
		MAX                  = 4
	};

	/**
	 * Enum TLScene.ESnActionWeatherType
	 */
	enum class ESnActionWeatherType : uint8_t
	{
		kSnActionWeatherNormal  = 0,
		kSnActionWeatherRain    = 1,
		kSnActionWeatherThunder = 2,
		kSnActionWeatherSnow    = 3,
		kSnActionWeatherIndoor  = 4,
		kSnActionWeatherTypes   = 5,
		MAX                     = 6
	};

	/**
	 * Enum TLScene.ESnActionSetMaterialParameterValue
	 */
	enum class ESnActionSetMaterialParameterValue : uint8_t
	{
		LinearColor = 0,
		Scalar      = 1,
		Texture     = 2,
		Types       = 3,
		MAX         = 4
	};

	/**
	 * Enum TLScene.ESnActionInvisibleModeFlag
	 */
	enum class ESnActionInvisibleModeFlag : uint8_t
	{
		MyPC    = 0,
		OtherPC = 1,
		NPC     = 2,
		FO      = 3,
		Item    = 4,
		Carrier = 5,
		Types   = 6,
		MAX     = 7
	};

	/**
	 * Enum TLScene.ESnActionIFFColorApplyMode
	 */
	enum class ESnActionIFFColorApplyMode : uint8_t
	{
		Ignore      = 0,
		Override    = 1,
		Mod         = 2,
		Mod2X       = 3,
		BlendAlpha  = 4,
		Add         = 5,
		AddSmooth   = 6,
		Subtract    = 7,
		SubtractInv = 8,
		Min         = 9,
		Max         = 10,
		Types       = 11
	};

	/**
	 * Enum TLScene.ESnActionCueSheetOperationType
	 */
	enum class ESnActionCueSheetOperationType : uint8_t
	{
		kSnActionCueSheetOpDefault  = 0,
		kSnActionCueSheetOpChange   = 1,
		kSnActionCueSheetOpAdd      = 2,
		kSnActionCueSheetOpRemove   = 3,
		kSnActionCueSheetOpKeep     = 4,
		kSnActionCueSheetOpActivate = 5,
		kSnActionCueSheetOpDeactive = 6,
		kSnActionCueSheetOpTypes    = 7,
		MAX                         = 8
	};

	/**
	 * Enum TLScene.ESnActionProjectileTrailType
	 */
	enum class ESnActionProjectileTrailType : uint8_t
	{
		ParticleTrail = 0,
		Beam          = 1,
		Cable         = 2,
		Rope          = 3,
		Types         = 4,
		MAX           = 5
	};

	/**
	 * Enum TLScene.ESnActionProjectileHeadType
	 */
	enum class ESnActionProjectileHeadType : uint8_t
	{
		kSnActionProjectileHeadMesh     = 0,
		kSnActionProjectileHeadParticle = 1,
		kSnActionProjectileHeadTypes    = 2,
		MAX                             = 3
	};

	/**
	 * Enum TLScene.ESnActionProjectileType
	 */
	enum class ESnActionProjectileType : uint8_t
	{
		kSnActionProjectileArrow    = 0,
		kSnActionProjectileDirect   = 1,
		kSnActionProjectileMortar   = 2,
		kSnActionProjectileHovering = 3,
		kSnActionProjectileTypes    = 4,
		MAX                         = 5
	};

	/**
	 * Enum TLScene.ESnActionConditionEnvironment
	 */
	enum class ESnActionConditionEnvironment : uint8_t
	{
		kSnActionConditionDay          = 0,
		kSnActionConditionSunrise      = 1,
		kSnActionConditionNight        = 2,
		kSnActionConditionSunset       = 3,
		kSnActionConditionEnvironments = 4,
		MAX                            = 5
	};

	/**
	 * Enum TLScene.ESnActionRotationType
	 */
	enum class ESnActionRotationType : uint8_t
	{
		kSnActionRotationSelf      = 0,
		kSnActionRotationSelfInv   = 1,
		kSnActionRotationTarget    = 2,
		kSnActionRotationTargetInv = 3,
		kSnActionRotationTypes     = 4,
		MAX                        = 5
	};

	/**
	 * Enum TLScene.ESnActionPlayOption
	 */
	enum class ESnActionPlayOption : uint8_t
	{
		kSnActionPlayOptionDefault = 0,
		kSnActionPlayOptionPending = 1,
		kSnActionLayers            = 2,
		MAX                        = 3
	};

	/**
	 * Enum TLScene.ESnActionTargetType
	 */
	enum class ESnActionTargetType : uint8_t
	{
		kSnActionTargetMe         = 0,
		kSnActionTargetAll        = 1,
		kSnActionTargetCaster     = 2,
		kSnActionTargetEngagement = 3,
		kSnActionTargetTypes      = 4,
		MAX                       = 5
	};

	/**
	 * Enum TLScene.ESnActionObjectFilterType
	 */
	enum class ESnActionObjectFilterType : uint8_t
	{
		SoftObject  = 0,
		RigidObject = 1,
		Types       = 2,
		MAX         = 3
	};

	/**
	 * Enum TLScene.ESnActionLayer
	 */
	enum class ESnActionLayer : uint8_t
	{
		kSnActionLayerSystem           = 0,
		kSnActionLayerSync             = 1,
		kSnActionLayerMovement         = 2,
		kSnActionLayerAnimationBase    = 3,
		kSnActionLayerAnimationOverlay = 4,
		kSnActionLayerAnimationPhysics = 5,
		kSnActionLayerCamera           = 6,
		kSnActionLayerVFX              = 7,
		kSnActionLayerSound            = 8,
		kSnActionLayers                = 9,
		MAX                            = 10
	};

	/**
	 * Enum TLScene.ESnActionDetailMode
	 */
	enum class ESnActionDetailMode : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Types  = 3,
		MAX    = 4
	};

	/**
	 * Enum TLScene.ESnActionPlayMode
	 */
	enum class ESnActionPlayMode : uint8_t
	{
		kSnActionPlayModeDefault  = 0,
		kSnActionPlayModeHide     = 1,
		kSnActionPlayModeOverlap  = 2,
		kSnActionPlayModeWide     = 3,
		kSnActionPlayModeNoMotion = 4,
		kSnActionPlayModes        = 5,
		MAX                       = 6
	};

	/**
	 * Enum TLScene.SnWorldActionType
	 */
	enum class ESnWorldActionType : uint8_t
	{
		SnWorldActionTypekSnActionMoveWarmup                     = 0,
		SnWorldActionTypekSnActionMoveTarget                     = 1,
		SnWorldActionTypekSnActionMoveDirect                     = 2,
		SnWorldActionTypekSnActionMoveStop                       = 3,
		SnWorldActionTypekSnActionMoveSpeed                      = 4,
		SnWorldActionTypekSnActionMoveSetMode                    = 5,
		SnWorldActionTypekSnActionMovePRS                        = 6,
		SnWorldActionTypekSnActionMoveTransformSequence          = 7,
		SnWorldActionTypekSnActionMoveJumpWarmup                 = 8,
		SnWorldActionTypekSnActionMoveFall                       = 9,
		SnWorldActionTypekSnActionMoveArrived                    = 10,
		SnWorldActionTypekSnActionAddMovementInput               = 11,
		SnWorldActionTypekSnActionPlayJump                       = 12,
		SnWorldActionTypekSnActionPlayPendingAction              = 13,
		SnWorldActionTypekSnActionPlayScenario                   = 14,
		SnWorldActionTypekSnActionPlaySceneConti                 = 15,
		SnWorldActionTypekSnActionSetMaterialParameter           = 16,
		SnWorldActionTypekSnActionClearMaterialTexture           = 17,
		SnWorldActionTypekSnActionSetSequencerAnimation          = 18,
		SnWorldActionTypekSnActionSetSequencerAnimationPosition  = 19,
		SnWorldActionTypekSnActionSetClothTeleportMode           = 20,
		SnWorldActionTypekSnActionUpdatePathFollowSplines        = 21,
		SnWorldActionTypekSnActionSetFloatingZOffset             = 22,
		SnWorldActionTypekSnActionSetMaxStepHeight               = 23,
		SnWorldActionTypekSnActionSetDecalReceiveType            = 24,
		SnWorldActionTypekSnActionStopOverlayMovement            = 25,
		SnWorldActionTypekSnActionCancelJumpOrFall               = 26,
		SnWorldActionTypekSnActionStateMovementRotation          = 27,
		SnWorldActionTypekSnActionStateModelRotation             = 28,
		SnWorldActionTypekSnActionStateAgentLockOn               = 29,
		SnWorldActionTypekSnActionStateAgentCollide              = 30,
		SnWorldActionTypekSnActionStateAgentDisableMovement      = 31,
		SnWorldActionTypekSnActionStateIKLookAt                  = 32,
		SnWorldActionTypekSnActionStateEquipItemHive             = 33,
		SnWorldActionTypekSnActionStateEquipItemRaw              = 34,
		SnWorldActionTypekSnActionStateUnEquipItem               = 35,
		SnWorldActionTypekSnActionStateUnEquipAllItem            = 36,
		SnWorldActionTypekSnActionStateInvisible                 = 37,
		SnWorldActionTypekSnActionStateVisibility                = 38,
		SnWorldActionTypekSnActionStateWeather                   = 39,
		SnWorldActionTypekSnActionStateWaterDrought              = 40,
		SnWorldActionTypekSnActionStateAreaVolumeActivation      = 41,
		SnWorldActionTypekSnActionAttachObject                   = 42,
		SnWorldActionTypekSnActionChangeCollisionSize            = 43,
		SnWorldActionTypekSnActionChangeScale                    = 44,
		SnWorldActionTypekSnActionChangeIFFParam                 = 45,
		SnWorldActionTypekSnActionChangeStance                   = 46,
		SnWorldActionTypekSnActionChangeSubStance                = 47,
		SnWorldActionTypekSnActionChangeEquipMountState          = 48,
		SnWorldActionTypekSnActionWorldSetGameHour               = 49,
		SnWorldActionTypekSnActionWorldSetTimeFreeze             = 50,
		SnWorldActionTypekSnActionWorldSetTimeLapse              = 51,
		SnWorldActionTypekSnActionWorldSetWind                   = 52,
		SnWorldActionTypekSnActionWorldSetPhotoSensitize         = 53,
		SnWorldActionTypekSnActionWorldSetGroupMaterialTexture   = 54,
		SnWorldActionTypekSnActionWorldClearGroupMaterialTexture = 55,
		SnWorldActionTypekSnActionWorldPlayCueSheet              = 56,
		SnWorldActionTypekSnActions                              = 57,
		SnWorldActionTypeSnWorldActionType_MAX                   = 58
	};

	/**
	 * Enum TLScene.ESnWorldEnvTimeType
	 */
	enum class ESnWorldEnvTimeType : uint8_t
	{
		kSnWorldEnvTimeNight   = 0,
		kSnWorldEnvTimeSunrise = 1,
		kSnWorldEnvTimeDay     = 2,
		kSnWorldEnvTimeSunset  = 3,
		kSnWorldEnvTimeTypes   = 4,
		MAX                    = 5
	};

	/**
	 * Enum TLScene.ESnObjectContTestSetType
	 */
	enum class ESnObjectContTestSetType : uint8_t
	{
		kSnObjectContiTestMouseLButton = 0,
		kSnObjectContiTestKeyTab       = 1,
		kSnObjectContiTestKey1         = 2,
		kSnObjectContiTestKey2         = 3,
		kSnObjectContiTestKey3         = 4,
		kSnObjectContiTestKey4         = 5,
		kSnObjectContiTestTypes        = 6,
		MAX                            = 7
	};

	/**
	 * Enum TLScene.ESnObjectSpeedType
	 */
	enum class ESnObjectSpeedType : uint8_t
	{
		kSnObjectSpeedWalk  = 0,
		kSnObjectSpeedRun   = 1,
		kSnObjectSpeedTypes = 2,
		MAX                 = 3
	};

	/**
	 * Enum TLScene.ESnObjectType
	 */
	enum class ESnObjectType : uint8_t
	{
		kSnObjectGlobal      = 0,
		kSnObjectCreature    = 1,
		kSnObjectFieldObject = 2,
		kSnObjectVolume      = 3,
		kSnObjectItem        = 4,
		kSnObjectArea        = 5,
		kSnObjectIndicator   = 6,
		kSnObjectTypes       = 7,
		MAX                  = 8
	};

	/**
	 * Enum TLScene.ETLActionTreeDebugVerbosity
	 */
	enum class ETLActionTreeDebugVerbosity : uint8_t
	{
		None    = 0,
		Basic   = 1,
		Verbose = 2,
		MAX     = 3
	};

	/**
	 * Enum TLScene.EContiPlayConditionalMode
	 */
	enum class EContiPlayConditionalMode : uint8_t
	{
		kContiPlayConditional_MatchOne = 0,
		kContiPlayConditional_All      = 1,
		kContiPlayConditional_MAX      = 2
	};

	/**
	 * Enum TLScene.ETLActionTreeStopModeFlags
	 */
	enum class ETLActionTreeStopModeFlags : uint8_t
	{
		None          = 0,
		BlendAnim     = 1,
		StopCameraSet = 2,
		All           = 3,
		MAX           = 4
	};

	/**
	 * Enum TLScene.ESnStaticMeshCheckResult
	 */
	enum class ESnStaticMeshCheckResult : uint8_t
	{
		kSnOk                          = 0,
		kSnNoSimpleCollision           = 1,
		kSnComplicatedComplexCollision = 2,
		MAX                            = 3
	};

	/**
	 * Enum TLScene.ESnBlockingVolumeCheckResult
	 */
	enum class ESnBlockingVolumeCheckResult : uint8_t
	{
		kSnOk                       = 0,
		kSnNoBrushComponent         = 1,
		kSnNoCollision              = 2,
		kSnInvalidCollisionProfile  = 3,
		kSnInvalidBodySetup         = 4,
		kSnInvalidCollisionMeshInfo = 5,
		MAX                         = 6
	};

	/**
	 * Enum TLScene.ESnEnvironmentVolumeCheckResult
	 */
	enum class ESnEnvironmentVolumeCheckResult : uint8_t
	{
		kSnOk                        = 0,
		kSnNeedWaterPlaneLoaded      = 1,
		kSnInvalidWaterPlaneMobility = 2,
		MAX                          = 3
	};

	/**
	 * Enum TLScene.ESnMapHiveActorCheckResult
	 */
	enum class ESnMapHiveActorCheckResult : uint8_t
	{
		kSnOk                       = 0,
		kSnNoHiveEntity             = 1,
		kSnInvalidMapRoom           = 2,
		kSnSkeletalMeshOnly         = 3,
		kSnNoMeshComponent          = 4,
		kSnNoStaticMeshComponent    = 5,
		kSnNoStaticMesh             = 6,
		kSnInvalidBodySetup         = 7,
		kSnInvalidCollisionMeshInfo = 8,
		kSnWrongMobility            = 9,
		MAX                         = 10
	};

	/**
	 * Enum TLScene.ESnMapRoomBaseActorCheckResult
	 */
	enum class ESnMapRoomBaseActorCheckResult : uint8_t
	{
		kSnOk                       = 0,
		kSnInvalidMapRoom           = 1,
		kSnNoMapRoom                = 2,
		kSnNoStaticMeshComponent    = 3,
		kSnNoStaticMesh             = 4,
		kSnInvalidBodySetup         = 5,
		kSnInvalidCollisionMeshInfo = 6,
		MAX                         = 7
	};

	/**
	 * Enum TLScene.ESnLandscapeProxyCheckResult
	 */
	enum class ESnLandscapeProxyCheckResult : uint8_t
	{
		kSnOk = 0,
		MAX   = 1
	};

	/**
	 * Enum TLScene.ESnStaticMeshComponentCheckResult
	 */
	enum class ESnStaticMeshComponentCheckResult : uint8_t
	{
		kSnOk                       = 0,
		kSnNoStaticMeshComp         = 1,
		kSnInvalidBodySetup         = 2,
		kSnInvalidCollisionMeshInfo = 3,
		MAX                         = 4
	};

	/**
	 * Enum TLScene.ETLSphericalLimitType
	 */
	enum class ETLSphericalLimitType : uint8_t
	{
		Inner = 0,
		Outer = 1,
		MAX   = 2
	};

	/**
	 * Enum TLScene.ETLAnimPhysCollisionType
	 */
	enum class ETLAnimPhysCollisionType : uint8_t
	{
		CoM          = 0,
		CustomSphere = 1,
		InnerSphere  = 2,
		OuterSphere  = 3,
		MAX          = 4
	};

	/**
	 * Enum TLScene.TLAnimPhysNodeAngularConstraint
	 */
	enum class ETLAnimPhysNodeAngularConstraint : uint8_t
	{
		TLAnimPhysNodeAngularConstraintDisableXAxis                        = 0,
		TLAnimPhysNodeAngularConstraintDisableYAxis                        = 1,
		TLAnimPhysNodeAngularConstraintDisableZAxis                        = 2,
		TLAnimPhysNodeAngularConstraintTLAnimPhysNodeAngularConstraint_MAX = 3
	};

	/**
	 * Enum TLScene.TLAnimPhysNodeDisableByItemMount
	 */
	enum class ETLAnimPhysNodeDisableByItemMount : uint8_t
	{
		TLAnimPhysNodeDisableByItemMountRightShoulder                        = 0,
		TLAnimPhysNodeDisableByItemMountLeftShoulder                         = 1,
		TLAnimPhysNodeDisableByItemMountRightWaist                           = 2,
		TLAnimPhysNodeDisableByItemMountLeftWaist                            = 3,
		TLAnimPhysNodeDisableByItemMountBack                                 = 4,
		TLAnimPhysNodeDisableByItemMountRightHip                             = 5,
		TLAnimPhysNodeDisableByItemMountQuiver                               = 6,
		TLAnimPhysNodeDisableByItemMountDisableFlagCount                     = 7,
		TLAnimPhysNodeDisableByItemMountTLAnimPhysNodeDisableByItemMount_MAX = 8
	};

	/**
	 * Enum TLScene.TLAnimPhysNodePriority
	 */
	enum class ETLAnimPhysNodePriority : uint8_t
	{
		TLAnimPhysNodePriorityHigh                       = 0,
		TLAnimPhysNodePriorityMedium                     = 1,
		TLAnimPhysNodePriorityLow                        = 2,
		TLAnimPhysNodePriorityTLAnimPhysNodePriority_MAX = 3
	};

	/**
	 * Enum TLScene.TLAnimPhysTwistAxis
	 */
	enum class ETLAnimPhysTwistAxis : uint8_t
	{
		TLAnimPhysTwistAxisAxisX                   = 0,
		TLAnimPhysTwistAxisAxisY                   = 1,
		TLAnimPhysTwistAxisAxisZ                   = 2,
		TLAnimPhysTwistAxisTLAnimPhysTwistAxis_MAX = 3
	};

	/**
	 * Enum TLScene.TLAnimPhysLinearConstraintType
	 */
	enum class ETLAnimPhysLinearConstraintType : uint8_t
	{
		TLAnimPhysLinearConstraintTypeFree                               = 0,
		TLAnimPhysLinearConstraintTypeLimited                            = 1,
		TLAnimPhysLinearConstraintTypeTLAnimPhysLinearConstraintType_MAX = 2
	};

	/**
	 * Enum TLScene.TLAnimPhysAngularConstraintType
	 */
	enum class ETLAnimPhysAngularConstraintType : uint8_t
	{
		TLAnimPhysAngularConstraintTypeAngular                             = 0,
		TLAnimPhysAngularConstraintTypeCone                                = 1,
		TLAnimPhysAngularConstraintTypeTLAnimPhysAngularConstraintType_MAX = 2
	};

	/**
	 * Enum TLScene.ETLConstraintMapRegionType
	 */
	enum class ETLConstraintMapRegionType : uint8_t
	{
		kPeace     = 0,
		kConflict  = 1,
		kSafety    = 2,
		kFreeDuel  = 3,
		kWar       = 4,
		kCombat    = 5,
		kEndOfEnum = 6,
		MAX        = 7
	};

	/**
	 * Enum TLScene.ETLSoundAudioLanguage
	 */
	enum class ETLSoundAudioLanguage : uint8_t
	{
		Korean             = 0,
		English            = 1,
		Japanese           = 2,
		ChineseTraditional = 3,
		MAX                = 4
	};

	/**
	 * Enum TLScene.ETLCharacterSoundEvents
	 */
	enum class ETLCharacterSoundEvents : uint8_t
	{
		None                  = 0,
		OnCreate              = 1,
		OnHit                 = 2,
		OnCriticalHit         = 3,
		OnDie                 = 4,
		OnDieRagdoll          = 5,
		OnAggro               = 6,
		OnSetDefaultArmorType = 7,
		OnPolymorph           = 8,
		OnHugeDamage          = 9,
		OnAttackHugeDamage    = 10,
		MAX                   = 11
	};

	/**
	 * Enum TLScene.ETLAudioCSPropFootType
	 */
	enum class ETLAudioCSPropFootType : uint8_t
	{
		None    = 0,
		Bare_L  = 1,
		Bare_M  = 2,
		Bare_S  = 3,
		Boot_L  = 4,
		Boot_M  = 5,
		Boot_S  = 6,
		Fire_L  = 7,
		Fire_M  = 8,
		Metal_L = 9,
		Metal_M = 10,
		Metal_S = 11,
		Off     = 12,
		Spirit  = 13,
		Stone_L = 14,
		Wood_L  = 15,
		MAX     = 16
	};

	/**
	 * Enum TLScene.ETLAudioCSPropNPCFSRustleType
	 */
	enum class ETLAudioCSPropNPCFSRustleType : uint8_t
	{
		None       = 0,
		Bone       = 1,
		Chain      = 2,
		Crustacea  = 3,
		Fire       = 4,
		HardSkin   = 5,
		Insect     = 6,
		Leather    = 7,
		NoneRustle = 8,
		Plant      = 9,
		Plate      = 10,
		Soul       = 11,
		Stone      = 12,
		Water      = 13,
		Wood       = 14,
		MAX        = 15
	};

	/**
	 * Enum TLScene.ETLAudioCSPropABRType
	 */
	enum class ETLAudioCSPropABRType : uint8_t
	{
		ABR = 0,
		BR  = 1,
		AR  = 2,
		MAX = 3
	};

	/**
	 * Enum TLScene.ETLAudioCSPropAttackType
	 */
	enum class ETLAudioCSPropAttackType : uint8_t
	{
		None        = 0,
		Arrow       = 1,
		Axe         = 2,
		Bite        = 3,
		Bleed_Dot   = 4,
		Blunt       = 5,
		Burn_Dot    = 6,
		Claw        = 7,
		Dagger      = 8,
		Fire        = 9,
		Fist        = 10,
		Force       = 11,
		HeavyArrow  = 12,
		HeavySword  = 13,
		Ice         = 14,
		Liquid      = 15,
		Poison      = 16,
		Poison_Dot  = 17,
		Shield      = 18,
		Spark       = 19,
		Spear       = 20,
		Sword       = 21,
		Sword_Silce = 22,
		MAX         = 23
	};

	/**
	 * Enum TLScene.ETLAudioCSPropArmorTypeRustle
	 */
	enum class ETLAudioCSPropArmorTypeRustle : uint8_t
	{
		None      = 0,
		RT_A_None = 1,
		RT_Bone   = 2,
		RT_Chain  = 3,
		RT_Plate  = 4,
		RT_Shell  = 5,
		RT_Stone  = 6,
		RT_Wood   = 7,
		MAX       = 8
	};

	/**
	 * Enum TLScene.ETLAudioCSPropArmorType
	 */
	enum class ETLAudioCSPropArmorType : uint8_t
	{
		None       = 0,
		AT_Chain   = 1,
		AT_Leather = 2,
		AT_Plate   = 3,
		AT_Bare    = 4,
		AT_Cloth   = 5,
		MAX        = 6
	};

	/**
	 * Enum TLScene.ETLAudioCSPropBodyTypeLV3
	 */
	enum class ETLAudioCSPropBodyTypeLV3 : uint8_t
	{
		None  = 0,
		Bone  = 1,
		Chain = 2,
		Flesh = 3,
		Plate = 4,
		Shell = 5,
		Stone = 6,
		Wood  = 7,
		MAX   = 8
	};

	/**
	 * Enum TLScene.ETLAudioCSPropBodyType
	 */
	enum class ETLAudioCSPropBodyType : uint8_t
	{
		None      = 0,
		BT_A_None = 1,
		BT_Bone   = 2,
		BT_Flesh  = 3,
		BT_Plate  = 4,
		BT_Shell  = 5,
		BT_Spirit = 6,
		BT_Stone  = 7,
		BT_Wood   = 8,
		MAX       = 9
	};

	/**
	 * Enum TLScene.ETLAudioHitFXLevel
	 */
	enum class ETLAudioHitFXLevel : uint8_t
	{
		None        = 0,
		Level1      = 1,
		Level2      = 2,
		Level3      = 3,
		MAX         = 4,
		LowestLevel = 5
	};

	/**
	 * Enum TLScene.ETLAudioCharacterRank
	 */
	enum class ETLAudioCharacterRank : uint8_t
	{
		None   = 0,
		Normal = 1,
		Elite  = 2,
		Boss   = 3,
		MAX    = 4
	};

	/**
	 * Enum TLScene.ETLAudioBossCS
	 */
	enum class ETLAudioBossCS : uint8_t
	{
		None = 0,
		On   = 1,
		Off  = 2,
		MAX  = 3
	};

	/**
	 * Enum TLScene.ETLAudioEliteCS
	 */
	enum class ETLAudioEliteCS : uint8_t
	{
		None = 0,
		On   = 1,
		Off  = 2,
		MAX  = 3
	};

	/**
	 * Enum TLScene.ETLAudioEventFlag
	 */
	enum class ETLAudioEventFlag : uint8_t
	{
		StopWhenOwnerDestroyed = 0,
		MAX                    = 1
	};

	/**
	 * Enum TLScene.ETLAudioGameSyncType
	 */
	enum class ETLAudioGameSyncType : uint8_t
	{
		State                    = 0,
		Switch                   = 1,
		GameParameter            = 2,
		GameParameterOnPlayingID = 3,
		MAX                      = 4
	};

	/**
	 * Enum TLScene.ETLAudioContentType
	 */
	enum class ETLAudioContentType : uint8_t
	{
		None    = 0,
		MyPC    = 1,
		OtherPC = 2,
		NPC     = 3,
		FO      = 4,
		Item    = 5,
		MAX     = 6
	};

	/**
	 * Enum TLScene.ETLAudioMusicOutroType
	 */
	enum class ETLAudioMusicOutroType : uint8_t
	{
		None                    = 0,
		Default                 = 1,
		Success                 = 2,
		Fail                    = 3,
		Skip                    = 4,
		ConstraintMapRegionType = 5,
		MAX                     = 6
	};

	/**
	 * Enum TLScene.ETLAudioObjectOwner
	 */
	enum class ETLAudioObjectOwner : uint8_t
	{
		None   = 0,
		Local  = 1,
		Remote = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.ETLAudioSoundComponentDisableFlags
	 */
	enum class ETLAudioSoundComponentDisableFlags : uint8_t
	{
		None           = 0,
		MapRoom        = 1,
		RainSound      = 2,
		WarfareWalla   = 3,
		ThumbnailScene = 4,
		MAX            = 5
	};

	/**
	 * Enum TLScene.ETLAudioSpecialSounds
	 */
	enum class ETLAudioSpecialSounds : uint8_t
	{
		JumpEnd            = 0,
		Footstep           = 1,
		TimeLapse          = 2,
		HitWeapon          = 3,
		HitArmor           = 4,
		PlaySmartRainSound = 5,
		StopSmartRainSound = 6,
		MAX                = 7
	};

	/**
	 * Enum TLScene.ESnActionHiveScaleCategory
	 */
	enum class ESnActionHiveScaleCategory : uint8_t
	{
		Big    = 0,
		Normal = 1,
		Small  = 2,
		Types  = 3,
		MAX    = 4
	};

	/**
	 * Enum TLScene.ECreatureSimulatedUpdateMode
	 */
	enum class ECreatureSimulatedUpdateMode : uint8_t
	{
		Teleport       = 0,
		Interpolate    = 1,
		FullPrediction = 2,
		MAX            = 3
	};

	/**
	 * Enum TLScene.ETLCharacterShadowType
	 */
	enum class ETLCharacterShadowType : uint8_t
	{
		Low     = 0,
		Medium  = 1,
		High    = 2,
		Highest = 3,
		MAX     = 4
	};

	/**
	 * Enum TLScene.ETLCharacterPriority
	 */
	enum class ETLCharacterPriority : uint8_t
	{
		Highest = 0,
		High    = 1,
		Medium  = 2,
		Low     = 3,
		Lowest  = 4,
		Num     = 5,
		MAX     = 6
	};

	/**
	 * Enum TLScene.ETLDeviceProfileOverrideMode
	 */
	enum class ETLDeviceProfileOverrideMode : uint8_t
	{
		MassBattleMode             = 0,
		CinematicLevelSequenceMode = 1,
		MAX                        = 2
	};

	/**
	 * Enum TLScene.ETLEngineSuperSamplingMethod
	 */
	enum class ETLEngineSuperSamplingMethod : uint8_t
	{
		Unknown = 0,
		None    = 1,
		DLSS    = 2,
		FSR2    = 3,
		MAX     = 4
	};

	/**
	 * Enum TLScene.EMapEnvironmentWaterType
	 */
	enum class EMapEnvironmentWaterType : uint8_t
	{
		Water = 0,
		Lava  = 1,
		None  = 2,
		MAX   = 3
	};

	/**
	 * Enum TLScene.EMapEnvironmentSeqeunceType
	 */
	enum class EMapEnvironmentSeqeunceType : uint8_t
	{
		Base          = 0,
		Variation     = 1,
		TrackOverride = 2,
		Overlay       = 3,
		Count         = 4,
		MAX           = 5
	};

	/**
	 * Enum TLScene.EMapEnvironmentWeather
	 */
	enum class EMapEnvironmentWeather : uint8_t
	{
		Normal = 0,
		Rain   = 1,
		Snow   = 2,
		Indoor = 3,
		Unset  = 4,
		MAX    = 5
	};

	/**
	 * Enum TLScene.EMapEnvironmentVolumeType
	 */
	enum class EMapEnvironmentVolumeType : uint8_t
	{
		Environment = 0,
		Water       = 1,
		Indoor      = 2,
		MAX         = 3
	};

	/**
	 * Enum TLScene.EUnrealEnvVolumeLayer
	 */
	enum class EUnrealEnvVolumeLayer : uint8_t
	{
		Global      = 0,
		Region      = 1,
		Province    = 2,
		District    = 3,
		Layer3      = 4,
		Layer4      = 5,
		Layer5      = 6,
		WorldEvent  = 7,
		WorldEvent1 = 8,
		Cinema      = 9,
		Count       = 10,
		Last        = 11,
		MAX         = 12
	};

	/**
	 * Enum TLScene.EMapRoomVolumeEffect
	 */
	enum class EMapRoomVolumeEffect : uint8_t
	{
		kMapRoomVolumeEffectUnset    = 0,
		kMapRoomVolumeEffectType1    = 1,
		kMapRoomVolumeEffectType2    = 2,
		kMapRoomVolumeEffectType3    = 3,
		kMapRoomVolumeEffectType4    = 4,
		kMapRoomVolumeEffectType5    = 5,
		kMapRoomVolumeEffectType6    = 6,
		kMapRoomVolumeEffectType7    = 7,
		kMapRoomVolumeEffectType8    = 8,
		kMapRoomVolumeEffectType9    = 9,
		kMapRoomVolumeEffectType10   = 10,
		kMapRoomVolumeEffectType11   = 11,
		kMapRoomVolumeEffectType12   = 12,
		kMapRoomVolumeEffectType13   = 13,
		kMapRoomVolumeEffectType14   = 14,
		kMapRoomVolumeEffectType15   = 15,
		kMapRoomVolumeEffectType16   = 16,
		kMapRoomVolumeEffectType17   = 17,
		kMapRoomVolumeEffectType18   = 18,
		kMapRoomVolumeEffectType19   = 19,
		kMapRoomVolumeEffectType20   = 20,
		kMapRoomVolumeEffectType21   = 21,
		kMapRoomVolumeEffectType22   = 22,
		kMapRoomVolumeEffectType23   = 23,
		kMapRoomVolumeEffectType24   = 24,
		kMapRoomVolumeEffectType25   = 25,
		kMapRoomVolumeEffectType26   = 26,
		kMapRoomVolumeEffectType27   = 27,
		kMapRoomVolumeEffectType28   = 28,
		kMapRoomVolumeEffectType29   = 29,
		kMapRoomVolumeEffectType30   = 30,
		kMapRoomVolumeEffectType31   = 31,
		kMapRoomVolumeEffectType32   = 32,
		kMapRoomVolumeEffectType33   = 33,
		kMapRoomVolumeEffectType34   = 34,
		kMapRoomVolumeEffectType35   = 35,
		kMapRoomVolumeEffectType36   = 36,
		kMapRoomVolumeEffectType37   = 37,
		kMapRoomVolumeEffectType38   = 38,
		kMapRoomVolumeEffectType39   = 39,
		kMapRoomVolumeEffectType40   = 40,
		kMapRoomVolumeEffectType41   = 41,
		kMapRoomVolumeEffectType42   = 42,
		kMapRoomVolumeEffectType43   = 43,
		kMapRoomVolumeEffectType44   = 44,
		kMapRoomVolumeEffectType45   = 45,
		kMapRoomVolumeEffectType46   = 46,
		kMapRoomVolumeEffectType47   = 47,
		kMapRoomVolumeEffectType48   = 48,
		kMapRoomVolumeEffectType49   = 49,
		kMapRoomVolumeEffectType50   = 50,
		kMapRoomVolumeEffectType51   = 51,
		kMapRoomVolumeEffectType52   = 52,
		kMapRoomVolumeEffectType53   = 53,
		kMapRoomVolumeEffectType54   = 54,
		kMapRoomVolumeEffectType55   = 55,
		kMapRoomVolumeEffectType56   = 56,
		kMapRoomVolumeEffectType57   = 57,
		kMapRoomVolumeEffectType58   = 58,
		kMapRoomVolumeEffectType59   = 59,
		kMapRoomVolumeEffectType60   = 60,
		kMapRoomVolumeEffectType61   = 61,
		kMapRoomVolumeEffectType62   = 62,
		kMapRoomVolumeEffectType_Max = 63,
		MAX                          = 64
	};

	/**
	 * Enum TLScene.ESnActionNpcFXCategory
	 */
	enum class ESnActionNpcFXCategory : uint8_t
	{
		Pawn  = 0,
		Elite = 1,
		Boss  = 2,
		Types = 3,
		MAX   = 4
	};

	/**
	 * Enum TLScene.ETLParticleDebugHudVerbosity
	 */
	enum class ETLParticleDebugHudVerbosity : uint8_t
	{
		None    = 0,
		LODOnly = 1,
		Basic   = 2,
		Verbose = 3,
		MAX     = 4
	};

	/**
	 * Enum TLScene.ESnPhysicalFXMaterial
	 */
	enum class ESnPhysicalFXMaterial : uint8_t
	{
		kSnPhysicalFXMaterialUnset    = 0,
		kSnPhysicalFXMaterialType1    = 1,
		kSnPhysicalFXMaterialType2    = 2,
		kSnPhysicalFXMaterialType3    = 3,
		kSnPhysicalFXMaterialType4    = 4,
		kSnPhysicalFXMaterialType5    = 5,
		kSnPhysicalFXMaterialType6    = 6,
		kSnPhysicalFXMaterialType7    = 7,
		kSnPhysicalFXMaterialType8    = 8,
		kSnPhysicalFXMaterialType9    = 9,
		kSnPhysicalFXMaterialType10   = 10,
		kSnPhysicalFXMaterialType11   = 11,
		kSnPhysicalFXMaterialType12   = 12,
		kSnPhysicalFXMaterialType13   = 13,
		kSnPhysicalFXMaterialType14   = 14,
		kSnPhysicalFXMaterialType15   = 15,
		kSnPhysicalFXMaterialType16   = 16,
		kSnPhysicalFXMaterialType17   = 17,
		kSnPhysicalFXMaterialType18   = 18,
		kSnPhysicalFXMaterialType19   = 19,
		kSnPhysicalFXMaterialType20   = 20,
		kSnPhysicalFXMaterialType21   = 21,
		kSnPhysicalFXMaterialType22   = 22,
		kSnPhysicalFXMaterialType23   = 23,
		kSnPhysicalFXMaterialType24   = 24,
		kSnPhysicalFXMaterialType25   = 25,
		kSnPhysicalFXMaterialType26   = 26,
		kSnPhysicalFXMaterialType27   = 27,
		kSnPhysicalFXMaterialType28   = 28,
		kSnPhysicalFXMaterialType29   = 29,
		kSnPhysicalFXMaterialType30   = 30,
		kSnPhysicalFXMaterialType31   = 31,
		kSnPhysicalFXMaterialType32   = 32,
		kSnPhysicalFXMaterialType33   = 33,
		kSnPhysicalFXMaterialType34   = 34,
		kSnPhysicalFXMaterialType35   = 35,
		kSnPhysicalFXMaterialType36   = 36,
		kSnPhysicalFXMaterialType37   = 37,
		kSnPhysicalFXMaterialType38   = 38,
		kSnPhysicalFXMaterialType39   = 39,
		kSnPhysicalFXMaterialType40   = 40,
		kSnPhysicalFXMaterialType41   = 41,
		kSnPhysicalFXMaterialType42   = 42,
		kSnPhysicalFXMaterialType43   = 43,
		kSnPhysicalFXMaterialType44   = 44,
		kSnPhysicalFXMaterialType45   = 45,
		kSnPhysicalFXMaterialType46   = 46,
		kSnPhysicalFXMaterialType47   = 47,
		kSnPhysicalFXMaterialType48   = 48,
		kSnPhysicalFXMaterialType49   = 49,
		kSnPhysicalFXMaterialType50   = 50,
		kSnPhysicalFXMaterialType51   = 51,
		kSnPhysicalFXMaterialType52   = 52,
		kSnPhysicalFXMaterialType53   = 53,
		kSnPhysicalFXMaterialType54   = 54,
		kSnPhysicalFXMaterialType55   = 55,
		kSnPhysicalFXMaterialType56   = 56,
		kSnPhysicalFXMaterialType57   = 57,
		kSnPhysicalFXMaterialType58   = 58,
		kSnPhysicalFXMaterialType59   = 59,
		kSnPhysicalFXMaterialType60   = 60,
		kSnPhysicalFXMaterialType61   = 61,
		kSnPhysicalFXMaterialType62   = 62,
		kSnPhysicalFXMaterialType_Max = 63,
		MAX                           = 64
	};

	/**
	 * Enum TLScene.ESnPhysicalSurface
	 */
	enum class ESnPhysicalSurface : uint8_t
	{
		kSnPhysicalSurfaceUnset    = 0,
		kSnPhysicalSurfaceType1    = 1,
		kSnPhysicalSurfaceType2    = 2,
		kSnPhysicalSurfaceType3    = 3,
		kSnPhysicalSurfaceType4    = 4,
		kSnPhysicalSurfaceType5    = 5,
		kSnPhysicalSurfaceType6    = 6,
		kSnPhysicalSurfaceType7    = 7,
		kSnPhysicalSurfaceType8    = 8,
		kSnPhysicalSurfaceType9    = 9,
		kSnPhysicalSurfaceType10   = 10,
		kSnPhysicalSurfaceType11   = 11,
		kSnPhysicalSurfaceType12   = 12,
		kSnPhysicalSurfaceType13   = 13,
		kSnPhysicalSurfaceType14   = 14,
		kSnPhysicalSurfaceType15   = 15,
		kSnPhysicalSurfaceType16   = 16,
		kSnPhysicalSurfaceType17   = 17,
		kSnPhysicalSurfaceType18   = 18,
		kSnPhysicalSurfaceType19   = 19,
		kSnPhysicalSurfaceType20   = 20,
		kSnPhysicalSurfaceType21   = 21,
		kSnPhysicalSurfaceType22   = 22,
		kSnPhysicalSurfaceType23   = 23,
		kSnPhysicalSurfaceType24   = 24,
		kSnPhysicalSurfaceType25   = 25,
		kSnPhysicalSurfaceType26   = 26,
		kSnPhysicalSurfaceType27   = 27,
		kSnPhysicalSurfaceType28   = 28,
		kSnPhysicalSurfaceType29   = 29,
		kSnPhysicalSurfaceType30   = 30,
		kSnPhysicalSurfaceType31   = 31,
		kSnPhysicalSurfaceType32   = 32,
		kSnPhysicalSurfaceType33   = 33,
		kSnPhysicalSurfaceType34   = 34,
		kSnPhysicalSurfaceType35   = 35,
		kSnPhysicalSurfaceType36   = 36,
		kSnPhysicalSurfaceType37   = 37,
		kSnPhysicalSurfaceType38   = 38,
		kSnPhysicalSurfaceType39   = 39,
		kSnPhysicalSurfaceType40   = 40,
		kSnPhysicalSurfaceType41   = 41,
		kSnPhysicalSurfaceType42   = 42,
		kSnPhysicalSurfaceType43   = 43,
		kSnPhysicalSurfaceType44   = 44,
		kSnPhysicalSurfaceType45   = 45,
		kSnPhysicalSurfaceType46   = 46,
		kSnPhysicalSurfaceType47   = 47,
		kSnPhysicalSurfaceType48   = 48,
		kSnPhysicalSurfaceType49   = 49,
		kSnPhysicalSurfaceType50   = 50,
		kSnPhysicalSurfaceType51   = 51,
		kSnPhysicalSurfaceType52   = 52,
		kSnPhysicalSurfaceType53   = 53,
		kSnPhysicalSurfaceType54   = 54,
		kSnPhysicalSurfaceType55   = 55,
		kSnPhysicalSurfaceType56   = 56,
		kSnPhysicalSurfaceType57   = 57,
		kSnPhysicalSurfaceType58   = 58,
		kSnPhysicalSurfaceType59   = 59,
		kSnPhysicalSurfaceType60   = 60,
		kSnPhysicalSurfaceType61   = 61,
		kSnPhysicalSurfaceType62   = 62,
		kSnPhysicalSurfaceType_Max = 63,
		MAX                        = 64
	};

	/**
	 * Enum TLScene.ETLScenarioPreloadingReleaseType
	 */
	enum class ETLScenarioPreloadingReleaseType : uint8_t
	{
		VOLUME_LEAVE   = 0,
		SCENARIO_END   = 1,
		MANUAL_RELEASE = 2,
		MAX            = 3
	};

	/**
	 * Enum TLScene.ESnClothingTeleportMode
	 */
	enum class ESnClothingTeleportMode : uint8_t
	{
		kSnNone             = 0,
		kSnTeleport         = 1,
		kSnTeleportAndReset = 2,
		MAX                 = 3
	};

	/**
	 * Enum TLScene.ESnTeleportMode
	 */
	enum class ESnTeleportMode : uint8_t
	{
		kSnNone            = 0,
		kSnTeleportPhysics = 1,
		kSnResetPhysics    = 2,
		MAX                = 3
	};

	/**
	 * Enum TLScene.ETLCutSceneMaterialQuality
	 */
	enum class ETLCutSceneMaterialQuality : uint8_t
	{
		Default   = 0,
		Epic      = 1,
		Cinematic = 2,
		MAX       = 3
	};

	/**
	 * Enum TLScene.ETLGameCameraBlendingMode
	 */
	enum class ETLGameCameraBlendingMode : uint8_t
	{
		GameToCinematic = 0,
		CinematicToGame = 1,
		NoBlending      = 2,
		MAX             = 3
	};

	/**
	 * Enum TLScene.EMyPcEndPosResetType
	 */
	enum class EMyPcEndPosResetType : uint8_t
	{
		None                  = 0,
		SyncWithScenarioActor = 1,
		Reset                 = 2,
		MAX                   = 3
	};

	/**
	 * Enum TLScene.ETLTransformTransitionOperationType
	 */
	enum class ETLTransformTransitionOperationType : uint8_t
	{
		Translation = 0,
		Rotation    = 1,
		Scale       = 2,
		MAX         = 3
	};

	/**
	 * Enum TLScene.ETLTransformTransitionInterpolationType
	 */
	enum class ETLTransformTransitionInterpolationType : uint8_t
	{
		Linear = 0,
		MAX    = 1
	};

	/**
	 * Enum TLScene.ESnScenarioActorFootIKMode
	 */
	enum class ESnScenarioActorFootIKMode : uint8_t
	{
		kSnEnabled  = 0,
		kSnDisabled = 1,
		MAX         = 2
	};

	/**
	 * Enum TLScene.ESnScenarioActorZPosUpdateMode
	 */
	enum class ESnScenarioActorZPosUpdateMode : uint8_t
	{
		kSnDefault          = 0,
		kSnCreatureMovement = 1,
		kSnCanStepOn        = 2,
		kSnVisibility       = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLScene.ESnScenarioActorAnimationMode
	 */
	enum class ESnScenarioActorAnimationMode : uint8_t
	{
		kSnDefault                     = 0,
		kSnNoAnimationData             = 1,
		kSnCustomAnimBluePrint         = 2,
		kSnScenarioActorAnimationModes = 3,
		MAX                            = 4
	};

	/**
	 * Enum TLScene.ESnScenarioContiActionModelType
	 */
	enum class ESnScenarioContiActionModelType : uint8_t
	{
		kSnContiAction_ModelDefault      = 0,
		kSnContiAction_TransformOutModel = 1,
		kSnContiAction_TransformInModel  = 2,
		kSnContiActionModelTypes         = 3,
		MAX                              = 4
	};

	/**
	 * Enum TLScene.ESnScenarioContiOverrideType
	 */
	enum class ESnScenarioContiOverrideType : uint8_t
	{
		kSnContiOverride_None         = 0,
		kSnContiOverride_TransformOut = 1,
		kSnContiOverride_TransformIn  = 2,
		kSnContiOverrideTypes         = 3,
		MAX                           = 4
	};

	/**
	 * Enum TLScene.ESnScenarioActorType
	 */
	enum class ESnScenarioActorType : uint8_t
	{
		kSnHiveObject            = 0,
		kSnMyPCUnderstudy        = 1,
		kSnOtherPCUnderstudy     = 2,
		kSnMyPCSelf              = 3,
		kSnOtherPC               = 4,
		kSnTLSceneObject         = 5,
		kSnFixedHiveActorFO      = 6,
		kSnTLSceneObjectTagged   = 7,
		kSnTLSceneObjectPreSpawn = 8,
		kSnActorTypes            = 9,
		MAX                      = 10
	};

	/**
	 * Enum TLScene.ETLSkillDebugVerbosity
	 */
	enum class ETLSkillDebugVerbosity : uint8_t
	{
		None    = 0,
		Basic   = 1,
		Verbose = 2,
		MAX     = 3
	};

	/**
	 * Enum TLScene.ETLWorldDebuggerHudFont
	 */
	enum class ETLWorldDebuggerHudFont : uint8_t
	{
		Small  = 0,
		Normal = 1,
		MAX    = 2
	};

	/**
	 * Enum TLScene.ETLWorldDebuggerHudVAlign
	 */
	enum class ETLWorldDebuggerHudVAlign : uint8_t
	{
		Top    = 0,
		Center = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.ETLWorldDebuggerHudHAlign
	 */
	enum class ETLWorldDebuggerHudHAlign : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLScene.EInterpolationBlend_TL
	 */
	enum class EInterpolationBlend_TL : uint8_t
	{
		Linear             = 0,
		Cubic              = 1,
		Sinusoidal         = 2,
		EaseInOutExponent2 = 3,
		EaseInOutExponent3 = 4,
		EaseInOutExponent4 = 5,
		EaseInOutExponent5 = 6,
		MAX                = 7
	};

	/**
	 * Enum TLScene.ETLSimulationSpace
	 */
	enum class ETLSimulationSpace : uint8_t
	{
		ComponentSpace = 0,
		WorldSpace     = 1,
		BaseBoneSpace  = 2,
		MAX            = 3
	};

	/**
	 * Enum TLScene.EPreviewCameraMode
	 */
	enum class EPreviewCameraMode : uint8_t
	{
		Common         = 0,
		Customize      = 1,
		CustomizePhoto = 2,
		MAX            = 3
	};

	/**
	 * Enum TLScene.ECompositePartFitting
	 */
	enum class ECompositePartFitting : uint8_t
	{
		Oversized = 0,
		Loose     = 1,
		Relaxed   = 2,
		Regualr   = 3,
		Skinny    = 4,
		Skin      = 5,
		Count     = 6,
		MAX       = 7
	};

	/**
	 * Enum TLScene.ESceneMakeupOptionType
	 */
	enum class ESceneMakeupOptionType : uint8_t
	{
		HairBaseColor           = 0,
		HairTipColor            = 1,
		SkinColor               = 2,
		FaceTattooMask          = 3,
		FaceTattooColor         = 4,
		BlusherColor            = 5,
		IrisColor_Left          = 6,
		EyeDeco                 = 7,
		LipMask                 = 8,
		LipColor                = 9,
		BeardColor              = 10,
		ColorSpaceImage         = 11,
		CircularColorSpaceImage = 12,
		WarpaintingMask         = 13,
		EyebrowMask             = 14,
		IrisColor_Right         = 15,
		EyelashColor            = 16,
		FaceTattooColor2        = 17,
		Count                   = 18,
		MAX                     = 19
	};

	/**
	 * Enum TLScene.EMakeupPresetShaderConstantType
	 */
	enum class EMakeupPresetShaderConstantType : uint8_t
	{
		Scalar  = 0,
		Color   = 1,
		Texture = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum TLScene.EMakeupPresetValueType
	 */
	enum class EMakeupPresetValueType : uint8_t
	{
		HairTipColorIntensity   = 0,
		HairTipColorRange       = 1,
		BlusherIntensity        = 2,
		BlusherCenterUV_U       = 3,
		BlusherCenterUV_V       = 4,
		WarpaintingUvPos_X      = 5,
		WarpaintingUvPos_Y      = 6,
		WarpaintingUvScale      = 7,
		WarpaintingUvRotation   = 8,
		Warpainting1stIntensity = 9,
		Warpainting2ndIntensity = 10,
		Warpainting3rdIntensity = 11,
		IrisRadius              = 12,
		EyelashIntensity        = 13,
		EyeDecoRoughness        = 14,
		EyeDecoMaskRIntensity   = 15,
		EyeDecoMaskGIntensity   = 16,
		EyeDecoMaskBIntensity   = 17,
		LipColorMaskRIntensity  = 18,
		LipColorMaskGIntensity  = 19,
		LipColorMaskBIntensity  = 20,
		LipRoughness            = 21,
		SkinRoughness           = 22,
		FaceSpotIntensity       = 23,
		IrisBrightness          = 24,
		PupilSize               = 25,
		PupilWidth              = 26,
		EyeBrowIntensity        = 27,
		BeardIntensity          = 28,
		EyeGlitterIntensity     = 29,
		LipsGlitterIntensity    = 30,
		LongBeardIntensity      = 31,
		ScarIntensity           = 32,
		WrinkleIntensity        = 33,
		Count                   = 34,
		MAX                     = 35
	};

	/**
	 * Enum TLScene.EMakeupPresetColorType
	 */
	enum class EMakeupPresetColorType : uint8_t
	{
		HairBaseColor       = 0,
		HairTipColor        = 1,
		BeardColor          = 2,
		SkinColor           = 3,
		BlusherColor        = 4,
		Warpainting1stColor = 5,
		Warpainting2ndColor = 6,
		Warpainting3rdColor = 7,
		IrisColor_Left      = 8,
		EyeBrowColor        = 9,
		EyeDecoMaskRColor   = 10,
		EyeDecoMaskGColor   = 11,
		EyeDecoMaskBColor   = 12,
		LipColorMaskRColor  = 13,
		LipColorMaskGColor  = 14,
		LipColorMaskBColor  = 15,
		IrisColor_Right     = 16,
		EyelashColor        = 17,
		Count               = 18,
		MAX                 = 19
	};

	/**
	 * Enum TLScene.EMakeupPresetObjectPathType
	 */
	enum class EMakeupPresetObjectPathType : uint8_t
	{
		LongBeardType = 0,
		EarType       = 1,
		TattooType3   = 2,
		Count         = 3,
		MAX           = 4
	};

	/**
	 * Enum TLScene.EMakeupPresetTextureType
	 */
	enum class EMakeupPresetTextureType : uint8_t
	{
		FaceSpotMask = 0,
		IrisMask     = 1,
		EyelashMask  = 2,
		HairTipMask  = 3,
		ScarMask     = 4,
		EyeLineMask  = 5,
		Count        = 6,
		MAX          = 7
	};

	/**
	 * Enum TLScene.EMakeupPresetTablePickType
	 */
	enum class EMakeupPresetTablePickType : uint8_t
	{
		HairType           = 0,
		FaceType           = 1,
		BeardType          = 2,
		EyebrowTypeAndMask = 3,
		WarpaintingMask    = 4,
		EyeDeco            = 5,
		LipMask            = 6,
		Count              = 7,
		MAX                = 8
	};

	/**
	 * Enum TLScene.EMaterialSetMIDInitialType
	 */
	enum class EMaterialSetMIDInitialType : uint8_t
	{
		Scalar  = 0,
		Color   = 1,
		Texture = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum TLScene.EIKType
	 */
	enum class EIKType : uint8_t
	{
		kIK_FootPlacement = 0,
		kIK_RightFoot     = 1,
		kIK_LeftFoot      = 2,
		kIK_LookAt        = 3,
		kIK_RightArm      = 4,
		kIK_LeftArm       = 5,
		kIK_Weapon2hGrip  = 6,
		kIK_HandsOnBody   = 7,
		kIKTypes          = 8,
		MAX               = 9
	};

	/**
	 * Enum TLScene.EContiAnimationPlay
	 */
	enum class EContiAnimationPlay : uint8_t
	{
		kSnKeepSequenceDuration = 0,
		kSnKeepSectionDuration  = 1,
		kSnLoop                 = 2,
		MAX                     = 3
	};

	/**
	 * Enum TLScene.ESnStreakAnchorColorMode
	 */
	enum class ESnStreakAnchorColorMode : uint8_t
	{
		Ignore   = 0,
		Override = 1,
		Multiply = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum TLScene.ELightningTaperMethod
	 */
	enum class ELightningTaperMethod : uint8_t
	{
		PELGN_None       = 0,
		PELGN_PerSegment = 1,
		PELGN_Full       = 2,
		PELGN_MAX        = 3
	};

	/**
	 * Enum TLScene.EBoidTrackPathTypeEnum
	 */
	enum class EBoidTrackPathTypeEnum : uint8_t
	{
		Ground   = 0,
		Floating = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TLScene.SystemAnimationSequential
	 * Size -> 0x0024
	 */
	struct FSystemAnimationSequential
	{
	public:
		ESnModelMovementAnimation                                  MovementAnimationType;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5BF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SystemAnimation;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustAnimSpeed;                                        // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkippable;                                              // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearDefaultLayer;                                      // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoving;                                                 // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementMode                                            EndMotionMovementMode;                                   // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4US4[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightVariation;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataMontage
	 * Size -> 0x0030
	 */
	struct FAnimDataMontage
	{
	public:
		ESnAnimationLayer                                          LayerType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ2J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LinkedMontagePath[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.AnimDataMontageSet
	 * Size -> 0x0098
	 */
	struct FAnimDataMontageSet
	{
	public:
		ESnStanceType                                              StanceType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGUZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimDataMontage                                    Montages[0x3];                                           // 0x0008(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SingleSequenceInfo
	 * Size -> 0x0070
	 */
	struct FSingleSequenceInfo
	{
	public:
		bool                                                       bUseBlendSpace;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55UX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SequencePath[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      BaseSpeed;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseDirection;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         BlendSpace;                                              // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlendSpacePath[0x28];                                    // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.StateAnimation
	 * Size -> 0x00B8
	 */
	struct FStateAnimation
	{
	public:
		bool                                                       bUseBlendSpace;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLF8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         BlendSpace;                                              // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlendSpacePath[0x28];                                    // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, struct FSingleSequenceInfo>              SingleSequenceMap;                                       // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UBlendSpace*                                         AdditiveAnim;                                            // 0x0088(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdditiveAnimPath[0x28];                                  // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.StanceAnimationSet
	 * Size -> 0x11F8
	 */
	struct FStanceAnimationSet
	{
	public:
		struct FStateAnimation                                     LocomotionStates[0xE];                                   // 0x0000(0x0A10) Edit, NativeAccessSpecifierPublic
		struct FStateAnimation                                     IdleState;                                               // 0x0A10(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     MoveState;                                               // 0x0AC8(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     LockOnState;                                             // 0x0B80(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     MoveStartState;                                          // 0x0C38(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     MoveEndState;                                            // 0x0CF0(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     MovingTurnState;                                         // 0x0DA8(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     SmoothSyncState;                                         // 0x0E60(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     TurnInPlaceState;                                        // 0x0F18(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     JumpState;                                               // 0x0FD0(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     SwimState;                                               // 0x1088(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FStateAnimation                                     MountState;                                              // 0x1140(0x00B8) BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataBlendSpaceSet
	 * Size -> 0x0050
	 */
	struct FAnimDataBlendSpaceSet
	{
	public:
		unsigned char                                              DefaultLinkedBlendSpacePaths[0x50];                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct TLScene.AnimDataSequenceRemap
	 * Size -> 0x0020
	 */
	struct FAnimDataSequenceRemap
	{
	public:
		class FString                                              From;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              To;                                                      // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataSubstance
	 * Size -> 0x00C0
	 */
	struct FAnimDataSubstance
	{
	public:
		class FString                                              SubstanceType;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimDataSequenceRemap>                      Remap;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAnimDataBlendSpaceSet                              SubstanceBlendSpace;                                     // 0x0020(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<ESnStanceType, struct FStanceAnimationSet>            SubstanceLocomotionSets;                                 // 0x0070(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataSystemAnimation
	 * Size -> 0x001C
	 */
	struct FAnimDataSystemAnimation
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Sequence;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SubSequence;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneShot;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride;                                               // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD9M[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.AnimDataSequenceInfo
	 * Size -> 0x0028
	 */
	struct FAnimDataSequenceInfo
	{
	public:
		class FName                                                Sequence;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              SegmentTriggerTimes;                                     // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      EffectiveDurationOptional;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5QA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.AnimDataSequenceInfoArray
	 * Size -> 0x0010
	 */
	struct FAnimDataSequenceInfoArray
	{
	public:
		TArray<struct FAnimDataSequenceInfo>                       Sequences;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataSequenceTable
	 * Size -> 0x0040
	 */
	struct FAnimDataSequenceTable
	{
	public:
		struct FAnimDataSequenceInfoArray                          Layers[0x3];                                             // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		TArray<struct FAnimDataSequenceInfo>                       DefaultLayerBlendSpaceSequences;                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.BoneScaleControlByAnimSeqenceOption
	 * Size -> 0x0010
	 */
	struct FBoneScaleControlByAnimSeqenceOption
	{
	public:
		ESnModelBoneScaleGroup                                     TargetGroup;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74TT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetWeight;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendIn;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOut;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HandleEquipSocketInfo
	 * Size -> 0x0003
	 */
	struct FHandleEquipSocketInfo
	{
	public:
		ESnActionEquipSocketHandleOptions                          HandleType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        SourceSocket;                                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocket;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealEnvironmentTrackBinding
	 * Size -> 0x0058
	 */
	struct FUnrealEnvironmentTrackBinding
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AMR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EUnrealEnvironmentTrackTargetType                          TargetType;                                              // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M5T[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              MPCPath;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MPCName;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialParameterName;                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectGuid;                                              // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ObjectPropertyPath;                                      // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ObjectPropertyName;                                      // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUnrealEnvironmentTrackValueType                           ValueType;                                               // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NL4[0x3];                                   // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_AQKZ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealEnvironmentTrackOverrideValue
	 * Size -> 0x0080
	 */
	struct FUnrealEnvironmentTrackOverrideValue
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector2D;                                                // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CV1Z[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Vector4;                                                 // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Bool;                                                    // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJGP[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealEnvironmentTrackOverride
	 * Size -> 0x0288 (FullSize[0x02E0] - InheritedSize[0x0058])
	 */
	struct FUnrealEnvironmentTrackOverride : public FUnrealEnvironmentTrackBinding
	{
	public:
		unsigned char                                              UnknownData_EW2I[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUnrealEnvironmentTrackOverrideValue                Values[0x4];                                             // 0x0060(0x0200) NoDestructor, NativeAccessSpecifierPublic
		struct FUnrealEnvironmentTrackOverrideValue                SingleValue;                                             // 0x0260(0x0080) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentExternalWeatherData
	 * Size -> 0x0018
	 */
	struct FMapEnvironmentExternalWeatherData
	{
	public:
		EMapEnvironmentWeather                                     Weather;                                                 // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56CX[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_OFSQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUnrealEnvironmentTrackOverride>             TrackOverrides;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentExternalVolumeData
	 * Size -> 0x0060
	 */
	struct FMapEnvironmentExternalVolumeData
	{
	public:
		struct FGuid                                               VolumeID;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EMapEnvironmentWeather, struct FMapEnvironmentExternalWeatherData> WeatherDataTable;                                        // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionDataTransient
	 * Size -> 0x0048
	 */
	struct FSnActionDataTransient
	{
	public:
		unsigned char                                              UnknownData_U39W[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionAttachObjectData
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FSnActionAttachObjectData : public FSnActionDataTransient
	{
	public:
		uint32_t                                                   ParentSceneType;                                         // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ParentID;                                                // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAttachObjectType                                        AttachType;                                              // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        ParentSocketPoint;                                       // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        ThisSocketPoint;                                         // 0x0052(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFKP[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocalTranslationOffset;                                  // 0x0054(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotationOffset;                                     // 0x0060(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseCurWorldRotation;                                    // 0x006C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMyPc;                                                 // 0x006D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCarrier;                                              // 0x006E(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXMH[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentMapRoomSocketName;                                 // 0x0070(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNDK[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MapHiveActorGroup
	 * Size -> 0x00B0
	 */
	struct FMapHiveActorGroup
	{
	public:
		unsigned char                                              UnknownData_TVFY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UTexture*>                         OverrideTextures;                                        // 0x0010(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FLinearColor>                     OverrideColors;                                          // 0x0060(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapAreaWallInfo
	 * Size -> 0x0070
	 */
	struct FMapAreaWallInfo
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WorldPositionA;                                          // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WorldPositionB;                                          // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartPosition;                                           // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DirectionX;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox2D                                              IntersectionBounds;                                      // 0x0044(0x0014) ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		struct FBox2D                                              DistanceBounds;                                          // 0x0058(0x0014) ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TexCoordX;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLEnvironmentAffectorCloudOverride
	 * Size -> 0x0020
	 */
	struct FTLEnvironmentAffectorCloudOverride
	{
	public:
		bool                                                       bOverrideCloud;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCloudPosition;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71EV[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CloudPosition;                                           // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCloudDirection;                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNZH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CloudDirection;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCloudSpeedScale;                                // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU7K[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CloudSpeedScale;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeCloud;                                            // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA6Y[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentWeatherData_TLSky
	 * Size -> 0x06E8
	 */
	struct FMapEnvironmentWeatherData_TLSky
	{
	public:
		EMapEnvironmentWeather                                     Weather;                                                 // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSES[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_BY21[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      BaseLevelSequence;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearUnderLayerVariation;                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTU0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      VariationLevelSequence;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequence*                                      OverlayLevelSequence;                                    // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBindFogZWithPlayer;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaterialSet;                                         // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D98[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MaterialSetConditionKey;                                 // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaterialSetIntensity;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWeatherParticle;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdditiveWeatherParticle;                                // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8SU[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     WeatherParticleSystem;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeatherParticleRate;                                     // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWeatherPostProcess;                                  // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreIndoor;                                           // 0x004D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontGrayOutDynamic;                                     // 0x004E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RXW[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedBlendable>                          PostProcessMaterials;                                    // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bKillFixedLightCube;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8IB[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureCube*                                        FixedLightCube;                                          // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FixedLightCubeSourceColor;                               // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedLightCubeSourceIntensity;                           // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedLightCubeAngle;                                     // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDynamicShadowCascades;                          // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWCB[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DynamicShadowCascades;                                   // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMaxVolumetricCloudQuality;                      // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0YP[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxVolumetricCloudQuality;                               // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CS7B[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUnrealEnvironmentTrackOverride>             TrackOverrides;                                          // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class ULevelSequence*                                      TrackOverrideLevelSequence;                              // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIP2[0x640];                                 // 0x00A8(0x0640) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentWeatherData_Truesky
	 * Size -> 0x0000 (FullSize[0x06E8] - InheritedSize[0x06E8])
	 */
	struct FMapEnvironmentWeatherData_Truesky : public FMapEnvironmentWeatherData_TLSky
	{	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentWeatherDataContext
	 * Size -> 0x0DD0
	 */
	struct FMapEnvironmentWeatherDataContext
	{
	public:
		struct FMapEnvironmentWeatherData_TLSky                    TLSky;                                                   // 0x0000(0x06E8) NativeAccessSpecifierPublic
		struct FMapEnvironmentWeatherData_Truesky                  Truesky;                                                 // 0x06E8(0x06E8) Deprecated, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapEnvironmentWeatherData
	 * Size -> 0x0000 (FullSize[0x06E8] - InheritedSize[0x06E8])
	 */
	struct FMapEnvironmentWeatherData : public FMapEnvironmentWeatherData_Truesky
	{	};

	/**
	 * ScriptStruct TLScene.MapMiniComponentOverrideData
	 * Size -> 0x0058
	 */
	struct FMapMiniComponentOverrideData
	{
	public:
		unsigned char                                              PropertyNames[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		class USceneComponent*                                     ContainerComponent;                                      // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapManagedTagActivation
	 * Size -> 0x0080
	 */
	struct FMapManagedTagActivation
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGVS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivationTags[0x50];                                    // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      FadeInDuration;                                          // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDurationRandomRange;                               // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDelay;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDelayRandomRange;                                  // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetFadeOut;                                             // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RYE[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeOutDuration;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDurationRandomRange;                              // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDelay;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDelayRandomRange;                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M633[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MapManagedTagBinding
	 * Size -> 0x0008
	 */
	struct FMapManagedTagBinding
	{
	public:
		class FName                                                BindingTag;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.BakedMaterialSetCondition
	 * Size -> 0x0030
	 */
	struct FBakedMaterialSetCondition
	{
	public:
		class FName                                                ConditionKey;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Material[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.MapBakedConditionList
	 * Size -> 0x0010
	 */
	struct FMapBakedConditionList
	{
	public:
		TArray<struct FBakedMaterialSetCondition>                  ConditionList;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapTagActivationSetting
	 * Size -> 0x0018
	 */
	struct FMapTagActivationSetting
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4W3E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ActivationTags;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapRoomSoundCue
	 * Size -> 0x0018
	 */
	struct FMapRoomSoundCue
	{
	public:
		struct FSoftObjectPath                                     SoundEvent;                                              // 0x0000(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapRoomWindAnimationSectionData
	 * Size -> 0x0020
	 */
	struct FMapRoomWindAnimationSectionData
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestartAnimation;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSectionDuration;                                     // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU9C[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDurationTime;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDurationTime;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomWeight;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ShapeColorInfo
	 * Size -> 0x0028
	 */
	struct FShapeColorInfo
	{
	public:
		unsigned char                                              UnknownData_X6SJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MaterialSetCondition
	 * Size -> 0x0050
	 */
	struct FMaterialSetCondition
	{
	public:
		class FName                                                ConditionKey;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Material[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bAutoPermutation;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGR6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialPtrCache;                                        // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FE9[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MaterialSetPermutationCache
	 * Size -> 0x0010
	 */
	struct FMaterialSetPermutationCache
	{
	public:
		class FName                                                Condition;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           Material;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MaterialSetMIDInitialParams
	 * Size -> 0x0028
	 */
	struct FMaterialSetMIDInitialParams
	{
	public:
		EMaterialSetMIDInitialType                                 TypeEnum;                                                // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIP3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParamName;                                               // 0x0004(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScalarValue;                                             // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorValue;                                              // 0x0010(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            TextureValue;                                            // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.PhysicsControllerOption
	 * Size -> 0x0000
	 */
	struct FPhysicsControllerOption
	{	};

	/**
	 * ScriptStruct TLScene.BasePhysicsControllerOption
	 * Size -> 0x000C
	 */
	struct FBasePhysicsControllerOption : public FPhysicsControllerOption
	{
	public:
		float                                                      ForceScale;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAssist;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.CharacterPhysicsControllerOption
	 * Size -> 0x0008 (FullSize[0x0014] - InheritedSize[0x000C])
	 */
	struct FCharacterPhysicsControllerOption : public FBasePhysicsControllerOption
	{
	public:
		class FName                                                TargetBone;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.CharacterPhysicsMotionLimitSetting
	 * Size -> 0x000C
	 */
	struct FCharacterPhysicsMotionLimitSetting
	{
	public:
		class FName                                                TargetBone;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVelocityMagnitude;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.CharacterPhysicsMotionBlendingSetting
	 * Size -> 0x001C
	 */
	struct FCharacterPhysicsMotionBlendingSetting
	{
	public:
		class FName                                                SystemAnimationDown;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SystemAnimationUp;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendingStartDelay;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendingTargetWeight;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutDuration;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLWorldDebuggerHudTextOptions
	 * Size -> 0x0010
	 */
	struct FTLWorldDebuggerHudTextOptions
	{
	public:
		ETLWorldDebuggerHudFont                                    Font;                                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAN1[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ETLWorldDebuggerHudHAlign                                  HorizontalAlignment;                                     // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLWorldDebuggerHudVAlign                                  VerticalAlignment;                                       // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPGJ[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenOffset;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.EffectDirectionOverride
	 * Size -> 0x0038
	 */
	struct FEffectDirectionOverride
	{
	public:
		float                                                      VirtualSocketHeightScale;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideEffectDirection;                                // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitEffectDirection                                        HitEffectDirection;                                      // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VMN[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         EffectRotationRoll;                                      // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         EffectRotationPitch;                                     // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         EffectRotationYaw;                                       // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLLoadedActionTree
	 * Size -> 0x0110
	 */
	struct FTLLoadedActionTree
	{
	public:
		class UTLATRootNode*                                       RootNode;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YP5[0x108];                                 // 0x0008(0x0108) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLActionTreeLoadInfo
	 * Size -> 0x01C8
	 */
	struct FTLActionTreeLoadInfo
	{
	public:
		class UTLActionTree*                                       ActionTree;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLLoadedActionTree                                 LoadedActionTree;                                        // 0x0008(0x0110) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLXN[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FPrimaryAssetId, struct FTLLoadedActionTree>   LoadedActionTreeOverriden;                               // 0x0128(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K27N[0x50];                                  // 0x0178(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAnimPhysConstraintSetup
	 * Size -> 0x0068
	 */
	struct FTLAnimPhysConstraintSetup
	{
	public:
		ETLAnimPhysLinearConstraintType                            LinearXLimitType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysLinearConstraintType                            LinearYLimitType;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysLinearConstraintType                            LinearZLimitType;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQRQ[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearAxesMin;                                           // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearAxesMax;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysAngularConstraintType                           AngularConstraintType;                                   // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysTwistAxis                                       TwistAxis;                                               // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OODT[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeAngle;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMin;                                        // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMax;                                        // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ItemOverlappedAngularLimitsMin;                          // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ItemOverlappedAngularLimitsMax;                          // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysTwistAxis                                       AngularTargetAxis;                                       // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9F2[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularTarget;                                           // 0x0058(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearFullyLocked;                                      // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFRY[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneBoneReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSceneBoneReference : public FBoneReference
	{	};

	/**
	 * ScriptStruct TLScene.TLAnimDynamicsSpring
	 * Size -> 0x0018
	 */
	struct FTLAnimDynamicsSpring
	{
	public:
		struct FSceneBoneReference                                 TargetBoneName;                                          // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTargetIsConstraint;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFOQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAnimPhysPlanarLimit
	 * Size -> 0x0030
	 */
	struct FTLAnimPhysPlanarLimit
	{
	public:
		struct FTransform                                          PlaneTransform;                                          // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAnimPhysPlanarLimitGroup
	 * Size -> 0x0020
	 */
	struct FTLAnimPhysPlanarLimitGroup
	{
	public:
		struct FSceneBoneReference                                 DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTLAnimPhysPlanarLimit>                      Limits;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAnimPhysSphericalLimit
	 * Size -> 0x0014
	 */
	struct FTLAnimPhysSphericalLimit
	{
	public:
		struct FVector                                             SphereLocalOffset;                                       // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitRadius;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLSphericalLimitType                                      LimitType;                                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDOB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAnimPhysSphericalLimitGroup
	 * Size -> 0x0020
	 */
	struct FTLAnimPhysSphericalLimitGroup
	{
	public:
		struct FSceneBoneReference                                 DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTLAnimPhysSphericalLimit>                   Limits;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAnimDynamicsConstraintNode
	 * Size -> 0x0100
	 */
	struct FTLAnimDynamicsConstraintNode
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DisableByItemMount;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAngularLimitsOnlyByItemMount;                        // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysNodePriority                                    Priority;                                                // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VKO[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoxExtents;                                              // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGravity;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLinearDamping;                                  // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABG2[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDampingOverride;                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularDamping;                                 // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCTW[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularDampingOverride;                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularBias;                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92MY[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBiasOverride;                                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearSpring;                                           // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAJO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearSpringConstant;                                    // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAngularSpring;                                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIPA[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularSpringConstant;                                   // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampFullyLockedLinearMovement;                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NCD[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampFullyLockedLinearDistanceMax;                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLAnimPhysConstraintSetup                          ConstraintSetup;                                         // 0x0050(0x0068) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTLAnimDynamicsSpring>                       Springs;                                                 // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ETLAnimPhysCollisionType                                   CollisionType;                                           // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5KG[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereCollisionRadius;                                   // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiableCollision;                                        // 0x00D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit;                                         // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9NF[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLAnimPhysPlanarLimitGroup>                 PlanarLimits;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSphericalLimits;                                     // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX97[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLAnimPhysSphericalLimitGroup>              SphericalLimits;                                         // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAnimDynamicsChain
	 * Size -> 0x0068
	 */
	struct FTLAnimDynamicsChain
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalJointOffset;                                        // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind;                                             // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWZJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindScale;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ANV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLAnimDynamicsConstraintNode>               Constraints;                                             // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LinearDamping;                                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDamping;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAnimPhysCollisionType                                   CollisionType;                                           // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit;                                         // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKR7[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLAnimPhysPlanarLimitGroup>                 PlanarLimits;                                            // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSphericalLimits;                                     // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8VY[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLAnimPhysSphericalLimitGroup>              SphericalLimits;                                         // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.BlendSpaceAnimSetting
	 * Size -> 0x003C
	 */
	struct FBlendSpaceAnimSetting
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              BlendSpaceAxisX;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              BlendSpaceAxisY;                                         // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH25[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPitch;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PicthScaleFactor;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        StartPosSocket;                                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnAdditiveAnimationTarget                                 AdditiveAnimationTarget;                                 // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocket;                                            // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DM4[0x25];                                  // 0x0017(0x0025) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.AnimationParam
	 * Size -> 0x00A4
	 */
	struct FAnimationParam
	{
	public:
		ESnAnimationLayer                                          AnimLayer;                                               // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2LM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAnimationRuleType                                         SequenceSelectRule;                                      // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AQ4[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                SystemAnimation;                                         // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                substance;                                               // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnAnimationTrack                                          Track;                                                   // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceFullBody;                                          // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPlaying;                                            // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FU2G[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSequence;                                            // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendInOption;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDJO[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendOutTime;                                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendOutOption;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB47[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopTimeSec;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnDuration;                                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMontageAutoBlendout;                              // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B96M[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeOffset;                                              // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeDelay;                                               // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0044(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnLayeredBlendBone                                        LayeredBlendStartBone;                                   // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ARM[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LayeredBlendDepth;                                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMovingSlot;                                          // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAdditiveAnim;                                        // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBZ5[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendSpaceAnimSetting                              AdditiveAnimInfo;                                        // 0x0054(0x003C) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		bool                                                       bForceOwnFacial;                                         // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUnarmed;                                           // 0x0091(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreClear;                                            // 0x0092(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendSpaceAnimation;                                    // 0x0093(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BlendSpaceAnimationParam;                                // 0x0094(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              BlendSpaceAxisX;                                         // 0x00A0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnBlendSpaceDefaultLayerAxis                              BlendSpaceAxisY;                                         // 0x00A1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0913[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.AimingAnimationSetting
	 * Size -> 0x0024
	 */
	struct FAimingAnimationSetting
	{
	public:
		bool                                                       bUseLowerBodyMotion;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        StartPosSocket;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnAimingAnimationTarget                                   TargetPosType;                                           // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KIB[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetPosHeightScale;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocket;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUBO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PeakHeight;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PeakVector;                                              // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionSkipOptionData
	 * Size -> 0x0018
	 */
	struct FSnActionSkipOptionData
	{
	public:
		ESnPlayLevel                                               PlayLevel;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLX2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   DetailModeBitmask;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ObjectTypeFilter;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NpcCategoryFilter;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   HiveScaleCategoryFilter;                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionTargetType                                        TargetType;                                              // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WMM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionDistanceFadeOptionBaseData
	 * Size -> 0x0018
	 */
	struct FSnActionDistanceFadeOptionBaseData
	{
	public:
		struct FVector                                             LocalOffset;                                             // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotation;                                           // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionDistanceFadeOptionSphereData
	 * Size -> 0x0008
	 */
	struct FSnActionDistanceFadeOptionSphereData
	{
	public:
		float                                                      FarDistance;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearDistance;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionDistanceFadeOptionBoxData
	 * Size -> 0x000C
	 */
	struct FSnActionDistanceFadeOptionBoxData
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionDistanceFadeOptionData
	 * Size -> 0x0030
	 */
	struct FSnActionDistanceFadeOptionData
	{
	public:
		bool                                                       bEnableDistanceFading;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableToDrawDebugShape;                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnZoneRangeType                                           DistanceType;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OXS[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionDistanceFadeOptionBaseData                 base;                                                    // 0x0004(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionDistanceFadeOptionSphereData               Sphere;                                                  // 0x001C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionDistanceFadeOptionBoxData                  Box;                                                     // 0x0024(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.CompoundAnimationParam
	 * Size -> 0x0014
	 */
	struct FCompoundAnimationParam
	{
	public:
		class FName                                                Sequence;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOR2[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionTimeOptionData
	 * Size -> 0x004C
	 */
	struct FSnActionTimeOptionData
	{
	public:
		bool                                                       bUseRandomDelayTime;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncMoveDelayTime;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PVJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeSec;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomDelayTimeSec;                                      // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalBaseDelayTime;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnDuration;                                       // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomDuration;                                      // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncMoveDuration;                                       // 0x001F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomDurationSec;                                       // 0x0024(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceOwnTimeScale;                                      // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomTimeScale;                                     // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VICY[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeScale;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomTimeScale;                                         // 0x003C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ShowConditionOptionData
	 * Size -> 0x000C
	 */
	struct FShowConditionOptionData
	{
	public:
		ESnFXVisibleCondition                                      ShowCondition;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0N4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInTime;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTime;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayDecalCurvedVector
	 * Size -> 0x0040
	 */
	struct FSnActionPlayDecalCurvedVector
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJ8S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.TLCurvedScalar
	 * Size -> 0x0100
	 */
	struct FTLCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Range;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseFixedWeight;                                         // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUBF[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedWeight;                                             // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI5L[0x60];                                  // 0x00A0(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLCurvedColor
	 * Size -> 0x0288
	 */
	struct FTLCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeCurveLinearColor                            Curve;                                                   // 0x0018(0x0208) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseFixedWeight;                                         // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGP9[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedWeight;                                             // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2O2[0x60];                                  // 0x0228(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayLightCurvedScalar
	 * Size -> 0x0040
	 */
	struct FSnActionPlayLightCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurve;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_560O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Range;                                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VONK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayLightCurvedColor
	 * Size -> 0x0048
	 */
	struct FSnActionPlayLightCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurve;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PE70[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ0X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Curve[0x28];                                             // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayLightningPointConfig
	 * Size -> 0x0040
	 */
	struct FSnActionPlayLightningPointConfig
	{
	public:
		ESnModelSocketPoint                                        Point;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLocalOffset;                                         // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomLocalOffset;                                   // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDP0[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocalOffset;                                             // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalOffsetX;                                      // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalOffsetY;                                      // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalOffsetZ;                                      // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayMaterialParamCurvedScalar
	 * Size -> 0x0038
	 */
	struct FSnActionPlayMaterialParamCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Range;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayMaterialParamCurvedColor
	 * Size -> 0x0040
	 */
	struct FSnActionPlayMaterialParamCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayMaterialParamTexture
	 * Size -> 0x0030
	 */
	struct FSnActionPlayMaterialParamTexture
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySkeletalMeshCurvedScalar
	 * Size -> 0x0038
	 */
	struct FSnActionPlaySkeletalMeshCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Range;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySkeletalMeshCurvedColor
	 * Size -> 0x0040
	 */
	struct FSnActionPlaySkeletalMeshCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySkeletalMeshEffectConfigData
	 * Size -> 0x00A0
	 */
	struct FSnActionPlaySkeletalMeshEffectConfigData
	{
	public:
		unsigned char                                              TrailSkeletalMesh[0x28];                                 // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bRenderSkeletalMesh;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTQD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSnActionPlaySkeletalMeshCurvedScalar>       CurvedScalars;                                           // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlaySkeletalMeshCurvedColor>        CurvedColors;                                            // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             MeshScale;                                               // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectAttachBone;                                        // 0x005C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1JC[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TrailSkeletalMeshAnim[0x28];                             // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                TrailSkeletalMeshAnimSection;                            // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimSpeed;                                               // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopingAnim;                                            // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEW7[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayEffectLocalTransformData
	 * Size -> 0x00B8
	 */
	struct FSnActionPlayEffectLocalTransformData
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomScale;                                         // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCSB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         RandomScaleX;                                            // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomScaleY;                                            // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomScaleZ;                                            // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomLocalOffset;                                   // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22OC[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         RandomLocalOffsetX;                                      // 0x0048(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalOffsetY;                                      // 0x0058(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalOffsetZ;                                      // 0x0068(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotate;                                             // 0x0078(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseRandomLocalRotate;                                   // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACPA[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         RandomLocalRotateRoll;                                   // 0x0088(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalRotatePitch;                                  // 0x0098(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomLocalRotateYaw;                                    // 0x00A8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayPostProcessingCurvedScalar
	 * Size -> 0x0038
	 */
	struct FSnActionPlayPostProcessingCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Range;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayPostProcessingCurvedColor
	 * Size -> 0x0040
	 */
	struct FSnActionPlayPostProcessingCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.ProjectileOffsetData
	 * Size -> 0x0044
	 */
	struct FProjectileOffsetData
	{
	public:
		ESnNodeParentType                                          OffsetType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B50E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomOffset;                                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Z8E[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         RandomOffsetX;                                           // 0x0014(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomOffsetY;                                           // 0x0024(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomOffsetZ;                                           // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ProjectileMortarData
	 * Size -> 0x0024
	 */
	struct FProjectileMortarData
	{
	public:
		float                                                      OffsetTimeSec;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPseudoFreeFall;                                         // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CRV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PeakHeight;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeakProgressDamping;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PeakVector;                                              // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ProjectileArrowData
	 * Size -> 0x0040
	 */
	struct FProjectileArrowData
	{
	public:
		struct FRotator                                            RotationOffset;                                          // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseRandomOffset;                                        // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRFE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         RandomOffsetRoll;                                        // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomOffsetPitch;                                       // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RandomOffsetYaw;                                         // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayProjectileHeadData
	 * Size -> 0x0058
	 */
	struct FSnActionPlayProjectileHeadData
	{
	public:
		ESnActionProjectileHeadType                                HeadAssetType;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BG3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     HeadAsset;                                               // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlternativeHeadAsset;                                    // 0x0020(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      HeadAxis;                                                // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JBZ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadScale;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeadStopRotationWhenAttached;                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMGK[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAttachTime;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDestroyType                                       HeadDestroyType;                                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDestroyType                                       AttachedHeadDestroyType;                                 // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipUpdateOnFlightAttached;                             // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZLT[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadFadeOutDistanceRate;                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadFadeOutTime;                                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R91R[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayProjectileTrailRopeData
	 * Size -> 0x0068
	 */
	struct FSnActionPlayProjectileTrailRopeData
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bDetachFromTargetWhenArrived;                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCableLengthIsTargetDistance;                            // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5GL[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetDistanceScaleForCableLength;                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableLength;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneSegmentPerLength;                                    // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XKN[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSegments;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OneSegmentPerLength;                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubstepTime;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SolverIterations;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStiffness;                                        // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZBU[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CableForce;                                              // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableGravityScale;                                       // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableWidth;                                              // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSides;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterial;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayTrailShapeDetailData
	 * Size -> 0x0020
	 */
	struct FSnActionPlayTrailShapeDetailData
	{
	public:
		TArray<class FName>                                        AnchorMapping;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ETrailWidthMode                                            TrailWidthScaleMode;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TXZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TrailWidthScaleCurve;                                    // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeducePreviousSamplePostion;                            // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VGD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayProjectileTrailData
	 * Size -> 0x0228
	 */
	struct FSnActionPlayProjectileTrailData
	{
	public:
		struct FSoftObjectPath                                     TrailParticle;                                           // 0x0000(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlternativeTrailParticle;                                // 0x0018(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionProjectileTrailType                               TrailType;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4B1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlayProjectileTrailRopeData                RopeData;                                                // 0x0038(0x0068) Edit, NativeAccessSpecifierPublic
		float                                                      TrailScale;                                              // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopUpdatePositionWhenAttached;                         // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectDestroyType                                       TrailDestroyType;                                        // 0x00A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQUJ[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrailFadeOutTime;                                        // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSnActionPlayEffectLocalTransformData               LocalTransform;                                          // 0x00AC(0x00B8) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseStreak;                                              // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProvideSkeletalMesh;                                    // 0x0165(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IA04[0x2];                                   // 0x0166(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSnActionPlaySkeletalMeshEffectConfigData           ProvidedSkeletalMeshConfig;                              // 0x0168(0x00A0) Edit, NativeAccessSpecifierPublic
		struct FSnActionPlayTrailShapeDetailData                   TrailShapeConfig;                                        // 0x0208(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.RunTimeFloatCurvePropertyHelper
	 * Size -> 0x0088
	 */
	struct FRunTimeFloatCurvePropertyHelper
	{
	public:
		struct FRuntimeFloatCurve                                  FloatCurve;                                              // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySnapshotOverrideMaterial
	 * Size -> 0x0004
	 */
	struct FSnActionPlaySnapshotOverrideMaterial
	{
	public:
		bool                                                       bOverrideOpacity;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideColor;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideNormal;                                         // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideARM;                                            // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySnapshotCurvedScalar
	 * Size -> 0x0038
	 */
	struct FSnActionPlaySnapshotCurvedScalar
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Range;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySnapshotCurvedColor
	 * Size -> 0x0040
	 */
	struct FSnActionPlaySnapshotCurvedColor
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Curve[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySoundCue
	 * Size -> 0x0048
	 */
	struct FSnActionPlaySoundCue
	{
	public:
		struct FSoftObjectPath                                     SoundEvent;                                              // 0x0000(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     OnEndSoundEvent;                                         // 0x0018(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeDelay;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutSec;                                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHitSound;                                              // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_135J[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VolumeScale;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKLT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAudioSpecialSoundConfig
	 * Size -> 0x0028
	 */
	struct FTLAudioSpecialSoundConfig
	{
	public:
		class FString                                              SoundTypeName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoundEventRef;                                           // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLAudioHitSoundSetting
	 * Size -> 0x000C
	 */
	struct FTLAudioHitSoundSetting
	{
	public:
		ETLAudioContentType                                        AttackerType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioContentType                                        DefenderType;                                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFI1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseVolumeMultiplier;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumOfSoundInstances;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.BlendSpaceAnimationInfo
	 * Size -> 0x0020
	 */
	struct FBlendSpaceAnimationInfo
	{
	public:
		class UBlendSpace*                                         BlendSpaceAsset;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Direction;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Slope;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReset;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8Z2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeBaseMaterialOverrideInfo
	 * Size -> 0x0030
	 */
	struct FHiveEntityCharacterModelTypeBaseMaterialOverrideInfo
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Material[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeBaseMaterialOverrideConfig
	 * Size -> 0x0010
	 */
	struct FHiveEntityCharacterModelTypeBaseMaterialOverrideConfig
	{
	public:
		TArray<struct FHiveEntityCharacterModelTypeBaseMaterialOverrideInfo> OverrideInfos;                                           // 0x0000(0x0010) Edit, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeBoneScaleWeights
	 * Size -> 0x032C
	 */
	struct FHiveEntityCharacterModelTypeBoneScaleWeights
	{
	public:
		float                                                      Weights[0x65];                                           // 0x0000(0x0194) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    bUseRandomGenerateWeight[0x65];                          // 0x0194(0x0194) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomGenerateWeightEnabled;                            // 0x0328(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68AI[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.HiveEntityModelTypeHitReactionPseudoFlinchingConfig
	 * Size -> 0x0110
	 */
	struct FHiveEntityModelTypeHitReactionPseudoFlinchingConfig
	{
	public:
		unsigned char                                              Preset[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       TimeScaleOverrideEnabled;                                // 0x0028(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3URQ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeScaleOverride;                                       // 0x002C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FBPowerOverrideEnabled;                                  // 0x0030(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLLN[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FBPowerOverride;                                         // 0x0034(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LRPowerOverrideEnabled;                                  // 0x0038(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY7Z[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LRPowerOverride;                                         // 0x003C(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerBonePowerScale[0x33];                                 // 0x0040(0x00CC) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC9A[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.HiveEntityModelTypeHitReactionConfig
	 * Size -> 0x0248
	 */
	struct FHiveEntityModelTypeHitReactionConfig
	{
	public:
		class FName                                                HitAnimationType;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttackerFilter;                                      // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EY0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AttackerNpxFXCategoryFilter;                             // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackerPcIgnore;                                       // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_718K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AttackerHiveScaleCategoryFilter;                         // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PseudoFlinchingEnableDirToGroupMatching;                 // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SM01[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PseudoFlinchingDirToGroupMatchingMaxGroupCount;          // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PseudoFlinchingPlayParamPowerMax;                        // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PseudoFlinchingPlayParamPowerMin;                        // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHiveEntityModelTypeHitReactionPseudoFlinchingConfig NormalPseudoFlinching;                                   // 0x0028(0x0110) Transient, NativeAccessSpecifierPublic
		struct FHiveEntityModelTypeHitReactionPseudoFlinchingConfig HighPseudoFlinching;                                     // 0x0138(0x0110) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeItemGripOffsetPerSocketConfig
	 * Size -> 0x0048
	 */
	struct FHiveEntityCharacterModelTypeItemGripOffsetPerSocketConfig
	{
	public:
		struct FVector                                             Locations[0x3];                                          // 0x0000(0x0024) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotations[0x3];                                          // 0x0024(0x0024) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeItemGripOffsetConfig
	 * Size -> 0x0A20
	 */
	struct FHiveEntityCharacterModelTypeItemGripOffsetConfig
	{
	public:
		struct FHiveEntityCharacterModelTypeItemGripOffsetPerSocketConfig Configs[0x24];                                           // 0x0000(0x0A20) Transient, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCharacterSoundTrigger
	 * Size -> 0x0020
	 */
	struct FTLCharacterSoundTrigger
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EX6Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLSoundEvent*                                       SoundEvent;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SoundKey;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotLoop;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY46[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VolumeScale;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCharacterSoundProps
	 * Size -> 0x0008
	 */
	struct FTLCharacterSoundProps
	{
	public:
		ETLAudioCSPropBodyType                                     BodyType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropBodyTypeLV3                                  BodyTypeLV3;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropArmorType                                    ArmorType;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropArmorTypeRustle                              ArmorTypeRustle;                                         // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropAttackType                                   AttackType;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropABRType                                      ABRType;                                                 // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropNPCFSRustleType                              NPCFSRustleType;                                         // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLAudioCSPropFootType                                     FootType;                                                // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCharacterSoundKey
	 * Size -> 0x0010
	 */
	struct FTLCharacterSoundKey
	{
	public:
		class UTLSoundEvent*                                       SoundEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VolumeScale;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EAW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.RootMotionAnimData
	 * Size -> 0x0010
	 */
	struct FRootMotionAnimData
	{
	public:
		ESnModelMovementAnimation                                  SystemAnimation;                                         // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_556G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimOffset;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransitionOn;                                           // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0D1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.RunTimeAnimationSeqNames
	 * Size -> 0x0028
	 */
	struct FRunTimeAnimationSeqNames
	{
	public:
		class FName                                                MoveEnd;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TurnInPlace;                                             // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SmoothSync;                                              // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveStart;                                               // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveStart2;                                              // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLRandomPlayerSequenceEntry
	 * Size -> 0x0050
	 */
	struct FTLRandomPlayerSequenceEntry
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLoopCount;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLoopCount;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82I6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendIn;                                                 // 0x0020(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovementMountInfo
	 * Size -> 0x0010
	 */
	struct FMovementMountInfo
	{
	public:
		ESnMountType                                               MountType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMountOn;                                                // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransitionAnimSkip;                                     // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        StirrupSocketPoint;                                      // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetAnim;                                              // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLFixedLightCubeSource
	 * Size -> 0x0020
	 */
	struct FTLFixedLightCubeSource
	{
	public:
		class UTextureCube*                                        Texture;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZL8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAudioMusicOutroData
	 * Size -> 0x0014
	 */
	struct FTLAudioMusicOutroData
	{
	public:
		float                                                      LifeTime;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateGroup;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                State;                                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.PaletteMusicTrigger
	 * Size -> 0x0010
	 */
	struct FPaletteMusicTrigger
	{
	public:
		unsigned char                                              UnknownData_5ZAO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnable;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DRR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.PaletteMusicRandomTrigger
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FPaletteMusicRandomTrigger : public FPaletteMusicTrigger
	{
	public:
		float                                                      MinValue;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XD0V[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.PaletteMusicStateCondition
	 * Size -> 0x0018
	 */
	struct FPaletteMusicStateCondition
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJN1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StateGroup;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                State;                                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_669X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeNpcCompositePartCustomizingDetail
	 * Size -> 0x0080
	 */
	struct FHiveEntityCharacterModelTypeNpcCompositePartCustomizingDetail
	{
	public:
		bool                                                       bEnableColor;                                            // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RHH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorBlendWeight;                                        // 0x0004(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorDesaturation;                                       // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorA;                                                  // 0x0018(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorB;                                                  // 0x0028(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorC;                                                  // 0x0038(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorD;                                                  // 0x0048(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PatternTexture[0x28];                                    // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeNpcCompositePartCustomizingConfig
	 * Size -> 0x0280
	 */
	struct FHiveEntityCharacterModelTypeNpcCompositePartCustomizingConfig
	{
	public:
		struct FHiveEntityCharacterModelTypeNpcCompositePartCustomizingDetail Detail[0x5];                                             // 0x0000(0x0280) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeNpcOverrideSocketInfo
	 * Size -> 0x002C
	 */
	struct FHiveEntityCharacterModelTypeNpcOverrideSocketInfo
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeLocation;                                        // 0x0008(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x0014(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RelativeScale;                                           // 0x0020(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveEntityCharacterModelTypeNpcOverrideSocketConfig
	 * Size -> 0x0010
	 */
	struct FHiveEntityCharacterModelTypeNpcOverrideSocketConfig
	{
	public:
		TArray<struct FHiveEntityCharacterModelTypeNpcOverrideSocketInfo> OverrideInfos;                                           // 0x0000(0x0010) Edit, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SpawnableObjectTransform
	 * Size -> 0x0020
	 */
	struct FSpawnableObjectTransform
	{
	public:
		class FName                                                ExclusiveTag;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0008(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SpawnableMyPcObjectTransform
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FSpawnableMyPcObjectTransform : public FSpawnableObjectTransform
	{
	public:
		ETLCutScenePcEndPosOffsetType                              PcEndPosOffsetType;                                      // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OKM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           OffsetRange;                                             // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CameraTransformKeyModifyMinFrame;                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLScenarioActorBoundObjectFinalProperty
	 * Size -> 0x0040
	 */
	struct FTLScenarioActorBoundObjectFinalProperty
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTransformTrack;                                   // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisibility;                                             // 0x0031(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5XE[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0034(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U256[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLSceneFXBudgetControlConfig
	 * Size -> 0x0028
	 */
	struct FTLSceneFXBudgetControlConfig
	{
	public:
		int32_t                                                    LoopingModelCount;                                       // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonLoopingModelCount;                                    // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopingParticleModelCount;                               // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonLoopingParticleModelCount;                            // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopingDecalModelCount;                                  // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonLoopingDecalModelCount;                               // 0x0014(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopingLightModelCount;                                  // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonLoopingLightModelCount;                               // 0x001C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopingSnapshotModelCount;                               // 0x0020(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonLoopingSnapshotModelCount;                            // 0x0024(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLSceneFXBudgetControlConfigGroup
	 * Size -> 0x0078
	 */
	struct FTLSceneFXBudgetControlConfigGroup
	{
	public:
		struct FTLSceneFXBudgetControlConfig                       Friendly;                                                // 0x0000(0x0028) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfig                       Neutral;                                                 // 0x0028(0x0028) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSceneFXBudgetControlConfig                       Hostile;                                                 // 0x0050(0x0028) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLSceneFXBudgetControlConfigTiming
	 * Size -> 0x000C
	 */
	struct FTLSceneFXBudgetControlConfigTiming
	{
	public:
		float                                                      HighImportancePendingDuration;                           // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MediumImportancePendingDuration;                         // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowImportancePendingDuration;                            // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLSplineParticleData
	 * Size -> 0x0050
	 */
	struct FTLSplineParticleData
	{
	public:
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEMG[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ParticleComponent;                                       // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1CC[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLSplineParticleBlock
	 * Size -> 0x00B8
	 */
	struct FTLSplineParticleBlock
	{
	public:
		int32_t                                                    BlockID;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4Y0[0xA4];                                  // 0x0004(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLSplineParticleData>                       ParticleDataArray;                                       // 0x00A8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLSceneCameraPersonalizationCustomizingCamera
	 * Size -> 0x0034
	 */
	struct FTLSceneCameraPersonalizationCustomizingCamera
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        TargetSocketPoint;                                       // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6H6A[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocationOffset;                                    // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomDistance;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraAngle;                                             // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraFov;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalDistance;                               // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneBeardOverrideMaterial
	 * Size -> 0x0038
	 */
	struct FSceneBeardOverrideMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverride;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUPO[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F35L[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneBeardPerFace
	 * Size -> 0x0058
	 */
	struct FSceneBeardPerFace
	{
	public:
		ESnModelCompositeFaceType                                  FaceType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PCJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MeshAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkinMaskTexture[0x28];                                   // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SceneEyebrowPerFace
	 * Size -> 0x0058
	 */
	struct FSceneEyebrowPerFace
	{
	public:
		ESnModelCompositeFaceType                                  FaceType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXOC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MeshAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkinMaskTexture[0x28];                                   // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SceneFaceEarVariation
	 * Size -> 0x0030
	 */
	struct FSceneFaceEarVariation
	{
	public:
		ESnModelCompositeEarMode                                   Mode;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTHJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MeshAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SceneFaceOverrideMaterial
	 * Size -> 0x0038
	 */
	struct FSceneFaceOverrideMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverride;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZABH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZF48[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneFaceDefSeamline
	 * Size -> 0x0010
	 */
	struct FSceneFaceDefSeamline
	{
	public:
		unsigned char                                              UnknownData_Z79C[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneHairOverrideMaterial
	 * Size -> 0x0038
	 */
	struct FSceneHairOverrideMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverride;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5B3[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYDF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneHairModePart
	 * Size -> 0x00D8
	 */
	struct FSceneHairModePart
	{
	public:
		ESnModelCompositeHairMode                                  Mode;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFJP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MeshAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GroomMeshAsset[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GroomPhysicsAsset[0x28];                                 // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GroomBindingAsset[0x28];                                 // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimDynamicsAsset[0x28];                                 // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseOwnAnimBP;                                           // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OD0B[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneOverrideMaterial
	 * Size -> 0x0038
	 */
	struct FSceneOverrideMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverride;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S49R[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AA8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneCPDSkinLodMesh
	 * Size -> 0x0010
	 */
	struct FSceneCPDSkinLodMesh
	{
	public:
		unsigned char                                              UnknownData_PGL3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneOverlapAreaPart
	 * Size -> 0x0038
	 */
	struct FSceneOverlapAreaPart
	{
	public:
		ESnModelCompositeArmorPartOverlapPriority                  Priority;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF9Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MeshAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                Desc;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneOverrideSocketOffset
	 * Size -> 0x0020
	 */
	struct FSceneOverrideSocketOffset
	{
	public:
		ESnModelSocketPoint                                        EquipMountSocket;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJNO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSceneBoneReference                                 SocketParentBone;                                        // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.FootprintAppearanceMapping
	 * Size -> 0x0060
	 */
	struct FFootprintAppearanceMapping
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bAnyScenePhysicalSurface : 1;                            // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO7M[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESnPhysicalSurface>                                 ScenePhysicalSurfaces;                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAnyFootprintSocket : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLWH[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESnFootprintSocketPoint>                            FootprintSockets;                                        // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LoadedMaterial;                                          // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeStanceData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeStanceData : public FSnActionDataTransient
	{
	public:
		ESnStanceType                                              StanceType;                                              // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnStanceType                                              SecondaryStanceType;                                     // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSwapStance;                                             // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionEquipMountOptions                                 EquipMountOption;                                        // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IFP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeSubStanceData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeSubStanceData : public FSnActionDataTransient
	{
	public:
		class FName                                                substance;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImmediatelyCarry;                                       // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyChangeSubStance;                                    // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSubStanceChangeSheatheAnimationMode                     SheatheAnimationMode;                                    // 0x0052(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipAnimationUpdate;                                    // 0x0053(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSheathe;                                           // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJ27[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateEquipItemHiveData
	 * Size -> 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
	 */
	struct FSnActionStateEquipItemHiveData : public FSnActionDataTransient
	{
	public:
		ESnModelSocketPoint                                        SocketPoint;                                             // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BS2O[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHiveEntityData*                                     ItemHiveEntity;                                          // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemSocketPoint;                                         // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0060(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionHairBaseColor
	 * Size -> 0x0070
	 */
	struct FSceneMakeupOptionHairBaseColor
	{
	public:
		struct FLinearColor                                        BaseColor01;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor02;                                             // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor03;                                             // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor04;                                             // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor05;                                             // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        RootColor;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootColorIntensity;                                      // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootColorRange;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairMaskIntensity;                                       // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScatterIntensity;                                        // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionHairTipColor
	 * Size -> 0x0018
	 */
	struct FSceneMakeupOptionHairTipColor
	{
	public:
		struct FLinearColor                                        TipColor;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TipColorIntensity;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TipColorRange;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionSkinColor
	 * Size -> 0x0018
	 */
	struct FSceneMakeupOptionSkinColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Desaturation;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionFaceTattooMask
	 * Size -> 0x0008
	 */
	struct FSceneMakeupOptionFaceTattooMask
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionFaceTattooColor
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionFaceTattooColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionBlusherColor
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionBlusherColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionIrisColor_Left
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionIrisColor_Left
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionEyeDeco
	 * Size -> 0x0048
	 */
	struct FSceneMakeupOptionEyeDeco
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorR;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorG;                                                  // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorB;                                                  // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LineColor;                                               // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionLipMask
	 * Size -> 0x0008
	 */
	struct FSceneMakeupOptionLipMask
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionLipColor
	 * Size -> 0x003C
	 */
	struct FSceneMakeupOptionLipColor
	{
	public:
		float                                                      ColorRIntensity;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorR;                                                  // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorGIntensity;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorG;                                                  // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorBIntensity;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorB;                                                  // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionBeardColor
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionBeardColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionIrisColor_Right
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionIrisColor_Right
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionEyelashColor
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionEyelashColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionColorSpaceImage
	 * Size -> 0x0040
	 */
	struct FSceneMakeupOptionColorSpaceImage
	{
	public:
		class UTexture2D*                                          ColorSpaceTexture;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorSpaceData;                                          // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UTexture2D*                                          ColorSpaceTextureForUI;                                  // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeXForUI;                                              // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeYForUI;                                              // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorSpaceDataForUI;                                     // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionCircularColorSpaceImage
	 * Size -> 0x0068
	 */
	struct FSceneMakeupOptionCircularColorSpaceImage
	{
	public:
		class UTexture2D*                                          ColorSpaceTexture;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorCount;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SaturationBrightnessResolution;                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCircleRadiusMin;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorCircleRadiusMax;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrightnessSaturationCircleRadius;                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLKZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                ColorTable;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   SaturationBrightness;                                    // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          ColorSpaceTextureForUI;                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorTableForUI;                                         // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   SaturationBrightnessForUI;                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionWarpaintingMask
	 * Size -> 0x0018
	 */
	struct FSceneMakeupOptionWarpaintingMask
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Normal;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ARM;                                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionEyebrowMask
	 * Size -> 0x0008
	 */
	struct FSceneMakeupOptionEyebrowMask
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMakeupOptionFaceTattooColor2
	 * Size -> 0x0010
	 */
	struct FSceneMakeupOptionFaceTattooColor2
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MakeupPresetSetting
	 * Size -> 0x0002
	 */
	struct FMakeupPresetSetting
	{
	public:
		bool                                                       bUnchangable;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoInherit;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MakeupPresetColorInfo
	 * Size -> 0x000C
	 */
	struct FMakeupPresetColorInfo
	{
	public:
		float                                                      ColorIndex;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SaturationBrightnessCircleCoordinate;                    // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MakeupPresetShaderConstantTestOption
	 * Size -> 0x0028
	 */
	struct FMakeupPresetShaderConstantTestOption
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMakeupPresetShaderConstantType                            Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsScalar;                                               // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXRS[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScalarValue;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorValue;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            TextureValue;                                            // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealMaterialSetRule
	 * Size -> 0x0014
	 */
	struct FUnrealMaterialSetRule
	{
	public:
		class FName                                                Old;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvert;                                                 // 0x0010(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZKX[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneNpcOverrideMaterial
	 * Size -> 0x0038
	 */
	struct FSceneNpcOverrideMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverride;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTZP[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W11E[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.PhysicalContiMapping
	 * Size -> 0x0048
	 */
	struct FPhysicalContiMapping
	{
	public:
		unsigned char                                              SceneConti[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector2D                                           SizeScale;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureBlendingWeightThreshold;                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnyScenePhysicalSurface : 1;                            // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2OY[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESnPhysicalSurface>                                 ScenePhysicalSurfaces;                                   // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.QueryMapPhysicalMaterialScalarParameter
	 * Size -> 0x000C
	 */
	struct FQueryMapPhysicalMaterialScalarParameter
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.HiveKey
	 * Size -> 0x000C
	 */
	struct FHiveKey
	{
	public:
		EHiveCategory                                              Category;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IR98[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ParticleScalarParameterNameAndValue
	 * Size -> 0x0010
	 */
	struct FParticleScalarParameterNameAndValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ParticleVectorParameterNameAndValue
	 * Size -> 0x0018
	 */
	struct FParticleVectorParameterNameAndValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ParticleColorParameterNameAndValue
	 * Size -> 0x001C
	 */
	struct FParticleColorParameterNameAndValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x000C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.BoidParticleParameters
	 * Size -> 0x0030
	 */
	struct FBoidParticleParameters
	{
	public:
		TArray<struct FParticleScalarParameterNameAndValue>        ScalarParameters;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FParticleVectorParameterNameAndValue>        VectorParameters;                                        // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FParticleColorParameterNameAndValue>         ColorParameters;                                         // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneBoneScaleParamPerBone
	 * Size -> 0x0088
	 */
	struct FSceneBoneScaleParamPerBone
	{
	public:
		struct FSceneBoneReference                                 TargetBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      NegativeWeight;                                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveWeight;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TranslationPositive;                                     // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TranslationNegative;                                     // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScalePositive;                                           // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleNegative;                                           // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationPositive;                                        // 0x006C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationNegative;                                        // 0x0078(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Isolate;                                                 // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mirroring;                                               // 0x0085(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39VQ[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneBoneScaleGroup
	 * Size -> 0x0030
	 */
	struct FSceneBoneScaleGroup
	{
	public:
		ESnModelBoneScaleGroup                                     Group;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH0F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GroupDesc;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickingPriority;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSceneBoneScaleParamPerBone>                 Bones;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneFacialAnimationDef
	 * Size -> 0x0110
	 */
	struct FSceneFacialAnimationDef
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Sequence[0x28];                                          // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MultiLanguageSequences[0xA0];                            // 0x0048(0x00A0) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MultiLanguageSequence[0x28];                             // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.SceneNpcCustomizingMaterialParamScalar
	 * Size -> 0x0020
	 */
	struct FSceneNpcCustomizingMaterialParamScalar
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandom;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7RZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RandomCandidates;                                        // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneNpcCustomizingMaterialParamColor
	 * Size -> 0x0030
	 */
	struct FSceneNpcCustomizingMaterialParamColor
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandom;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QQK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Value;                                                   // 0x000C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRPW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomCandidates;                                        // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneNpcCustomizingNonComposite
	 * Size -> 0x0168
	 */
	struct FSceneNpcCustomizingNonComposite
	{
	public:
		bool                                                       bUseColorVariationDesaturation;                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationDesaturation;                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFO4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorVariationDesaturation;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RandomColorVariationDesaturationCandidates;              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColorVariationBaseWeight;                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationBaseWeight;                      // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRFY[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorVariationBaseWeight;                                // 0x001C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR75[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomColorVariationBaseWeightCandidates;                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColorVariationColor0;                                // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationColor0;                          // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHXI[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorVariationColor0;                                    // 0x0044(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9P0[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomColorVariationColor0Candidates;                    // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColorVariationColor1;                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationColor1;                          // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RP3[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorVariationColor1;                                    // 0x006C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P27[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomColorVariationColor1Candidates;                    // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColorVariationColor2;                                // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationColor2;                          // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V0O[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorVariationColor2;                                    // 0x0094(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67H2[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomColorVariationColor2Candidates;                    // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColorVariationColor3;                                // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomColorVariationColor3;                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA54[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorVariationColor3;                                    // 0x00BC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJ08[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomColorVariationColor3Candidates;                    // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSkinColorDesaturation;                               // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomSkinColorDesaturation;                         // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MF8[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SkinColorDesaturation;                                   // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RandomSkinColorDesaturationCandidates;                   // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSkinColor;                                           // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomSkinColor;                                     // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFK5[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SkinColor;                                               // 0x00FC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5M0[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomSkinColorCandidates;                               // 0x0110(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseHairColor;                                           // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomHairColor;                                     // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECW4[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        HairColor;                                               // 0x0124(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63T7[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                RandomHairColorCandidates;                               // 0x0138(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneNpcCustomizingMaterialParamScalar>     Scalars;                                                 // 0x0148(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSceneNpcCustomizingMaterialParamColor>      Colors;                                                  // 0x0158(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.ScenePseudoFlinchingBoneConfig
	 * Size -> 0x0030
	 */
	struct FScenePseudoFlinchingBoneConfig
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UEU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GroupIndex;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CurveAsset;                                              // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPseudoFlinchingCurveApplyMode                           ApplyMode;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6PU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.ScenePseudoFlinchingNailedBoneConfig
	 * Size -> 0x000C
	 */
	struct FScenePseudoFlinchingNailedBoneConfig
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8VH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SkidMarkTangent
	 * Size -> 0x000C
	 */
	struct FSkidMarkTangent
	{
	public:
		struct FVector                                             TangentX;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SkidMarkVertex
	 * Size -> 0x0040
	 */
	struct FSkidMarkVertex
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSkidMarkTangent                                    Tangent;                                                 // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutCurrentTime;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAlpha;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SystemAnimationTableRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FSystemAnimationTableRow : public FTableRowBase
	{
	public:
		class FName                                                Sequence;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SubSequence;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneShot;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9PJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockKinematicJointSwing1;                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockKinematicJointSwing2;                               // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockKinematicJointTwist;                                // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQJ8[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.WeaponSheathingInfoTableRow
	 * Size -> 0x0188 (FullSize[0x0190] - InheritedSize[0x0008])
	 */
	struct FWeaponSheathingInfoTableRow : public FTableRowBase
	{
	public:
		int32_t                                                    Code;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHPV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Code_Description;                                        // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SheatheMotionName;                                       // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UnSheatheMotionName;                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        RightHand_TargetSocket;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SI7M[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHand_LocalTransform;                                // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        LeftHand_TargetSocket;                                   // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTLE[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHand_LocalTransform;                                 // 0x0080(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        RightHand_Secondary_TargetSocket;                        // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TC59[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHand_Secondary_LocalTransform;                      // 0x00C0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ESnModelSocketPoint                                        LeftHand_Secondary_TargetSocket;                         // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9YB[0xF];                                   // 0x00F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHand_Secondary_LocalTransform;                       // 0x0100(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightHand_Secondary_CombatTransformOffset;               // 0x0130(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LeftHand_Secondary_CombatTransformOffset;                // 0x0160(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.WeaponSheathingSocketOffsetTableRow
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FWeaponSheathingSocketOffsetTableRow : public FTableRowBase
	{
	public:
		ESnWeaponType                                              WeaponType;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFemale;                                                 // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PFY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESnModelSocketPoint, struct FTransform>               LocalTransforms;                                         // 0x0010(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneCompositePartHelmetBoneScaleData
	 * Size -> 0x0008
	 */
	struct FSceneCompositePartHelmetBoneScaleData
	{
	public:
		ESnModelBoneScaleGroup                                     BoneScaleGroup;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNBG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideBoneScaleGroupWeight;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneCompositePartGlobalSettingTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FSceneCompositePartGlobalSettingTableRow : public FTableRowBase
	{
	public:
		ESnModelCompositeHelmetType                                HelmetMode;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LEN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSceneCompositePartHelmetBoneScaleData>      BoneScaleData;                                           // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FInputBlendPose                                     FacialBranchFilter;                                      // 0x0030(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.AnimDataSequenceProperty
	 * Size -> 0x0030
	 */
	struct FAnimDataSequenceProperty
	{
	public:
		class FString                                              Sequence;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6L2V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              SegmentTriggerTimes;                                     // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      EffectiveDurationOptional;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SBA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.CameraSettingStructure
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FCameraSettingStructure : public FTableRowBase
	{
	public:
		float                                                      MaxDistance;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHKW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.CarrierTransformSequencer
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FCarrierTransformSequencer : public FTableRowBase
	{
	public:
		int32_t                                                    SID;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69J2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     Sequencer;                                               // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.DebugAnimNotifyCharacterSound
	 * Size -> 0x0001
	 */
	struct FDebugAnimNotifyCharacterSound
	{
	public:
		unsigned char                                              UnknownData_7C96[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.HiveCategoryTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FHiveCategoryTableRow : public FTableRowBase
	{
	public:
		class FString                                              EntityName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EntityFile[0x28];                                        // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct TLScene.InteractionCameraSettingStructure
	 * Size -> 0x0100 (FullSize[0x0108] - InheritedSize[0x0008])
	 */
	struct FInteractionCameraSettingStructure : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_K0WX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialPitch;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialYaw;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionFov;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionCameraSettingZOffset;                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceRate;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendFunction;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MYE[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendOutFunction;                                        // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P0F[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendOutExp;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionCameraLookatType                               LookatType;                                              // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU7N[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimPosition;                                             // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimPositionOffset;                                       // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AimPositionRotateOffset;                                 // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           TargetPositionOffset;                                    // 0x006C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitPositionOffset;                                      // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMouseRotateCamera;                                      // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16G7[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationSec;                                             // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ScreenMessageTitle;                                      // 0x0088(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      ScreenMessageDelayTime;                                  // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLInteractionCameraTriggerType                            TriggerType;                                             // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLInteractionCameraPositionType                           AttachType;                                              // 0x00A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML3T[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   TargetGuid;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PlayConti;                                               // 0x00B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PlayContiForTarget;                                      // 0x00C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideHelmet;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayContiRemain;                                         // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAYR[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DepthOfFieldFocalDistance;                               // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyPcRelativeDistance;                                    // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyPcRelativeDirectionYaw;                                // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MyPcDirection;                                           // 0x00F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ETLInteractionCameraTargetRotationType                     TargetRotationType;                                      // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZR4B[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NpcDirectionYaw;                                         // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapAreaPoly
	 * Size -> 0x0010
	 */
	struct FMapAreaPoly
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapDynamicTriggerTriangle
	 * Size -> 0x0024
	 */
	struct FMapDynamicTriggerTriangle
	{
	public:
		struct FVector                                             Vertex[0x3];                                             // 0x0000(0x0024) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapVisibilitySetting
	 * Size -> 0x0008
	 */
	struct FMapVisibilitySetting
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWSS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadingDuration;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MapRoomWindAnimationComponentData
	 * Size -> 0x00C0
	 */
	struct FMapRoomWindAnimationComponentData
	{
	public:
		unsigned char                                              UnknownData_O403[0xC0];                                  // 0x0000(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MovieSceneCineTargetCameraAimingTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieSceneCineTargetCameraAimingTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneCineTargetCameraAimingSection*      Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          AimingObjectBindingID;                                   // 0x0028(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AimingSocketName;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneCineTargetCameraAimingWayPointTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieSceneCineTargetCameraAimingWayPointTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneCineTargetCameraAimingWayPointSection* Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          AimingWayPointObjectBindingID;                           // 0x0028(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AimingWayPointSocketName;                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneContiAnimationTemplate
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FMovieSceneContiAnimationTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneContiAnimationSection*              Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntegralCurve                                      Curve;                                                   // 0x0028(0x0080) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneContiTemplate
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FMovieSceneContiTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneContiSection*                       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntegralCurve                                      Curve;                                                   // 0x0028(0x0080) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneNullTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNullTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct TLScene.MovieScenePlayAnimationTemplate
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FMovieScenePlayAnimationTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieScenePlayAnimationSection*               Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntegralCurve                                      Curve;                                                   // 0x0028(0x0080) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneScenarioActorTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneScenarioActorTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneScenarioActorSection*               Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneLoopTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneLoopTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UUnrealMovieSceneScenarioLoopSection*                Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.NodeKey
	 * Size -> 0x0008
	 */
	struct FNodeKey
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.RigidPhysicsControllerOption
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRigidPhysicsControllerOption : public FBasePhysicsControllerOption
	{	};

	/**
	 * ScriptStruct TLScene.HitAnimPseudoFlinchingConfig
	 * Size -> 0x0030
	 */
	struct FHitAnimPseudoFlinchingConfig
	{
	public:
		class FName                                                TargetBone;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GroupIndex;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONNW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     Curve;                                                   // 0x0010(0x0018) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnPseudoFlinchingCurveApplyMode                           CurveApplyMode;                                          // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOKZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveScale;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneJumpPathInfo
	 * Size -> 0x0028
	 */
	struct FSceneJumpPathInfo
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ElapsedMs;                                               // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FaceDirection;                                           // 0x001C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayInteractionCameraData
	 * Size -> 0x0038
	 */
	struct FSnActionPlayInteractionCameraData
	{
	public:
		unsigned char                                              UnknownData_RWNG[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PresetName;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSec;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6OH[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLooping : 1;                                            // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDKN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlaySnapshotData
	 * Size -> 0x0170
	 */
	struct FSnActionPlaySnapshotData
	{
	public:
		struct FSnActionSkipOptionData                             SkipOption;                                              // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSnActionTimeOptionData                             TimeOption;                                              // 0x0018(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESnActionEffectSortOrder                                   TranslucentSortOrder;                                    // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0L9A[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnInterval;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotSpawnWhenHided;                                    // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnToWorld;                                           // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAnimation;                                          // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QADG[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeTime;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmitOnce;                                               // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSnapshotEmitOnceLifetimeBehavior                        EmitOnceLifeTimeBehavior;                                // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeKillPolicy                                          KillPolicy;                                              // 0x0076(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFM1[0x1];                                   // 0x0077(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KillPolicyCustomFadeOutSecs;                             // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInsideSphereOfInterest;                                 // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByHitDirection;                                 // 0x007D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnNodeReferencePoint                                      AimPoint;                                                // 0x007E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4V2[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereRadius;                                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectUV;                                              // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4LN[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectScale;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeBody;                                            // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeEquipedItem;                                     // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UZ5[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SlotsForItem;                                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentOpacity;                                    // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreParentVisibility;                                 // 0x0095(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnSnapshotCustomStencilType                               CustomStencilType;                                       // 0x0096(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnFxModelChangeResponse                                   ModelChangeResponse;                                     // 0x0097(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OpacityCurve[0x28];                                      // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      NormalExtrudeMagnitude;                                  // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YWH[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              NormalExtrudeMagnitudeCurve[0x28];                       // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverrideMaterial;                                       // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DSB[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Material[0x28];                                          // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSnActionPlaySnapshotOverrideMaterial               OverrideMaterialSetting;                                 // 0x0120(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR5S[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSnActionPlaySnapshotCurvedScalar>           CurvedScalars;                                           // 0x0128(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSnActionPlaySnapshotCurvedColor>            CurvedColors;                                            // 0x0138(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseColor;                                               // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionIFFColorApplyMode                                 IFFColorApplyMode;                                       // 0x0149(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5JR[0x2];                                   // 0x014A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x014C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x015C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAS5[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseObjectHeight;                                        // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFEE[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWY5[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.ActionPlayCameraLagTestData
	 * Size -> 0x0004
	 */
	struct FActionPlayCameraLagTestData
	{
	public:
		float                                                      MoveDistance;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.RunTimeColorCurvePropertyHelper
	 * Size -> 0x0208
	 */
	struct FRunTimeColorCurvePropertyHelper
	{
	public:
		struct FRuntimeCurveLinearColor                            ColorCurve;                                              // 0x0000(0x0208) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.VirtualSocketTestData
	 * Size -> 0x0002
	 */
	struct FVirtualSocketTestData
	{
	public:
		bool                                                       bCreateVirtualSocket;                                    // 0x0000(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualSocketSpace                                        VirtualSocketSpace;                                      // 0x0001(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldClearGroupMaterialParametersData
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldClearGroupMaterialParametersData : public FSnActionDataTransient
	{
	public:
		class FName                                                GroupTag;                                                // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TextureParameterName;                                    // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorTintParameterName0;                                 // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorTintParameterName1;                                 // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetGroupMaterialParametersData
	 * Size -> 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetGroupMaterialParametersData : public FSnActionDataTransient
	{
	public:
		class FName                                                GroupTag;                                                // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TextureParameterName;                                    // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorTintParameterName0;                                 // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorTintParameterName1;                                 // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParamColor0;                                             // 0x0068(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParamColor1;                                             // 0x0078(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ParamTexture;                                            // 0x0088(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionSetModelDecalReceiveTypeData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionSetModelDecalReceiveTypeData : public FSnActionDataTransient
	{
	public:
		ESnDecalReceiveType                                        DecalReceiveType;                                        // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0893[0x3];                                   // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_JFKN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionSetFloatingZOffsetData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionSetFloatingZOffsetData : public FSnActionDataTransient
	{
	public:
		float                                                      ZOffset;                                                 // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionUpdatePathFollowSplinesData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionUpdatePathFollowSplinesData : public FSnActionDataTransient
	{
	public:
		unsigned char                                              UnknownData_YI2R[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.ContiKey
	 * Size -> 0x0020
	 */
	struct FContiKey
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNodeKey                                            NodeKey;                                                 // 0x0008(0x0008) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4U2[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionSetSequencerAnimationPositionData
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	struct FSnActionSetSequencerAnimationPositionData : public FSnActionDataTransient
	{
	public:
		float                                                      position;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVBB[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContiKey                                           ContiKey;                                                // 0x0050(0x0020) Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUpdate;                                            // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6ZO[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionSetSequencerAnimationData
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	struct FSnActionSetSequencerAnimationData : public FSnActionDataTransient
	{
	public:
		class UAnimSequenceBase*                                   AnimSequence;                                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   FallbackAnimSequence;                                    // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFacialAnim;                                       // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8UP[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SectionDuration;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoop;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5M6[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffsetTime;                                         // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPosition;                                           // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseImmediately;                                       // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY1L[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostrollTime;                                            // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FContiKey                                           PlayingKey;                                              // 0x0080(0x0020) Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayAnimationSound;                                     // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9PV[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionClearMaterialTextureData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionClearMaterialTextureData : public FSnActionDataTransient
	{
	public:
		class FName                                                ParameterName;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionSetMaterialParameterData
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FSnActionSetMaterialParameterData : public FSnActionDataTransient
	{
	public:
		class FName                                                ParameterName;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionSetMaterialParameterValue                         ValueType;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_150S[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ParamColor;                                              // 0x0054(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParamScalar;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ParamTexture;                                            // 0x0068(0x0018) Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldPlayCueSheetData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldPlayCueSheetData : public FSnActionDataTransient
	{
	public:
		class UHiveEntityData*                                     ContentHiveEntity;                                       // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CueName;                                                 // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionCueSheetOperationType                             OperationType;                                           // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9J7[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetPhotoSensitizeData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetPhotoSensitizeData : public FSnActionDataTransient
	{
	public:
		float                                                      Multiplier;                                              // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBGQ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetWindData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetWindData : public FSnActionDataTransient
	{
	public:
		float                                                      Direction;                                               // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInstant;                                                // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLSA[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalSpeed;                                           // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetTimeLapseData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetTimeLapseData : public FSnActionDataTransient
	{
	public:
		float                                                      TargetGameHour;                                          // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastForward;                                            // 0x004C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DGK[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   CycleDays;                                               // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionTimeLapseSaveType                                 SaveType;                                                // 0x0058(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7HO[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetTimeFreezeData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetTimeFreezeData : public FSnActionDataTransient
	{
	public:
		bool                                                       bFreeze;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ9A[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionWorldSetGameHourData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionWorldSetGameHourData : public FSnActionDataTransient
	{
	public:
		float                                                      GameHour;                                                // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBO9[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeEquipMountStateData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeEquipMountStateData : public FSnActionDataTransient
	{
	public:
		TArray<ESnModelSocketPoint>                                MountSockets;                                            // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ESnModelSocketPoint>                                UnmountSockets;                                          // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMountAll;                                               // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnmountAll;                                             // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I160[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeIFFParamData
	 * Size -> 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeIFFParamData : public FSnActionDataTransient
	{
	public:
		bool                                                       bUseColor;                                               // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6XA[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x004C(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDesaturation;                                        // 0x005C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18N2[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Desaturation;                                            // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ2P[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContiKey                                           TargetKey;                                               // 0x0068(0x0020) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TargetNodeType;                                          // 0x0088(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W11A[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeScaleData
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeScaleData : public FSnActionDataTransient
	{
	public:
		float                                                      Scale;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FContiKey                                           TargetKey;                                               // 0x0050(0x0020) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TargetNodeType;                                          // 0x0070(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteInitialLifeNodesOnly;                           // 0x0074(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFindChildren;                                           // 0x0075(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVXI[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionChangeCollisionSizeData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionChangeCollisionSizeData : public FSnActionDataTransient
	{
	public:
		float                                                      ChangeObjectRadius;                                      // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChangeObjectHeight;                                      // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChangeObjectRadiusScale;                                 // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48KP[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayScenarioData
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FSnActionPlayScenarioData : public FSnActionDataTransient
	{
	public:
		struct FSoftObjectPath                                     LevelSequencePath;                                       // 0x0048(0x0018) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartedTime;                                             // 0x0060(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetTime;                                              // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExclusiveTag;                                            // 0x006C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLScenarioLoadingType                                     ResourceLoadingType;                                     // 0x0074(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ7L[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0078(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncPlaybackPosition;                                   // 0x007C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84YE[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateAreaVolumeActivationData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateAreaVolumeActivationData : public FSnActionDataTransient
	{
	public:
		bool                                                       bActive;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAKS[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateWaterDroughtData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionStateWaterDroughtData : public FSnActionDataTransient
	{
	public:
		float                                                      StartDepth;                                              // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetDepth;                                             // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XALM[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateWeatherData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateWeatherData : public FSnActionDataTransient
	{
	public:
		bool                                                       bScheduledWeather;                                       // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnActionWeatherType                                       WeatherType;                                             // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KT2V[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateVisibilitytData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionStateVisibilitytData : public FSnActionDataTransient
	{
	public:
		bool                                                       bVisible;                                                // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGRC[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionTimeSec;                                       // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAsyncCall;                                              // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2DJ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateInvisibleData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateInvisibleData : public FSnActionDataTransient
	{
	public:
		bool                                                       bUsedInvisibleMode;                                      // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InvisibleModeFlag;                                       // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F05[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateUnEquipAllItemData
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FSnActionStateUnEquipAllItemData : public FSnActionDataTransient
	{	};

	/**
	 * ScriptStruct TLScene.SnActionStateUnEquipItemData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateUnEquipItemData : public FSnActionDataTransient
	{
	public:
		ESnModelSocketPoint                                        SocketPoint;                                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA21[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateEquipItemRawData
	 * Size -> 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
	 */
	struct FSnActionStateEquipItemRawData : public FSnActionDataTransient
	{
	public:
		ESnModelSocketPoint                                        SocketPoint;                                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_353L[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemSocketPoint;                                         // 0x004C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR7M[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalTransform;                                          // 0x0060(0x0030) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsOverrideItemLayer;                                    // 0x0090(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1NF[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     AssetPath;                                               // 0x0098(0x0018) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYZZ[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UAssetFile;                                              // 0x00B8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTimeSec;                                            // 0x00C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCharacterSlotItem;                                    // 0x00CC(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulate;                                               // 0x00CD(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZYF[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulateDelayTimeSec;                                    // 0x00D0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleToVelocityByAnimation;                              // 0x00D4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsMaxImpulseMagnitude;                              // 0x00D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVLL[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateIKLookAtData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FSnActionStateIKLookAtData : public FSnActionDataTransient
	{
	public:
		uint32_t                                                   TargetId;                                                // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetBone;                                              // 0x004C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetPos;                                               // 0x0054(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReset;                                                // 0x0064(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLookAtCamera;                                           // 0x0065(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99AP[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtCameraDistance;                                    // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepLooking;                                            // 0x006C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEyeControl;                                             // 0x006D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBVJ[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateAgentDisableMovementData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateAgentDisableMovementData : public FSnActionDataTransient
	{
	public:
		bool                                                       bMovable;                                                // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4GX[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateAgentCollideData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionStateAgentCollideData : public FSnActionDataTransient
	{
	public:
		bool                                                       bEnable;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDead;                                                  // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMovable;                                               // 0x004A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableOnlyPc;                                           // 0x004B(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BlockAllPenetrationSkill;                                // 0x004C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUseSiegeWeaponMode;                                // 0x004D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5SU[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateAgentLockOnData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionStateAgentLockOnData : public FSnActionDataTransient
	{
	public:
		float                                                      LockAngle;                                               // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlock;                                                 // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBNK[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   TargetId;                                                // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionStateModelRotationData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionStateModelRotationData : public FSnActionDataTransient
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRotationSync;                                           // 0x0054(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EUZ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStateMovementRotationData
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	struct FSnActionStateMovementRotationData : public FSnActionDataTransient
	{
	public:
		float                                                      TargetAngle;                                             // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDuration;                                            // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTurnDurationAsAngle10Ratio;                          // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithTurnAnimation;                                      // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5ZP[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverrideTurnMotion;                                      // 0x0054(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlocked;                                                // 0x005C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateFixedDirection;                                   // 0x005D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SML1[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttachedParentId;                                        // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDraw;                                              // 0x0064(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I808[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionCancelJumpOrFallData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FSnActionCancelJumpOrFallData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             TargetPoint;                                             // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetDirection;                                         // 0x0054(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearAnimation;                                         // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82ZU[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClearBlendOutTime;                                       // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoCheck;                                                // 0x0068(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForGliding;                                             // 0x0069(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandingInPlace;                                         // 0x006A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAIW[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionStopOverlayMovementData
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	struct FSnActionStopOverlayMovementData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             TargetPoint;                                             // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetDirection;                                         // 0x0054(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearAnimation;                                         // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUA0[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClearBlendOutTime;                                       // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SnActionPlayPendingActionData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FSnActionPlayPendingActionData : public FSnActionDataTransient
	{
	public:
		struct FContiKey                                           PendingContiKey;                                         // 0x0048(0x0020) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReleasePendingActionFlags;                               // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C8O[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionAddMovementInputData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionAddMovementInputData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             WorldDirection;                                          // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleValue;                                              // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForce;                                                  // 0x0058(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71C6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveArrivedData
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveArrivedData : public FSnActionDataTransient
	{	};

	/**
	 * ScriptStruct TLScene.SnActionMoveFallData
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveFallData : public FSnActionDataTransient
	{
	public:
		float                                                      DurationSec;                                             // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetPoint;                                             // 0x004C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FaceDirection;                                           // 0x0058(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelMovementAnimation                                  SystemAnimation;                                         // 0x0064(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K0V[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveJumpWarmupData
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveJumpWarmupData : public FSnActionDataTransient
	{
	public:
		ESnJumpWarmupAllowedType                                   JumpWarmupAllowed;                                       // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SOL[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxJumpHeight;                                           // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxJumpSpeed;                                            // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxJumpSpeedRatio;                                       // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandingJump;                                           // 0x0058(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WY2[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HangTimeSec;                                             // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InputDirection;                                          // 0x0060(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedZVelocity;                                          // 0x006C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRunningJump;                                          // 0x006D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQO1[0xA];                                   // 0x006E(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveTransformSequenceData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveTransformSequenceData : public FSnActionDataTransient
	{
	public:
		int32_t                                                    SequenceID;                                              // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayTime;                                                // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementSequenceState                                   MoveSequenceStateType;                                   // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIMK[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMovePRSData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FSnActionMovePRSData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             position;                                                // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0054(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0060(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementPRSState                                        MovePRSStateType;                                        // 0x006C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeleportType                                              TeleportType;                                            // 0x006D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreStrategyOverlayLayer;                             // 0x006E(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORLP[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveSetModeData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveSetModeData : public FSnActionDataTransient
	{
	public:
		ESnMovementMode                                            MovementMode;                                            // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGTQ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveSpeedData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveSpeedData : public FSnActionDataTransient
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownSpeed;                                               // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveSpeedScaleVector;                                    // 0x0050(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnObjectSpeedType                                         MoveSpeedType;                                           // 0x005C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3AJ[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveStopData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveStopData : public FSnActionDataTransient
	{
	public:
		float                                                      StopAngleDegree;                                         // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StopPosition;                                            // 0x004C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLStopPosSyncType                                         SyncType;                                                // 0x0058(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAV0[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveDirectData
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveDirectData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             TargetPoint;                                             // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysAdjustTargetPoint;                                // 0x0054(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSPG[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetAngleDegree;                                       // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66W2[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveTargetData
	 * Size -> 0x00B8 (FullSize[0x0100] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveTargetData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             TargetPoint;                                             // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimMoveSpeed;                                           // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           FaceDirection;                                           // 0x005C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementMode                                            MovementMode;                                            // 0x0064(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQC9[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     MovePath;                                                // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVector2D                                           ArrivedDirection;                                        // 0x0078(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixAnimDirection;                                       // 0x0080(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcedMove;                                             // 0x0081(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipAdjustZPos;                                         // 0x0082(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCIN[0x7D];                                  // 0x0083(0x007D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SnActionMoveWarmupData
	 * Size -> 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
	 */
	struct FSnActionMoveWarmupData : public FSnActionDataTransient
	{
	public:
		struct FVector                                             TargetPos;                                               // 0x0048(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPathDistance;                                         // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimMoveSpeed;                                           // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnMovementMode                                            MovementMode;                                            // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMJY[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WallFollowingSpeedCoefficient;                           // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSwimStance;                                           // 0x0068(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6I7[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InputDirection;                                          // 0x006C(0x000C) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FaceDirection;                                           // 0x0078(0x000C) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcedMove;                                             // 0x0084(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6A8[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollideSlidingCheckMargin;                               // 0x0088(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSequenceMove;                                           // 0x008C(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMIL[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AcceptanceRange;                                         // 0x0090(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRZQ[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.ShowOnlyLevelAndActorName
	 * Size -> 0x0010
	 */
	struct FShowOnlyLevelAndActorName
	{
	public:
		class FName                                                Level;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.MovieSceneTLActionTreeEvalTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneTLActionTreeEvalTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UTLActionTreeSection*                                Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLActionTriggerEventData
	 * Size -> 0x0018
	 */
	struct FTLActionTriggerEventData
	{
	public:
		class FName                                                TriggerEvent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLATActionNode*                                     ParentAction;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActionDurationOverride;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BD2S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAudioSmartAmbientMaterialGroupSetting
	 * Size -> 0x0028
	 */
	struct FTLAudioSmartAmbientMaterialGroupSetting
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Surfaces;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ReflectionRatio;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AJ9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLAudioGameSync
	 * Size -> 0x0018
	 */
	struct FTLAudioGameSync
	{
	public:
		ETLAudioGameSyncType                                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCAR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Key;                                                     // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumericValue;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCameraCommonSettingUserCamera
	 * Size -> 0x000C
	 */
	struct FTLCameraCommonSettingUserCamera
	{
	public:
		float                                                      UserCameraMaxDistPlusAtSiege;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UserCameraMaxDistPlusAtTaxDelivery;                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UserCameraMaxDistPlusAtGigantrite;                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCameraCommonSettingAutoCombatCamera
	 * Size -> 0x002C
	 */
	struct FTLCameraCommonSettingAutoCombatCamera
	{
	public:
		float                                                      AutoCombatCameraChangeDelaySec;                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraDurationSecMin;                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraDurationSecMax;                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraPauseSecWhenUserInput;                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraPauseSecWhenTargetChange;                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraStartBlendTime;                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   AutoCombatCameraStartBlendFunction;                      // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SNY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoCombatCameraStartBlendExp;                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraRotateSec;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraTargetYawOffsetMin;                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCombatCameraTargetYawOffsetMax;                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCameraCommonSettingStructure
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FTLCameraCommonSettingStructure : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_QXX3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RecoverySpeed;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceEnterSpeed;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceEnterSpeedSwim;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceMargin;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceHeight;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceRadius;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceHeightScale;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceRadiusScale;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackTraceCapsuleZOffset;                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZoomSmooth;                                             // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUFT[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomInSmoothAmount;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutSmoothAmount;                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInFollowSpeed;                                       // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutFollowSpeed;                                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInAmount;                                            // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutAmount;                                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseAxisSpeed;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KeyboardRotationYawSpeed;                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KeyboardRotationPitchSpeed;                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleFollowSpeed;                                        // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceResetSpeed;                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SyncYawDuration;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LagZSpeed;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeltaSeconds;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMouseAxis;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestoreAfterRotateInBackViewSec;                         // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestoreAfterRotateInBackViewSpeed;                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestoreReservedCameraDistByUserInputBlendSec;            // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraTooCloseAlphaStartDist;                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLCameraCommonSettingUserCamera                    UserCameraSetting;                                       // 0x0084(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTLCameraCommonSettingAutoCombatCamera              AutoCombatCameraSetting;                                 // 0x0090(0x002C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3S7[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLCameraUserPresetSettingStructure
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FTLCameraUserPresetSettingStructure : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_F4AQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomInDistance;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInLookUpDistance;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInTargetRadius;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInTargetHeight;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutDistance;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutLookUpDistance;                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwimZoomOutLookUpDistance;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetZOffset;                                           // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookUpTargetZOffset;                                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddSwimLookUpTargetZOffset;                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalZOffsetByHeightScale;                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInMinPitch;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutMinPitch;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInMaxPitch;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutMaxPitch;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInFieldOfView;                                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutFieldOfView;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfViewLimitMax;                                     // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeMinMaxYaw;                                      // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLT5[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinYaw;                                                  // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxYaw;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultPitch;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultYaw;                                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultDistance;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WorldTargetOffset;                                       // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ProjectionOffset;                                        // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendExp;                                                // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewTargetBlendFunction                                   BlendFunction;                                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUsePresetValue;                                   // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeYawWhenInit;                                    // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46QQ[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomInFStop;                                             // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutFStop;                                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomInFocalDistanceRate;                                 // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutFocalDistanceRate;                                // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DOFApplyCameraDist;                                      // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraLagSpeed;                                          // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraRotationLagSpeed;                                  // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ViewOffsetMaxScope;                                      // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ViewOffsetScope;                                         // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraTooCloseAlphaStartDist;                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraTooCloseAlphaEndDist;                              // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLCharacterAnimInstanceProxy
	 * Size -> 0x0030 (FullSize[0x07A0] - InheritedSize[0x0770])
	 */
	struct FTLCharacterAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_Z68J[0x30];                                  // 0x0770(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.RootMotionSource_CreatureFall
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	struct FRootMotionSource_CreatureFall : public FRootMotionSource
	{
	public:
		unsigned char                                              UnknownData_TQAQ[0x8];                                   // 0x0098(0x0008) Fix Super Size
		unsigned char                                              UnknownData_CWJ1[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.RootMotionSource_CreatureMantle
	 * Size -> 0x0118 (FullSize[0x01B0] - InheritedSize[0x0098])
	 */
	struct FRootMotionSource_CreatureMantle : public FRootMotionSource
	{
	public:
		unsigned char                                              UnknownData_RHHE[0x8];                                   // 0x0098(0x0008) Fix Super Size
		unsigned char                                              UnknownData_IH90[0x110];                                 // 0x00A0(0x0110) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLCharacterWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FTLCharacterWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_DUZD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLContentEditorActorInfo
	 * Size -> 0x0040
	 */
	struct FTLContentEditorActorInfo
	{
	public:
		uint32_t                                                   ClassId;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SceneID;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GuidString;                                              // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Guid;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorAddress;                                            // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModelAddress;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLFacialAnimationTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTLFacialAnimationTemplate : public FMovieSceneEvalTemplate
	{
	public:
		TWeakObjectPtr<class UTLFacialAnimationSection>            Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLGameCameraBlendingTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTLGameCameraBlendingTemplate : public FMovieSceneEvalTemplate
	{
	public:
		TWeakObjectPtr<class UTLGameCameraBlendingSection>         Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerHairDefinition
	 * Size -> 0x0020
	 */
	struct FTLPlayerHairDefinition
	{
	public:
		class USceneCompositeHairDef*                              HairAsset;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerCustomizeGenderAsset*                       SourceGenderAsset;                                       // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnModelCompositeHairMode                                  HairMode;                                                // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMOR[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLPlayerEarDefinition
	 * Size -> 0x0010
	 */
	struct FTLPlayerEarDefinition
	{
	public:
		ESnModelCompositeEarMode                                   EarMode;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVR8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       EarMesh;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerBeardDefinition
	 * Size -> 0x0020
	 */
	struct FTLPlayerBeardDefinition
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UGH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneCompositeBeardDef*                             BeardAsset;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       BeardMesh;                                               // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SkinMaskTexture;                                         // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerEyebrowDefinition
	 * Size -> 0x0018
	 */
	struct FTLPlayerEyebrowDefinition
	{
	public:
		class USceneCompositeEyebrowDef*                           EyebrowAsset;                                            // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       EyebrowMesh;                                             // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SkinMaskTexture;                                         // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerPartDefinition
	 * Size -> 0x0010
	 */
	struct FTLPlayerPartDefinition
	{
	public:
		class USceneCompositePartDef*                              PartAsset;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerOutfitPartGenderAsset*                      SourcePartGenderAsset;                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerPartOverlapDefinition
	 * Size -> 0x0010
	 */
	struct FTLPlayerPartOverlapDefinition
	{
	public:
		TArray<class USkeletalMesh*>                               SourceMeshes;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLPlayerCharacterDefinition
	 * Size -> 0x0210
	 */
	struct FTLPlayerCharacterDefinition
	{
	public:
		unsigned char                                              UnknownData_0MYW[0xF0];                                  // 0x0000(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLPlayerCharacterAsset*                             PlayerCharacterAsset;                                    // 0x00F0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTLPlayerHairDefinition                             HairDefinition;                                          // 0x00F8(0x0020) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		class USceneCompositeFaceDef*                              FaceAsset;                                               // 0x0118(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTLPlayerEarDefinition                              EarDefinition;                                           // 0x0120(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		struct FTLPlayerBeardDefinition                            BeardDefinition;                                         // 0x0130(0x0020) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		struct FTLPlayerEyebrowDefinition                          EyebrowDefinition;                                       // 0x0150(0x0018) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		class USceneCompositeBeardDef*                             LongBeardAsset;                                          // 0x0168(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<ESnModelCompositeArmorPart, struct FTLPlayerPartDefinition> PartDefinitions;                                         // 0x0170(0x0050) Edit, EditConst, NativeAccessSpecifierPrivate
		TMap<ESnModelCompositeMasterPosePartsOverlap, struct FTLPlayerPartOverlapDefinition> PartOverlapDefinitions;                                  // 0x01C0(0x0050) Edit, EditConst, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TLScene.TLPlayerCharacterOptions
	 * Size -> 0x0558
	 */
	struct FTLPlayerCharacterOptions
	{
	public:
		class UTLPlayerCharacterAsset*                             PlayerCharacterAsset;                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerCustomizeGenderAsset*                       HairGenderAsset;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerCustomizeGenderAsset*                       FaceGenderAsset;                                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerCustomizeGenderAsset*                       BeardGenderAsset;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLPlayerCustomizeGenderAsset*                       EyebrowGenderAsset;                                      // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LongBeardAsset[0x28];                                    // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EarMesh[0x28];                                           // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<ESnModelCompositeArmorPart, class UTLPlayerOutfitPartGenderAsset*> OutfitPartGenderAssets;                                  // 0x0078(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TattoType3[0x28];                                        // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_IZBQ[0x468];                                 // 0x00F0(0x0468) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLPlayFoAnimationTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTLPlayFoAnimationTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UTLPlayFoAnimationSection*                           Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLProjectileWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FTLProjectileWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_CZI1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLScenarioActorBoundObjectInitialProperty
	 * Size -> 0x0010
	 */
	struct FTLScenarioActorBoundObjectInitialProperty
	{
	public:
		bool                                                       bCollisionEnabled;                                       // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULB3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnDecalReceiveType                                        DecalRecieveType;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20BE[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bCastInsetShadow;                                        // 0x000C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderInMainPass;                                       // 0x000D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth;                                      // 0x000E(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGLC[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLServerSequenceEffectTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTLServerSequenceEffectTemplate : public FMovieSceneEvalTemplate
	{
	public:
		TWeakObjectPtr<class UTLServerSequenceEffectSection>       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.TLTransformTransitionTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTLTransformTransitionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		TWeakObjectPtr<class UTLTransformTransitionSection>        Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_BlendSpacePlayer
	 * Size -> 0x00D8 (FullSize[0x0110] - InheritedSize[0x0038])
	 */
	struct FUnrealAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      X;                                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStartValue;                                          // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6HM[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartX;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartY;                                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetParamOnce;                                           // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetPlayTime;                                          // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultLayer;                                           // 0x0056(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0057(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPosition;                                           // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEKX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetPlayTimeWhenBlendSpaceChanges;                     // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BVP[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendFilter                                        BlendFilter;                                             // 0x0070(0x0078) Protected, NativeAccessSpecifierProtected
		TArray<struct FBlendSampleData>                            BlendSampleDataCache;                                    // 0x00E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UBlendSpaceBase*                                     PreviousBlendSpace;                                      // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ConstantParam;                                           // 0x0100(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInitStartValue;                                         // 0x010C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RWUD[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_BoneHitIK
	 * Size -> 0x0018 (FullSize[0x01F0] - InheritedSize[0x01D8])
	 */
	struct FUnrealAnimNode_BoneHitIK : public FAnimNode_TwoBoneIK
	{
	public:
		class FName                                                TargetBoneName;                                          // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRefresnAnimNodes;                                  // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5FN[0xF];                                   // 0x01E1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_BoneScale
	 * Size -> 0x01A0 (FullSize[0x01B0] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_BoneScale : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0024(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weapon2hGripWeight;                                      // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyOffsetWeight;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustLowerHalfLength;                                  // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUCH[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      LowerHalfRootBoneName;                                   // 0x0038(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LowerHalfEndBoneName0;                                   // 0x0048(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LowerHalfEndBoneName1;                                   // 0x0058(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandBone;                                           // 0x0068(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandContraintBoneOrigin;                            // 0x0078(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandBone;                                            // 0x0088(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandContraintBoneOrigin;                             // 0x0098(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEyeLidControl;                                          // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO9G[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableIK;                                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHQP[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActualAlpha;                                             // 0x00B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHL7[0xF8];                                  // 0x00B8(0x00F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_BoneTransform
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FUnrealAnimNode_BoneTransform : public FAnimNode_ModifyBone
	{
	public:
		class FName                                                TargetBoneName;                                          // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRefresnAnimNodes;                                  // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4P3[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.ApplyBoneInfo
	 * Size -> 0x0020
	 */
	struct FApplyBoneInfo
	{
	public:
		struct FBoneReference                                      BoneToGet;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            IndividualWeight;                                        // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.GetAndApplyBoneRefrence
	 * Size -> 0x0028
	 */
	struct FGetAndApplyBoneRefrence
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BoneToGet;                                               // 0x0004(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5PV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FApplyBoneInfo>                              BoneToApply;                                             // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_GetAndApplyDeltaTransform
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_GetAndApplyDeltaTransform : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FComponentSpacePoseLink                             ReferencePose;                                           // 0x00C8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGetAndApplyBoneRefrence>                    BonesToGetAndApply;                                      // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bReverseTransformApply;                                  // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJ22[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_IKCalculate
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_IKCalculate : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      HeadBone;                                                // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SpineBone;                                               // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNpcType;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDCR[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NpcHeadBoneName;                                         // 0x00EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NpcSpineBoneName;                                        // 0x00F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZLP[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_MaskedBoneBlend
	 * Size -> 0x00A8 (FullSize[0x00B8] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_MaskedBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0040(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurveBlendOption                                          CurveBlendOption;                                        // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRootMotionBasedOnRootBone;                         // 0x0052(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRelevantPoses;                                       // 0x0053(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ASD[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerBoneBlendWeight>                         PerBoneBlendWeights;                                     // 0x0058(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               SkeletonGuid;                                            // 0x0068(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               VirtualBoneGuid;                                         // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3D6L[0x30];                                  // 0x0088(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_MovingAttack
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_MovingAttack : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      LeftFootBone;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightFootBone;                                           // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPreUpdate;                                              // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_819K[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_PseudoFlinching
	 * Size -> 0x2DF0 (FullSize[0x2E00] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_PseudoFlinching : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0024(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_585W[0x2DCC];                                // 0x0034(0x2DCC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_RandomPlayer
	 * Size -> 0x0068 (FullSize[0x0078] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_RandomPlayer : public FAnimNode_Base
	{
	public:
		TArray<struct FTLRandomPlayerSequenceEntry>                Entries;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMT6[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShuffleMode;                                            // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HHC[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GlobalPlayRate;                                          // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_RetargetingCopyPoseFromMesh
	 * Size -> 0x0088 (FullSize[0x0098] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_RetargetingCopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SourceMeshComponent;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargetMyself : 1;                                    // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSBX[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TargetBoneName;                                          // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3Z1[0x74];                                  // 0x0024(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_SetFootState
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_SetFootState : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      LeftFootBone;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightFootBone;                                           // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_SetIsolatedCurveValue
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_SetIsolatedCurveValue : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurveNames;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TL_LayeredBoneBlend
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	struct FUnrealAnimNode_TL_LayeredBoneBlend : public FAnimNode_LayeredBoneBlend
	{
	public:
		class FName                                                TargetBoneName;                                          // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetBlendDepth;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JN01[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TL_LookAt
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_TL_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LookAtBone;                                              // 0x00D8(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LookAtSocket;                                            // 0x00E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   LookAtTarget;                                            // 0x00F0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0150(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxisOption                                                LookAtAxis;                                              // 0x015C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZQQ[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLookAtAxis;                                        // 0x0160(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x016C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxisOption                                                LookUpAxis;                                              // 0x017D(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVRU[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLookUpAxis;                                        // 0x0180(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookUp_Axis;                                             // 0x018C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClamp;                                             // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TL_LookAtClamp;                                          // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpolationBlend_TL                                     InterpolationType;                                       // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40US[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationTime;                                       // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEAP[0x3C];                                  // 0x01B4(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TL_Trail
	 * Size -> 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
	 */
	struct FUnrealAnimNode_TL_Trail : public FAnimNode_Trail
	{
	public:
		class FName                                                TargetBoneName;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetChainLength;                                       // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRefresnAnimNodes;                                  // 0x026C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJU7[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  TrailRelaxationSpeedTL;                                  // 0x0270(0x0088) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LX1W[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TLAssetBasedAnimDynamics
	 * Size -> 0x0238 (FullSize[0x0300] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_TLAssetBasedAnimDynamics : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                             LocalJointOffset;                                        // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearSpring;                                           // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAngularSpring;                                          // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEUZ[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearSpringConstant;                                    // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularSpringConstant;                                   // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWindWasEnabled;                                         // 0x00E4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26E3[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ComponentLinearAccScale;                                 // 0x00E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x00F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0100(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularBias;                                    // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLZG[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBiasOverride;                                     // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUpdate;                                               // 0x0114(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoEval;                                                 // 0x0115(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDF8[0x2];                                   // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSolverIterationsPreUpdate;                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSolverIterationsPostUpdate;                           // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0120(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TT9[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BonesToCheckLocationDelta;                               // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ETLAnimPhysNodePriority                                    CurrentAllowedPriority;                                  // 0x0140(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_075R[0x1BF];                                 // 0x0141(0x01BF) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TLBlendFacialAnimation
	 * Size -> 0x00E0 (FullSize[0x00F0] - InheritedSize[0x0010])
	 */
	struct FUnrealAnimNode_TLBlendFacialAnimation : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bForceDisable;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPYL[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FacialRootBoneName;                                      // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFacialLipOnly;                                          // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56W9[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LipRootBoneName;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJYS[0xB4];                                  // 0x003C(0x00B4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.TLSimSpaceSettings
	 * Size -> 0x0040
	 */
	struct FTLSimSpaceSettings
	{
	public:
		float                                                      MasterAlpha;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityScaleZ;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearVelocity;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularVelocity;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearAcceleration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularAcceleration;                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExternalLinearDrag;                                      // 0x0018(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalLinearDragV;                                     // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalLinearVelocity;                                  // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalAngularVelocity;                                 // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.UnrealAnimNode_TLRigidBody
	 * Size -> 0x0598 (FullSize[0x0660] - InheritedSize[0x00C8])
	 */
	struct FUnrealAnimNode_TLRigidBody : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PLI[0x98];                                  // 0x00D0(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideWorldGravity;                                    // 0x0168(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0174(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0180(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x018C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0198(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTLSimSpaceSettings                                 SimSpaceSettings;                                        // 0x01A4(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CachedBoundsScale;                                       // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseBoneRef;                                             // 0x01E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLSimulationSpace                                         SimulationSpace;                                         // 0x01F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableCollisionBetweenConstraintBodies;           // 0x01FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8MP[0x1];                                   // 0x01FB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableWorldGeometry : 1;                                // 0x01FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWorldGravity : 1;                               // 0x01FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransferBoneVelocities : 1;                             // 0x01FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeIncomingPoseOnStart : 1;                          // 0x01FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampLinearTranslationLimitToRefPose : 1;               // 0x01FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SCQ[0x3];                                   // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldSpaceMinimumScale;                                  // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EvaluationResetTime;                                     // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityUpdateScale;                                     // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BGJ[0x454];                                 // 0x020C(0x0454) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.PreviewDOFOverrideSetting
	 * Size -> 0x0024
	 */
	struct FPreviewDOFOverrideSetting
	{
	public:
		float                                                      DepthOfFieldSensorWidth;                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalDistanceOffset;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldMinFstop;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldDepthBlurAmount;                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldDepthBlurRadius;                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalRegion;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldNearTransitionRegion;                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFarTransitionRegion;                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.CharPreviewCameraSetting
	 * Size -> 0x0028
	 */
	struct FCharPreviewCameraSetting
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraFov;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFocalDistance;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneFaceDefSeamlinePoint
	 * Size -> 0x0058
	 */
	struct FSceneFaceDefSeamlinePoint
	{
	public:
		unsigned char                                              UnknownData_4YSW[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.SceneCPDSkinVertex
	 * Size -> 0x0014
	 */
	struct FSceneCPDSkinVertex
	{
	public:
		unsigned char                                              UnknownData_9PCG[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.AnimNode_LevelEditorEyeClosing
	 * Size -> 0x00E8 (FullSize[0x01B0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LevelEditorEyeClosing : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_HR38[0xE0];                                  // 0x00C8(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CloseRatio;                                              // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_152G[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MaterialPermutationCondition
	 * Size -> 0x0018
	 */
	struct FMaterialPermutationCondition
	{
	public:
		class FString                                              ConditionKey;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StaticSwitchParameterName;                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLScene.SceneMovementContextCache
	 * Size -> 0x0008
	 */
	struct FSceneMovementContextCache
	{
	public:
		unsigned char                                              UnknownData_3D8K[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLScene.MapMaterialPermutationPerLevel
	 * Size -> 0x0100
	 */
	struct FMapMaterialPermutationPerLevel
	{
	public:
		TMap<class FName, struct FMapBakedConditionList>           LandConditionTable;                                      // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FGuid>                            ComponentVolumeBindings;                                 // 0x0050(0x0050) NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           LandMaterialPermutations;                                // 0x00A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TMap<class FName, struct FMapBakedConditionList>           NewLandConditionTable;                                   // 0x00B0(0x0050) Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
