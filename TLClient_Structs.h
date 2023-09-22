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
	 * Enum TLClient.EEquipSlotEvent
	 */
	enum class EEquipSlotEvent : uint8_t
	{
		Cleared = 0,
		Added   = 1,
		Updated = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.EItemCompareType
	 */
	enum class EItemCompareType : uint8_t
	{
		kCompareOff   = 0,
		kCompareLeft  = 1,
		kCompareRight = 2,
		kCompareAuto  = 3,
		MAX           = 4
	};

	/**
	 * Enum TLClient.ETLBindScrollBar
	 */
	enum class ETLBindScrollBar : uint8_t
	{
		RightStick = 0,
		LeftStick  = 1,
		MAX        = 2
	};

	/**
	 * Enum TLClient.ETLUISystemEvent
	 */
	enum class ETLUISystemEvent : uint8_t
	{
		NONE                  = 0,
		UIMANAGER_PRELOAD_END = 1,
		MAX                   = 2
	};

	/**
	 * Enum TLClient.ETLUIWidgetFloatingEvent
	 */
	enum class ETLUIWidgetFloatingEvent : uint8_t
	{
		EVENT_FOCUS      = 0,
		EVENT_UNFOCUS    = 1,
		EVENT_MOUSE_DOWN = 2,
		EVENT_MOUSE_DRAG = 3,
		EVENT_MOUSE_UP   = 4,
		EVENT_MAX        = 5
	};

	/**
	 * Enum TLClient.ETLBlackboardRangeState
	 */
	enum class ETLBlackboardRangeState : uint8_t
	{
		None      = 0,
		MovingIn  = 1,
		In        = 2,
		MovingOut = 3,
		Out       = 4,
		MAX       = 5
	};

	/**
	 * Enum TLClient.ETLCastleStrongholdCondition
	 */
	enum class ETLCastleStrongholdCondition : uint8_t
	{
		Unknown   = 0,
		Destroyed = 1,
		Building  = 2,
		Damaged   = 3,
		Repairing = 4,
		TheBest   = 5,
		MAX       = 6
	};

	/**
	 * Enum TLClient.ETLCastleOwnerGuild
	 */
	enum class ETLCastleOwnerGuild : uint8_t
	{
		None             = 0,
		MyGuild          = 1,
		EnemyGuild       = 2,
		AllienceGuild    = 3,
		ObservationGuild = 4,
		OtherEnemyGuild  = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.ETLServiceDistanceFrom
	 */
	enum class ETLServiceDistanceFrom : uint8_t
	{
		MyPc      = 0,
		NearestPc = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLInteractioinWith
	 */
	enum class ETLInteractioinWith : uint8_t
	{
		None    = 0,
		Me      = 1,
		Another = 2,
		AnyOne  = 3,
		NoOne   = 4,
		MAX     = 5
	};

	/**
	 * Enum TLClient.ETLBlackboardTimerAction
	 */
	enum class ETLBlackboardTimerAction : uint8_t
	{
		Reset  = 0,
		Update = 1,
		MAX    = 2
	};

	/**
	 * Enum TLClient.ETLBlackboardAssignKeyType
	 */
	enum class ETLBlackboardAssignKeyType : uint8_t
	{
		Bool   = 0,
		Int    = 1,
		Float  = 2,
		String = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLServiceLookAt
	 */
	enum class ETLServiceLookAt : uint8_t
	{
		MyPc      = 0,
		NearestPc = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLServiceStartTarget
	 */
	enum class ETLServiceStartTarget : uint8_t
	{
		MyPc      = 0,
		NearestPc = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLPlatformStorageServerData
	 */
	enum class ETLPlatformStorageServerData : uint8_t
	{
		kPolymorph      = 0,
		kMagicDoll      = 1,
		kItemCollection = 2,
		kCount          = 3,
		MAX             = 4
	};

	/**
	 * Enum TLClient.ETLPlatformStorageCharacterData
	 */
	enum class ETLPlatformStorageCharacterData : uint8_t
	{
		kSkillSet                    = 0,
		kChatTab                     = 1,
		kPolymorphEntry              = 2,
		kCodexAlarm                  = 3,
		kCraftingAlarm               = 4,
		kMagicDollEntry              = 5,
		kShop                        = 6,
		kMapPlayCutsceneList         = 7,
		kContentsOpen                = 8,
		kTutorial                    = 9,
		kInteractionCamera           = 10,
		kTimeTable                   = 11,
		kMemorial                    = 12,
		kWorldPin                    = 13,
		kTargetHelper                = 14,
		kGuildHome                   = 15,
		kContentsAlarm               = 16,
		kGameValue                   = 17,
		kPolymorphCollectionBookmark = 18,
		kMagicDollCollectionBookmark = 19,
		kPolymorphPendingAcquire     = 20,
		kPcRelationship              = 21,
		kGroupChatRoomKeyList        = 22,
		kChallengeAlarm              = 23,
		kChatTabExpandOption         = 24,
		kHudLast                     = 25,
		kHudPreset1                  = 26,
		kHudPreset2                  = 27,
		kHudPreset3                  = 28,
		kHudPreset4                  = 29,
		kHudPreferences              = 30,
		kPolymorphFavoriteList       = 31,
		kWeaponMastery               = 32,
		kAICustomAgreement           = 33,
		kCount                       = 34,
		MAX                          = 35
	};

	/**
	 * Enum TLClient.ETLPlatformStorageUserData
	 */
	enum class ETLPlatformStorageUserData : uint8_t
	{
		kMapFilter           = 0,
		kMapCaptionGroup     = 1,
		kLegacyCharacterList = 2,
		kCount               = 3,
		MAX                  = 4
	};

	/**
	 * Enum TLClient.ETLPlatformStorageGameValueData
	 */
	enum class ETLPlatformStorageGameValueData : uint8_t
	{
		kUser                  = 0,
		kUserOptionDevelopment = 1,
		kRealmGroup            = 2,
		kCount                 = 3,
		MAX                    = 4
	};

	/**
	 * Enum TLClient.ETLStorageDataType
	 */
	enum class ETLStorageDataType : uint8_t
	{
		GameData      = 0,
		UserData      = 1,
		CharacterData = 2,
		ServerData    = 3,
		kCount        = 4,
		MAX           = 5
	};

	/**
	 * Enum TLClient.ETLActionKeyGuideAxisEventType
	 */
	enum class ETLActionKeyGuideAxisEventType : uint8_t
	{
		Up    = 0,
		Down  = 1,
		Left  = 2,
		Right = 3,
		MAX   = 4
	};

	/**
	 * Enum TLClient.ETLActionKeyGuideType
	 */
	enum class ETLActionKeyGuideType : uint8_t
	{
		Key  = 0,
		Dash = 1,
		Axis = 2,
		MAX  = 3
	};

	/**
	 * Enum TLClient.ETLActionSequenceState
	 */
	enum class ETLActionSequenceState : uint8_t
	{
		FIRST_UPDATE      = 0,
		PROCEEDING_UPDATE = 1,
		LAST_UPDATE       = 2,
		MAX               = 3
	};

	/**
	 * Enum TLClient.ETLAlertSound
	 */
	enum class ETLAlertSound : uint8_t
	{
		Off    = 0,
		Sound1 = 1,
		Sound2 = 2,
		Sound3 = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLAlertType
	 */
	enum class ETLAlertType : uint8_t
	{
		UnderAttack        = 0,
		LowPotion          = 1,
		LowHealth          = 2,
		HeavyInventory     = 3,
		GuildMemberPcEnter = 4,
		UnfavoritePcEnter  = 5,
		OccupationInBattle = 6,
		MAX                = 7
	};

	/**
	 * Enum TLClient.ERStreamCursor
	 */
	enum class ERStreamCursor : uint8_t
	{
		None    = 0,
		NCSNext = 1,
		NCSQA   = 2,
		NCSLive = 3,
		AGSNext = 4,
		AGSQA   = 5,
		AGSLive = 6,
		MAX     = 7
	};

	/**
	 * Enum TLClient.EServerType
	 */
	enum class EServerType : uint8_t
	{
		Public        = 0,
		PrivateLocal  = 1,
		PrivateRemote = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.ETLBattleCollectionProgressType
	 */
	enum class ETLBattleCollectionProgressType : uint8_t
	{
		NONE      = 0,
		PROGRESS  = 1,
		COMPLETED = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLBattleCollectionType
	 */
	enum class ETLBattleCollectionType : uint8_t
	{
		NONE      = 0,
		COMBAT    = 1,
		WILD      = 2,
		MagicDoll = 3,
		MAX       = 4
	};

	/**
	 * Enum TLClient.ENavMeshUsageMode
	 */
	enum class ENavMeshUsageMode : uint8_t
	{
		CollisionOnly   = 0,
		PreparedNavMesh = 1,
		DynamicNavMesh  = 2,
		MAX             = 3
	};

	/**
	 * Enum TLClient.ETLTextBlockWidgetCommandType
	 */
	enum class ETLTextBlockWidgetCommandType : uint8_t
	{
		None  = 0,
		Count = 1,
		List  = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLImageWidgetCommandType
	 */
	enum class ETLImageWidgetCommandType : uint8_t
	{
		None  = 0,
		Count = 1,
		List  = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLObserverMode
	 */
	enum class ETLObserverMode : uint8_t
	{
		Off               = 0,
		InvisibleMe       = 1,
		HideNameplate     = 2,
		HideMe            = 3,
		HideNameplateOnly = 4,
		MAX               = 5
	};

	/**
	 * Enum TLClient.ETLSiegeWarfareCommand
	 */
	enum class ETLSiegeWarfareCommand : uint8_t
	{
		None        = 0,
		Standby     = 1,
		InProgress  = 2,
		Usurping    = 3,
		Standby2    = 4,
		InProgress2 = 5,
		Usurping2   = 6,
		Result      = 7,
		MAX         = 8
	};

	/**
	 * Enum TLClient.ETLEnvTimeTypeStep
	 */
	enum class ETLEnvTimeTypeStep : uint8_t
	{
		Begin  = 0,
		Middle = 1,
		End    = 2,
		None   = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLEnvTimeType
	 */
	enum class ETLEnvTimeType : uint8_t
	{
		TimeNight   = 0,
		TimeSunrise = 1,
		TimeDay     = 2,
		TimeSunset  = 3,
		Max         = 4,
		None        = 5
	};

	/**
	 * Enum TLClient.EChatWindow
	 */
	enum class EChatWindow : uint8_t
	{
		kNone             = 0,
		kChatWindowAll    = 1,
		kChatWindowCombat = 2,
		kChatWindowParty  = 3,
		kChatWindowArea   = 4,
		kChatWindowGuild  = 5,
		kChatWindowNew    = 6,
		kChatWindowDebug  = 7,
		MAX               = 8
	};

	/**
	 * Enum TLClient.ECodexFilterObjectStateType
	 */
	enum class ECodexFilterObjectStateType : uint8_t
	{
		kNone    = 0,
		kNormal  = 1,
		kEnable  = 2,
		kDisable = 3,
		MAX      = 4
	};

	/**
	 * Enum TLClient.ETLGamepadInputEvent
	 */
	enum class ETLGamepadInputEvent : uint8_t
	{
		Pressed                = 0,
		Released               = 1,
		LongPressed            = 2,
		LongPressedDoubleClick = 3,
		LongPressedNoDuration  = 4,
		DoubleClick            = 5,
		Custom                 = 6,
		MAX                    = 7
	};

	/**
	 * Enum TLClient.ETLRecordVoiceState
	 */
	enum class ETLRecordVoiceState : uint8_t
	{
		None      = 0,
		Record    = 1,
		NotUse    = 2,
		Recognize = 3,
		MAX       = 4
	};

	/**
	 * Enum TLClient.ETLCommunityChatMessageSubType
	 */
	enum class ETLCommunityChatMessageSubType : uint8_t
	{
		NONE           = 0,
		NORMAL         = 1,
		WORLD          = 2,
		REGION         = 3,
		GUILD_UNION    = 4,
		GUILD          = 5,
		MERCENARY      = 6,
		PARTY          = 7,
		WHISPER        = 8,
		ONE_ON_ONE     = 9,
		GROUP          = 10,
		GUILD_ANNOUNCE = 11,
		MAX            = 12
	};

	/**
	 * Enum TLClient.ETLCommunityChatMessageType
	 */
	enum class ETLCommunityChatMessageType : uint8_t
	{
		NONE     = 0,
		PUBLISH  = 1,
		ENTER    = 2,
		CLOSE    = 3,
		LEAVE    = 4,
		BAN      = 5,
		DEPORT   = 6,
		UNBAN    = 7,
		UNDEPORT = 8,
		MAX      = 9
	};

	/**
	 * Enum TLClient.ETLCommunityChatRoomType
	 */
	enum class ETLCommunityChatRoomType : uint8_t
	{
		NONE        = 0,
		WORLD       = 1,
		REGION      = 2,
		GUILD_UNION = 3,
		GUILD       = 4,
		MERCENARY   = 5,
		PARTY       = 6,
		WHISPER     = 7,
		ONE_ON_ONE  = 8,
		GROUP1      = 9,
		GROUP2      = 10,
		GROUP3      = 11,
		GROUP4      = 12,
		GROUP5      = 13,
		MAX         = 14
	};

	/**
	 * Enum TLClient.ETLCommunityChatOptionalMessageParamType
	 */
	enum class ETLCommunityChatOptionalMessageParamType : uint8_t
	{
		NONE               = 0,
		_STRING_BEGIN      = 1,
		PlatformType       = 2,
		AliasName          = 3,
		RichTextDatas      = 4,
		_STRING_END        = 5,
		_NUMBER_BEGIN      = 6,
		ExpRanking         = 7,
		PvpRanking         = 8,
		ActivePointRanking = 9,
		GuildMemberGrade   = 10,
		_NUMBER_END        = 11,
		_BOOL_BEGIN        = 12,
		IsLeaderGuild      = 13,
		_BOOL_END          = 14,
		MAX                = 15
	};

	/**
	 * Enum TLClient.EContentsAlarmViewerTab
	 */
	enum class EContentsAlarmViewerTab : uint8_t
	{
		Guide = 0,
		Alarm = 1,
		Other = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.EContentsAlarmManagerTab
	 */
	enum class EContentsAlarmManagerTab : uint8_t
	{
		All              = 0,
		CodexAdventure   = 1,
		CodexAchievement = 2,
		Contract         = 3,
		GuildContract    = 4,
		Reward           = 5,
		Max              = 6
	};

	/**
	 * Enum TLClient.EContentsAlarmViewType
	 */
	enum class EContentsAlarmViewType : uint8_t
	{
		Viewer  = 0,
		Manager = 1,
		MAX     = 2
	};

	/**
	 * Enum TLClient.EContentsAlarmType
	 */
	enum class EContentsAlarmType : uint8_t
	{
		AdventureCodex   = 0,
		AchievementCodex = 1,
		Contract         = 2,
		GuildContract    = 3,
		EndOfEnum        = 4,
		MAX              = 5
	};

	/**
	 * Enum TLClient.ETLContentsEventRunType
	 */
	enum class ETLContentsEventRunType : uint8_t
	{
		CHECK_AND_DELETE_IMMEDIATELY = 0,
		CHECK_AND_DELETE_MANUALLY    = 1,
		CHECK_AND_DELETE_MAX         = 2
	};

	/**
	 * Enum TLClient.ETLContentsEvent
	 */
	enum class ETLContentsEvent : uint8_t
	{
		EVENT_IGNORE_CHECK_MOBILITY_POLYMORPH_CONTENTS_OPEN = 0,
		EVENT_IGNORE_CHECK_MOBILITY_POLYMORPH_CONTENTS_MAX  = 1
	};

	/**
	 * Enum TLClient.ETLContentShapeType
	 */
	enum class ETLContentShapeType : uint8_t
	{
		DYNAMIC_EVENT_WARNING = 0,
		DYNAMIC_EVENT_AREA    = 1,
		SIEGE_WARFARE_WARNING = 2,
		SIEGE_WARFARE_AREA    = 3,
		RESTRICT_AREA         = 4,
		REGION_STONE_WARFARE  = 5,
		REGION_STONE_WARNING  = 6,
		REGION_STONE_USURPING = 7,
		BOSS_STONE_USURPING   = 8,
		BOSS_STONE_WARFARE    = 9,
		TAX_DELIVERY_WARNING  = 10,
		TAX_DELIVERY_AREA     = 11,
		FISHING_ROD_AVAILABLE = 12,
		DIRECTIONAL_FORCE     = 13,
		WORLD_BOSS_WARNING    = 14,
		WORLD_BOSS_AREA       = 15,
		FIELD_BOSS_WARNING    = 16,
		FIELD_BOSS_AREA       = 17,
		MAX                   = 18,
		NONE                  = 19
	};

	/**
	 * Enum TLClient.ETLCraftingContentType
	 */
	enum class ETLCraftingContentType : uint8_t
	{
		Crafting     = 0,
		CraftingBook = 1,
		None         = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.ETLCustomizeSceneType
	 */
	enum class ETLCustomizeSceneType : uint8_t
	{
		None     = 0,
		Lobby    = 1,
		Boutique = 2,
		MAX      = 3
	};

	/**
	 * Enum TLClient.ECustomizeDesiredCameraZoom
	 */
	enum class ECustomizeDesiredCameraZoom : uint8_t
	{
		Fullshot = 0,
		Torso    = 1,
		Head     = 2,
		MAX      = 3
	};

	/**
	 * Enum TLClient.EAttendRewardKeyType
	 */
	enum class EAttendRewardKeyType : uint8_t
	{
		Item = 0,
		MAX  = 1
	};

	/**
	 * Enum TLClient.ERewardStatus
	 */
	enum class ERewardStatus : uint8_t
	{
		CanDeliver = 0,
		Expired    = 1,
		Delivered  = 2,
		Locked     = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.EAttendStatus
	 */
	enum class EAttendStatus : uint8_t
	{
		NotAttend  = 0,
		Attended   = 1,
		Scheduled  = 2,
		Attendable = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.EAttendResetType
	 */
	enum class EAttendResetType : uint8_t
	{
		None         = 0,
		Normal       = 1,
		SpecificTime = 2,
		StampAll     = 3,
		MAX          = 4
	};

	/**
	 * Enum TLClient.EProvidingRewardType
	 */
	enum class EProvidingRewardType : uint8_t
	{
		Immediate = 0,
		Manual    = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.EAttendDurationType
	 */
	enum class EAttendDurationType : uint8_t
	{
		General = 0,
		ByUser  = 1,
		MAX     = 2
	};

	/**
	 * Enum TLClient.EAttendUnitType
	 */
	enum class EAttendUnitType : uint8_t
	{
		AccountServer          = 0,
		AccountOnly            = 1,
		AccountCharacter       = 2,
		AccountServerCharacter = 3,
		MAX                    = 4
	};

	/**
	 * Enum TLClient.EDailyDashType
	 */
	enum class EDailyDashType : uint8_t
	{
		General     = 0,
		Consecutive = 1,
		Positioning = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.EDailyDashGameTargetKey
	 */
	enum class EDailyDashGameTargetKey : uint8_t
	{
		None               = 0,
		TLDailyStamp       = 1,
		TLConsecutiveStamp = 2,
		TLFixedDayStamp    = 3,
		MAX                = 4
	};

	/**
	 * Enum TLClient.ETLResurrectionStep
	 */
	enum class ETLResurrectionStep : uint8_t
	{
		IAmAlive            = 0,
		DeathSequence       = 1,
		WaitingUserInput    = 2,
		WaitingServerRes    = 3,
		WaitingResurrection = 4,
		IAmResurrected      = 5,
		MAX                 = 6
	};

	/**
	 * Enum TLClient.ETLResurrectionType
	 */
	enum class ETLResurrectionType : uint8_t
	{
		Default         = 0,
		SiegeWarfare    = 1,
		DynamicEvent    = 2,
		TaxDelivery     = 3,
		InfinityDungeon = 4,
		GuildRaid       = 5,
		WorldBoss       = 6,
		MAX             = 7
	};

	/**
	 * Enum TLClient.ETLShowInfoName
	 */
	enum class ETLShowInfoName : uint8_t
	{
		None                 = 0,
		TLDebug              = 1,
		TLTargetInfo         = 2,
		TLMyPcAction         = 3,
		TLMyPcStat           = 4,
		TLPacketDebug        = 5,
		TLQuest              = 6,
		TLInputStack         = 7,
		TLUITopLevelTree     = 8,
		TLAnalogCursor       = 9,
		TLHudComponent       = 10,
		TLWeather            = 11,
		TLMap                = 12,
		TLSkillContext       = 13,
		TLSkillCooldown      = 14,
		TLSkillFormula       = 15,
		TLSkillQuickSlot     = 16,
		TLGameModeController = 17,
		TLNotifyMoveSync     = 18,
		TLSocketPos          = 19,
		TLObjectManager      = 20,
		TLInteraction        = 21,
		TLCalendar           = 22,
		TLParty              = 23,
		AutoCombat           = 24,
		TLShowActionState    = 25,
		TLUserCamera         = 26,
		TLWidget             = 27,
		TLCamera             = 28,
		TLDmTarget           = 29,
		TLDmTargetGuid       = 30,
		TLScenario           = 31,
		TLSceneWorld         = 32,
		TLLobby              = 33,
		TLEquipWeapon        = 34,
		TLUserWidgetFrame    = 35,
		TLWidgetBank         = 36,
		TLInvenAutoUseSlot   = 37,
		TLGuild              = 38,
		TLDailyDash          = 39,
		EndOfEnum            = 40,
		MAX                  = 41
	};

	/**
	 * Enum TLClient.ETLGlobalSettingParam
	 */
	enum class ETLGlobalSettingParam : uint8_t
	{
		TimeTravelCycleDaysSet                = 0,
		CursorMoveSpeed                       = 1,
		ClientSkillDistMargin                 = 2,
		TargetHelperNextTargetCollisionPlus   = 3,
		ObjectLeaveDuration                   = 4,
		CriticalDamageScale                   = 5,
		CriticalDamageReactionSpeedScale      = 6,
		DotFlinchingScale                     = 7,
		DotFlinchingReactionSpeedScale        = 8,
		TargetingIgnoreModelLoaded            = 9,
		SkipOutOfScreenHitSct                 = 10,
		SkipOutOfScreenProjectile             = 11,
		DistSkipCanSeeFromByRayCheck          = 12,
		IntervalMsForCanSeeFromMyPcByRayCheck = 13,
		UseGraphTaskAtObjectAdvance           = 14,
		MAX                                   = 15
	};

	/**
	 * Enum TLClient.ETLDmFlagName
	 */
	enum class ETLDmFlagName : uint8_t
	{
		None               = 0,
		ObjectInfo         = 1,
		ObjectPos          = 2,
		Abnormal           = 3,
		ObjectId           = 4,
		ObjectGuid         = 5,
		Model              = 6,
		NpcAI              = 7,
		MovePath           = 8,
		PcInfo             = 9,
		Relation           = 10,
		CanSee             = 11,
		ObjPolymorph       = 12,
		Animation          = 13,
		CollisionInfo      = 14,
		AttackBox          = 15,
		NpcColliderLine    = 16,
		Swim               = 17,
		ObjectDist         = 18,
		Physics            = 19,
		ObjOutline         = 20,
		TargetHelper       = 21,
		Mount              = 22,
		ObjectDegree       = 23,
		ObjRangeInfo       = 24,
		Nameplate          = 25,
		PhysicalSurface    = 26,
		HitVolume          = 27,
		ObjectActiveConti  = 28,
		ObjectSkill        = 29,
		ObjHp              = 30,
		ObjAttackable      = 31,
		ObjectActiveFXNode = 32,
		ObjSocket          = 33,
		HeadUI             = 34,
		LoadingStatus      = 35,
		NpcMovePacket      = 36,
		ObjMagicDoll       = 37,
		ObjItem            = 38,
		SceneModel         = 39,
		SoundInfo          = 40,
		TargetPickingInfo  = 41,
		AttackCircle       = 42,
		AttackedPcId       = 43,
		EndOfEnum          = 44,
		MAX                = 45
	};

	/**
	 * Enum TLClient.ETLDistanceCheckDimensionType
	 */
	enum class ETLDistanceCheckDimensionType : uint8_t
	{
		DISTANCE_2D  = 0,
		DISTANCE_3D  = 1,
		DISTANCE_MAX = 2
	};

	/**
	 * Enum TLClient.ETLDistanceCheckOverlapType
	 */
	enum class ETLDistanceCheckOverlapType : uint8_t
	{
		LEAVE = 0,
		ENTER = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.ETLDistanceCheckTargetType
	 */
	enum class ETLDistanceCheckTargetType : uint8_t
	{
		TYPE_OBJECT  = 0,
		TYPE_POSTION = 1,
		TYPE_MAX     = 2
	};

	/**
	 * Enum TLClient.EDungeonWaypointObjectState
	 */
	enum class EDungeonWaypointObjectState : uint8_t
	{
		Opening = 0,
		Opened  = 1,
		Close   = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.EDungeonWaypointLockType
	 */
	enum class EDungeonWaypointLockType : uint8_t
	{
		Open         = 0,
		NotOpen      = 1,
		MemorialLock = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.ETLDEEventEffectStorePointState
	 */
	enum class ETLDEEventEffectStorePointState : uint8_t
	{
		DEACTIVATE            = 0,
		ACTIVATE              = 1,
		ACTIVATE_PAUSE        = 2,
		ACTIVATE_STOP         = 3,
		ACTIVATE_NOT_OCCUPIED = 4,
		MAX                   = 5
	};

	/**
	 * Enum TLClient.ETLDynamicEventHUDType
	 */
	enum class ETLDynamicEventHUDType : uint8_t
	{
		PREPARE  = 0,
		PROGRESS = 1,
		COMPLETE = 2,
		NONE     = 3,
		MAX      = 4
	};

	/**
	 * Enum TLClient.EEnchantFilterType
	 */
	enum class EEnchantFilterType : uint8_t
	{
		All       = 0,
		Weapon    = 1,
		Amor      = 2,
		Accessory = 3,
		EndOfEnum = 4,
		MAX       = 5
	};

	/**
	 * Enum TLClient.EEnchantPhase
	 */
	enum class EEnchantPhase : uint8_t
	{
		Setting       = 0,
		ResultWaiting = 1,
		Result        = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.ETLEnchantTransferProgressActionEvent
	 */
	enum class ETLEnchantTransferProgressActionEvent : uint8_t
	{
		START        = 0,
		LEVEL_CHANGE = 1,
		END          = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.ETLEnchantTransferFailReason
	 */
	enum class ETLEnchantTransferFailReason : uint8_t
	{
		NONE                  = 0,
		TARGET_ITEM_INVALID   = 1,
		MATERIAL_ITEM_INVALID = 2,
		MAXIMUM_LEVEL         = 3,
		NOT_ENOUGH_GOLD       = 4,
		MAX                   = 5
	};

	/**
	 * Enum TLClient.ETLEnchantTransferResult
	 */
	enum class ETLEnchantTransferResult : uint8_t
	{
		SUCCESS                         = 0,
		FAILED_BY_PC_DIED               = 1,
		FAILED_BY_NOT_ENOUGH_GOLD       = 2,
		FAILED_BY_LOCKED_TARGET_ITEM    = 3,
		FAILED_BY_LOCKED_RESOURCE_ITEM  = 4,
		FAILED_BY_INVALID_RESOURCE_ITEM = 5,
		FAILED_BY_INVALID_TARGET_ITEM   = 6,
		FAILED_BY_ENCHANT_LEVEL         = 7,
		MAX                             = 8
	};

	/**
	 * Enum TLClient.ETLEnchantTransferFlow
	 */
	enum class ETLEnchantTransferFlow : uint8_t
	{
		NONE                           = 0,
		READY_TO_START                 = 1,
		TARGET_ITEM_SET                = 2,
		MATERIAL_ITEM_SET              = 3,
		WAIT_TRANSFER_RESULT_SCENE     = 4,
		RESULT_PROGRESS_BAR_ACTION_END = 5,
		WAIT_TO_GO_BACK_START          = 6,
		MAX                            = 7
	};

	/**
	 * Enum TLClient.ETLFieldBossEventState
	 */
	enum class ETLFieldBossEventState : uint8_t
	{
		PREPARE  = 0,
		PROGRESS = 1,
		COMPLETE = 2,
		NONE     = 3,
		MAX      = 4
	};

	/**
	 * Enum TLClient.EFormulaConstant
	 */
	enum class EFormulaConstant : uint8_t
	{
		Error    = 0,
		Min      = 1,
		Max      = 2,
		Add      = 3,
		Mul      = 4,
		Mul2     = 5,
		Mul3     = 6,
		Factor   = 7,
		Factor2  = 8,
		Tooltip1 = 9,
		Tooltip2 = 10
	};

	/**
	 * Enum TLClient.ETLFsmPlaySctType
	 */
	enum class ETLFsmPlaySctType : uint8_t
	{
		None               = 0,
		BTTaskTLMotion     = 1,
		BTTaskTLSceneConti = 2,
		SkillCast          = 3,
		Riding             = 4,
		EntryMotion        = 5,
		LoopMotion         = 6,
		CreatureEvent      = 7,
		PlayInteractionSct = 8,
		NpcLeave           = 9,
		ToggleOff          = 10,
		WeaponSwap         = 11,
		PolymorphCast      = 12,
		MAX                = 13
	};

	/**
	 * Enum TLClient.ETLGachaBranchType
	 */
	enum class ETLGachaBranchType : uint8_t
	{
		ZeroIndex           = 0,
		ItemLevel           = 1,
		PercentageItemLevel = 2,
		GachaItemCount      = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLClient.EModelRotationAxis
	 */
	enum class EModelRotationAxis : uint8_t
	{
		Yaw         = 0,
		Pitch       = 1,
		YawAndPitch = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLGameFlowFlags
	 */
	enum class ETLGameFlowFlags : uint8_t
	{
		NONE         = 0,
		CUSTOM_SCENE = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.ETLGameFlowStage
	 */
	enum class ETLGameFlowStage : uint8_t
	{
		NONE    = 0,
		PREGAME = 1,
		LOBBY   = 2,
		INGAME  = 3,
		MAX     = 4
	};

	/**
	 * Enum TLClient.ETLGameFlowState
	 */
	enum class ETLGameFlowState : uint8_t
	{
		NONE                               = 0,
		SETUP                              = 1,
		INTRO                              = 2,
		LOGIN                              = 3,
		GAME_START                         = 4,
		LOBBY_MAIN                         = 5,
		CHARACTER_SELECT                   = 6,
		CHARACTER_CREATE                   = 7,
		CHARACTER_CUSTOMIZATION            = 8,
		MOVE_TO_GAME                       = 9,
		GAME                               = 10,
		MOVE_TO_LOBBY                      = 11,
		SHUTDOWN                           = 12,
		MOVE_TO_LOBBY_BY_SERVER_DISCONNECT = 13,
		FAST_INGAME                        = 14,
		MAX                                = 15
	};

	/**
	 * Enum TLClient.ETLGameFlowStateEvent
	 */
	enum class ETLGameFlowStateEvent : uint8_t
	{
		EVENT_AGREE_TERMS                              = 0,
		EVENT_GAME_START                               = 1,
		EVENT_CHANGE_ACCOUNT                           = 2,
		EVENT_COMPLETE_FIRST_SETTING                   = 3,
		EVENT_SERVER_TRY_GATE_SERVER_CONNECT           = 4,
		EVENT_SERVER_GATE_SERVER_CONNECTED             = 5,
		EVENT_SERVER_NP_AUTH_GATE_OKAY                 = 6,
		EVENT_SERVER_NP_AUTH_GATE_FAIL                 = 7,
		EVENT_SERVER_GATE_SERVER_CHARACTER_QUERY_OKAY  = 8,
		EVENT_SERVER_GATE_SERVER_CHARACTER_QUERY_FAIL  = 9,
		EVENT_SERVER_GATE_SERVER_CHARACTER_SELECT_OKAY = 10,
		EVENT_SERVER_GATE_SERVER_CHARACTER_SELECT_FAIL = 11,
		EVENT_SERVER_LOBBY_INFO_GATE_OKAY              = 12,
		EVENT_SERVER_LOBBY_INFO_GATE_FAIL              = 13,
		EVENT_SERVER_GAME_AUTH_CLIENT_REQ              = 14,
		EVENT_SERVER_GAME_AUTH_GATE_OKAY               = 15,
		EVENT_SERVER_GAME_AUTH_GATE_FAIL               = 16,
		EVENT_VALIDATE_CHARACTER_NAME_GATE_OKAY        = 17,
		EVENT_VALIDATE_CHARACTER_NAME_GATE_FAIL        = 18,
		EVENT_CREATE_CHARACTER_OKAY                    = 19,
		EVENT_CREATE_CHARACTER_FAIL                    = 20,
		EVENT_SERVER_START_CHARACTER_OKAY              = 21,
		EVENT_SERVER_START_CHARACTER_FAIL              = 22,
		EVENT_BROADCAST_SERVICE_STATUS_UPDATE          = 23,
		EVENT_MAX                                      = 24
	};

	/**
	 * Enum TLClient.ETLLoginEnterActionType
	 */
	enum class ETLLoginEnterActionType : uint8_t
	{
		ACTION_NC_PLATFORM_LOGIN           = 0,
		ACTION_NC_PLATFORM_SHOW_LOGIN_PAGE = 1,
		ACTION_NC_PLATFORM_MAX             = 2
	};

	/**
	 * Enum TLClient.EServerPopulationStatus
	 */
	enum class EServerPopulationStatus : uint8_t
	{
		Low    = 0,
		Medium = 1,
		Full   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLLobbyStateChangeReason
	 */
	enum class ETLLobbyStateChangeReason : uint8_t
	{
		REASON_NONE              = 0,
		REASON_STARTUP           = 1,
		REASON_GAME_FLOW         = 2,
		REASON_SERVER_DISCONNECT = 3,
		REASON_IMMEDIATE_CHANGE  = 4,
		REASON_MAX               = 5
	};

	/**
	 * Enum TLClient.ELobbySceneState
	 */
	enum class ELobbySceneState : uint8_t
	{
		Title           = 0,
		Main            = 1,
		CharacterSelect = 2,
		ServerSelect    = 3,
		Customize       = 4,
		Transition      = 5,
		MAX             = 6
	};

	/**
	 * Enum TLClient.ELobbyActorSceneType
	 */
	enum class ELobbyActorSceneType : uint8_t
	{
		ServerSelect     = 0,
		CharacterPreview = 1,
		Customize        = 2,
		Beautyshop       = 3,
		MAX              = 4
	};

	/**
	 * Enum TLClient.ETLGameLobbyEnterReason
	 */
	enum class ETLGameLobbyEnterReason : uint8_t
	{
		REASON_LOGIN            = 0,
		REASON_CHARACTER_SELECT = 1,
		NONE                    = 2,
		MAX                     = 3
	};

	/**
	 * Enum TLClient.ETLEquipParts
	 */
	enum class ETLEquipParts : uint8_t
	{
		HELMET = 0,
		TORSO  = 1,
		PANTS  = 2,
		GLOVES = 3,
		BOOTS  = 4,
		CAPE   = 5,
		MAX    = 6
	};

	/**
	 * Enum TLClient.ETLGameLobbyStep
	 */
	enum class ETLGameLobbyStep : uint8_t
	{
		NONE                    = 0,
		STEP_ENTER_WITH_LOGIN   = 1,
		STEP_MAKE_PRE_CHARACTER = 2,
		STEP_GAME_LOBBY_START   = 3,
		STEP_GAME_LOBBY         = 4,
		STEP_GAME_LOBBY_END     = 5,
		MAX                     = 6
	};

	/**
	 * Enum TLClient.ETLGroupRelationType
	 */
	enum class ETLGroupRelationType : uint8_t
	{
		RELATION_BY_GUILD = 0,
		RELATION_BY_UNION = 1,
		RELATION_MAX      = 2
	};

	/**
	 * Enum TLClient.EGrowthPassRewardStatus
	 */
	enum class EGrowthPassRewardStatus : uint8_t
	{
		None        = 0,
		CantDeliver = 1,
		CanDeliver  = 2,
		Delivered   = 3,
		Locked      = 4,
		MAX         = 5
	};

	/**
	 * Enum TLClient.ETLGrowthPassMissionType
	 */
	enum class ETLGrowthPassMissionType : uint8_t
	{
		None                    = 0,
		LevelAchievementMission = 1,
		GrowthMission           = 2,
		MAX                     = 3
	};

	/**
	 * Enum TLClient.EGuildPostWriteLevel
	 */
	enum class EGuildPostWriteLevel : uint8_t
	{
		MASTER      = 0,
		MASTERGROUP = 1,
		MAX         = 2
	};

	/**
	 * Enum TLClient.EGuildDistributionJoinModifyStatus
	 */
	enum class EGuildDistributionJoinModifyStatus : uint8_t
	{
		None    = 0,
		Added   = 1,
		Removed = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.EGuildDistributionType
	 */
	enum class EGuildDistributionType : uint8_t
	{
		Boss         = 0,
		SiegeWarfare = 1,
		GuildEvent   = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.EGuildBossItemAcquireType
	 */
	enum class EGuildBossItemAcquireType : uint8_t
	{
		ACQUIRE_PRIVATE = 0,
		GUILD_STORAGE   = 1,
		MAX             = 2
	};

	/**
	 * Enum TLClient.EGuildDistributionAuthLevel
	 */
	enum class EGuildDistributionAuthLevel : uint8_t
	{
		MASTER      = 0,
		MASTERGROUP = 1,
		GUARDIAN    = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.EDistributionGuildSellPeriod
	 */
	enum class EDistributionGuildSellPeriod : uint8_t
	{
		Period_5Min  = 0,
		Period_1Hour = 1,
		Period_6Hour = 2,
		Period_1Day  = 3,
		Period_3Day  = 4,
		Period_MAX   = 5
	};

	/**
	 * Enum TLClient.EDistributionGuildSellState
	 */
	enum class EDistributionGuildSellState : uint8_t
	{
		FixedPrice = 0,
		Bidding    = 1,
		Pass       = 2,
		Tradeshop  = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.EDistibutionItemState
	 */
	enum class EDistibutionItemState : uint8_t
	{
		WaitOwner                      = 0,
		WaitGuildManage                = 1,
		SellingTradeShop               = 2,
		SellingGuildMemberFixedDiamond = 3,
		SellingGuildMemberBidding      = 4,
		WaitDistribution               = 5,
		DistributionFinish             = 6,
		WaitTradeSell                  = 7,
		WaitGuildMemberSell            = 8,
		PrivateAcquisition             = 9,
		None                           = 10,
		MAX                            = 11
	};

	/**
	 * Enum TLClient.EGuildRewardBoxState
	 */
	enum class EGuildRewardBoxState : uint8_t
	{
		HaveLastSeasonReward    = 0,
		HaveCurrentSeasonReward = 1,
		NoneSeasonReward        = 2,
		StateMax                = 3,
		MAX                     = 4
	};

	/**
	 * Enum TLClient.EGuildHomeState
	 */
	enum class EGuildHomeState : uint8_t
	{
		HomeLock = 0,
		HomeOpen = 1,
		MAX      = 2
	};

	/**
	 * Enum TLClient.EGuildJoinType
	 */
	enum class EGuildJoinType : uint8_t
	{
		Invite      = 0,
		Immediately = 1,
		Password    = 2,
		Closed      = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EGuildCreateFailureReason
	 */
	enum class EGuildCreateFailureReason : uint8_t
	{
		Unknown                          = 0,
		AlreadyJoinOtherGuild            = 1,
		CharacterNameNotConfirmed        = 2,
		NeedMoreGuildMasterLevel         = 3,
		NotEnoughCost                    = 4,
		InvalidEmblemColor               = 5,
		NeedMoreGuildLevelForEmblem      = 6,
		NeedMoreGuildLevelForEmblemColor = 7,
		IncludingBannedWords             = 8,
		NameAlreadyUsed                  = 9,
		InappropriateLength              = 10,
		InvalidSpaceLocation             = 11,
		NotSupportedWordType             = 12,
		DataStoreAccess                  = 13,
		FailedByIncludingBannedWord      = 14,
		MAX                              = 15
	};

	/**
	 * Enum TLClient.EGuildReputationRewardState
	 */
	enum class EGuildReputationRewardState : uint8_t
	{
		AlreadyDone   = 0,
		SuccessReward = 1,
		TargetFail    = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.EGuildMainTabType
	 */
	enum class EGuildMainTabType : uint8_t
	{
		TAB_GUILD_LIST         = 0,
		TAB_GUILD_CREATE       = 1,
		TAB_GUILD_INFO         = 2,
		TAB_GUILD_MEMBER_LIST  = 3,
		TAB_GUILD_RELATIONSHIP = 4,
		TAB_GUILD_PVP_INFO     = 5,
		TAB_GUILD_MANAGEMENT   = 6,
		TAB_GUILD_SKILL        = 7,
		TAB_GUILD_CONTRACT     = 8,
		TAB_GUILD_OCCUPATION   = 9,
		TAB_GUILD_BENEFIT      = 10,
		TAB_GUILD_DISTRIBUTION = 11,
		TAB_GUILD_REWARD       = 12,
		TAB_GUILD_MAX          = 13
	};

	/**
	 * Enum TLClient.EGuildViewFrameType
	 */
	enum class EGuildViewFrameType : uint8_t
	{
		ViewList  = 0,
		GuildInfo = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLNameplateType
	 */
	enum class ETLNameplateType : uint8_t
	{
		kNone    = 0,
		kNpc     = 1,
		kOtherPc = 2,
		kMyPc    = 3,
		kItem    = 4,
		kFo      = 5,
		MAX      = 6
	};

	/**
	 * Enum TLClient.EChatBalloonType
	 */
	enum class EChatBalloonType : uint8_t
	{
		kNormal    = 0,
		kClue      = 1,
		kHint      = 2,
		kNone      = 3,
		kGrayscale = 4,
		MAX        = 5
	};

	/**
	 * Enum TLClient.ETLStopCastingReason
	 */
	enum class ETLStopCastingReason : uint8_t
	{
		Success     = 0,
		Canceled    = 1,
		Interrupted = 2,
		EndOfEnum   = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.ETLHudComponentUIType
	 */
	enum class ETLHudComponentUIType : uint8_t
	{
		MyPcInfo            = 0,
		PartyUI             = 1,
		DpadButtonQuickSlot = 2,
		CombatControl       = 3,
		FaceButtonQuickSlot = 4,
		ContentsViewer      = 5,
		ExpText             = 6,
		ExpBar              = 7,
		EndOfEnum           = 8,
		MAX                 = 9
	};

	/**
	 * Enum TLClient.ETLHudComponentCondition
	 */
	enum class ETLHudComponentCondition : uint8_t
	{
		CombatStatus            = 0,
		HpCostLessThanMax       = 1,
		PressSkillSlotGroup     = 2,
		PressQuickSlot          = 3,
		ExpLessThanZero         = 4,
		ExpChanged              = 5,
		HubMenu                 = 6,
		TargetMode              = 7,
		BadAbnormal             = 8,
		InputMoveOrCamera       = 9,
		InputKey                = 10,
		ContentAlarmListChanged = 11,
		ContentAlarmReward      = 12,
		JoinEvent               = 13,
		TargetScanShow          = 14,
		AmitoiInteractionShow   = 15,
		EndOfEnum               = 16,
		MAX                     = 17
	};

	/**
	 * Enum TLClient.ETLInspectionTraceType
	 */
	enum class ETLInspectionTraceType : uint8_t
	{
		None   = 0,
		Answer = 1,
		Hint   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.EInvenModeType
	 */
	enum class EInvenModeType : uint8_t
	{
		None               = 0,
		Inventory          = 1,
		Shop               = 2,
		Storage            = 3,
		Crafting           = 4,
		Equip              = 5,
		Enchant            = 6,
		ItemDecomposition  = 7,
		ItemCollection     = 8,
		Trade              = 9,
		ItemDestroy        = 10,
		RingMenu           = 11,
		StorageMultiSelect = 12,
		QuickSlotEdit      = 13,
		SkillBook          = 14,
		ItemPackage        = 15,
		ItemListView       = 16,
		MAX                = 17
	};

	/**
	 * Enum TLClient.EItemSlotType
	 */
	enum class EItemSlotType : uint8_t
	{
		None      = 0,
		Storage   = 1,
		Inventory = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLItemCollectionNonRegisterableReason
	 */
	enum class ETLItemCollectionNonRegisterableReason : uint8_t
	{
		None       = 0,
		HasNoItem  = 1,
		PresetItem = 2,
		Wearing    = 3,
		Locked     = 4,
		MAX        = 5
	};

	/**
	 * Enum TLClient.ETLItemCollectableState
	 */
	enum class ETLItemCollectableState : uint8_t
	{
		None                    = 0,
		Completed               = 1,
		ConditionalRegisterable = 2,
		Registerable            = 3,
		MAX                     = 4
	};

	/**
	 * Enum TLClient.ETLItemCollectionRewardState
	 */
	enum class ETLItemCollectionRewardState : uint8_t
	{
		None        = 0,
		CantDeliver = 1,
		CanDeliver  = 2,
		Delivered   = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EItemCompositionType
	 */
	enum class EItemCompositionType : uint8_t
	{
		None      = 0,
		Polymorph = 1,
		EndOfEnum = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.TLItemCompositionDef
	 */
	enum class ETLItemCompositionDef : uint8_t
	{
		TLItemCompositionDefkSuccess                     = 0,
		TLItemCompositionDefkFailBySystem                = 1,
		TLItemCompositionDefkFailByNotEnoughMaterials    = 2,
		TLItemCompositionDefkFailByTooMuchCompositeCount = 3,
		TLItemCompositionDefkFailedByNotEnoughInvenSpace = 4,
		TLItemCompositionDefTLItemCompositionDef_MAX     = 5
	};

	/**
	 * Enum TLClient.ETLItemSlotViewDragOverSideState
	 */
	enum class ETLItemSlotViewDragOverSideState : uint8_t
	{
		kNone  = 0,
		kLeft  = 1,
		kRight = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ELobbyMessage
	 */
	enum class ELobbyMessage : uint8_t
	{
		kNone                                 = 0,
		kLobbyMessage_LogoFinished            = 1,
		kLobbyMessage_PhotoSensitiveWarningOK = 2,
		kLobbyMessage_WarningFinished         = 3,
		kLobbyMessage_TitleIntroFinished      = 4,
		kLobbyMessage_SettingoFinished        = 5,
		kLobbyMessage_LoginIn                 = 6,
		kLobbyMessage_QuitGame                = 7,
		kLobbyMessage_Agreed                  = 8,
		kLobbyMessage_Disagree                = 9,
		kLobbyMessage_CreateCharacter         = 10,
		kLobbyMessage_StartGame               = 11,
		kLobbyMessage_LogOut                  = 12,
		kLobbyMessage_IntroFinished           = 13,
		MAX                                   = 14
	};

	/**
	 * Enum TLClient.ETLMagicDollGachaSceneState
	 */
	enum class ETLMagicDollGachaSceneState : uint8_t
	{
		ENTER_GACHA      = 0,
		ACTOR_SPAWN      = 1,
		WAIT_CLICK_ACTOR = 2,
		PRE_RESULT       = 3,
		RESULT           = 4,
		POST_RESULT      = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.EMagicDollGuideType
	 */
	enum class EMagicDollGuideType : uint8_t
	{
		None            = 0,
		NoRequiredItem  = 1,
		AlreadySummoned = 2,
		NotAcquired     = 3,
		kEndOfEnum      = 4,
		MAX             = 5
	};

	/**
	 * Enum TLClient.ETLUIMagicDollGrade
	 */
	enum class ETLUIMagicDollGrade : uint8_t
	{
		All  = 0,
		AAA  = 1,
		AA   = 2,
		A    = 3,
		B    = 4,
		C    = 5,
		MAX  = 6,
		NONE = 7
	};

	/**
	 * Enum TLClient.ETLProgressBarStateType
	 */
	enum class ETLProgressBarStateType : uint8_t
	{
		kComplete  = 0,
		kNormal    = 1,
		kWarning   = 2,
		kEndOfEnum = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.ETLWorldampTabType
	 */
	enum class ETLWorldampTabType : uint8_t
	{
		RegionList = 0,
		PinList    = 1,
		Caption    = 2,
		TimeTable  = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.EMapDrawLineType
	 */
	enum class EMapDrawLineType : uint8_t
	{
		Line     = 0,
		MeshLine = 1,
		MAX      = 2
	};

	/**
	 * Enum TLClient.EWorldmapOpenMode
	 */
	enum class EWorldmapOpenMode : uint8_t
	{
		Default             = 0,
		Pin                 = 1,
		ItemDropInfo        = 2,
		DynamicEvent        = 3,
		Npc                 = 4,
		Fo                  = 5,
		TargetInfo          = 6,
		Hyperlink           = 7,
		GuildMemberAttacked = 8,
		GuildOccupation     = 9,
		MAX                 = 10
	};

	/**
	 * Enum TLClient.ETLMapModeType
	 */
	enum class ETLMapModeType : uint8_t
	{
		NONE        = 0,
		WORLD_MAP   = 1,
		MINI_MAP    = 2,
		OVERLAY_MAP = 3,
		COMPASS_MAP = 4,
		MAX         = 5
	};

	/**
	 * Enum TLClient.ETLMinimapPanningState
	 */
	enum class ETLMinimapPanningState : uint8_t
	{
		NONE             = 0,
		MOVING           = 1,
		RETURN_TO_MY_POS = 2,
		MAX              = 3
	};

	/**
	 * Enum TLClient.ETLSiegeWarfareStatus
	 */
	enum class ETLSiegeWarfareStatus : uint8_t
	{
		NONE        = 0,
		STANDBY     = 1,
		IN_PROGRESS = 2,
		RESULT      = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EMemorialRecordGoalType
	 */
	enum class EMemorialRecordGoalType : uint8_t
	{
		kNone = 0,
		kOne  = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.EMemorialStatus
	 */
	enum class EMemorialStatus : uint8_t
	{
		kNone     = 0,
		kProgress = 1,
		kComplete = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.EMemorialRecordUnlockStatus
	 */
	enum class EMemorialRecordUnlockStatus : uint8_t
	{
		Empty    = 0,
		Locked   = 1,
		Unlocked = 2,
		MAX      = 3
	};

	/**
	 * Enum TLClient.ETLPushMessageCategoryType
	 */
	enum class ETLPushMessageCategoryType : uint8_t
	{
		None                              = 0,
		NOTIFICATION_QUEUE_CONNECTION     = 1,
		NOTIFICATION_AAA_ITEM_ACQUISITION = 2,
		NOTIFICATION_AA_ITEM_ACQUISITION  = 3,
		NOTIFICATION_A_ITEM_ACQUISITION   = 4,
		NOTIFICATION_EVENT_START          = 5,
		NOTIFICATION_EXCHANGE_SALES       = 6,
		MAX                               = 7
	};

	/**
	 * Enum TLClient.ETLWeaponMasteryMsgBoxType
	 */
	enum class ETLWeaponMasteryMsgBoxType : uint8_t
	{
		None    = 0,
		Open    = 1,
		Upgrade = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.ETLQuitGameMsgBoxType
	 */
	enum class ETLQuitGameMsgBoxType : uint8_t
	{
		None       = 0,
		AutoCombat = 1,
		UnderCover = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.ETLMsgBoxProgressBarPlayType
	 */
	enum class ETLMsgBoxProgressBarPlayType : uint8_t
	{
		TYPE_FIX_VALUE     = 0,
		TYPE_TIME_INCREASE = 1,
		TYPE_TIME_DECREASE = 2,
		TYPE_MAX           = 3
	};

	/**
	 * Enum TLClient.ETLMsgBoxShowType
	 */
	enum class ETLMsgBoxShowType : uint8_t
	{
		MB_IN_ORDER    = 0,
		MB_IMMEDIATELY = 1,
		MB_CLEAR       = 2,
		MB_STANDALONE  = 3,
		MB_PENDING     = 4,
		MB_MAX         = 5
	};

	/**
	 * Enum TLClient.ETLMsgBoxInputType
	 */
	enum class ETLMsgBoxInputType : uint8_t
	{
		FOCUS           = 0,
		MODAL           = 1,
		MODALESS        = 2,
		MODAL_NO_DIMMED = 3,
		MAX             = 4
	};

	/**
	 * Enum TLClient.ETLMsgBoxType
	 */
	enum class ETLMsgBoxType : uint8_t
	{
		TYPE_TEXT                        = 0,
		TYPE_TEXT_INPUT                  = 1,
		TYPE_NUMERIC_INPUT               = 2,
		TYPE_PROGRESS_BAR                = 3,
		TYPE_SLIDER                      = 4,
		TYPE_ITEMLIST                    = 5,
		TYPE_SHOPBUY                     = 6,
		TYPE_WAYPOINT                    = 7,
		TYPE_TOPMOST                     = 8,
		TYPE_PLEDGE                      = 9,
		TYPE_TRADE_PURCHASE              = 10,
		TYPE_TRADE_PURCHASE_RES          = 11,
		TYPE_TRADE_SALE                  = 12,
		TYPE_TRADE_SALE_CONFIRM          = 13,
		TYPE_GUILDSKILL_CONFIRM          = 14,
		TYPE_COST_CONFIRM                = 15,
		TYPE_COMBOBOX                    = 16,
		TYPE_COMBOINPUTBOX               = 17,
		TYPE_GUILD_DISTRIBUTION          = 18,
		TYPE_WEAPON_MASTERY_OPEN_NODE    = 19,
		TYPE_WEAPON_MASTERY_RESET_NODE   = 20,
		TYPE_WEAPON_MASTERY_ENCHANT_NODE = 21,
		TYPE_TEXT_POS                    = 22,
		TYPE_TEXT_INPUT_PASSWORD         = 23,
		TYPE_SEASONPASS_PURCHASE         = 24,
		TYPE_CHECKBOX                    = 25,
		TYPE_GAMEQUIT                    = 26,
		TYPE_RESTORATION_CONFIRM         = 27,
		TYPE_SKILL_INTERACTION_PROGRESS  = 28,
		TYPE_REWARD                      = 29,
		TYPE_CRAFTPROBABILITY            = 30,
		TYPE_CONTRACT_CONFIRM            = 31,
		TYPE_NONE                        = 32,
		TYPE_MAX                         = 33
	};

	/**
	 * Enum TLClient.ETLMsgBoxBtnType
	 */
	enum class ETLMsgBoxBtnType : uint8_t
	{
		BT_OK      = 0,
		BT_CANCEL  = 1,
		BT_YES     = 2,
		BT_NO      = 3,
		BT_TIMEOUT = 4,
		BT_MAX     = 5
	};

	/**
	 * Enum TLClient.ETLMsgBoxBtnStyle
	 */
	enum class ETLMsgBoxBtnStyle : uint8_t
	{
		BS_OK            = 0,
		BS_OK_CANCEL     = 1,
		BS_YES_NO        = 2,
		BS_YES_NO_CANCEL = 3,
		BS_CANCEL        = 4,
		BS_ACCEPT        = 5,
		BS_MAX           = 6
	};

	/**
	 * Enum TLClient.ETLSpecialMoveSpeedDirection
	 */
	enum class ETLSpecialMoveSpeedDirection : uint8_t
	{
		XYBase = 0,
		ZBase  = 1,
		MAX    = 2
	};

	/**
	 * Enum TLClient.EMoveState
	 */
	enum class EMoveState : uint8_t
	{
		WALK     = 0,
		FALLING  = 1,
		GLIDING  = 2,
		SWIMMING = 3,
		RIDER    = 4,
		MAX      = 5
	};

	/**
	 * Enum TLClient.ETLMoviePlayEvent
	 */
	enum class ETLMoviePlayEvent : uint8_t
	{
		EVENT_MOVIE_START  = 0,
		EVENT_MOVIE_FINISH = 1,
		EVENT_MOVIE_MAX    = 2
	};

	/**
	 * Enum TLClient.ETLMovieSceneType
	 */
	enum class ETLMovieSceneType : uint8_t
	{
		MOVIE    = 0,
		CUTSCENE = 1,
		MAX      = 2
	};

	/**
	 * Enum TLClient.ETLKeepActionType
	 */
	enum class ETLKeepActionType : uint8_t
	{
		kNone   = 0,
		kAttack = 1,
		kMove   = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.ETLPlayerActionState
	 */
	enum class ETLPlayerActionState : uint8_t
	{
		None = 0,
		Idle = 1,
		Move = 2,
		Jump = 3,
		MAX  = 4
	};

	/**
	 * Enum TLClient.ETLPcActionType
	 */
	enum class ETLPcActionType : uint8_t
	{
		kSkill          = 0,
		kInteract       = 1,
		kMoveToLocation = 2,
		kFollowObject   = 3,
		kMoveAfterTurn  = 4,
		kEndOfEnum      = 5,
		MAX             = 6
	};

	/**
	 * Enum TLClient.ETLAutoCombatIncludingGroup
	 */
	enum class ETLAutoCombatIncludingGroup : uint8_t
	{
		CodexAdventure   = 0,
		CodexAchievement = 1,
		NpcContract      = 2,
		ItemContract     = 3,
		GuildContract    = 4,
		MAX              = 5
	};

	/**
	 * Enum TLClient.ETLAutoCombatPriority
	 */
	enum class ETLAutoCombatPriority : uint8_t
	{
		MANUAL      = 0,
		ITEM        = 1,
		ATTACKINGME = 2,
		TARGETINGME = 3,
		CONTRACT    = 4,
		RO          = 5,
		NEAREST     = 6,
		MAX         = 7
	};

	/**
	 * Enum TLClient.ETLSearchRange
	 */
	enum class ETLSearchRange : uint8_t
	{
		Range_10m = 0,
		Range_20m = 1,
		Range_30m = 2,
		Range_40m = 3,
		Range_60m = 4,
		Range_80m = 5,
		Range_MAX = 6
	};

	/**
	 * Enum TLClient.ETLAutoCombatActionType
	 */
	enum class ETLAutoCombatActionType : uint8_t
	{
		PICK_ITEM      = 0,
		ATTACK         = 1,
		FO_INTERACTION = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.EDisability
	 */
	enum class EDisability : uint8_t
	{
		None            = 0,
		UseSkill        = 1,
		UseSkillMelee   = 2,
		UseSkillRange   = 3,
		UseSkillMagic   = 4,
		Move            = 5,
		EquipItem       = 6,
		Interact        = 7,
		PickUpItem      = 8,
		UseItem         = 9,
		Jump            = 10,
		Run             = 11,
		WeaponSwap      = 12,
		All             = 13,
		AllForSkill     = 14,
		AllForMoveSkill = 15,
		AllForMount     = 16,
		EndOfEnum       = 17,
		Error           = 18,
		MAX             = 19
	};

	/**
	 * Enum TLClient.ETLMyContentImportanceRole
	 */
	enum class ETLMyContentImportanceRole : uint8_t
	{
		MyPc        = 0,
		PartyMember = 1,
		Target      = 2,
		Boss        = 3,
		Etc         = 4,
		Types       = 5,
		MAX         = 6
	};

	/**
	 * Enum TLClient.ENotifyLifeCycle
	 */
	enum class ENotifyLifeCycle : uint8_t
	{
		None        = 0,
		Waiting     = 1,
		Progress    = 2,
		Destruction = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.ETLNpcSectorTargetMarker
	 */
	enum class ETLNpcSectorTargetMarker : uint8_t
	{
		kNone         = 0,
		kNpcSectorOn  = 1,
		kNpcSectorOff = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.EMoveFailReason
	 */
	enum class EMoveFailReason : uint8_t
	{
		kUnknown                = 0,
		kInvalidReq             = 1,
		kCanNotMove             = 2,
		kDead                   = 3,
		kNoSection              = 4,
		kCanNotEnter            = 5,
		kCooldown               = 6,
		kBlocked                = 7,
		kNoStamina              = 8,
		kInvalidForcedMoveSpeed = 9,
		kTinyMove               = 10,
		kSampleGround           = 11,
		kSampleClimbing         = 12,
		kEndOfEnum              = 13,
		MAX                     = 14
	};

	/**
	 * Enum TLClient.ETLTargetMarkerDist
	 */
	enum class ETLTargetMarkerDist : uint8_t
	{
		None       = 0,
		ShortRange = 1,
		LongRange  = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.ETLTargetMarker
	 */
	enum class ETLTargetMarker : uint8_t
	{
		None                             = 0,
		TargetButNotSeen                 = 1,
		TargetMarkerShortRangeOutOfSight = 2,
		TargetMarkerLongRangeOutOfSight  = 3,
		AutoTarget                       = 4,
		AutoTargetOutOfSight             = 5,
		HoldTarget                       = 6,
		HoldTargetOutOfSight             = 7,
		NeurtralTarget                   = 8,
		NeurtralTargetOutOfSight         = 9,
		GamepadTarget                    = 10,
		GamepadAimCandidateTarget        = 11,
		GamepadAimSelectTarget           = 12,
		MAX                              = 13
	};

	/**
	 * Enum TLClient.ETLRelationColorToMyPc
	 */
	enum class ETLRelationColorToMyPc : uint8_t
	{
		kMyPc                = 0,
		kNeutral             = 1,
		kEnemyGuild          = 2,
		kParty               = 3,
		kMyGuild             = 4,
		kObservationGuild    = 5,
		kAllyGuild           = 6,
		kNeutralPvp          = 7,
		kEnemyGuildPvp       = 8,
		kObservationGuildPvp = 9,
		kNpcNeutral          = 10,
		kNpcAggressive       = 11,
		kNpcHostile          = 12,
		kNpcFriendly         = 13,
		MAX                  = 14
	};

	/**
	 * Enum TLClient.ETLRelationToMyPc
	 */
	enum class ETLRelationToMyPc : uint8_t
	{
		kAggressive     = 0,
		kHostile        = 1,
		kFriendly       = 2,
		kNeutral        = 3,
		kMyParty        = 4,
		kMyPartyHostile = 5,
		kEndOfEnum      = 6,
		MAX             = 7
	};

	/**
	 * Enum TLClient.EOccupationProtectType
	 */
	enum class EOccupationProtectType : uint8_t
	{
		GuildSkill   = 0,
		DynamicEvent = 1,
		ChangeOwner  = 2,
		None         = 3,
		MAX          = 4
	};

	/**
	 * Enum TLClient.EOccupationState
	 */
	enum class EOccupationState : uint8_t
	{
		Peace    = 0,
		Usurping = 1,
		Dispute  = 2,
		Protect  = 3,
		Result   = 4,
		MAX      = 5
	};

	/**
	 * Enum TLClient.EOccupationType
	 */
	enum class EOccupationType : uint8_t
	{
		RegionStone = 0,
		BossStone   = 1,
		MAX         = 2
	};

	/**
	 * Enum TLClient.ETLDPIScaleStep
	 */
	enum class ETLDPIScaleStep : uint8_t
	{
		None   = 0,
		STEP   = 1,
		STEP01 = 2,
		STEP02 = 3,
		STEP03 = 4,
		STEP04 = 5,
		MAX    = 6
	};

	/**
	 * Enum TLClient.ETLPCMapModeType
	 */
	enum class ETLPCMapModeType : uint8_t
	{
		MINI_MAP    = 0,
		COMPASS_MAP = 1,
		MAX         = 2
	};

	/**
	 * Enum TLClient.ETLTabUIMode
	 */
	enum class ETLTabUIMode : uint8_t
	{
		Default   = 0,
		Streaming = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLDecomposeItemGrade
	 */
	enum class ETLDecomposeItemGrade : uint8_t
	{
		Off    = 0,
		GradeC = 1,
		GradeB = 2,
		GradeA = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLGamepadPreset
	 */
	enum class ETLGamepadPreset : uint8_t
	{
		Type1 = 0,
		Type2 = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.ETLTabScanOnly
	 */
	enum class ETLTabScanOnly : uint8_t
	{
		Normal   = 0,
		ScanOnly = 1,
		MAX      = 2
	};

	/**
	 * Enum TLClient.ETLQuickSlotAutoUseCondition
	 */
	enum class ETLQuickSlotAutoUseCondition : uint8_t
	{
		OnMoveOrCombat = 0,
		Always         = 1,
		MAX            = 2
	};

	/**
	 * Enum TLClient.ETLItemPickupWeightLimit
	 */
	enum class ETLItemPickupWeightLimit : uint8_t
	{
		Off    = 0,
		First  = 1,
		Second = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLItemPickupType
	 */
	enum class ETLItemPickupType : uint8_t
	{
		All       = 0,
		MoreThanB = 1,
		MoreThanA = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLTabTargetPriority
	 */
	enum class ETLTabTargetPriority : uint8_t
	{
		NpcFirst = 0,
		PcFirst  = 1,
		All      = 2,
		NpcOnly  = 3,
		PcOnly   = 4,
		MAX      = 5
	};

	/**
	 * Enum TLClient.ETLConsoleGraphicOption
	 */
	enum class ETLConsoleGraphicOption : uint8_t
	{
		Quality     = 0,
		Performance = 1,
		MAX         = 2
	};

	/**
	 * Enum TLClient.ETLColorVisionDeficiency
	 */
	enum class ETLColorVisionDeficiency : uint8_t
	{
		NormalVision = 0,
		Deuteranope  = 1,
		Protanope    = 2,
		Tritanope    = 3,
		MAX          = 4
	};

	/**
	 * Enum TLClient.ETLFrameRateLimit
	 */
	enum class ETLFrameRateLimit : uint8_t
	{
		NotLimit = 0,
		FPS      = 1,
		FPS01    = 2,
		FPS02    = 3,
		FPS03    = 4,
		FPS04    = 5,
		FPS05    = 6,
		FPS06    = 7,
		FPS07    = 8,
		FPS08    = 9,
		FPS09    = 10,
		MAX      = 11
	};

	/**
	 * Enum TLClient.ETLFSR2Mode
	 */
	enum class ETLFSR2Mode : uint8_t
	{
		Off              = 0,
		UltraPerformance = 1,
		Performance      = 2,
		Balanced         = 3,
		Quality          = 4,
		MAX              = 5
	};

	/**
	 * Enum TLClient.ETLDLSSMode
	 */
	enum class ETLDLSSMode : uint8_t
	{
		Off              = 0,
		Auto             = 1,
		UltraPerformance = 2,
		Performance      = 3,
		Balanced         = 4,
		Quality          = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.ETLGraphicOverallQuality
	 */
	enum class ETLGraphicOverallQuality : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Epic   = 3,
		Auto   = 4,
		Custom = 5,
		MAX    = 6
	};

	/**
	 * Enum TLClient.ETLScreenMode
	 */
	enum class ETLScreenMode : uint8_t
	{
		Fullscreen         = 0,
		WindowedFullscreen = 1,
		Windowed           = 2,
		MAX                = 3
	};

	/**
	 * Enum TLClient.ETLSuperSamplingMethod
	 */
	enum class ETLSuperSamplingMethod : uint8_t
	{
		Off  = 0,
		DLSS = 1,
		TAAU = 2,
		MAX  = 3
	};

	/**
	 * Enum TLClient.ETLAnisotropy
	 */
	enum class ETLAnisotropy : uint8_t
	{
		X16 = 0,
		X8  = 1,
		X4  = 2,
		X1  = 3,
		MAX = 4
	};

	/**
	 * Enum TLClient.ETLGraphicQuality
	 */
	enum class ETLGraphicQuality : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Epic   = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLHanded
	 */
	enum class ETLHanded : uint8_t
	{
		None  = 0,
		Right = 1,
		Left  = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLCameraType
	 */
	enum class ETLCameraType : uint8_t
	{
		FirstPersonPerspective = 0,
		ThridPersonPerspective = 1,
		OverTheShoulder        = 2,
		LockOn                 = 3,
		Fixed                  = 4,
		Free                   = 5,
		MAX                    = 6
	};

	/**
	 * Enum TLClient.ETLOptionAudioMode
	 */
	enum class ETLOptionAudioMode : uint8_t
	{
		Normal    = 0,
		Headphone = 1,
		Night     = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLOptionCombatDynamic
	 */
	enum class ETLOptionCombatDynamic : uint8_t
	{
		Clear  = 0,
		Soft   = 1,
		Softer = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLOptionSoundOnBackground
	 */
	enum class ETLOptionSoundOnBackground : uint8_t
	{
		Off = 0,
		On  = 1,
		Low = 2,
		MAX = 3
	};

	/**
	 * Enum TLClient.ETLOptionSoundVolumePreset
	 */
	enum class ETLOptionSoundVolumePreset : uint8_t
	{
		General       = 0,
		GeneralCombat = 1,
		MassiveCombat = 2,
		Alert         = 3,
		MAX           = 4
	};

	/**
	 * Enum TLClient.ETLDateTimeDisplay
	 */
	enum class ETLDateTimeDisplay : uint8_t
	{
		UTC = 0,
		LST = 1,
		MAX = 2
	};

	/**
	 * Enum TLClient.ETLNameplateShowOption
	 */
	enum class ETLNameplateShowOption : uint8_t
	{
		ShowAll    = 0,
		ShowSimple = 1,
		ShowOff    = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.ETLChatActionAfterSendChat
	 */
	enum class ETLChatActionAfterSendChat : uint8_t
	{
		SetFocusInput  = 0,
		LostFocusInput = 1,
		CloseChatUI    = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.ETLMiniChatShowTime
	 */
	enum class ETLMiniChatShowTime : uint8_t
	{
		Ten    = 0,
		Thirty = 1,
		Sixty  = 2,
		Always = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLChatFontSize
	 */
	enum class ETLChatFontSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLCursorFXType
	 */
	enum class ETLCursorFXType : uint8_t
	{
		Off      = 0,
		Weakly   = 1,
		Strongly = 2,
		MAX      = 3
	};

	/**
	 * Enum TLClient.ETLMapAlarmDuration
	 */
	enum class ETLMapAlarmDuration : uint8_t
	{
		One   = 0,
		Two   = 1,
		Three = 2,
		Four  = 3,
		Five  = 4,
		Six   = 5,
		Seven = 6,
		Eight = 7,
		MAX   = 8
	};

	/**
	 * Enum TLClient.ETLAlarmRemaing
	 */
	enum class ETLAlarmRemaing : uint8_t
	{
		Always    = 0,
		Minute5   = 1,
		Minute10  = 2,
		Minute15  = 3,
		Minute30  = 4,
		Minute60  = 5,
		Minute120 = 6,
		Minute180 = 7,
		MAX       = 8
	};

	/**
	 * Enum TLClient.ETLPartyItemRewardType
	 */
	enum class ETLPartyItemRewardType : uint8_t
	{
		kRandom    = 0,
		kFree      = 1,
		kRandomGet = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.EPartyMemberStatus
	 */
	enum class EPartyMemberStatus : uint8_t
	{
		Alive          = 0,
		Dead           = 1,
		ChangeMap      = 2,
		Disconnected   = 3,
		kWaitReconnect = 4,
		MAX            = 5
	};

	/**
	 * Enum TLClient.ERelationConnectionState
	 */
	enum class ERelationConnectionState : uint8_t
	{
		Logoff              = 0,
		Login               = 1,
		WaitingConnect      = 2,
		DisconnectedPlaying = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLClient.ETLPcRelationshipType
	 */
	enum class ETLPcRelationshipType : uint8_t
	{
		Friend     = 0,
		Favorite   = 1,
		Unfavorite = 2,
		Block      = 3,
		Inviter    = 4,
		Invitee    = 5,
		None       = 6,
		MAX        = 7
	};

	/**
	 * Enum TLClient.ETLPublisher
	 */
	enum class ETLPublisher : uint8_t
	{
		NCS = 0,
		AGS = 1,
		MAX = 2
	};

	/**
	 * Enum TLClient.ETLMapLogCategory
	 */
	enum class ETLMapLogCategory : uint8_t
	{
		Intro     = 0,
		Adventure = 1,
		Purchase  = 2,
		Level     = 3,
		Max       = 4
	};

	/**
	 * Enum TLClient.ETLElixineExtractType
	 */
	enum class ETLElixineExtractType : uint8_t
	{
		None    = 0,
		Adena   = 1,
		Diamond = 2,
		MAX     = 3
	};

	/**
	 * Enum TLClient.ETLPolymorphStateWidgetType
	 */
	enum class ETLPolymorphStateWidgetType : uint8_t
	{
		Combat  = 0,
		Special = 1,
		MAX     = 2
	};

	/**
	 * Enum TLClient.ETLPolymorphFuncTab
	 */
	enum class ETLPolymorphFuncTab : uint8_t
	{
		CombatList  = 0,
		ContextList = 1,
		EndOfEnum   = 2,
		None        = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EPolymorphGuideType
	 */
	enum class EPolymorphGuideType : uint8_t
	{
		None               = 0,
		NoRequiredItem     = 1,
		AlreadyPolymorph   = 2,
		NotAcquired        = 3,
		NotChangeMode      = 4,
		CanCheckBookMark   = 5,
		CanUncheckBookMark = 6,
		kEndOfEnum         = 7,
		MAX                = 8
	};

	/**
	 * Enum TLClient.ETLPurchaseGameConditionKey
	 */
	enum class ETLPurchaseGameConditionKey : uint8_t
	{
		character_level = 0,
		guild_level     = 1,
		MAX             = 2
	};

	/**
	 * Enum TLClient.ETLPurchaseLimitDurationUnitType
	 */
	enum class ETLPurchaseLimitDurationUnitType : uint8_t
	{
		None          = 0,
		Hour          = 1,
		Day           = 2,
		Week          = 3,
		Month         = 4,
		Year          = 5,
		EffectiveTime = 6,
		MAX           = 7
	};

	/**
	 * Enum TLClient.ETLPurchaseLimitUserType
	 */
	enum class ETLPurchaseLimitUserType : uint8_t
	{
		None                   = 0,
		Account                = 1,
		AccountServer          = 2,
		AccountServerCharacter = 3,
		AccountCharacter       = 4,
		MAX                    = 5
	};

	/**
	 * Enum TLClient.EPurchaseSubTabType
	 */
	enum class EPurchaseSubTabType : uint8_t
	{
		All            = 0,
		PackageSpecial = 1,
		PackageCommon  = 2,
		GrowthEquip    = 3,
		GrowthUsable   = 4,
		EventSpecial   = 5,
		EventCommon    = 6,
		ContractCoin   = 7,
		GuildCoin      = 8,
		SocialCoin     = 9,
		FuncAdditional = 10,
		FuncLimitary   = 11,
		FuncExpand     = 12,
		FuncSocial     = 13,
		CashCurrency   = 14,
		CashPass       = 15,
		Max            = 16
	};

	/**
	 * Enum TLClient.EPurchaseMainTabType
	 */
	enum class EPurchaseMainTabType : uint8_t
	{
		Main      = 0,
		Cash      = 1,
		Package   = 2,
		Growth    = 3,
		Gacha     = 4,
		Event     = 5,
		Coin      = 6,
		Func      = 7,
		Warehouse = 8,
		Max       = 9
	};

	/**
	 * Enum TLClient.ETLPVPHistoryEventType
	 */
	enum class ETLPVPHistoryEventType : uint8_t
	{
		Kill   = 0,
		Death  = 1,
		Assist = 2,
		All    = 3,
		Num    = 4,
		MAX    = 5
	};

	/**
	 * Enum TLClient.ETLDynamicEventRewardType
	 */
	enum class ETLDynamicEventRewardType : uint8_t
	{
		TYPE_EVENT            = 0,
		TYPE_EFFORT_GOLD      = 1,
		TYPE_EFFORT_EXP       = 2,
		TYPE_EFFORT_GUILD_EXP = 3,
		TYPE_EFFORT_ITEM_00   = 4,
		TYPE_EFFORT_ITEM_01   = 5,
		TYPE_EFFORT_ITEM_02   = 6,
		TYPE_EFFORT_ITEM_03   = 7,
		TYPE_EFFORT_ITEM_04   = 8,
		TYPE_EFFORT_ITEM_05   = 9,
		TYPE_EFFORT_ITEM_06   = 10,
		TYPE_EFFORT_ITEM_07   = 11,
		TYPE_MAX              = 12,
		TYPE_NONE             = 13
	};

	/**
	 * Enum TLClient.EQuestType
	 */
	enum class EQuestType : uint8_t
	{
		kGuide            = 0,
		kGlobal           = 1,
		kRegion           = 2,
		kPromotion        = 3,
		kFlash            = 4,
		kHeroPack         = 5,
		kTutorial         = 6,
		kVolatileTutorial = 7,
		kItem             = 8,
		kPartyDQ          = 9,
		kPublicEvent      = 10,
		kAbyssEvent       = 11,
		kSideEvent        = 12,
		kEndOfEnum        = 13,
		kError            = 14,
		MAX               = 15
	};

	/**
	 * Enum TLClient.ETLChangeItemQuickSlotMode
	 */
	enum class ETLChangeItemQuickSlotMode : uint8_t
	{
		None    = 0,
		Equip   = 1,
		Unequip = 2,
		Swap    = 3,
		MAX     = 4
	};

	/**
	 * Enum TLClient.ETLQuickSlotType
	 */
	enum class ETLQuickSlotType : uint8_t
	{
		kNone       = 0,
		kInvenItem  = 1,
		kSkill      = 2,
		kGuildSkill = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.ERankingEntryChangeType
	 */
	enum class ERankingEntryChangeType : uint8_t
	{
		None = 0,
		New  = 1,
		Up   = 2,
		Down = 3,
		Same = 4,
		MAX  = 5
	};

	/**
	 * Enum TLClient.EGuildRankingType
	 */
	enum class EGuildRankingType : uint8_t
	{
		All       = 0,
		UnionOnly = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ERankingType
	 */
	enum class ERankingType : uint8_t
	{
		Exp            = 0,
		NowExp         = 1,
		Pvp            = 2,
		NowPvp         = 3,
		ActivePoint    = 4,
		NowActivePoint = 5,
		Guild          = 6,
		NowGuild       = 7,
		Num            = 8,
		MAX            = 9
	};

	/**
	 * Enum TLClient.ETLReplaceItemContentType
	 */
	enum class ETLReplaceItemContentType : uint8_t
	{
		TimeLimitDungeon = 0,
		ItemEnchant      = 1,
		ItemGuildRaid    = 2,
		Crafting         = 3,
		CraftingBook     = 4,
		None             = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.ETLReplaceItemType
	 */
	enum class ETLReplaceItemType : uint8_t
	{
		Popup  = 0,
		Widget = 1,
		None   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLRestoreCostType
	 */
	enum class ETLRestoreCostType : uint8_t
	{
		MoneyGold        = 0,
		LostAndFoundCoin = 1,
		MAX              = 2
	};

	/**
	 * Enum TLClient.ETLRotationEventRankingTabType
	 */
	enum class ETLRotationEventRankingTabType : uint8_t
	{
		Total = 0,
		Daily = 1,
		NONE  = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLRotationEventStateType
	 */
	enum class ETLRotationEventStateType : uint8_t
	{
		NONE         = 0,
		READY        = 1,
		PROGRESS     = 2,
		GRACE_PERIOD = 3,
		MAX          = 4
	};

	/**
	 * Enum TLClient.ETLShopOpenType
	 */
	enum class ETLShopOpenType : uint8_t
	{
		Default      = 0,
		GuildManager = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.ETLSkillLevelUpResultInfo
	 */
	enum class ETLSkillLevelUpResultInfo : uint8_t
	{
		Success         = 0,
		AlreadyMaxLevel = 1,
		NotHasRecipe    = 2,
		NotLearned      = 3,
		Unknown         = 4,
		MAX             = 5
	};

	/**
	 * Enum TLClient.ETLAutoCombatVibration
	 */
	enum class ETLAutoCombatVibration : uint8_t
	{
		Off = 0,
		On  = 1,
		MAX = 2
	};

	/**
	 * Enum TLClient.ETLSoundTargetMode
	 */
	enum class ETLSoundTargetMode : uint8_t
	{
		Off = 0,
		On  = 1,
		MAX = 2
	};

	/**
	 * Enum TLClient.ETLSoundGamepadType
	 */
	enum class ETLSoundGamepadType : uint8_t
	{
		DualSense = 0,
		Others    = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLAttachParentType
	 */
	enum class ETLAttachParentType : uint8_t
	{
		None       = 0,
		Gigantrite = 1,
		MAX        = 2
	};

	/**
	 * Enum TLClient.ETLSoundObjectType
	 */
	enum class ETLSoundObjectType : uint8_t
	{
		None = 0,
		PC   = 1,
		NPC  = 2,
		FO   = 3,
		Item = 4,
		MAX  = 5
	};

	/**
	 * Enum TLClient.ETLSoundActionType
	 */
	enum class ETLSoundActionType : uint8_t
	{
		None         = 0,
		MusicControl = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.ETLSoundSpecialSounds
	 */
	enum class ETLSoundSpecialSounds : uint8_t
	{
		StopMusicObject                = 0,
		OnMapLoadBegin                 = 1,
		OnMapLoadEnd                   = 2,
		OnItemDrop                     = 3,
		OnItemPickUp                   = 4,
		OnItemEquip                    = 5,
		OnItemStow                     = 6,
		OnItemUse                      = 7,
		PlayWeatherAmbient             = 8,
		StopWeatherAmbient             = 9,
		PlayLobbyMusic                 = 10,
		StopLobbyMusic                 = 11,
		OnKillPC                       = 12,
		PlayLoadingPhaseMusic          = 13,
		StopLoadingPhaseMusic          = 14,
		PlayExpressionVoice3D          = 15,
		PlayMagicDollExpressionVoice2D = 16,
		PlayMagicDollExpressionVoice3D = 17,
		PlayWarfareWalla               = 18,
		StopWarfareWalla               = 19,
		PlayWarfareWallaCenter         = 20,
		StopWarfareWallaCenter         = 21,
		MAX                            = 22
	};

	/**
	 * Enum TLClient.ETLSoundPregameLogin
	 */
	enum class ETLSoundPregameLogin : uint8_t
	{
		None            = 0,
		CharacterSelect = 1,
		Customize_IN    = 2,
		Login           = 3,
		MAX             = 4
	};

	/**
	 * Enum TLClient.ETLSoundJumpType
	 */
	enum class ETLSoundJumpType : uint8_t
	{
		None              = 0,
		RunningJump       = 1,
		InstantJumpOrFall = 2,
		Other             = 3,
		MAX               = 4
	};

	/**
	 * Enum TLClient.ETLSoundBossStoneUsurpingState
	 */
	enum class ETLSoundBossStoneUsurpingState : uint8_t
	{
		None = 0,
		On   = 1,
		MAX  = 2
	};

	/**
	 * Enum TLClient.ETLSoundConquestBattleState
	 */
	enum class ETLSoundConquestBattleState : uint8_t
	{
		None        = 0,
		BossStone   = 1,
		RegionStone = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLSoundTeamBattleState
	 */
	enum class ETLSoundTeamBattleState : uint8_t
	{
		None          = 0,
		Awareness     = 1,
		Confrontation = 2,
		Battle        = 3,
		MAX           = 4
	};

	/**
	 * Enum TLClient.ETLSoundAudioMode
	 */
	enum class ETLSoundAudioMode : uint8_t
	{
		None                      = 0,
		MasteringSuite_Normal     = 1,
		MasteringSuite_Headphones = 2,
		MasteringSuite_NightMode  = 3,
		MAX                       = 4
	};

	/**
	 * Enum TLClient.ETLSoundBossSectorState
	 */
	enum class ETLSoundBossSectorState : uint8_t
	{
		None      = 0,
		Normal    = 1,
		Destroyed = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLSoundVoiceType
	 */
	enum class ETLSoundVoiceType : uint8_t
	{
		None    = 0,
		Male1   = 1,
		Male2   = 2,
		Male3   = 3,
		Female1 = 4,
		Female2 = 5,
		Female3 = 6,
		MAX     = 7
	};

	/**
	 * Enum TLClient.ETLSoundItemUsingType
	 */
	enum class ETLSoundItemUsingType : uint8_t
	{
		None   = 0,
		Manual = 1,
		Auto   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLSoundAutoCombatState
	 */
	enum class ETLSoundAutoCombatState : uint8_t
	{
		None = 0,
		On   = 1,
		Off  = 2,
		MAX  = 3
	};

	/**
	 * Enum TLClient.ETLSoundUsurpingSide
	 */
	enum class ETLSoundUsurpingSide : uint8_t
	{
		None  = 0,
		Ally  = 1,
		Enemy = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLSoundUsurpingState
	 */
	enum class ETLSoundUsurpingState : uint8_t
	{
		None          = 0,
		FirstUsurping = 1,
		Usurping      = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.ETLSoundSiegeWarfareState
	 */
	enum class ETLSoundSiegeWarfareState : uint8_t
	{
		None       = 0,
		Standby    = 1,
		InProgress = 2,
		Overtime   = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.ETLSoundHitResultType
	 */
	enum class ETLSoundHitResultType : uint8_t
	{
		None           = 0,
		Hit            = 1,
		Great          = 2,
		Critical       = 3,
		Miss           = 4,
		Glancing       = 5,
		Block          = 6,
		Absorb         = 7,
		Counter        = 8,
		Recovery       = 9,
		Immuned        = 10,
		Double         = 11,
		CriticalDouble = 12,
		Debug          = 13,
		MAX            = 14
	};

	/**
	 * Enum TLClient.ETLSoundWeatherType
	 */
	enum class ETLSoundWeatherType : uint8_t
	{
		None      = 0,
		Normal    = 1,
		Rain      = 2,
		Thunder   = 3,
		Snow      = 4,
		Indoor    = 5,
		MagicRain = 6,
		MAX       = 7
	};

	/**
	 * Enum TLClient.ETLSoundVoicePriority
	 */
	enum class ETLSoundVoicePriority : uint8_t
	{
		None        = 0,
		Codex       = 1,
		Timeline    = 2,
		Speak       = 3,
		Interaction = 4,
		MAX         = 5
	};

	/**
	 * Enum TLClient.ETLSoundSnapshotType
	 */
	enum class ETLSoundSnapshotType : uint8_t
	{
		Default          = 0,
		Combat           = 1,
		Death            = 2,
		EinhasadEye      = 3,
		CinemaTypeA      = 4,
		CinemaTypeB      = 5,
		CinemaTypeC      = 6,
		CinemaTypeD      = 7,
		CinemaTypeE      = 8,
		HPExhaust        = 9,
		Gliding          = 10,
		InteractionScene = 11,
		None             = 12,
		MAX              = 13
	};

	/**
	 * Enum TLClient.ETLSoundContentType
	 */
	enum class ETLSoundContentType : uint8_t
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
	 * Enum TLClient.ETLSpecialActionGuideType
	 */
	enum class ETLSpecialActionGuideType : uint8_t
	{
		None               = 0,
		InviteCallClanInfo = 1,
		InviteParty        = 2,
		EventResult        = 3,
		Tutorial           = 4,
		Contract           = 5,
		MAX                = 6
	};

	/**
	 * Enum TLClient.EInfinityDungeonState
	 */
	enum class EInfinityDungeonState : uint8_t
	{
		NotOpen  = 0,
		Progress = 1,
		Complete = 2,
		MAX      = 3
	};

	/**
	 * Enum TLClient.ETLMassCombatModeOption
	 */
	enum class ETLMassCombatModeOption : uint8_t
	{
		AlwaysApply = 0,
		AutoApply   = 1,
		NotApply    = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLTaxDeliveryState
	 */
	enum class ETLTaxDeliveryState : uint8_t
	{
		PREPARE  = 0,
		PROGRESS = 1,
		COMPLETE = 2,
		NONE     = 3,
		MAX      = 4
	};

	/**
	 * Enum TLClient.ETimeType
	 */
	enum class ETimeType : uint8_t
	{
		Gate  = 0,
		World = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.ETLTradeSaleStatus
	 */
	enum class ETLTradeSaleStatus : uint8_t
	{
		Waiting    = 0,
		Registered = 1,
		Expired    = 2,
		Sold       = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.ETradeMainTabType
	 */
	enum class ETradeMainTabType : uint8_t
	{
		Weapon    = 0,
		Armor     = 1,
		Accessory = 2,
		Skillbook = 3,
		Usable    = 4,
		Misc      = 5,
		All       = 6,
		Max       = 7
	};

	/**
	 * Enum TLClient.ETLTradeUIPanelType
	 */
	enum class ETLTradeUIPanelType : uint8_t
	{
		Purchase        = 0,
		SaleAndEarnings = 1,
		EarningsRecord  = 2,
		MAX             = 3
	};

	/**
	 * Enum TLClient.ETLTradeSearchType
	 */
	enum class ETLTradeSearchType : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		Third     = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLTutorialTriggerType
	 */
	enum class ETLTutorialTriggerType : uint8_t
	{
		ALIVE_CHANGED                  = 0,
		AUTO_USE_SLOT_CHANGED          = 1,
		ACCEPT_CONTRACT                = 2,
		ACQUIRE_NEW_ITEM               = 3,
		ACQUIRE_PC_SUBTITLE            = 4,
		ADVANCE_OBJECT_WORLD           = 5,
		ABYSS_POINT_CHANGED            = 6,
		CHANGE_KEEP_MOVE_FORWARD       = 7,
		CHANGE_PRESET_CAMERA           = 8,
		CHANGE_SKILL_SET               = 9,
		CHANGE_MAP_REGION_TYPE         = 10,
		COMPLETE_TUTORIAL              = 11,
		CODE_ATTAINED                  = 12,
		CREATE_OBJECT_WORLD            = 13,
		CODEX_REWARDABLE_ADD           = 14,
		CODEX_REWARDED                 = 15,
		DELETE_BONUS_NPC_CONTRACT      = 16,
		DYNAMIC_EVENT_REWARD           = 17,
		DELETE_OBJECT_WORLD            = 18,
		DYNAMIC_EVENT_LEAVE_WARNING    = 19,
		ENTER_ZONE                     = 20,
		ENTER_REGION                   = 21,
		ENTER_CONTENTS_VOLUME          = 22,
		ENTER_DYNAMIC_EVENT            = 23,
		END_CUTSCENE                   = 24,
		EQUIP_AMMO_UPDATE              = 25,
		FIX_TARGET_UPDATE              = 26,
		GUILD_CONTRACT                 = 27,
		HP_CHANGED                     = 28,
		INVENTORY_ITEM_UPDATE          = 29,
		INTERACTABLE_TARGET_UPDATE     = 30,
		JUMPED                         = 31,
		LEAVE_ZONE                     = 32,
		LEAVE_REGION                   = 33,
		LEAVE_DYNAMIC_EVENT            = 34,
		MOVED                          = 35,
		MY_PC_STAT_UPDATE              = 36,
		MY_PC_CHANGE_PVP_MODE          = 37,
		MY_PC_KILL_FO                  = 38,
		MY_PC_KILL_NPC                 = 39,
		MY_PC_TELEPORT_COMPLETE        = 40,
		MY_PC_GUILD_INFO_UDPATE        = 41,
		MAGICDOLL_NOTIFICATION_UPDATE  = 42,
		OBJECT_INTERACTION             = 43,
		OBJECT_INTERACTION_ACTION      = 44,
		OBJECTIVE_GOAL_COUNT_UPDATED   = 45,
		OBJECTIVE_ATTAINED             = 46,
		OPEN_POPUP                     = 47,
		POLYMORPH                      = 48,
		POLYMORPH_NOTIFICATION_UPDATE  = 49,
		POLYMORPH_STATE_CHANGE         = 50,
		PARTY_UPDATE_ACTIVATE_PARTY    = 51,
		ROTATE_CAMERA                  = 52,
		REFRESH_CONTRACT_LIST          = 53,
		RESTORABLE_INFO_UPDATE         = 54,
		SKILL_SET_CONTEXT_UNBLOCK      = 55,
		SWIMMING_STATUS                = 56,
		STORAGE_UPDATE_COUNT           = 57,
		SKILL_LEVEL_UP_WIDGET_OPEN     = 58,
		SHOW_NPC_CONTRACT              = 59,
		TOGGLE_DASH_SWIM_BOOST         = 60,
		TERRITORY_FOG_OPEN             = 61,
		TREASURE_BOX_AREA_APPROACHING  = 62,
		UPDATE_STATS                   = 63,
		UPDATE_LEVEL                   = 64,
		USE_SKILL                      = 65,
		USE_ITEM                       = 66,
		UPDATE_EFFECT_COUNT            = 67,
		UPDATE_WEAPON_MASTERY_LEVEL    = 68,
		UPDATE_EQUIP_SLOT              = 69,
		UPDATE_CONTRACT_PROGRESS       = 70,
		UPDATE_NEXT_SIEGE_TIME         = 71,
		UPDATE_CONTENTS_OPEN           = 72,
		WAYPOINT_FOUND_AROUND          = 73,
		WEAPON_MASTERY_CHECK_OPEN_NODE = 74,
		WEAPON_PRESET_INFO_CHANGE      = 75,
		ZOOM_CAMERA                    = 76,
		MAX                            = 77
	};

	/**
	 * Enum TLClient.ETabMenu
	 */
	enum class ETabMenu : uint8_t
	{
		MyAttackerList       = 0,
		MyTarget             = 1,
		PartyCommanderTarget = 2,
		EndOfEnum            = 3,
		MAX                  = 4
	};

	/**
	 * Enum TLClient.ETLUIManagerResult
	 */
	enum class ETLUIManagerResult : uint8_t
	{
		NONE                        = 0,
		SUCCESS                     = 1,
		FAIL_UNKNOWN                = 2,
		FAIL_UI_SHOWING_ALREADY     = 3,
		FAIL_UI_SHOWING_HIDDENSTATE = 4,
		MAX                         = 5
	};

	/**
	 * Enum TLClient.ETLUIManagerFailReason
	 */
	enum class ETLUIManagerFailReason : uint8_t
	{
		NONE                                     = 0,
		REASON_ASYNC_LOADING_TABLE_KEY_EMPTY     = 1,
		REASON_ASYNC_LOADING_ALREADY_IN_PROGRESS = 2,
		REASON_ASYNC_LOADING_HANDLE_INVALID      = 3,
		REASON_UI_SHOWING_ALREADY                = 4,
		MAX                                      = 5
	};

	/**
	 * Enum TLClient.ETLReadyForShowUIReason
	 */
	enum class ETLReadyForShowUIReason : uint8_t
	{
		INGAME_INITIALIZATION_COMPLETED = 0,
		RELOAD_UI_SET_COMPLETED         = 1,
		MAX                             = 2
	};

	/**
	 * Enum TLClient.ETLUIWidgetReloadReason
	 */
	enum class ETLUIWidgetReloadReason : uint8_t
	{
		NONE                = 0,
		INPUT_DEVICE_CHANGE = 1,
		MAX                 = 2
	};

	/**
	 * Enum TLClient.ETLUIWidgetAttachTarget
	 */
	enum class ETLUIWidgetAttachTarget : uint8_t
	{
		DEFALUT_ROOT_WIDGET = 0,
		LOBBY_ROOT_WIDGET   = 1,
		ROOT_LAYER          = 2,
		NONE                = 3,
		MAX                 = 4
	};

	/**
	 * Enum TLClient.ETLUIWidgetCloseReason
	 */
	enum class ETLUIWidgetCloseReason : uint8_t
	{
		NONE         = 0,
		SERVICE_MODE = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.EUnionRelationTabType
	 */
	enum class EUnionRelationTabType : uint8_t
	{
		TAB_RELATION_ALLY     = 0,
		TAB_RELATION_ENEMY    = 1,
		TAB_RELATION_OBSERVE  = 2,
		TAB_RELATION_ALLY_REQ = 3,
		TAB_UNION_MAX         = 4,
		TAB_MAX               = 5
	};

	/**
	 * Enum TLClient.EUnionMainTabType
	 */
	enum class EUnionMainTabType : uint8_t
	{
		TAB_UNION_INFO       = 0,
		TAB_UNION_MEMBER     = 1,
		TAB_UNION_LIST       = 2,
		TAB_UNION_CREATE     = 3,
		TAB_UNION_RELATION   = 4,
		TAB_UNION_MANAGEMENT = 5,
		TAB_UNION_MAX        = 6
	};

	/**
	 * Enum TLClient.ETLUnionChatAuthorityLevel
	 */
	enum class ETLUnionChatAuthorityLevel : uint8_t
	{
		ALL         = 0,
		GUARDIAN    = 1,
		LEADERGROUP = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLUserCameraAutoCombatOption
	 */
	enum class ETLUserCameraAutoCombatOption : uint8_t
	{
		None                = 0,
		UseAutoCombatCamera = 1,
		RorateToTargetYaw   = 2,
		MAX                 = 3
	};

	/**
	 * Enum TLClient.ETestEnum
	 */
	enum class ETestEnum : uint8_t
	{
		TestA = 0,
		TestB = 1,
		TestC = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLCheckButtonTextStylePreview
	 */
	enum class ETLCheckButtonTextStylePreview : uint8_t
	{
		Normal        = 0,
		Check         = 1,
		Indeterminate = 2,
		MAX           = 3
	};

	/**
	 * Enum TLClient.ETLButtonTextStylePreview
	 */
	enum class ETLButtonTextStylePreview : uint8_t
	{
		Normal = 0,
		Hover  = 1,
		Press  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ECalibratedEdgeType
	 */
	enum class ECalibratedEdgeType : uint8_t
	{
		None   = 0,
		Left   = 1,
		Right  = 2,
		Top    = 3,
		Bottom = 4,
		MAX    = 5
	};

	/**
	 * Enum TLClient.ETLChatTextFontSizeType
	 */
	enum class ETLChatTextFontSizeType : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ETLChatWindowMode
	 */
	enum class ETLChatWindowMode : uint8_t
	{
		ChatList         = 0,
		FriendList       = 1,
		GroupChatManager = 2,
		MAX              = 3
	};

	/**
	 * Enum TLClient.ECodexDrawLineType
	 */
	enum class ECodexDrawLineType : uint8_t
	{
		StraightLine = 0,
		BezierLine   = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.ETLCodexVoiceReadState
	 */
	enum class ETLCodexVoiceReadState : uint8_t
	{
		None      = 0,
		NudgePlay = 1,
		VoicePlay = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLComboTextStylePreview
	 */
	enum class ETLComboTextStylePreview : uint8_t
	{
		Normal          = 0,
		Hovered         = 1,
		Selected        = 2,
		SelectedHovered = 3,
		MAX             = 4
	};

	/**
	 * Enum TLClient.ETLConsoleActionFaceButton
	 */
	enum class ETLConsoleActionFaceButton : uint8_t
	{
		Left   = 0,
		Top    = 1,
		Right  = 2,
		Bottom = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.ETLConsoleSkillTarget
	 */
	enum class ETLConsoleSkillTarget : uint8_t
	{
		kCurrentTarget = 0,
		kInterimTarget = 1,
		kPartyMember   = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.ETLMapControlMode
	 */
	enum class ETLMapControlMode : uint8_t
	{
		None       = 0,
		Map        = 1,
		MapInfo    = 2,
		RegionInfo = 3,
		PinContext = 4,
		Chat       = 5,
		MAX        = 6
	};

	/**
	 * Enum TLClient.ECraftingMainTabType
	 */
	enum class ECraftingMainTabType : uint8_t
	{
		Weapon    = 0,
		Equip     = 1,
		Accessory = 2,
		Grocery   = 3,
		SkillBook = 4,
		Bookmark  = 5,
		Max       = 6
	};

	/**
	 * Enum TLClient.ECraftingResultType
	 */
	enum class ECraftingResultType : uint8_t
	{
		GreatSuccess = 0,
		Success      = 1,
		Failure      = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.ECraftProbabilityType
	 */
	enum class ECraftProbabilityType : uint8_t
	{
		CriticalSuccess = 0,
		Success         = 1,
		Failure         = 2,
		kEndOfEnum      = 3,
		MAX             = 4
	};

	/**
	 * Enum TLClient.ETLCustomizePhase
	 */
	enum class ETLCustomizePhase : uint8_t
	{
		Customize = 0,
		InputName = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETLEmblemSize
	 */
	enum class ETLEmblemSize : uint8_t
	{
		Small = 0,
		Big   = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.EEnchantResourceState
	 */
	enum class EEnchantResourceState : uint8_t
	{
		Empty        = 0,
		Insufficient = 1,
		Sufficient   = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.EGuildShowMainMenuType
	 */
	enum class EGuildShowMainMenuType : uint8_t
	{
		SHOW_MAINMENU  = 0,
		HIDE_ONBOADING = 1,
		HIDE_MAINMENU  = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.EGuildDistributionStateType
	 */
	enum class EGuildDistributionStateType : uint8_t
	{
		Default     = 0,
		ZeroRevenue = 1,
		ExpiredDate = 2,
		PrivateOwn  = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EGuildPVPTabType
	 */
	enum class EGuildPVPTabType : uint8_t
	{
		TAB_PVP_HISTORY = 0,
		TAB_PVP_REVENGE = 1,
		TAB_PVP_MAX     = 2
	};

	/**
	 * Enum TLClient.EGuildRewardSubTab
	 */
	enum class EGuildRewardSubTab : uint8_t
	{
		GuildContentsReward = 0,
		GuildBMPurchase     = 1,
		MAX                 = 2
	};

	/**
	 * Enum TLClient.EGuildViewGuildRelationType
	 */
	enum class EGuildViewGuildRelationType : uint8_t
	{
		None            = 0,
		MyGuild         = 1,
		UnionRelation   = 2,
		Alliance        = 3,
		Enemy           = 4,
		Observe         = 5,
		SendAllyRequest = 6,
		RecvAllyRequest = 7,
		MAX             = 8
	};

	/**
	 * Enum TLClient.ETLHudWeightType
	 */
	enum class ETLHudWeightType : uint8_t
	{
		kNormal    = 0,
		kWarning   = 1,
		kBounds    = 2,
		kEndOfEnum = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.ETLItemCollectionStateFilterType
	 */
	enum class ETLItemCollectionStateFilterType : uint8_t
	{
		kNone                     = 0,
		kNotStartedAndProgressing = 1,
		kCompleted                = 2,
		MAX                       = 3
	};

	/**
	 * Enum TLClient.ETLItemCollectionTabFilterType
	 */
	enum class ETLItemCollectionTabFilterType : uint8_t
	{
		kNone     = 0,
		kGradeC   = 1,
		kGradeB   = 2,
		kGradeA   = 3,
		kGradeAA  = 4,
		kGradeAAA = 5,
		kEvent    = 6,
		MAX       = 7
	};

	/**
	 * Enum TLClient.ETLItemCollectionGroupInfoTabType
	 */
	enum class ETLItemCollectionGroupInfoTabType : uint8_t
	{
		Craft = 0,
		Trade = 1,
		MAX   = 2
	};

	/**
	 * Enum TLClient.ETLItemCollectionItemInfoTabType
	 */
	enum class ETLItemCollectionItemInfoTabType : uint8_t
	{
		Monster = 0,
		Event   = 1,
		Craft   = 2,
		Trade   = 3,
		MAX     = 4
	};

	/**
	 * Enum TLClient.ETLOpenResultSlotState
	 */
	enum class ETLOpenResultSlotState : uint8_t
	{
		Empty   = 0,
		Closed  = 1,
		Opening = 2,
		Opened  = 3,
		MAX     = 4
	};

	/**
	 * Enum TLClient.ETLItemCompositionResultMode
	 */
	enum class ETLItemCompositionResultMode : uint8_t
	{
		None   = 0,
		Open   = 1,
		Review = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.EItemTraitEnchantStep
	 */
	enum class EItemTraitEnchantStep : uint8_t
	{
		TargetItemReady   = 0,
		MaterialItemReady = 1,
		EnchantReady      = 2,
		EnchantProgress   = 3,
		EnchantResult     = 4,
		None              = 5,
		MAX               = 6
	};

	/**
	 * Enum TLClient.ETLMagicDollUIContentType
	 */
	enum class ETLMagicDollUIContentType : uint8_t
	{
		DEFAULT_LIST = 0,
		COLLECTION   = 1,
		MAX          = 2
	};

	/**
	 * Enum TLClient.EMainMenuTooltipAnchor
	 */
	enum class EMainMenuTooltipAnchor : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.EStrongholdFilterType
	 */
	enum class EStrongholdFilterType : uint8_t
	{
		Default    = 0,
		NeedRepair = 1,
		NeedBuild  = 2,
		EndOfEnum  = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.EBattleInfoShowState
	 */
	enum class EBattleInfoShowState : uint8_t
	{
		kHide     = 0,
		kOnlyIcon = 1,
		kAll      = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.EOtherPlayerRankingType
	 */
	enum class EOtherPlayerRankingType : uint8_t
	{
		kNone       = 0,
		kRanker_No1 = 1,
		kRanker_No2 = 2,
		kRanker_No3 = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.EMapIconThroneToolTipDescStateType
	 */
	enum class EMapIconThroneToolTipDescStateType : uint8_t
	{
		MYCASTLE_PROGRESS_SIEGE = 0,
		MYCASTLE_NONE_SIEGE     = 1,
		NOT_OWNER_CASTLE        = 2,
		MAX                     = 3
	};

	/**
	 * Enum TLClient.EMobileContentTabType
	 */
	enum class EMobileContentTabType : uint8_t
	{
		EventGuide     = 0,
		QuestContents  = 1,
		TargetScanning = 2,
		None           = 3,
		MAX            = 4
	};

	/**
	 * Enum TLClient.ETLWeaponMasteryUpType
	 */
	enum class ETLWeaponMasteryUpType : uint8_t
	{
		None         = 0,
		Distribution = 1,
		Upgrade      = 2,
		MAX          = 3
	};

	/**
	 * Enum TLClient.ETLWeaponMasteryType
	 */
	enum class ETLWeaponMasteryType : uint8_t
	{
		None  = 0,
		Stat  = 1,
		Skill = 2,
		MAX   = 3
	};

	/**
	 * Enum TLClient.ETLNameplateLayout
	 */
	enum class ETLNameplateLayout : uint8_t
	{
		ShowGuildShowHpbarShowSubtitle = 0,
		ShowGuildShowHpbarHideSubtitle = 1,
		ShowGuildHideHpbarShowSubtitle = 2,
		ShowGuildHideHpbarHideSubtitle = 3,
		HideGuildShowHpbarShowSubtitle = 4,
		HideGuildShowHpbarHideSubtitle = 5,
		HideGuildHideHpbarShowSubtitle = 6,
		HideGuildHideHpbarHideSubtitle = 7,
		MAX                            = 8
	};

	/**
	 * Enum TLClient.ETLNameplateTaregetState
	 */
	enum class ETLNameplateTaregetState : uint8_t
	{
		kNone              = 0,
		kFixTarget         = 1,
		kFriendlyTarget    = 2,
		kIntermTarget      = 3,
		kInteractionTarget = 4,
		MAX                = 5
	};

	/**
	 * Enum TLClient.ETLOptionMacroType
	 */
	enum class ETLOptionMacroType : uint8_t
	{
		ClientMacro = 0,
		ServerMacro = 1,
		MAX         = 2
	};

	/**
	 * Enum TLClient.ETLPolymorphCategoryFilter
	 */
	enum class ETLPolymorphCategoryFilter : uint8_t
	{
		Combat    = 0,
		Dash      = 1,
		Glide     = 2,
		Swim      = 3,
		Social    = 4,
		None      = 5,
		EndOfEnum = 6,
		MAX       = 7
	};

	/**
	 * Enum TLClient.ETLPurchaseTutoriaEventType
	 */
	enum class ETLPurchaseTutoriaEventType : uint8_t
	{
		None          = 0,
		TablClick     = 1,
		ItemSlotClick = 2,
		ScrollClick   = 3,
		AddCoin       = 4,
		BuyItem       = 5,
		Complete      = 6,
		MAX           = 7
	};

	/**
	 * Enum TLClient.ETLRadialMenuAngleType
	 */
	enum class ETLRadialMenuAngleType : uint8_t
	{
		CommonOffset    = 0,
		IndividualAngle = 1,
		MAX             = 2
	};

	/**
	 * Enum TLClient.ERangeSelectorButtonState
	 */
	enum class ERangeSelectorButtonState : uint8_t
	{
		OutOfRange  = 0,
		InRange     = 1,
		EdgeOfRange = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLRankingSubTabType
	 */
	enum class ETLRankingSubTabType : uint8_t
	{
		DefaultRankingTab  = 0,
		RealTimeRankingTab = 1,
		MAX                = 2
	};

	/**
	 * Enum TLClient.ETLRankingMainTabType
	 */
	enum class ETLRankingMainTabType : uint8_t
	{
		MainTab          = 0,
		LevelTab         = 1,
		ActivatePointTab = 2,
		PVPTab           = 3,
		GuildTab         = 4,
		MAX              = 5
	};

	/**
	 * Enum TLClient.ESeasonPassWeeklyType
	 */
	enum class ESeasonPassWeeklyType : uint8_t
	{
		WEEK     = 0,
		WEEK01   = 1,
		WEEK02   = 2,
		WEEK03   = 3,
		WEEK04   = 4,
		WEEK05   = 5,
		WEEK_MAX = 6
	};

	/**
	 * Enum TLClient.EEquipWeaponSet
	 */
	enum class EEquipWeaponSet : uint8_t
	{
		None            = 0,
		FirstWeaponSet  = 1,
		SecondWeaponSet = 2,
		MAX             = 3
	};

	/**
	 * Enum TLClient.ETLSpinnerValueCompareResult
	 */
	enum class ETLSpinnerValueCompareResult : uint8_t
	{
		LessThanMin    = 0,
		WithinMinMax   = 1,
		GreaterThanMax = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.ESpinnerDirection
	 */
	enum class ESpinnerDirection : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	/**
	 * Enum TLClient.ETLStaminaGaugeState
	 */
	enum class ETLStaminaGaugeState : uint8_t
	{
		Normal = 0,
		Fast   = 1,
		Slow   = 2,
		MAX    = 3
	};

	/**
	 * Enum TLClient.ESystemMenuType
	 */
	enum class ESystemMenuType : uint8_t
	{
		kSystemMenuTypeNone        = 0,
		kSystemMenuTypeCancel      = 1,
		kSystemMenuTypeScreenShot  = 2,
		kSystemMenuTypeOpenOption  = 3,
		kSystemMenuTypeMoveToLobby = 4,
		kSystemMenuTypeHelp        = 5,
		kSystemMenuTypeQuitGame    = 6,
		MAX                        = 7
	};

	/**
	 * Enum TLClient.EIndicatorType
	 */
	enum class EIndicatorType : uint8_t
	{
		MyPcObject     = 0,
		FriendlyObject = 1,
		OppositeObject = 2,
		MAX            = 3
	};

	/**
	 * Enum TLClient.ETLTaxDeliveryUIItemType
	 */
	enum class ETLTaxDeliveryUIItemType : uint8_t
	{
		kMonthDay = 0,
		kTime     = 1,
		MAX       = 2
	};

	/**
	 * Enum TLClient.ETimeTableAlarmAniState
	 */
	enum class ETimeTableAlarmAniState : uint8_t
	{
		kReady     = 0,
		kPlay      = 1,
		kStop      = 2,
		kEndOfEnum = 3,
		MAX        = 4
	};

	/**
	 * Enum TLClient.ETLTradeSearchSummaryColumn
	 */
	enum class ETLTradeSearchSummaryColumn : uint8_t
	{
		ItemInfo        = 0,
		LowestSalePrice = 1,
		StockCount      = 2,
		MAX             = 3
	};

	/**
	 * Enum TLClient.ETLTradeSearchUnitColumn
	 */
	enum class ETLTradeSearchUnitColumn : uint8_t
	{
		ItemInfo      = 0,
		ItemTrait     = 1,
		RemainingTime = 2,
		SalePrice     = 3,
		MAX           = 4
	};

	/**
	 * Enum TLClient.ETLTreeViewSelectionMode
	 */
	enum class ETLTreeViewSelectionMode : uint8_t
	{
		None               = 0,
		RelationParent     = 1,
		OnlyRelationParent = 2,
		MAX                = 3
	};

	/**
	 * Enum TLClient.EUnionCreateFailType
	 */
	enum class EUnionCreateFailType : uint8_t
	{
		NONE             = 0,
		HAVE_NOT_GUILD   = 1,
		NOT_GUILD_MASTER = 2,
		LOW_GUILD_LEVEL  = 3,
		CREATE_WAIT_TIME = 4,
		COST_LACK        = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.PenaltyType
	 */
	enum class EPenaltyType : uint8_t
	{
		PenaltyTypePenalty1        = 0,
		PenaltyTypePenalty2        = 1,
		PenaltyTypePenalty3        = 2,
		PenaltyTypekEndOfEnum      = 3,
		PenaltyTypePenaltyType_MAX = 4
	};

	/**
	 * Enum TLClient.InventoryWeightType
	 */
	enum class EInventoryWeightType : uint8_t
	{
		InventoryWeightTypekStorageWeight          = 0,
		InventoryWeightTypekInventoryNum           = 1,
		InventoryWeightTypekEquipWeight            = 2,
		InventoryWeightTypekInvenWeight            = 3,
		InventoryWeightTypekEquipWeightNum         = 4,
		InventoryWeightTypekInvenWeightNum         = 5,
		InventoryWeightTypekInvenSlotCount         = 6,
		InventoryWeightTypekEndOfEnum              = 7,
		InventoryWeightTypeInventoryWeightType_MAX = 8
	};

	/**
	 * Enum TLClient.ETLWindowType
	 */
	enum class ETLWindowType : uint8_t
	{
		kPopup           = 0,
		kOnlyPopup       = 1,
		kFullscreen      = 2,
		kFullscreenPopup = 3,
		kContextPopup    = 4,
		kNone            = 5,
		MAX              = 6
	};

	/**
	 * Enum TLClient.ETLWindowPosType
	 */
	enum class ETLWindowPosType : uint8_t
	{
		None   = 0,
		Left   = 1,
		Right  = 2,
		Center = 3,
		MAX    = 4
	};

	/**
	 * Enum TLClient.EWorldCommunityTabType
	 */
	enum class EWorldCommunityTabType : uint8_t
	{
		TAB_GUILD = 0,
		TAB_UNION = 1,
		TAB_MAX   = 2
	};

	/**
	 * Enum TLClient.EWorldEventStatus
	 */
	enum class EWorldEventStatus : uint8_t
	{
		Invalid    = 0,
		Upcoming   = 1,
		InProgress = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.ERankingRewardItemType
	 */
	enum class ERankingRewardItemType : uint8_t
	{
		Skill      = 0,
		Effect     = 1,
		RankerMark = 2,
		MAX        = 3
	};

	/**
	 * Enum TLClient.ETLWeaponMasteryNodeState
	 */
	enum class ETLWeaponMasteryNodeState : uint8_t
	{
		NotOpened     = 0,
		Connected     = 1,
		NotConnected  = 2,
		MaxAchivement = 3,
		MAX           = 4
	};

	/**
	 * Enum TLClient.EEnvironmentalType
	 */
	enum class EEnvironmentalType : uint8_t
	{
		MagicRain    = 0,
		MagicWind    = 1,
		MagicEclipse = 2,
		EndOfEnum    = 3,
		MAX          = 4
	};

	/**
	 * Enum TLClient.ETLWidgetBankType
	 */
	enum class ETLWidgetBankType : uint8_t
	{
		FIND_OR_CREATE = 0,
		WIDGET_SHARE   = 1,
		MAX            = 2
	};

	/**
	 * Enum TLClient.ETLSelectableMode
	 */
	enum class ETLSelectableMode : uint8_t
	{
		kDisableByClick = 0,
		kSingle         = 1,
		kRadio          = 2,
		kRadioToggle    = 3,
		kMulti          = 4,
		MAX             = 5
	};

	/**
	 * Enum TLClient.ETLWorldBossEventState
	 */
	enum class ETLWorldBossEventState : uint8_t
	{
		PREPARE  = 0,
		PROGRESS = 1,
		COMPLETE = 2,
		NONE     = 3,
		MAX      = 4
	};

	/**
	 * Enum TLClient.ETLWorldPinAddReason
	 */
	enum class ETLWorldPinAddReason : uint8_t
	{
		INITIALIZE = 0,
		REAL_TIME  = 1,
		MAX        = 2
	};

	/**
	 * Enum TLClient.ETLWorldPinOperationType
	 */
	enum class ETLWorldPinOperationType : uint8_t
	{
		CREATE = 0,
		RENAME = 1,
		MAX    = 2
	};

	/**
	 * Enum TLClient.ETLWorldPinSpaceType
	 */
	enum class ETLWorldPinSpaceType : uint8_t
	{
		WORLD_MAP = 0,
		MINI_MAP  = 1,
		IN_GAME   = 2,
		MAX       = 3
	};

	/**
	 * Enum TLClient.ETLUnionPinAuthorityLevel
	 */
	enum class ETLUnionPinAuthorityLevel : uint8_t
	{
		GUARDIAN    = 0,
		LEADERGROUP = 1,
		LEADERONLY  = 2,
		MAX         = 3
	};

	/**
	 * Enum TLClient.ETLGuildPinAuthorityLevel
	 */
	enum class ETLGuildPinAuthorityLevel : uint8_t
	{
		MASTER      = 0,
		MASTERGROUP = 1,
		GUARDIAN    = 2,
		MEMBER      = 3,
		MAX         = 4
	};

	/**
	 * Enum TLClient.ETLWorldPinSetType
	 */
	enum class ETLWorldPinSetType : uint8_t
	{
		STANDALONE = 0,
		IN_ORDER   = 1,
		MAX        = 2
	};

	/**
	 * Enum TLClient.ETLWorldPinType
	 */
	enum class ETLWorldPinType : uint8_t
	{
		USER      = 0,
		PARTY     = 1,
		GUILD     = 2,
		UNION     = 3,
		TEMPORARY = 4,
		MAX       = 5
	};

	/**
	 * Enum TLClient.EYetiGameCharacterInfoItemStatus
	 */
	enum class EYetiGameCharacterInfoItemStatus : uint8_t
	{
		Unequip = 0,
		Equip   = 1,
		MAX     = 2
	};

	/**
	 * Enum TLClient.EYetiGameCharacterInfoCategoryType
	 */
	enum class EYetiGameCharacterInfoCategoryType : uint8_t
	{
		INFO_LEVEL            = 0,
		INFO_LOCATION         = 1,
		INFO_GOLD             = 2,
		INFO_RETURN_BTN       = 3,
		INFO_AUTO_COMBAT_ON   = 4,
		INFO_AUTO_COMBAT_TIME = 5,
		INFO_AUTO_COMBAT_GOLD = 6,
		INFO_AUTO_COMBAT_EXP  = 7,
		INFO_LEAF             = 8,
		INFO_AMMO             = 9,
		INFO_INVEN_WEIGHT     = 10,
		INFO_MAX              = 11
	};

	/**
	 * Enum TLClient.EYetiChatCategoryType
	 */
	enum class EYetiChatCategoryType : uint8_t
	{
		CMT_CHAT_GENERAL         = 0,
		CMT_CHAT_ALL             = 1,
		CMT_CHAT_WHISPER_RECV    = 2,
		CMT_CHAT_WHISPER_SEND    = 3,
		CMT_CHAT_GUILD           = 4,
		CMT_CHAT_GUILD_SYSTEM    = 5,
		CMT_CHAT_ALLIANCE        = 6,
		CMT_CHAT_ALLIANCE_SYSTEM = 7,
		CMT_CHAT_PARTY           = 8,
		CMT_CHAT_PARTY_SYSTEM    = 9,
		CMT_CHAT_SYSTEM          = 10,
		CMT_CHAT_CONTENTS        = 11,
		CMT_CHAT_GROUP1          = 12,
		CMT_CHAT_GROUP1_SYSTEM   = 13,
		CMT_CHAT_GROUP2          = 14,
		CMT_CHAT_GROUP2_SYSTEM   = 15,
		CMT_CHAT_GROUP3          = 16,
		CMT_CHAT_GROUP3_SYSTEM   = 17,
		CMT_CHAT_GROUP4          = 18,
		CMT_CHAT_GROUP4_SYSTEM   = 19,
		CMT_CHAT_GROUP5          = 20,
		CMT_CHAT_GROUP5_SYSTEM   = 21,
		CMT_CHAT_MAX             = 22
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TLClient.TLDynamicEventCondition
	 * Size -> 0x0028
	 */
	struct FTLDynamicEventCondition
	{
	public:
		struct FTLDataTableRowHandle                               DynamicEvent;                                            // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EStepProgressType                                          DynamicEventStepProgress;                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLX0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLJsonGuid>                                 QuestGuids;                                              // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLEquipmentCondition
	 * Size -> 0x0006
	 */
	struct FTLEquipmentCondition
	{
	public:
		EEquipCategory                                             EquipCategory;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompareItemGrade;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemGrade                                                 InclusiveLowerItemGrade;                                 // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemGrade                                                 InclusiveUpperItemGrade;                                 // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompareItemCategory;                                    // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemCategory                                              ItemCategory;                                            // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLLoopMotionCondition
	 * Size -> 0x0018
	 */
	struct FTLLoopMotionCondition
	{
	public:
		struct FTLDataTableRowHandle                               LoopMotion;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLoopMotionType;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLPlayLoopMotion_MotionType                               LoopMotionType;                                          // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICST[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLMotionCondition
	 * Size -> 0x0010
	 */
	struct FTLMotionCondition
	{
	public:
		struct FTLDataTableRowHandle                               Motion;                                                  // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.NpAppInfo
	 * Size -> 0x0030
	 */
	struct FNpAppInfo
	{
	public:
		class FString                                              AppName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientAppId;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AgsGameAlias;                                            // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.NpServiceInfo
	 * Size -> 0x0040
	 */
	struct FNpServiceInfo
	{
	public:
		class FString                                              ServiceNetwork;                                          // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppConfigApiUrl;                                         // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AIAuthorizationToken;                                    // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNpAppInfo>                                  NpAppInfoArray;                                          // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.LobbyCameraSequence
	 * Size -> 0x0010
	 */
	struct FLobbyCameraSequence
	{
	public:
		ELobbySceneState                                           From;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELobbySceneState                                           To;                                                      // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQC8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      TransitionSequence;                                      // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.LobbyPreviewCharacterInfo
	 * Size -> 0x00C0
	 */
	struct FLobbyPreviewCharacterInfo
	{
	public:
		class FName                                                CameraTag;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ZoomCameraTag;                                           // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpawnPointTag;                                           // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultIdleAT;                                           // 0x0018(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SelectStartAT;                                           // 0x0030(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SelectIdleAT;                                            // 0x0048(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SelectEndAT;                                             // 0x0060(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GameEnterStartAT;                                        // 0x0078(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GameEnterIdleAT;                                         // 0x0090(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMPQ[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLBuilderCommandMacro
	 * Size -> 0x0020
	 */
	struct FTLBuilderCommandMacro
	{
	public:
		TArray<class FString>                                      BuilderCommands;                                         // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLMacroActionMapping
	 * Size -> 0x000C
	 */
	struct FTLMacroActionMapping
	{
	public:
		EActionBuilderCommandMacro                                 Action;                                                  // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKJZ[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                MacroId;                                                 // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWidgetBindingUserWidgetVisible
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FTLWidgetBindingUserWidgetVisible : public FTLWidgetBinding
	{
	public:
		class FScriptDelegate                                      OnUpdateVisible;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLFocusActionData
	 * Size -> 0x0008
	 */
	struct FTLFocusActionData
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWidgetModalDisableData
	 * Size -> 0x0010
	 */
	struct FTLWidgetModalDisableData
	{
	public:
		class UWidget*                                             DisabledWidget;                                          // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedEnable;                                           // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL3W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetModalData
	 * Size -> 0x0020
	 */
	struct FTLWidgetModalData
	{
	public:
		TArray<class UWidget*>                                     DesiredWidgets;                                          // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FTLWidgetModalDisableData>                   DisabledWidgetDatas;                                     // 0x0010(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLModalWidgetAgent
	 * Size -> 0x0028
	 */
	struct FTLModalWidgetAgent
	{
	public:
		class UTLUserWidget*                                       OuterWidget;                                             // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTLWidgetModalData                                  ModalData;                                               // 0x0008(0x0020) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct TLClient.TLScreenResolutionSetting
	 * Size -> 0x0030
	 */
	struct FTLScreenResolutionSetting
	{
	public:
		uint32_t                                                   Width;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Height;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Designation;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Usage;                                                   // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLInputActionKeyCombinationMapping
	 * Size -> 0x0038
	 */
	struct FTLInputActionKeyCombinationMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        ModifierKeys;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0018(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLGamepadInputEvent                                       InputEvent;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHBT[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLAnalogCursorSetting
	 * Size -> 0x0020
	 */
	struct FTLAnalogCursorSetting
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StickySlowdownSeconds;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StickySlowdownMin;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StickySlowdownMax;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CursorInteractableRadius;                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncreaseSpeedMultDurationSec;                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StickySlowdownOut;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CursorStickySlowdownRadius;                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLCharacterInfoUIEtcStatCategory
	 * Size -> 0x0040
	 */
	struct FTLCharacterInfoUIEtcStatCategory
	{
	public:
		class FText                                                CategoryName;                                            // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<EPcStatsType>                                       FirstStatList;                                           // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPcStatsType>                                       SecondStatList;                                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    UISortIndex;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMEG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLDebugAuthInfo
	 * Size -> 0x0028
	 */
	struct FTLDebugAuthInfo
	{
	public:
		int32_t                                                    PIEInstance;                                             // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4CO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AuthAccountId;                                           // 0x0008(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthPassword_V2;                                         // 0x0018(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGachaHiveEntityData
	 * Size -> 0x0050
	 */
	struct FTLGachaHiveEntityData
	{
	public:
		TMap<ETLGachaCategory, class UHiveEntityData*>             CategoryHiveEntityDataMap;                               // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGachaPercentageLevel
	 * Size -> 0x0010
	 */
	struct FTLGachaPercentageLevel
	{
	public:
		TArray<int32_t>                                            PercentageLevelSequenceInfoList;                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGachaLevelSequence
	 * Size -> 0x0028
	 */
	struct FTLGachaLevelSequence
	{
	public:
		ETLGachaBranchType                                         GachaBranchType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z57U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevelSequence*>                              LevelSequenceList;                                       // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLGachaPercentageLevel>                     PercentageLevelList;                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGachaActionTree
	 * Size -> 0x0058
	 */
	struct FTLGachaActionTree
	{
	public:
		TMap<ETLGachaCategory, class UTLActionTree*>               CategoryActionTreeMap;                                   // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTLActionTree*                                       DefaultActionTree;                                       // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGachaLevelActionTree
	 * Size -> 0x0010
	 */
	struct FTLGachaLevelActionTree
	{
	public:
		TArray<struct FTLGachaActionTree>                          LevelActionTreeList;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.CameraMovement
	 * Size -> 0x0020
	 */
	struct FCameraMovement
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGameProfilingResolution
	 * Size -> 0x000C
	 */
	struct FTLGameProfilingResolution
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWindowMode                                                WindowMode;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGOX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLGameProfilingQualitySettings
	 * Size -> 0x0018
	 */
	struct FTLGameProfilingQualitySettings
	{
	public:
		struct FTLGameProfilingResolution                          Resolution;                                              // 0x0000(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ScalabilityLevel;                                        // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameRateLimit;                                          // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocationSettleDuration;                                  // 0x0014(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGameProfilingFixedLocation
	 * Size -> 0x0030
	 */
	struct FTLGameProfilingFixedLocation
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WorldInfoString;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLHudComponentUICondition
	 * Size -> 0x0018
	 */
	struct FTLHudComponentUICondition
	{
	public:
		ETLHudComponentUIType                                      UIType;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPMY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Condition1NotFlag;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Condition1AnyFlag;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Condition2AnyFlag;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Condition3AnyFlag;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConditionSatisfied;                                     // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGT9[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.SceneContiByAngle
	 * Size -> 0x0028
	 */
	struct FSceneContiByAngle
	{
	public:
		TArray<class UCurveFloat*>                                 AngleCurvesByZoomLevel;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SceneConti;                                              // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.LookAtMouseCursorByAngle
	 * Size -> 0x0010
	 */
	struct FLookAtMouseCursorByAngle
	{
	public:
		class UCurveFloat*                                         AngleCurve;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtMouseCursorPositionToCamera;                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F1H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLMyPcFXContentImportancePolicyRow
	 * Size -> 0x0005
	 */
	struct FTLMyPcFXContentImportancePolicyRow
	{
	public:
		ESnEffectContentImportance                                 MyPc;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectContentImportance                                 PartyMember;                                             // 0x0001(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectContentImportance                                 Target;                                                  // 0x0002(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectContentImportance                                 Boss;                                                    // 0x0003(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESnEffectContentImportance                                 Etc;                                                     // 0x0004(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLSoundSnapshotSetting
	 * Size -> 0x000C
	 */
	struct FTLSoundSnapshotSetting
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLSoundSnapshotType                                       Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Priority;                                                // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I7S[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLObjectWorldTutorialBindingData
	 * Size -> 0x0018
	 */
	struct FTLObjectWorldTutorialBindingData
	{
	public:
		class UTLObjectWorldProxy*                                 ObjProxy;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BindingObjectIDs;                                        // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLUIAssetBinder
	 * Size -> 0x0030
	 */
	struct FTLUIAssetBinder
	{
	public:
		unsigned char                                              UnknownData_G5ZI[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     Assets;                                                  // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TLClient.TLWidgetClassInfo
	 * Size -> 0x0010
	 */
	struct FTLWidgetClassInfo
	{
	public:
		class FName                                                NameKey;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TLClient.TLWidgetPosData
	 * Size -> 0x0010
	 */
	struct FTLWidgetPosData
	{
	public:
		class FName                                                WidgetKey;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WidgetPos;                                               // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLCooldownUI
	 * Size -> 0x0060
	 */
	struct FTLCooldownUI
	{
	public:
		unsigned char                                              UnknownData_TZ5Q[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetHandle
	 * Size -> 0x0010
	 */
	struct FTLWidgetHandle
	{
	public:
		class FName                                                NameKey;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   IndexKey;                                                // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   WidgetHandle;                                            // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TLClient.ActionKeyIconText
	 * Size -> 0x0050
	 */
	struct FActionKeyIconText
	{
	public:
		class UTLTextBlock*                                        HotkeyText;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             HotkeyBgOverlay;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETLKeyIconType                                             KeyIconType;                                             // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EActionKeyVisibleType                                      ActionKeyVisibleType;                                    // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXZ2[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionName;                                              // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ConsoleFontSize;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PCFontSize;                                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T6EF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     PCTextBlockStyle;                                        // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLUserWidget*                                       Owner;                                                   // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HZVY[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.WidgetBindingTest
	 * Size -> 0x0020
	 */
	struct FWidgetBindingTest
	{
	public:
		class FScriptMulticastDelegate                             UpdateAllDelegate;                                       // 0x0000(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		float                                                      HpPercent;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HpPercentDelegate;                                       // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W0R[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLEquipData
	 * Size -> 0x0008
	 */
	struct FTLEquipData
	{
	public:
		EEquipCategory                                             EquipCategory;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIVS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLCharacterData
	 * Size -> 0x01B0
	 */
	struct FTLCharacterData
	{
	public:
		bool                                                       bDataInvalid;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K88[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServerId;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RealmID;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NC2U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CharacterId;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolymorphId;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLGender                                                  Gender;                                                  // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1NM[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_279E[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GuildName;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnionName;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBanned;                                               // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingDelete;                                          // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingGuildDissolution;                                // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJUW[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   RecentRegionId;                                          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RecentMapID;                                             // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuildEmblemID;                                           // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuildEmblemColor1;                                       // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuildEmblemColor2;                                       // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RecentPosition;                                          // 0x0078(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS65[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTLEquipData>                                EquipDatas;                                              // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTLEquipData>                                SubEquipDatas;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                ServerName;                                              // 0x00A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              RealmNameString;                                         // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LatestPlayDateTimeString;                                // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RecentRegionString;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeleteRemainTime;                                        // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXD8[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeleteRemainTimeString;                                  // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GuildDissolutionRemainTime;                              // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NRA[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GuildDissolutionRemainTimeString;                        // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWHG[0x90];                                  // 0x0120(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLEquipWeaponPresetWidgetInfo
	 * Size -> 0x0080
	 */
	struct FTLEquipWeaponPresetWidgetInfo
	{
	public:
		class UTLUserWidgetEquipSlot*                              MainWeaponWidget;                                        // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLUserWidgetEquipSlot*                              OffWeaponWidget;                                         // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLUserWidgetEquipSlot*                              MainAmmoWidget;                                          // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLUserWidgetEquipSlot*                              OffAmmoWidget;                                           // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6DAF[0x60];                                  // 0x0020(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLTabButtonData
	 * Size -> 0x0260
	 */
	struct FTLTabButtonData
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                TextTooltipId;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0020(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bIconVisible;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGS1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         icon;                                                    // 0x0040(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoverIcon;                                               // 0x00C8(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckIcon;                                               // 0x0150(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckHoverIcon;                                          // 0x01D8(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLEmojiListGroup
	 * Size -> 0x0010
	 */
	struct FTLEmojiListGroup
	{
	public:
		TArray<class UTLEmojiListItem*>                            EmojiListGroup;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLCinematicDialogSequenceData
	 * Size -> 0x0070
	 */
	struct FTLCinematicDialogSequenceData
	{
	public:
		bool                                                       bWarpMyPCToEndPos;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6RX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TakeSequence[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTLDataTableRowHandle                               TakeCutsceneData;                                        // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          MyPCEndTransform;                                        // 0x0040(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLMenuGroupPanel
	 * Size -> 0x0010
	 */
	struct FTLMenuGroupPanel
	{
	public:
		class UPanelWidget*                                        MenuPanel;                                               // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPanelWidget*                                        MenuListPanel;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.CraftingResultEntry
	 * Size -> 0x0020
	 */
	struct FCraftingResultEntry
	{
	public:
		class UTLUserWidgetCraftingResultEntry*                    ResultEntry;                                             // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        ResultItemName;                                          // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLUserWidgetItemSlot*                               SuccessItemSlot;                                         // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLUserWidgetItemSlot*                               FailItemSlot;                                            // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.CustomizePresetBlenderUIData
	 * Size -> 0x0018
	 */
	struct FCustomizePresetBlenderUIData
	{
	public:
		class FString                                              TextKey;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperSprite*                                        Sprite;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.CustomizeSnapshotSlotData
	 * Size -> 0x0068
	 */
	struct FCustomizeSnapshotSlotData
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNPL[0x5F];                                  // 0x0009(0x005F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.CustomizeVoiceSelectAT
	 * Size -> 0x0048
	 */
	struct FCustomizeVoiceSelectAT
	{
	public:
		struct FSoftObjectPath                                     VoiceFacialAT_Male;                                      // 0x0000(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VoiceFacialAT_Female;                                    // 0x0018(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VoiceBodyAT;                                             // 0x0030(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLActionKeyGuideInfo
	 * Size -> 0x0060
	 */
	struct FTLActionKeyGuideInfo
	{
	public:
		ETLActionKeyGuideType                                      Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNAY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionName;                                              // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N53I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayText;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ConditionText;                                           // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                KeyIconMarkup;                                           // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bLongPress;                                              // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftAxis;                                               // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA02[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AxisEventType;                                           // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLOrderdObjData
	 * Size -> 0x000C
	 */
	struct FTLOrderdObjData
	{
	public:
		unsigned char                                              UnknownData_PQ57[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLItemCollectionItemViewInfo
	 * Size -> 0x0008
	 */
	struct FTLItemCollectionItemViewInfo
	{
	public:
		unsigned char                                              UnknownData_7OZ9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLItemCollectionSummaryStatusComponent
	 * Size -> 0x0048
	 */
	struct FTLItemCollectionSummaryStatusComponent
	{
	public:
		class FScriptMulticastDelegate                             ProgressDelegate;                                        // 0x0000(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FText                                                StatusText;                                              // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                StatusTextDelegate;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompletionPercent;                                       // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CompletionPercentDelegate;                               // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressingPercent;                                      // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ProgressingPercentDelegate;                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.ShowStateScale
	 * Size -> 0x0008
	 */
	struct FShowStateScale
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLMinimapSizeTypeInfo
	 * Size -> 0x0018
	 */
	struct FTLMinimapSizeTypeInfo
	{
	public:
		struct FVector2D                                           SizeInfo;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SizeIconTableKey;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ClippingSizeInfo;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.QuantityLimitComponent
	 * Size -> 0x0018
	 */
	struct FQuantityLimitComponent
	{
	public:
		ETLPurchaseLimitUserType                                   LimitUserType;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GD5X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelWidget*                                        LimitWidget;                                             // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        QuantityLimitText;                                       // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLOptionTab
	 * Size -> 0x0030
	 */
	struct FTLOptionTab
	{
	public:
		bool                                                       EnabledInLobby;                                          // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisibleInShipping;                                       // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisibleInGamepad;                                        // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisibleInConsole;                                        // 0x0003(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMIY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ButtonText;                                              // 0x0008(0x0018) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class UClass*                                              ButtonWidgetClass;                                       // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PanelWidgetClass;                                        // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.ImageAppearance
	 * Size -> 0x0098
	 */
	struct FImageAppearance
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.CheckButtonImages
	 * Size -> 0x0278
	 */
	struct FCheckButtonImages
	{
	public:
		struct FImageAppearance                                    ImageIcon;                                               // 0x0000(0x0098) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FImageAppearance                                    ImageHoverIcon;                                          // 0x0098(0x0098) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FImageAppearance                                    ImageCheckIcon;                                          // 0x0130(0x0098) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FImageAppearance                                    ImageCheckHoverIcon;                                     // 0x01C8(0x0098) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FText                                                ToolTip;                                                 // 0x0260(0x0018) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLPcRelationshipMemberInfo
	 * Size -> 0x00B0
	 */
	struct FTLPcRelationshipMemberInfo
	{
	public:
		int64_t                                                    PcId;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    GuildID;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GuildName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYRS[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServerId;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F23L[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ServerName;                                              // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERelationConnectionState                                   ConnectionState;                                         // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EZY[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LogoutTime;                                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LocationGuid;                                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CreatedTime;                                             // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ExpirationTime;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Memo;                                                    // 0x0090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ETLPcRelationshipType                                      PcRelationType;                                          // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextGender                                                Gender;                                                  // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I90I[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetPurchaseTutorialInfo
	 * Size -> 0x0038
	 */
	struct FTLWidgetPurchaseTutorialInfo
	{
	public:
		ETLPurchaseTutoriaEventType                                EventType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GB31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DialogueTexts;                                           // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTLWidgetAnimationBind                              AnimationBind;                                           // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnSoundEvent;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWeaponCategorySkillObjects
	 * Size -> 0x0038
	 */
	struct FTLWeaponCategorySkillObjects
	{
	public:
		TArray<class UTLSkillSetSkillObject*>                      PrimeSkillObjects;                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTLSkillSetSkillObject*>                      ActiveSkillObjects;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTLSkillSetSkillObject*>                      PassiveSkillObjects;                                     // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPRF[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLRadialListSetting
	 * Size -> 0x0008
	 */
	struct FTLRadialListSetting
	{
	public:
		float                                                      OffsetAngle;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartAngle;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLRadialMenuItem
	 * Size -> 0x0010
	 */
	struct FTLRadialMenuItem
	{
	public:
		class UTLUserWidget*                                       ItemWidget;                                              // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleDegree;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PMA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLButtonData
	 * Size -> 0x0258
	 */
	struct FTLButtonData
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                TextTooltipId;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0020(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         icon;                                                    // 0x0038(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoverIcon;                                               // 0x00C0(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckIcon;                                               // 0x0148(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckHoverIcon;                                          // 0x01D0(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLEditableTextBlockComponent
	 * Size -> 0x0010
	 */
	struct FTLEditableTextBlockComponent
	{
	public:
		class UTLTextBlock*                                        NameText;                                                // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLEditableTextBox*                                  NameTextInput;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.SiegeWarfareSuccessData
	 * Size -> 0x0030
	 */
	struct FSiegeWarfareSuccessData
	{
	public:
		struct FSoftObjectPath                                     Symbol1;                                                 // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SymbolFx;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.SiegeWarfareFailureeData
	 * Size -> 0x0048
	 */
	struct FSiegeWarfareFailureeData
	{
	public:
		struct FSoftObjectPath                                     Symbol1;                                                 // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Symbol2;                                                 // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Symbol3;                                                 // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLUserWidgetSkillMasteryTree
	 * Size -> 0x0020
	 */
	struct FTLUserWidgetSkillMasteryTree
	{
	public:
		TArray<class UTLUserWidget*>                               NodeList;                                                // 0x0000(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UTLUserWidgetSkillMasterySkillSlot*>          NodeWidgetList;                                          // 0x0010(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLStatWidgets
	 * Size -> 0x0088
	 */
	struct FTLStatWidgets
	{
	public:
		class UTLTextBlock*                                        StatNameText;                                            // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        BaseValueText;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        BonusValueText;                                          // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLImage*                                            PreviewUpIcon;                                           // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLImage*                                            PreviewDownIcon;                                         // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLImage*                                            StatIcon;                                                // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        PreviewBaseValueText;                                    // 0x0030(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        PreviewBonusValueText;                                   // 0x0038(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WW1[0x48];                                  // 0x0040(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLItemSlotViewDragOverSideImage
	 * Size -> 0x0020
	 */
	struct FTLItemSlotViewDragOverSideImage
	{
	public:
		class UTLImage*                                            HoverLineImage;                                          // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLImage*                                            RightSideIndexImage;                                     // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTLImage*                                            LeftSideIndexImage;                                      // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PHC8[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLSubButtonData
	 * Size -> 0x0258
	 */
	struct FTLSubButtonData
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                TextTooltipId;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0020(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         icon;                                                    // 0x0038(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoverIcon;                                               // 0x00C0(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckIcon;                                               // 0x0148(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckHoverIcon;                                          // 0x01D0(0x0088) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.WorldEventScheduleSlotInfo
	 * Size -> 0x0030
	 */
	struct FWorldEventScheduleSlotInfo
	{
	public:
		class UTLUserWidgetTimeTableAlarmContextMenuSlot*          SlotWidget;                                              // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6N2A[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetBankParam
	 * Size -> 0x0048
	 */
	struct FTLWidgetBankParam
	{
	public:
		class FName                                                BankKey;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WidgetSoftClassPtr[0x28];                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              WidgetClass;                                             // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLWidgetBankType                                          ReturnType;                                              // 0x0038(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6WZ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultCreateCount;                                      // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCreateCount;                                          // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMYZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetBankPendingDeleteData
	 * Size -> 0x0010
	 */
	struct FTLWidgetBankPendingDeleteData
	{
	public:
		float                                                      DeleteTimeSeconds;                                       // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78HW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWidgetBankData
	 * Size -> 0x0078
	 */
	struct FTLWidgetBankData
	{
	public:
		struct FTLWidgetBankParam                                  CreateParam;                                             // 0x0000(0x0048) Transient, NativeAccessSpecifierPublic
		TArray<class UUserWidget*>                                 BankWidgets;                                             // 0x0048(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UUserWidget*>                                 UsedWidgets;                                             // 0x0058(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FTLWidgetBankPendingDeleteData>              PendingDeleteWidgetDatas;                                // 0x0068(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLBuilderCommandMacroContext
	 * Size -> 0x0028
	 */
	struct FTLBuilderCommandMacroContext
	{
	public:
		unsigned char                                              UnknownData_EBR5[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLContentsEventParameter
	 * Size -> 0x0002
	 */
	struct FTLContentsEventParameter
	{
	public:
		ETLContentsEvent                                           Event;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETLContentsEventRunType                                    RunType;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLCustomizeHistoryData
	 * Size -> 0x0060
	 */
	struct FTLCustomizeHistoryData
	{
	public:
		ECustomizeHistoryType                                      HistoryType;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomizeUIMiddleCategory                                 PresetType;                                              // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomizeType                                             CustomizeType;                                           // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRKO[0x5D];                                  // 0x0003(0x005D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLDebugStringData
	 * Size -> 0x0010
	 */
	struct FTLDebugStringData
	{
	public:
		unsigned char                                              UnknownData_P7DQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLDebugString
	 * Size -> 0x0020
	 */
	struct FTLDebugString
	{
	public:
		unsigned char                                              UnknownData_W5UV[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLEnchantTransferSimulatedResult
	 * Size -> 0x003C
	 */
	struct FTLEnchantTransferSimulatedResult
	{
	public:
		unsigned char                                              UnknownData_GNJH[0x3C];                                  // 0x0000(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.CustomizeInitialPresetData
	 * Size -> 0x000C
	 */
	struct FCustomizeInitialPresetData
	{
	public:
		int32_t                                                    FacePresetIndex;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HairPresetIndex;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BodyPresetIndex;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLHomeServerData
	 * Size -> 0x0078
	 */
	struct FTLHomeServerData
	{
	public:
		class FName                                                TableRowName;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerId;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RealmID;                                                 // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldID;                                                 // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7TZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ServerName;                                              // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    DisplayNumer;                                            // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDisplay;                                               // 0x0034(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOpen;                                                  // 0x0035(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCanCreateCharacter;                                    // 0x0036(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAlive;                                                 // 0x0037(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowNewMark;                                           // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHP1[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WaitPlayerCount;                                         // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaitCapacity;                                            // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NowPlayer;                                               // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerCapacity;                                          // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NowCharacter;                                            // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterCapacity;                                       // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeletableCharacterLevel;                                 // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowRecommendationMark;                                // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVB3[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocationTag;                                             // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerPopulationStatus                                    ServerStatus;                                            // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD79[0x3];                                   // 0x0071(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ZPP1[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWorldServerData
	 * Size -> 0x0050
	 */
	struct FTLWorldServerData
	{
	public:
		class FName                                                TableRowName;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldID;                                                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UTC_Offset;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                RegionName;                                              // 0x0010(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                DisplayUTC;                                              // 0x0028(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FTLHomeServerData>                           HomeServerArray;                                         // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLGameLobbyEnterReserveData
	 * Size -> 0x0008
	 */
	struct FTLGameLobbyEnterReserveData
	{
	public:
		unsigned char                                              UnknownData_Z3A3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLGrowthPendingData
	 * Size -> 0x0050
	 */
	struct FTLGrowthPendingData
	{
	public:
		unsigned char                                              UnknownData_TNQY[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSuccess;                                                // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrowthByExpPoint;                                       // 0x0015(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78E9[0x3A];                                  // 0x0016(0x003A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLMapIconCreateParameter
	 * Size -> 0x0078
	 */
	struct FTLMapIconCreateParameter
	{
	public:
		unsigned char                                              UnknownData_9PX5[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLSiegeWarfareStatus
	 * Size -> 0x0018
	 */
	struct FTLSiegeWarfareStatus
	{
	public:
		unsigned char                                              UnknownData_NQPR[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWildCollectionData
	 * Size -> 0x01A0
	 */
	struct FTLWildCollectionData
	{
	public:
		unsigned char                                              UnknownData_150S[0x1A0];                                 // 0x0000(0x01A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLCombatCollectionData
	 * Size -> 0x0170
	 */
	struct FTLCombatCollectionData
	{
	public:
		unsigned char                                              UnknownData_GOAN[0x170];                                 // 0x0000(0x0170) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLSavedPlaceInfo
	 * Size -> 0x0038
	 */
	struct FTLSavedPlaceInfo
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6FS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MapUid;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstTimeCreatedEvent;                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDJE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWorldServerConnectData
	 * Size -> 0x0060
	 */
	struct FTLWorldServerConnectData
	{
	public:
		unsigned char                                              UnknownData_XI2W[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLShopBatchBuyItem
	 * Size -> 0x0008
	 */
	struct FTLShopBatchBuyItem
	{
	public:
		int32_t                                                    ItemTableNum;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetCount;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLShopBatchSellOption
	 * Size -> 0x0028
	 */
	struct FTLShopBatchSellOption
	{
	public:
		TArray<ETLItemGroupFilter>                                 GroupFilters;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EItemGrade>                                         GradeFilters;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bExceptTradable;                                         // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExceptEnchanted;                                        // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExceptCollectionRegisterable;                           // 0x0022(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DW3L[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLShopCurrencyItemData
	 * Size -> 0x0010
	 */
	struct FTLShopCurrencyItemData
	{
	public:
		int32_t                                                    ClassId;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ0G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Amount;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLTutorialProgressCompleteParam
	 * Size -> 0x0014
	 */
	struct FTLTutorialProgressCompleteParam
	{
	public:
		unsigned char                                              UnknownData_75UB[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLTutorialProgressStartParam
	 * Size -> 0x000C
	 */
	struct FTLTutorialProgressStartParam
	{
	public:
		unsigned char                                              UnknownData_249I[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetSizeData
	 * Size -> 0x0010
	 */
	struct FTLWidgetSizeData
	{
	public:
		class FName                                                WidgetKey;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WidgetSize;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.LoadingScreenParameter
	 * Size -> 0x0018
	 */
	struct FLoadingScreenParameter
	{
	public:
		unsigned char                                              UnknownData_4TEV[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetBattleCollectionSummaryParam
	 * Size -> 0x0020
	 */
	struct FTLWidgetBattleCollectionSummaryParam
	{
	public:
		unsigned char                                              UnknownData_EBOL[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetRewardData
	 * Size -> 0x0048
	 */
	struct FTLWidgetRewardData
	{
	public:
		unsigned char                                              UnknownData_DNI8[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetRewardStatData
	 * Size -> 0x0060
	 */
	struct FTLWidgetRewardStatData
	{
	public:
		unsigned char                                              UnknownData_4316[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLDefaultTextTooltipProxy
	 * Size -> 0x0068
	 */
	struct FTLDefaultTextTooltipProxy
	{
	public:
		class FName                                                TextTooltipTableID;                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TitleValue;                                              // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     IconPath;                                                // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.ActionIconSet
	 * Size -> 0x0010
	 */
	struct FActionIconSet
	{
	public:
		class UPaperSprite*                                        Enable;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperSprite*                                        Disable;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.ItemGradeImages
	 * Size -> 0x0018
	 */
	struct FItemGradeImages
	{
	public:
		class UPaperSprite*                                        ItemGradeTitleImage;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperSprite*                                        ItemGradeTitleLineImage;                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperSprite*                                        ItemGradeBottomImage;                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLTooltipStatCompareComponent
	 * Size -> 0x0020
	 */
	struct FTLTooltipStatCompareComponent
	{
	public:
		class UTLImage*                                            CompareStatImage;                                        // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLBorder*                                           CompareStatColorBorder;                                  // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        CompareStatValueTextBlock;                               // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLCanvasPanel*                                      CompareStatPanel;                                        // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWidgetMagicDollCollectionSummaryParam
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FTLWidgetMagicDollCollectionSummaryParam : public FTLWidgetBattleCollectionSummaryParam
	{
	public:
		unsigned char                                              UnknownData_XNG6[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.TLWidgetPolymorphCollectionSummaryParam
	 * Size -> 0x0100 (FullSize[0x0120] - InheritedSize[0x0020])
	 */
	struct FTLWidgetPolymorphCollectionSummaryParam : public FTLWidgetBattleCollectionSummaryParam
	{
	public:
		unsigned char                                              UnknownData_Z5W1[0x100];                                 // 0x0020(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TLClient.SystemMenuItem
	 * Size -> 0x0018
	 */
	struct FSystemMenuItem
	{
	public:
		class UTLUserWidgetCheckButton*                            CheckButtonUserWidget;                                   // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLButton*                                           Button;                                                  // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLTextBlock*                                        TextBlock;                                               // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TLClient.TLWidgetTestUnitData
	 * Size -> 0x0010
	 */
	struct FTLWidgetTestUnitData
	{
	public:
		class UObject*                                             SlotObject;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI4O[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
