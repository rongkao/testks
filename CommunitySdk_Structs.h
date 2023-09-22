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
	 * ScriptStruct CommunitySdk.AttachmentInfo
	 * Size -> 0x0020
	 */
	struct FAttachmentInfo
	{
	public:
		class FString                                              FileUrl;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.BaseEvent
	 * Size -> 0x0030
	 */
	struct FBaseEvent
	{
	public:
		class FString                                              Guid;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventType;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.BaseGoogleSTTResponse
	 * Size -> 0x0030
	 */
	struct FBaseGoogleSTTResponse
	{
	public:
		int32_t                                                    Error;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Module;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Line;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6EM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Defined;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomKeyInfo
	 * Size -> 0x0030
	 */
	struct FGameRoomKeyInfo
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoomKey;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.Original
	 * Size -> 0x0010
	 */
	struct FOriginal
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.Replaced
	 * Size -> 0x0010
	 */
	struct FReplaced
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ReplacedMessageInfo
	 * Size -> 0x0030
	 */
	struct FReplacedMessageInfo
	{
	public:
		struct FOriginal                                           Original;                                                // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FReplaced                                           Replaced;                                                // 0x0010(0x0010) NativeAccessSpecifierPublic
		class FString                                              AdditionalData;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ExternalAccount
	 * Size -> 0x0020
	 */
	struct FExternalAccount
	{
	public:
		class FString                                              AuthProviderCode;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalAccountKey;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.BaseNotification
	 * Size -> 0x0238
	 */
	struct FBaseNotification
	{
	public:
		class FString                                              Guid;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seq;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HD0T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RoomId;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameUserId;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayNcCharId;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserName;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerId;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverCharacterId;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverUserName;                                        // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverServerId;                                        // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Alias;                                                   // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClassId;                                                 // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClassName;                                               // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCastle;                                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JRQ[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Ranking;                                                 // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Gender;                                                  // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubType;                                                 // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attribute;                                               // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Optional;                                                // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0130(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFromGame;                                              // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9B0[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SenderGameCode;                                          // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CastleNo;                                                // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSLU[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GuildID;                                                 // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverGameCode;                                        // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasReplacedContent;                                      // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA0G[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReplacedMessageInfo>                        ReplacedMessageInfoList;                                 // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DateCreated;                                             // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x01D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Country;                                                 // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Locale;                                                  // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttachmentInfo                                     AttachmentInfo;                                          // 0x0208(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FExternalAccount>                            ExternalAccounts;                                        // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.BaseRequest
	 * Size -> 0x0028
	 */
	struct FBaseRequest
	{
	public:
		unsigned char                                              UnknownData_B2J7[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.BaseResponse
	 * Size -> 0x0030
	 */
	struct FBaseResponse
	{
	public:
		int32_t                                                    Error;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Module;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Line;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMIP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Defined;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.SubscriptionInfo
	 * Size -> 0x0060
	 */
	struct FSubscriptionInfo
	{
	public:
		class FString                                              TopicName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubscribeUrl;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Login;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Passcode;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WorldTopic;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAppDest;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomInfo
	 * Size -> 0x00A8
	 */
	struct FGameRoomInfo
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MemberCount;                                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VoiceMemberCount;                                        // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMemberCount;                                          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFZJ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastMessageContent;                                      // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateLastMessagePublished;                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMessageGuid;                                         // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateCreated;                                             // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Deleted;                                                 // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DM8E[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.BaseResponseSubscriptionInfo
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	struct FBaseResponseSubscriptionInfo : public FBaseResponse
	{
	public:
		unsigned char                                              UnknownData_SNS6[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MtalkToken;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubscriptionInfo                                   SubscriptionInfo;                                        // 0x0060(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameRoomInfo>                               GameRoomInfoList;                                        // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.BaseTranslateApiResponse
	 * Size -> 0x0020
	 */
	struct FBaseTranslateApiResponse
	{
	public:
		class FString                                              raw_data;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tid;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.CommunityChatError
	 * Size -> 0x0020
	 */
	struct FCommunityChatError
	{
	public:
		bool                                                       IsError;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08S5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Domain;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Error;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4M1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Reason;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.CommunityLiveError
	 * Size -> 0x0040
	 */
	struct FCommunityLiveError
	{
	public:
		bool                                                       IsError;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSCZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Domain;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Uri;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Error;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM9U[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Reason;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventBlockUserContent
	 * Size -> 0x0030
	 */
	struct FEventBlockUserContent
	{
	public:
		class FString                                              TargetServerId;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCharacterId;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCharacterName;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventBlockUser
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FEventBlockUser : public FBaseEvent
	{
	public:
		struct FEventBlockUserContent                              EventContent;                                            // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomInvitationInfo
	 * Size -> 0x00B0
	 */
	struct FGameRoomInvitationInfo
	{
	public:
		class FString                                              InvitationId;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatGroupId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0020(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              RoomName;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviterGameUserId;                                       // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviterCharacterName;                                    // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteeGameUserId;                                       // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteeCharacterName;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateCreated;                                             // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventInvitationContent
	 * Size -> 0x00B0
	 */
	struct FEventInvitationContent
	{
	public:
		struct FGameRoomInvitationInfo                             InvitationInfo;                                          // 0x0000(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventInvitation
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	struct FEventInvitation : public FBaseEvent
	{
	public:
		struct FEventInvitationContent                             EventContent;                                            // 0x0030(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameUserInfo
	 * Size -> 0x00F8
	 */
	struct FGameUserInfo
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NpGameAccountId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerName;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameUserId;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserThemeColor;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Intro;                                                   // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfileImageUrlSmall;                                    // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfileImageUrlLarge;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tag;                                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RankName;                                                // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClassId;                                                 // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Gender;                                                  // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCastle;                                               // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PAL[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Ranking;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerId;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomUserInfo
	 * Size -> 0x01B8
	 */
	struct FGameRoomUserInfo
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateUserJoined;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserLeft;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWQJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserLeft;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserBanned;                                              // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E9J[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserBanned;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserVoiceMuted;                                          // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFPO[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserVoiceMuted;                                      // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserMicOffed;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUOM[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserMicOffed;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserSpeakerOffed;                                        // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUSF[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserSpeakerOffed;                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserVoiceJoined;                                         // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRD7[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserVoiceJoined;                                     // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameUserInfo                                       GameUserInfo;                                            // 0x00C0(0x00F8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventUpdateRoomContent
	 * Size -> 0x00B8
	 */
	struct FEventUpdateRoomContent
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0000(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameRoomUserInfo>                           GameRoomUserInfoList;                                    // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventUpdateRoom
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	struct FEventUpdateRoom : public FBaseEvent
	{
	public:
		struct FEventUpdateRoomContent                             EventContent;                                            // 0x0030(0x00B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventVoiceChatContent
	 * Size -> 0x0058
	 */
	struct FEventVoiceChatContent
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MemberCount;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USTK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameRoomUserInfo>                           GameRoomUserInfoList;                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.EventVoiceChat
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	struct FEventVoiceChat : public FBaseEvent
	{
	public:
		struct FEventVoiceChatContent                              EventContent;                                            // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameChatMessageInfo
	 * Size -> 0x0030
	 */
	struct FGameChatMessageInfo
	{
	public:
		class FString                                              Guid;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateCreated;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.MessageUserProperties
	 * Size -> 0x0001
	 */
	struct FMessageUserProperties
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameMessageInfo
	 * Size -> 0x00C8
	 */
	struct FGameMessageInfo
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubType;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OriginalContent;                                         // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attribute;                                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Optional;                                                // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttachmentInfo                                     AttachmentInfo;                                          // 0x0070(0x0020) NativeAccessSpecifierPublic
		struct FMessageUserProperties                              SenderProperties;                                        // 0x0090(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO4W[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReceiverCharacterId;                                     // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverUserName;                                        // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverServerId;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GamePresetInfo
	 * Size -> 0x0048
	 */
	struct FGamePresetInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ServerKeyRequired;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ValidatePlayNcUser;                                      // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ValidateGameKey;                                         // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseGameData;                                             // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoCreateGameUser;                                      // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MK8L[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateCreated;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateLastUpdated;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomPresetInfo
	 * Size -> 0x0058
	 */
	struct FGameRoomPresetInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       storable;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessNotifiable;                                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReadConfirmable;                                         // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MemberCountable;                                         // 0x0033(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoCreatable;                                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoDeletable;                                           // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClientUserJoinWhenCreateRoom;                            // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ErrorWhenCreateRoomExist;                                // 0x0037(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateCreated;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateLastUpdated;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomSecurityInfo
	 * Size -> 0x0018
	 */
	struct FGameRoomSecurityInfo
	{
	public:
		bool                                                       IsPrivate;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O105[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Password;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameRoomUserVoiceInfo
	 * Size -> 0x0058
	 */
	struct FGameRoomUserVoiceInfo
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              GameUserId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VoiceJoined;                                             // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPVF[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateUserVoiceJoined;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GameUserKey
	 * Size -> 0x0020
	 */
	struct FGameUserKey
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GoogleJson
	 * Size -> 0x00A8
	 */
	struct FGoogleJson
	{
	public:
		unsigned char                                              UnknownData_0K2P[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Type;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              project_id;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              private_key_id;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              private_key;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              client_email;                                            // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              client_id;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              auth_uri;                                                // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              token_uri;                                               // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              auth_provider_x509_cert_url;                             // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              client_x509_cert_url;                                    // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.GoogleSTTError
	 * Size -> 0x0018
	 */
	struct FGoogleSTTError
	{
	public:
		bool                                                       IsError;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUMQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Error;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.MediaRole
	 * Size -> 0x0020
	 */
	struct FMediaRole
	{
	public:
		class FString                                              Audio;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Video;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.MediaSignalServer
	 * Size -> 0x0020
	 */
	struct FMediaSignalServer
	{
	public:
		class FString                                              HttpHost;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WebSocketURL;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.MediaStatus
	 * Size -> 0x0020
	 */
	struct FMediaStatus
	{
	public:
		class FString                                              Audio;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Video;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.MessageInfo
	 * Size -> 0x00E0
	 */
	struct FMessageInfo
	{
	public:
		class FString                                              Guid;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameUserId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayNcCharId;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubType;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attribute;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Deleted;                                                 // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_014Q[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DateCreated;                                             // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserServerKey;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasReplacedContent;                                      // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LTN[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReplacedMessageInfo>                        ReplacedMessageInfoList;                                 // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAttachmentInfo                                     AttachmentInfo;                                          // 0x00C0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.NotificationBanChat
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationBanChat : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationBlockUser
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationBlockUser : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationCloseRoom
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationCloseRoom : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationDeportRoom
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationDeportRoom : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationEnterRoom
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationEnterRoom : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationLeaveRoom
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationLeaveRoom : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationReceiveMessage
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationReceiveMessage : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationTransferOwnerRoom
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationTransferOwnerRoom : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationUpdateUserRole
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationUpdateUserRole : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationVoice
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationVoice : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationVoiceMic
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationVoiceMic : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationVoiceMute
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationVoiceMute : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.NotificationVoiceSpeaker
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	struct FNotificationVoiceSpeaker : public FBaseNotification
	{	};

	/**
	 * ScriptStruct CommunitySdk.PlayerInfo
	 * Size -> 0x00C0
	 */
	struct FPlayerInfo
	{
	public:
		class FString                                              ServiceType;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppGroupCode;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Scope;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoomId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMediaRole                                          MediaRole;                                               // 0x0070(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMediaStatus                                        MediaStatus;                                             // 0x0090(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CreateTime;                                              // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestAcceptInvitation
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FRequestAcceptInvitation : public FBaseRequest
	{
	public:
		class FString                                              InvitationId;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Accept;                                                  // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GREI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestBanUser
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestBanUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.TargetUserKey
	 * Size -> 0x0030
	 */
	struct FTargetUserKey
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ValidationInfo
	 * Size -> 0x0010
	 */
	struct FValidationInfo
	{
	public:
		class FString                                              TargetCharacterName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestBlockUser
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FRequestBlockUser : public FBaseRequest
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0028(0x0030) NativeAccessSpecifierPublic
		struct FValidationInfo                                     ValidationInfo;                                          // 0x0058(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestBlockVoiceChannelUser
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	struct FRequestBlockVoiceChannelUser : public FBaseRequest
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0028(0x0030) NativeAccessSpecifierPublic
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0058(0x0030) NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FValidationInfo                                     ValidationInfo;                                          // 0x0098(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestCancelInvitation
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FRequestCancelInvitation : public FBaseRequest
	{
	public:
		class FString                                              InvitationId;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0038(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestChangeReceivingVolume
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	struct FRequestChangeReceivingVolume : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		struct FGameUserKey                                        GameUserKey;                                             // 0x0058(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    Volume;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOKC[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChannelId;                                               // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestCreateAccessToken
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRequestCreateAccessToken : public FBaseRequest
	{
	public:
		class FString                                              Provider;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestCreateGameReport
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	struct FRequestCreateGameReport : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		struct FGameChatMessageInfo                                GameChatMessageInfo;                                     // 0x0058(0x0030) NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestCreateOneOnOneRoomWithUser
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FRequestCreateOneOnOneRoomWithUser : public FBaseRequest
	{
	public:
		struct FGameUserKey                                        GameUserKey;                                             // 0x0028(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestCreateRoom
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	struct FRequestCreateRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomSecurityInfo                               GameRoomSecurityInfo;                                    // 0x0068(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestDeleteRoom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestDeleteRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestDeportUser
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestDeportUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestDeportVoiceChannelUser
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FRequestDeportVoiceChannelUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestFilterContent
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestFilterContent : public FBaseRequest
	{
	public:
		class FString                                              RuleSetType;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Masking;                                                 // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGameRoomKeyInfo
	 * Size -> 0x0050
	 */
	struct FRequestGameRoomKeyInfo
	{
	public:
		TMap<class FString, class FString>                         GameRoomInfo;                                            // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetBlockUserList
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FRequestGetBlockUserList : public FBaseRequest
	{	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetFileUploadUrl
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FRequestGetFileUploadUrl : public FBaseRequest
	{	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetInvitationList
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FRequestGetInvitationList : public FBaseRequest
	{
	public:
		class FString                                              Cursor;                                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAVV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetRoom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestGetRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetRoomInvitationToken
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestGetRoomInvitationToken : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetRoomVoiceUsers
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FRequestGetRoomVoiceUsers : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97KD[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetSubscriptionInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FRequestGetSubscriptionInfo : public FBaseRequest
	{
	public:
		class FString                                              CharacterId;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetVoiceChannelUsers
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	struct FRequestGetVoiceChannelUsers : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKVP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetVoiceJoinedChannelList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRequestGetVoiceJoinedChannelList : public FBaseRequest
	{
	public:
		class FString                                              ServerKey;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetVoiceRoomList
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FRequestGetVoiceRoomList : public FBaseRequest
	{	};

	/**
	 * ScriptStruct CommunitySdk.RequestGetWaitingInvitationList
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestGetWaitingInvitationList : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.Config
	 * Size -> 0x0028
	 */
	struct FConfig
	{
	public:
		class FString                                              languageCode;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              encoding;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sampleRateHertz;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYTW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.Audio
	 * Size -> 0x0010
	 */
	struct FAudio
	{
	public:
		class FString                                              Content;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestGoogleSTTRecognize
	 * Size -> 0x0040
	 */
	struct FRequestGoogleSTTRecognize
	{
	public:
		unsigned char                                              UnknownData_1S1E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConfig                                             Config;                                                  // 0x0008(0x0028) NativeAccessSpecifierPublic
		struct FAudio                                              Audio;                                                   // 0x0030(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestInviteUser
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestInviteUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestJoinedRoomList
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FRequestJoinedRoomList : public FBaseRequest
	{
	public:
		class FString                                              ServerKey;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameRoomType;                                            // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GX9[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestJoinRoom
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	struct FRequestJoinRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomSecurityInfo                               GameRoomSecurityInfo;                                    // 0x0068(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestLeaveRoom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestLeaveRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestLoginWithToken
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	struct FRequestLoginWithToken : public FBaseRequest
	{
	public:
		class FString                                              AuthnToken;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameCode;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceID;                                                // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientType;                                              // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameRoomKeyInfo>                            GameRoomKeyInfoList;                                     // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Locale;                                                  // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientAppId;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CommunitySdk.RequestLogoutWithJwtToken
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FRequestLogoutWithJwtToken : public FBaseRequest
	{	};

	/**
	 * ScriptStruct CommunitySdk.RequestMessagesBackward
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FRequestMessagesBackward : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMEE[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestMessagesForward
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FRequestMessagesForward : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHJD[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestMuteVoiceUser
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FRequestMuteVoiceUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestRoomUsers
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FRequestRoomUsers : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKIF[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.SearchRoomObject
	 * Size -> 0x0098
	 */
	struct FSearchRoomObject
	{
	public:
		class FString                                              SearchType;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         SearchCondition;                                         // 0x0010(0x0050) NativeAccessSpecifierPublic
		class FString                                              SortField;                                               // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SortOrder;                                               // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Cursor;                                                  // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxListCount;                                            // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QYO[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.RequestSearchRoom
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	struct FRequestSearchRoom : public FBaseRequest
	{
	public:
		struct FSearchRoomObject                                   SearchRoomObject;                                        // 0x0028(0x0098) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestSendAlert
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	struct FRequestSendAlert : public FBaseRequest
	{
	public:
		struct FGameMessageInfo                                    GameMessageInfo;                                         // 0x0028(0x00C8) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestSendMessage
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	struct FRequestSendMessage : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		struct FGameMessageInfo                                    GameMessageInfo;                                         // 0x0058(0x00C8) NativeAccessSpecifierPublic
		struct FValidationInfo                                     ValidationInfo;                                          // 0x0120(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestSendWhisper
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	struct FRequestSendWhisper : public FBaseRequest
	{
	public:
		struct FGameUserKey                                        GameUserKey;                                             // 0x0028(0x0020) NativeAccessSpecifierPublic
		struct FGameMessageInfo                                    GameMessageInfo;                                         // 0x0048(0x00C8) NativeAccessSpecifierPublic
		struct FValidationInfo                                     ValidationInfo;                                          // 0x0110(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestStartVoiceChat
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FRequestStartVoiceChat : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestStopVoiceChat
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FRequestStopVoiceChat : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestTransferOwner
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestTransferOwner : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestTranslate
	 * Size -> 0x0058
	 */
	struct FRequestTranslate
	{
	public:
		unsigned char                                              UnknownData_HBQS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              tid;                                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              source_lang;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              source_text;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              target_lang;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sent_from;                                               // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUnbanUser
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestUnbanUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUnblockUser
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FRequestUnblockUser : public FBaseRequest
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUnmuteVoiceUser
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FRequestUnmuteVoiceUser : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUpdateRoom
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FRequestUpdateRoom : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              NewPassword;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewName;                                                 // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUpdateUserRole
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FRequestUpdateUserRole : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerKey;                                               // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUpdateVoiceChatStatus
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FRequestUpdateVoiceChatStatus : public FBaseRequest
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0028(0x0030) NativeAccessSpecifierPublic
		bool                                                       MicOffed;                                                // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpeakerOffed;                                            // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRR4[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChannelId;                                               // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RequestUploadFile
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FRequestUploadFile : public FBaseRequest
	{
	public:
		class FString                                              UploadUrl;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseAcceptInvitation
	 * Size -> 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
	 */
	struct FResponseAcceptInvitation : public FBaseResponse
	{
	public:
		struct FGameRoomInvitationInfo                             InvitationInfo;                                          // 0x0030(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x00E0(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       Accept;                                                  // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80PA[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseBanUser
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseBanUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseBlockUser
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FResponseBlockUser : public FBaseResponse
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06KR[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseBlockVoiceChannelUser
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FResponseBlockVoiceChannelUser : public FBaseResponse
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1JD[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseCancelInvitation
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseCancelInvitation : public FBaseResponse
	{
	public:
		class FString                                              InvitationId;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseChangeReceivingVolume
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FResponseChangeReceivingVolume : public FBaseResponse
	{	};

	/**
	 * ScriptStruct CommunitySdk.ResponseCreateAccessToken
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FResponseCreateAccessToken : public FBaseResponse
	{
	public:
		class FString                                              Provider;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpirationTime;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseCreateGameReport
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseCreateGameReport : public FBaseResponse
	{
	public:
		class FString                                              Message;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseCreateOneOnOneRoomWithUser
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseCreateOneOnOneRoomWithUser : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseCreateRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseCreateRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseDeleteRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseDeleteRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseDeportUser
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseDeportUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseDeportVoiceChannelUser
	 * Size -> 0x01F8 (FullSize[0x0228] - InheritedSize[0x0030])
	 */
	struct FResponseDeportVoiceChannelUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ChannleId;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0070(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseFilterContent
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FResponseFilterContent : public FBaseResponse
	{
	public:
		class FString                                              Content;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Result;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetBlockUserList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseGetBlockUserList : public FBaseResponse
	{
	public:
		TArray<struct FTargetUserKey>                              BlockedUserList;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetFileUploadUrl
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseGetFileUploadUrl : public FBaseResponse
	{
	public:
		class FString                                              UploadUrl;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetInvitationList
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FResponseGetInvitationList : public FBaseResponse
	{
	public:
		class FString                                              Cursor;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHMZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameRoomInvitationInfo>                     InvitationInfoList;                                      // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseGetRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetRoomInvitationToken
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	struct FResponseGetRoomInvitationToken : public FBaseResponse
	{
	public:
		class FString                                              InvitationToken;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InvitationUrl;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0050(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetRoomVoiceUsers
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	struct FResponseGetRoomVoiceUsers : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameRoomUserInfo>                           GameRoomUserInfoList;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KE4J[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Cursor;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetSubscriptionInfo
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FResponseGetSubscriptionInfo : public FBaseResponseSubscriptionInfo
	{	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetVoiceChannelUsers
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FResponseGetVoiceChannelUsers : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameRoomUserInfo>                           GameRoomUserInfoList;                                    // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY6K[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Cursor;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.VoiceChannelInfo
	 * Size -> 0x0048
	 */
	struct FVoiceChannelInfo
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MemberCount;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CL72[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetVoiceJoinedChannelList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseGetVoiceJoinedChannelList : public FBaseResponse
	{
	public:
		TArray<struct FVoiceChannelInfo>                           VoiceChannelInfoList;                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetVoiceRoomList
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FResponseGetVoiceRoomList : public FBaseResponse
	{
	public:
		TArray<struct FGameRoomInfo>                               GameRoomInfoList;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameRoomUserVoiceInfo>                      GameRoomUserVoiceInfoList;                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGetWaitingInvitationList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseGetWaitingInvitationList : public FBaseResponse
	{
	public:
		TArray<struct FGameRoomInvitationInfo>                     WaitingInvitationInfoList;                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.Alternatives
	 * Size -> 0x0020
	 */
	struct FAlternatives
	{
	public:
		class FString                                              Confidence;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              transcript;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.Results
	 * Size -> 0x0010
	 */
	struct FResults
	{
	public:
		TArray<struct FAlternatives>                               Alternatives;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGoogleSTTRecognize
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FResponseGoogleSTTRecognize : public FBaseGoogleSTTResponse
	{
	public:
		TArray<struct FResults>                                    Results;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              totalBilledTime;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseGoogleSTTUpload
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseGoogleSTTUpload : public FBaseGoogleSTTResponse
	{
	public:
		class FString                                              tempText;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseInviteUser
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	struct FResponseInviteUser : public FBaseResponse
	{
	public:
		struct FGameRoomInvitationInfo                             InvitationInfo;                                          // 0x0030(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseJoinedRoomList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseJoinedRoomList : public FBaseResponse
	{
	public:
		TArray<struct FGameRoomInfo>                               GameRoomInfoList;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseJoinRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseJoinRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseLeaveRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseLeaveRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseLoginWithToken
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FResponseLoginWithToken : public FBaseResponseSubscriptionInfo
	{	};

	/**
	 * ScriptStruct CommunitySdk.ResponseLogoutWithJwtToken
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FResponseLogoutWithJwtToken : public FBaseResponse
	{	};

	/**
	 * ScriptStruct CommunitySdk.ResponseMessagesBackward
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	struct FResponseMessagesBackward : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              DateBucketStart;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMessageInfo>                                MessageInfoList;                                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MessageCount;                                            // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1IV[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BackwardCursor;                                          // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ForwardCursor;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseMessagesForward
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	struct FResponseMessagesForward : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              DateBucketStart;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMessageInfo>                                MessageInfoList;                                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MessageCount;                                            // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZH2A[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BackwardCursor;                                          // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ForwardCursor;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseMuteVoiceUser
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseMuteVoiceUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseRoomUsers
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	struct FResponseRoomUsers : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameRoomUserInfo>                           GameRoomUserInfoList;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S549[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Cursor;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseSearchRoom
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FResponseSearchRoom : public FBaseResponse
	{
	public:
		int32_t                                                    Count;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5YZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameRoomInfo>                               GameRoomInfoList;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseSendAlert
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FResponseSendAlert : public FBaseResponse
	{
	public:
		class FString                                              Guid;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.RestrictInfo
	 * Size -> 0x0038
	 */
	struct FRestrictInfo
	{
	public:
		int32_t                                                    RestrictStep;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUO6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartTime;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpirationTime;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BlockedType;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseSendMessage
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FResponseSendMessage : public FBaseResponse
	{
	public:
		class FString                                              Guid;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRestrictInfo                                       RestrictInfo;                                            // 0x0040(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseSendWhisper
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FResponseSendWhisper : public FBaseResponse
	{
	public:
		class FString                                              Guid;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRestrictInfo                                       RestrictInfo;                                            // 0x0040(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseStartVoiceChat
	 * Size -> 0x0118 (FullSize[0x0148] - InheritedSize[0x0030])
	 */
	struct FResponseStartVoiceChat : public FBaseResponse
	{
	public:
		class FString                                              tid;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Action;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthKey;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerInfo                                         Player;                                                  // 0x0060(0x00C0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMediaSignalServer                                  MediaSignalServer;                                       // 0x0120(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    KeepAliveInterval;                                       // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ0S[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseStopVoiceChat
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FResponseStopVoiceChat : public FBaseResponse
	{
	public:
		class FString                                              tid;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Action;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseTransferOwner
	 * Size -> 0x03A0 (FullSize[0x03D0] - InheritedSize[0x0030])
	 */
	struct FResponseTransferOwner : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   PredecessorUserInfo;                                     // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   SuccessorUserInfo;                                       // 0x0218(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseTranslate
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FResponseTranslate : public FBaseTranslateApiResponse
	{
	public:
		class FString                                              source_lang;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              source_text;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              target_lang;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              target_text;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              game_code;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sent_from;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              mt_region;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUnbanUser
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseUnbanUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUnblockUser
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FResponseUnblockUser : public FBaseResponse
	{
	public:
		struct FTargetUserKey                                      TargetUserKey;                                           // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5ON[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUnmuteVoiceUser
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseUnmuteVoiceUser : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUpdateRoom
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FResponseUpdateRoom : public FBaseResponse
	{
	public:
		struct FGameRoomInfo                                       GameRoomInfo;                                            // 0x0030(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUpdateUserRole
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseUpdateUserRole : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUpdateVoiceChatStatus
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	struct FResponseUpdateVoiceChatStatus : public FBaseResponse
	{
	public:
		struct FGameRoomKeyInfo                                    GameRoomKeyInfo;                                         // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameRoomUserInfo                                   GameRoomUserInfo;                                        // 0x0060(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.UploadFileMetaData
	 * Size -> 0x000C
	 */
	struct FUploadFileMetaData
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    rotate_orientation;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.UploadResult
	 * Size -> 0x0060
	 */
	struct FUploadResult
	{
	public:
		class FString                                              download_url;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              view_url;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              thumbnail_url;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              extension;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUploadFileMetaData                                 MetaData;                                                // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9PE[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              expire_at;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommunitySdk.ResponseUploadFile
	 * Size -> 0x0058
	 */
	struct FResponseUploadFile
	{
	public:
		int32_t                                                    Status;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNLP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Error;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K3T[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              auth_type;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUploadResult>                               upload_result_list;                                      // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
