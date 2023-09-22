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
	 * Class NcPlatformSdk.GenericPlatformNcWebBrowser
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UGenericPlatformNcWebBrowser : public UObject
	{
	public:
		unsigned char                                              UnknownData_J11Q[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnWebBrowserClosed__DelegateSignature(bool HasError, const class FString& ErrorMsg);
		void OnUrlChanged__DelegateSignature(const class FText& Text);
		void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
		void BroadcastOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg);
		void BroadcastOnUrlChanged(const class FText& InText);
		void BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcWidgetBase
	 * Size -> 0x01A0 (FullSize[0x0400] - InheritedSize[0x0260])
	 */
	class UNcWidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_BEBQ[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENcWidgetColorType                                         Color;                                                   // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GYIB[0x18F];                                 // 0x0271(0x018F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcModalWidget
	 * Size -> 0x0130 (FullSize[0x0530] - InheritedSize[0x0400])
	 */
	class UNcModalWidget : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XOMA[0x18];                                  // 0x0400(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcWidget_Template*                                  NcWidget_Template;                                       // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcTouchBlockerWidget*                               TouchBlockerWidget;                                      // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O7AO[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcButtonInfoBarWidget*                              ButtonInfoBar;                                           // 0x0430(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7ZZ1[0xF8];                                  // 0x0438(0x00F8) MISSED OFFSET (PADDING)

	public:
		void OnClickTemplateCloseButton();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.LoginViaPlayncWidget
	 * Size -> 0x0078 (FullSize[0x05A8] - InheritedSize[0x0530])
	 */
	class ULoginViaPlayncWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_23QN[0x30];                                  // 0x0530(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             CloseButton;                                             // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             LoginButton;                                             // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UComboBoxString*                                     AccountType;                                             // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEditableText*                                       IdText;                                                  // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEditableText*                                       PasswordText;                                            // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCircularThrobber*                                   Indicator;                                               // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGridPanel*                                          NotifyPanel;                                             // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          NotifyTextBlock;                                         // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0IWP[0x8];                                   // 0x05A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void Show();
		void OnTextChanged(const class FText& Text);
		void OnClickLogin();
		void OnClickClose();
		void NativeConstruct();
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAlertWidget
	 * Size -> 0x0028 (FullSize[0x0558] - InheritedSize[0x0530])
	 */
	class UNcAlertWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_I2OV[0x8];                                   // 0x0530(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcRichTextBlock*                                    MessageTextBlock;                                        // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           ContentBorder;                                           // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScrollBox*                                          ContentScrollBox;                                        // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            ContentSizeBox;                                          // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgeSelectWidget
	 * Size -> 0x0030 (FullSize[0x0588] - InheritedSize[0x0558])
	 */
	class UNcAgeSelectWidget : public UNcAlertWidget
	{
	public:
		unsigned char                                              UnknownData_378P[0x18];                                  // 0x0558(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcRichTextBlock*                                    UnderlineButtonText;                                     // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           UnderlineButton;                                         // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        BottomSlot;                                              // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnClickUnderLineButtonHandler();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgsIdentityAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAgsIdentityAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgsNotificationAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAgsNotificationAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgsSdkAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAgsSdkAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgsSessionAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAgsSessionAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAgsSettingsAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAgsSettingsAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAlertWithBottomAreaWidget
	 * Size -> 0x0048 (FullSize[0x05A0] - InheritedSize[0x0558])
	 */
	class UNcAlertWithBottomAreaWidget : public UNcAlertWidget
	{
	public:
		unsigned char                                              UnknownData_3GZO[0x18];                                  // 0x0558(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcRichTextBlock*                                    BottomButtonText;                                        // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          BottomText;                                              // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             BottomTextSpacer;                                        // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             BottomSpacer;                                            // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           BottomButton;                                            // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        BottomSlot;                                              // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnClickBottomButtonHandler();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAssetLoader
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNcAssetLoader : public UObject
	{
	public:
		class UClass*                                              ReferencerBPClass;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcAssetReferencer*                                  Referencer;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAssetReferencer
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UNcAssetReferencer : public UObject
	{
	public:
		unsigned char                                              NcWidgetBlueprintClassesMap[0x50];                       // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcInputTextAlertWidget
	 * Size -> 0x0028 (FullSize[0x0558] - InheritedSize[0x0530])
	 */
	class UNcInputTextAlertWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_OK2J[0x8];                                   // 0x0530(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableTextBox*                                    NameInput;                                               // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNcBorder*                                           NameInputBorder;                                         // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNcRichTextBlock*                                    MessageTextBlock;                                        // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            NameInputSizeBox;                                        // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void RefreshInputText();
		void OnTextChanged(const class FText& Text);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAuthenticationNumberInputWidget
	 * Size -> 0x00A0 (FullSize[0x05F8] - InheritedSize[0x0558])
	 */
	class UNcAuthenticationNumberInputWidget : public UNcInputTextAlertWidget
	{
	public:
		unsigned char                                              UnknownData_DBKG[0x30];                                  // 0x0558(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHorizontalBox*                                      InputFieldSubInfoHorizontalBox;                          // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TimeLimitText;                                           // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             RetryButton;                                             // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    RetryText;                                               // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      FootSectionHorizontalBox;                                // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextDescription;                                         // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ManageInfoButton;                                        // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    ManageInfoText;                                          // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             TimeLimitSpacer;                                         // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             FootSectionSpacer;                                       // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        FootSectionVerticalBox;                                  // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VZB2[0x18];                                  // 0x05E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateWarningState(bool bIsWarning);
		void BroadcastOnClickRetry();
		void BroadcastOnClickManageInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcAuthTypeSelectorWidget
	 * Size -> 0x0100 (FullSize[0x0630] - InheritedSize[0x0530])
	 */
	class UNcAuthTypeSelectorWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_2ETV[0x18];                                  // 0x0530(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          DeviceImageLightTexture;                                 // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             Background;                                              // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CloseHorizontalBox;                                      // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             CloseButton;                                             // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            AlertSizeBox;                                            // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AlertTitle;                                              // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AlertDescription;                                        // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ButtonHorizontalBox;                                     // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            RegisterDeviceButtonSizeBox;                             // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             RegisterDeviceButtonBorder;                              // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           RegisterDeviceButton;                                    // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      RegisterDeviceButtonContent;                             // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer1;                                                 // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              DeviceImage;                                             // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          RegisterDeviceButtonText;                                // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              RegisterDeviceBracket;                                   // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer2;                                                 // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          RegisterDeviceDescription;                               // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ButtonSpacer;                                            // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            PurpleAuthButtonSizeBox;                                 // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             PurpleAuthButtonBorder;                                  // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           PurpleAuthButton;                                        // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      PurpleAuthButtonContent;                                 // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer3;                                                 // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              PurpleImage;                                             // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PurpleAuthButtonText;                                    // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              PurpleAuthBracket;                                       // 0x0618(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer4;                                                 // 0x0620(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PurpleAuthDescription;                                   // 0x0628(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void BroadcastOnClickRegisterDevice();
		void BroadcastOnClickPurpleAuth();
		void BroadcastOnClickClose();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBackupAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcBackupAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBaseAnimationDialogWidget
	 * Size -> 0x0068 (FullSize[0x0468] - InheritedSize[0x0400])
	 */
	class UNcBaseAnimationDialogWidget : public UNcWidgetBase
	{
	public:
		struct FAnimationDialogAnimation                           ShowAnimation;                                           // 0x0400(0x0018) Edit, NativeAccessSpecifierPublic
		struct FAnimationDialogAnimation                           HideAnimation;                                           // 0x0418(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USO6[0x38];                                  // 0x0430(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder
	 * Size -> 0x0038 (FullSize[0x02A8] - InheritedSize[0x0270])
	 */
	class UNcBorder : public UBorder
	{
	public:
		unsigned char                                              UnknownData_ZWFI[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENcWidgetBorderType                                        BorderType;                                              // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UV3U[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        WidgetColor;                                             // 0x027C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWillChangeColorWhenChildIsFocused;                      // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4BC[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        FocusedColor;                                            // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BorderRadius;                                            // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL8A[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Background
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Background : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Box
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Box : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Line1
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Line1 : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Line2
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Line2 : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_PointText
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_PointText : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Text1
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Text1 : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcBorder_Text2
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UNcBorder_Text2 : public UNcBorder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButton
	 * Size -> 0x0068 (FullSize[0x0490] - InheritedSize[0x0428])
	 */
	class UNcButton : public UButton
	{
	public:
		ENcWidgetBorderType                                        BorderType;                                              // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF89[0x3];                                   // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        NormalColorType;                                         // 0x042C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoveredColorType;                                        // 0x043C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PressedColorType;                                        // 0x044C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisabledColorType;                                       // 0x045C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BorderRadius;                                            // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NormalButtonTextColor;                                   // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisabledButtonTextColor;                                 // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButtonInfoBarWidget
	 * Size -> 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
	 */
	class UNcButtonInfoBarWidget : public UNcWidgetBase
	{
	public:
		class UCanvasPanel*                                        InfoPanel;                                               // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      InfoHorizontalBox;                                       // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LC5C[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButtonInfoSlotWidget
	 * Size -> 0x0048 (FullSize[0x0448] - InheritedSize[0x0400])
	 */
	class UNcButtonInfoSlotWidget : public UNcWidgetBase
	{
	public:
		class UImage*                                              ButtonImage;                                             // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ButtonText;                                              // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             SlotSpacer;                                              // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             InterSpacer;                                             // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EE2D[0x28];                                  // 0x0420(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButton_Button1
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UNcButton_Button1 : public UNcButton
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButton_Button2
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UNcButton_Button2 : public UNcButton
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcButton_Button3
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UNcButton_Button3 : public UNcButton
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCampaignAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcCampaignAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCheckBox
	 * Size -> 0x0048 (FullSize[0x0448] - InheritedSize[0x0400])
	 */
	class UNcCheckBox : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_U6NJ[0x18];                                  // 0x0400(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        UncheckedColor;                                          // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CheckedColor;                                            // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCheckBox*                                           CheckBox;                                                // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void BroadcastCheckStateChanged(bool bIsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCoinPaymentAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcCoinPaymentAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcConfigurationAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcConfigurationAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcConsoleAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcConsoleAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCountrySelectWidget
	 * Size -> 0x0088 (FullSize[0x05B8] - InheritedSize[0x0530])
	 */
	class UNcCountrySelectWidget : public UNcModalWidget
	{
	public:
		class UNcBorder*                                           CountrySelectorBorder;                                   // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UComboBoxString*                                     CountrySelector;                                         // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            CountrySelectorSizeBox;                                  // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GM2Y[0x70];                                  // 0x0548(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOptionToInitialCountry();
		void SetInitialCountry(const class FString& CountryCode);
		void OnCountrySelectChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void LockSelection();
		class FString GetSelectedCountry();
		void AddCountry(const class FString& CountryCode, const class FString& EnglishName);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCouponAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcCouponAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcCustomButtonWidget
	 * Size -> 0x0028 (FullSize[0x0428] - InheritedSize[0x0400])
	 */
	class UNcCustomButtonWidget : public UNcWidgetBase
	{
	public:
		class UNcButton*                                           CustomButton;                                            // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              CustomButtonLeftIcon;                                    // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              CustomButtonRightIcon;                                   // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    CustomButtonText;                                        // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           ButtonBorder;                                            // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcDailyStampAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcDailyStampAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcDeviceListSlotWidget
	 * Size -> 0x0108 (FullSize[0x0508] - InheritedSize[0x0400])
	 */
	class UNcDeviceListSlotWidget : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NAUF[0x60];                                  // 0x0400(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        SlotPanel;                                               // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonDelete;                                            // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ButtonChangeName;                                        // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextDeviceName;                                          // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextRegistrationDate;                                    // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            DeviceNameSizeBox;                                       // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        VerticalLineCanvas;                                      // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           Background;                                              // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           TopLine;                                                 // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           BottomLine;                                              // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           VerticalLine;                                            // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            MainSizeBox;                                             // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      MainHorizontalBox;                                       // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      RegistrationDateHorizontalBox;                           // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ButtonsHorizontalBox;                                    // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             TopSpacer;                                               // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             BottomSpacer;                                            // 0x04E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             InterSpacer;                                             // 0x04E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer1;                                                 // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             Spacer2;                                                 // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             DeviceNameSpacer;                                        // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void BroadcastOnClickDelete();
		void BroadcastOnClickChangeName();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcDeviceListWidget
	 * Size -> 0x0130 (FullSize[0x0660] - InheritedSize[0x0530])
	 */
	class UNcDeviceListWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_NMI6[0x70];                                  // 0x0530(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TextTitle;                                               // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TextSelectDevice;                                        // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TextNote1;                                               // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TextNote2;                                               // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TextNote3;                                               // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TextNote4;                                               // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            ScrollContentsSizeBox;                                   // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          ContentScroll;                                           // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        DeviceListBox;                                           // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      Note1HorizontalBox;                                      // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      Note2HorizontalBox;                                      // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      Note3HorizontalBox;                                      // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      Note4HorizontalBox;                                      // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Note1Header;                                             // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Note2Header;                                             // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Note3Header;                                             // 0x0618(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Note4Header;                                             // 0x0620(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             Note1Spacer;                                             // 0x0628(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             Note2Spacer;                                             // 0x0630(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             Note3Spacer;                                             // 0x0638(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             Note4Spacer;                                             // 0x0640(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        InquireCanvas;                                           // 0x0648(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             ContactButton;                                           // 0x0650(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcRichTextBlock*                                    TextContact;                                             // 0x0658(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BroadcastOnClickChangePhoneNumberButton();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcDimmedWidget
	 * Size -> 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
	 */
	class UNcDimmedWidget : public UNcModalWidget
	{
	public:
		class UNcBorder*                                           Background;                                              // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcExtraAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcExtraAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGeneralWebViewWidget
	 * Size -> 0x00B0 (FullSize[0x05E0] - InheritedSize[0x0530])
	 */
	class UNcGeneralWebViewWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_2BQ9[0x78];                                  // 0x0530(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        WindowPanel;                                             // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      CloseHorizontalBox;                                      // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CloseSpacer;                                             // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             CloseButton;                                             // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNcWebBrowser*                                       Window;                                                  // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0SQE[0x10];                                  // 0x05D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Show(int32_t InZOrder);
		void SetSupportsTransparency(bool InSupportsTransparency);
		void LoadURL(const class FString& InUrl);
		void HandleOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg);
		class FString GetUrl();
		void ExecuteJavascript(const class FString& JavascriptExp);
		void BroadcastOnUrlChanged(const class FText& InText);
		void BroadcastOnClickClose();
		void BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGoogleAchievementAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcGoogleAchievementAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGoogleAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcGoogleAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGoogleLeaderboardAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcGoogleLeaderboardAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGoogleRewardAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcGoogleRewardAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcGoogleSdkAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcGoogleSdkAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcInputPhoneNumberWidget
	 * Size -> 0x00E0 (FullSize[0x0610] - InheritedSize[0x0530])
	 */
	class UNcInputPhoneNumberWidget : public UNcModalWidget
	{
	public:
		class UEditableTextBox*                                    PhoneNumberEditableTextBox;                              // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    MessageRichTextBlock;                                    // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UComboBoxString*                                     CountryComboBox;                                         // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    CountryCodeTextBlock;                                    // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBox_2;                                               // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            SizeBox_3;                                               // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           CountrySelectorBorder;                                   // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           PhoneNumberBorder;                                       // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           PhoneNumberInnerBorder;                                  // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      PhoneNumberHorizontalBox;                                // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             NumberInputSpacer1;                                      // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             NumberInputSpacer2;                                      // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             NumberInputSpacer3;                                      // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MD4E[0x78];                                  // 0x0598(0x0078) MISSED OFFSET (PADDING)

	public:
		void OnPhoneNumberInputTextChanged(const class FText& Text);
		void OnCountryComboBoxChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcLoggerAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcLoggerAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcNlpAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcNlpAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcOneStoreAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcOneStoreAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcOneStorePaymentV2API
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcOneStorePaymentV2API : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPaymentAccountCheckWidget
	 * Size -> 0x0040 (FullSize[0x0598] - InheritedSize[0x0558])
	 */
	class UNcPaymentAccountCheckWidget : public UNcAlertWidget
	{
	public:
		unsigned char                                              UnknownData_M78M[0x18];                                  // 0x0558(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GoogleIcon;                                              // 0x0570(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          OneStoreIcon;                                            // 0x0578(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock_Text2*                              UnderlineButtonText;                                     // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           UnderlineButton;                                         // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        BottomSlot;                                              // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnClickRetryButtonHandler();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPaymentV2API
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcPaymentV2API : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPlatformOverlayAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcPlatformOverlayAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPlatformSdkAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcPlatformSdkAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPlatformSdkBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcPlatformSdkBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPurpleAuthenticatorWidget
	 * Size -> 0x0170 (FullSize[0x06A0] - InheritedSize[0x0530])
	 */
	class UNcPurpleAuthenticatorWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_KLQU[0x70];                                  // 0x0530(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          LightPushSampleTexture;                                  // 0x05A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          GooglePlayEnglishTexture;                                // 0x05A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          AppleStoreEnglishTexture;                                // 0x05B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             Background;                                              // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CloseHorizontalBox;                                      // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             CloseButton;                                             // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            AlertSizeBox;                                            // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AlertTitle;                                              // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AlertDescription;                                        // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AlertSubDescription;                                     // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ContentHorizontalBox;                                    // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             PushBorder;                                              // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             PushBackground;                                          // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        PushVerticalBox;                                         // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              PushSampleImage;                                         // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TimeLeftTitle;                                           // 0x0618(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TimeLeftText;                                            // 0x0620(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ResendHorizontalBox;                                     // 0x0628(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ResendDescription;                                       // 0x0630(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ResendSpacer;                                            // 0x0638(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    ResendText;                                              // 0x0640(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ResendButton;                                            // 0x0648(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ContentSpacer;                                           // 0x0650(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             QrBorder;                                                // 0x0658(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             QrBackground;                                            // 0x0660(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        QrVerticalBox;                                           // 0x0668(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              QrImage;                                                 // 0x0670(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              GooglePlayImage;                                         // 0x0678(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             GooglePlayButton;                                        // 0x0680(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              AppleStoreImage;                                         // 0x0688(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             AppleStoreButton;                                        // 0x0690(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          AdditionalInstruction;                                   // 0x0698(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void BroadcastOnClickResend();
		void BroadcastOnClickGooglePlay();
		void BroadcastOnClickClose();
		void BroadcastOnClickAppleStore();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcPushAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcPushAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcReportAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcReportAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlock
	 * Size -> 0x0040 (FullSize[0x06B8] - InheritedSize[0x0678])
	 */
	class UNcRichTextBlock : public URichTextBlock
	{
	public:
		bool                                                       bWillOverrideFontSize;                                   // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMDH[0x3];                                   // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverridedFontSize;                                       // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWillOverrideFontColor;                                  // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZW4[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         OverridedFontColor;                                      // 0x0688(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bApplyUnderline;                                         // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUQC[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlockDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcRichTextBlockDecorator : public URichTextBlockDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlock_Text1
	 * Size -> 0x0000 (FullSize[0x06B8] - InheritedSize[0x06B8])
	 */
	class UNcRichTextBlock_Text1 : public UNcRichTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlock_Text2
	 * Size -> 0x0000 (FullSize[0x06B8] - InheritedSize[0x06B8])
	 */
	class UNcRichTextBlock_Text2 : public UNcRichTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlock_ButtonText1
	 * Size -> 0x0000 (FullSize[0x06B8] - InheritedSize[0x06B8])
	 */
	class UNcRichTextBlock_ButtonText1 : public UNcRichTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcRichTextBlock_PointText
	 * Size -> 0x0000 (FullSize[0x06B8] - InheritedSize[0x06B8])
	 */
	class UNcRichTextBlock_PointText : public UNcRichTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcSamsungPaymentAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcSamsungPaymentAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcScvAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcScvAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcSecondaryAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcSecondaryAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShopAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcShopAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowAbnormalRefundSlotWidget
	 * Size -> 0x00D8 (FullSize[0x04D8] - InheritedSize[0x0400])
	 */
	class UNcShowAbnormalRefundSlotWidget : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_7WKL[0x18];                                  // 0x0400(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TextDate;                                                // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextItemName;                                            // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextPaymentKey;                                          // 0x0428(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextPurchaseButton;                                      // 0x0430(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextRemainTitle;                                         // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextRemainCount;                                         // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextCompleteTitle;                                       // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextCompleteCount;                                       // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           PurchaseButton;                                          // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           Background;                                              // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            MainSizeBox;                                             // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           UpperLine;                                               // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           BottomLine;                                              // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      MainHorizontalBox;                                       // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        ItemNameVerticalBox;                                     // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             UpperSpacer;                                             // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             BottomSpacer;                                            // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            PurchaseSizeBox;                                         // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ItemNameSpacer;                                          // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             DateSpacer;                                              // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      TopHorizontalBox;                                        // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYXH[0x18];                                  // 0x04C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void BroadcastOnClickPurchaseButton();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowAbnormalRefundWidget
	 * Size -> 0x00D8 (FullSize[0x0608] - InheritedSize[0x0530])
	 */
	class UNcShowAbnormalRefundWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_JV2P[0x48];                                  // 0x0530(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TextTitle;                                               // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextDescription1;                                        // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextDescription2;                                        // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextDescription3;                                        // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextDescription4;                                        // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          TextCS;                                                  // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    TextContact;                                             // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        RefundListBox;                                           // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ContactButton;                                           // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            ContentSizeBox;                                          // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      FooterHorizontalBox1;                                    // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      FooterHorizontalBox2;                                    // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScrollBox*                                          ContentScrollBox;                                        // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        ContentVerticalBox;                                      // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          FooterHead1;                                             // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          FooterHead2;                                             // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        InquireCanvas;                                           // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1X6B[0x8];                                   // 0x0600(0x0008) MISSED OFFSET (PADDING)

	public:
		void BroadcastOnClickContactButton();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowAgreementSlotWidget
	 * Size -> 0x0108 (FullSize[0x0508] - InheritedSize[0x0400])
	 */
	class UNcShowAgreementSlotWidget : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_D7XH[0x30];                                  // 0x0400(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcCheckBox*                                         CheckBox;                                                // 0x0430(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        ItemTextLinesVerticalBox;                                // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ItemTextHorizontalBox;                                   // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            ItemTextOverlay;                                         // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    ItemText;                                                // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             TextButton;                                              // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             DetailButton;                                            // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcRichTextBlock*                                    DetailText;                                              // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          SubDescriptionText;                                      // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      TitleHorizontalBox;                                      // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      SubDescriptionHorizontalBox;                             // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      DetailHorizontalBox;                                     // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            MainSizeBox;                                             // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          DetailArrow;                                             // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             CheckBoxSpacer;                                          // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             SubDescriptionSpacer;                                    // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             DatailSpacer;                                            // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JOJ0[0x50];                                  // 0x04B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void ToggleCheckBoxState();
		void BroadcastOnClickDetailLink();
		void BroadcastOnCheckStateChanged(bool bIsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowAgreementWidget
	 * Size -> 0x0060 (FullSize[0x0590] - InheritedSize[0x0530])
	 */
	class UNcShowAgreementWidget : public UNcModalWidget
	{
	public:
		class UTextBlock*                                          Message;                                                 // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           CheckListBackground;                                     // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        CheckListBox;                                            // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6JMM[0x48];                                  // 0x0548(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowCampaignWidget
	 * Size -> 0x0168 (FullSize[0x0748] - InheritedSize[0x05E0])
	 */
	class UNcShowCampaignWidget : public UNcGeneralWebViewWidget
	{
	public:
		unsigned char                                              UnknownData_DXKM[0x68];                                  // 0x05E0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVerticalBox*                                        LayoutVerticalBox;                                       // 0x0648(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        CloseBarPanel;                                           // 0x0650(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           CloseBarBackground;                                      // 0x0658(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Title;                                                   // 0x0660(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ExceptCheckTitle;                                        // 0x0668(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             ExceptCheckButton;                                       // 0x0670(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcCheckBox*                                         ExceptCheckBox;                                          // 0x0678(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            ExceptCheckTitleSizeBox;                                 // 0x0680(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            TitleSizeBox;                                            // 0x0688(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CloseBarHorizontalBox;                                   // 0x0690(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            ExceptTitleOverlay;                                      // 0x0698(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ExceptCheckButtonHorizontalBox;                          // 0x06A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              WindowBackground;                                        // 0x06A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        CampaignImageCanvas;                                     // 0x06B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScrollBox*                                          CampaignImageScrollBox;                                  // 0x06B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              CampaignImage;                                           // 0x06C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            CloseButtonSizeBox;                                      // 0x06C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             CheckBoxSpacer;                                          // 0x06D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OY2A[0x70];                                  // 0x06D8(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetTemplete(int32_t TemplateType, const class FString& TitleString, const class FString& ExceptTitleString);
		void OnUnhoveredExceptCheckButton();
		void OnReleasedExceptCheckButton();
		void OnPressedExceptCheckButton();
		void OnInputEnabled();
		struct FEventReply OnImageClickAction(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnHoveredExceptCheckButton();
		void LoadCampaignImage(const class FString& ImageUrl);
		struct FDateTime GetVisibleStartTime();
		void BroadcastOnClickExceptCheck();
		void BroadcastOnCampaignWebBrowserClosed(bool HasError, const class FString& ErrorMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowLoginProviderCircleWidget
	 * Size -> 0x0090 (FullSize[0x0490] - InheritedSize[0x0400])
	 */
	class UNcShowLoginProviderCircleWidget : public UNcWidgetBase
	{
	public:
		class UTexture2D*                                          GuestIcon;                                               // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GoogleIcon;                                              // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FacebookIcon;                                            // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TwitterIcon;                                             // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LineIcon;                                                // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AppleIcon;                                               // 0x0428(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          VKIcon;                                                  // 0x0430(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BeanfunIcon;                                             // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GameCenterIcon;                                          // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PSNIcon;                                                 // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          XBoxIcon;                                                // 0x0450(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SteamIcon;                                               // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41V6[0x18];                                  // 0x0460(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             ProviderButton;                                          // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ButtonBorder;                                            // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U5HT[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetProviderImage(class UTexture2D* InImage);
		void BroadcastOnClickProvider();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowLoginProviderSquareWidget
	 * Size -> 0x00E8 (FullSize[0x04E8] - InheritedSize[0x0400])
	 */
	class UNcShowLoginProviderSquareWidget : public UNcWidgetBase
	{
	public:
		class UTexture2D*                                          GuestIcon;                                               // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          NCIcon;                                                  // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PhoneIcon;                                               // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GoogleIcon;                                              // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FacebookIcon;                                            // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TwitterIcon;                                             // 0x0428(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LineIcon;                                                // 0x0430(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AppleIcon;                                               // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BeanfunIcon;                                             // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GameCenterIcon;                                          // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          VKIcon;                                                  // 0x0450(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PSNIcon;                                                 // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          XBoxIcon;                                                // 0x0460(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SteamIcon;                                               // 0x0468(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJW2[0x18];                                  // 0x0470(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNcButton*                                           LoginButton;                                             // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           ButtonBorder;                                            // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              ProviderIcon;                                            // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ProviderText;                                            // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            MainSizeBox;                                             // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            TextSizeBox;                                             // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ProviderIconHorizontalBox;                               // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ProviderIconPuller;                                      // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ProviderTextSpacer1;                                     // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             ProviderTextSpacer2;                                     // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      ProviderTextHorizontalBox;                               // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P0Q9[0x8];                                   // 0x04E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetProviderText(const class FText& InText);
		void RefreshTextLayout();
		void BroadcastOnClickProvider();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcShowLoginWidget
	 * Size -> 0x0110 (FullSize[0x0640] - InheritedSize[0x0530])
	 */
	class UNcShowLoginWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_NX5V[0x78];                                  // 0x0530(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHorizontalBox*                                      CloseHorizontalBox;                                      // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             CloseButton;                                             // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      SectionHorizontalBox;                                    // 0x05B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      SquareProviderSection;                                   // 0x05C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        SquareProviderVerticalBox;                               // 0x05C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        CircleProviderSection;                                   // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              LastCircle;                                              // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           Background;                                              // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            CountrySelectOverlay;                                    // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CountrySelectHorizontalBox;                              // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      CountryButtonHorizontalBox;                              // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              CountryImage;                                            // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          CountryText;                                             // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             CountryButton;                                           // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             LastCircleSpacer;                                        // 0x0618(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             SectionSpacer;                                           // 0x0620(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             RightSpacer;                                             // 0x0628(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             CountryTextSpacer;                                       // 0x0630(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             CountryButtonSpacer;                                     // 0x0638(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnUnhoveredCountryButton();
		void OnReleasedCountryButton();
		void OnPressedCountryButton();
		void OnHoveredCountryButton();
		void OnClickedCountryButton();
		void BroadcastOnClickClose();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcSimpleLoginSlotWidget
	 * Size -> 0x01A8 (FullSize[0x05A8] - InheritedSize[0x0400])
	 */
	class UNcSimpleLoginSlotWidget : public UNcWidgetBase
	{
	public:
		class UTexture2D*                                          GuestIcon;                                               // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayncIcon;                                              // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PhoneIcon;                                               // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GoogleIcon;                                              // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FacebookIcon;                                            // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TwitterIcon;                                             // 0x0428(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LineIcon;                                                // 0x0430(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AppleidIcon;                                             // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          VKIcon;                                                  // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PSNIcon;                                                 // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          XBoxIcon;                                                // 0x0450(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SteamIcon;                                               // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TVX[0x70];                                  // 0x0460(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        SlotFullPanel;                                           // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcBorder*                                           ButtonBorder;                                            // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNcButton*                                           SlotButton;                                              // 0x04E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      MainHorizontalBox;                                       // 0x04E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              LoginProviderIcon;                                       // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PlayncAccountType;                                       // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Title;                                                   // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Subtitle;                                                // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             MemoButton;                                              // 0x0510(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              MemoIcon;                                                // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UButton*                                             DeleteButton;                                            // 0x0520(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          OnlineStatus;                                            // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              MemoBorder;                                              // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            InfoSizeBox;                                             // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        InfoVerticalBox;                                         // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      TitleHorizontalBox;                                      // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      SubTitleHorizontalBox;                                   // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             EmptySpacer;                                             // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             IconSpacer;                                              // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             TitleSpacer;                                             // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             OnlineStatusSpacer;                                      // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             TitleFiller;                                             // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             SubTitleSpacer;                                          // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             SubTitleFiller;                                          // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             MemoBorderSpacer;                                        // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            MemoButtonSizeBox;                                       // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpacer*                                             DeleteButtonSpacer;                                      // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnReleasedMemo();
		void OnPressedMemo();
		void BroadcastOnClickSlot();
		void BroadcastOnClickMemo();
		void BroadcastOnClickDelete();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcSimpleLoginWidget
	 * Size -> 0x0068 (FullSize[0x0598] - InheritedSize[0x0530])
	 */
	class UNcSimpleLoginWidget : public UNcModalWidget
	{
	public:
		unsigned char                                              UnknownData_C2VY[0x60];                                  // 0x0530(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVerticalBox*                                        SlotBox;                                                 // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcStorageAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcStorageAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcToastPopupWidget
	 * Size -> 0x0010 (FullSize[0x0478] - InheritedSize[0x0468])
	 */
	class UNcToastPopupWidget : public UNcBaseAnimationDialogWidget
	{
	public:
		float                                                      VisibleTime;                                             // 0x0468(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8L0[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          MessageText;                                             // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcTouchBlockerWidget
	 * Size -> 0x0010 (FullSize[0x0410] - InheritedSize[0x0400])
	 */
	class UNcTouchBlockerWidget : public UNcWidgetBase
	{
	public:
		class UImage*                                              Background;                                              // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCircularThrobber*                                   Indicator;                                               // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcTwoFactorAuthAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcTwoFactorAuthAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcUserAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcUserAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcUtilAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNcUtilAPI : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcWatermarkWidget
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UNcWatermarkWidget : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        Panel;                                                   // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        VerticalBox;                                             // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2QA[0x40];                                  // 0x0270(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcWebBrowser
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UNcWebBrowser : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_SE77[0x30];                                  // 0x0260(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             WindowComponent;                                         // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCircularThrobber*                                   LoadingIndicator;                                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericPlatformNcWebBrowser*                        PlatformNcWebBrowser;                                    // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WVTC[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetExtraParams(TMap<class FString, class FString> Params);
		void OnWebBrowserClosed__DelegateSignature(bool HasError, const class FString& ErrorMsg);
		void OnUrlChanged__DelegateSignature(const class FText& Text);
		void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
		void LoadURL(const class FString& InUrl);
		void ExecuteJavascript(const class FString& JavascriptExp);
		void BroadcastOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg);
		void BroadcastOnUrlChanged(const class FText& InText);
		void BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame);
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcWidget_Template
	 * Size -> 0x01E8 (FullSize[0x05E8] - InheritedSize[0x0400])
	 */
	class UNcWidget_Template : public UNcWidgetBase
	{
	public:
		unsigned char                                              UnknownData_B7O2[0x18];                                  // 0x0400(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNcWidgetStyleOverrideSettings                      StyleOverrideSettings;                                   // 0x0418(0x0078) Edit, NativeAccessSpecifierPublic
		class UNcBorder*                                           Background;                                              // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcBorder*                                           ContentBackground;                                       // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcBorder*                                           WidgetBorder;                                            // 0x04A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            BorderSizeBox;                                           // 0x04A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        TitleSection;                                            // 0x04B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TitleTextBlock;                                          // 0x04B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNamedSlot*                                          ContentSlot;                                             // 0x04C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        ContentSection;                                          // 0x04C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        ButtonSection;                                           // 0x04D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcButton*                                           CancelButton;                                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcRichTextBlock*                                    CancelButtonText;                                        // 0x04E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcButton*                                           ConfirmButton;                                           // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNcRichTextBlock*                                    ConfirmButtonText;                                       // 0x04F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             ButtonsSpacer;                                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            ButtonVerticalSize;                                      // 0x0500(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      ButtonHorizontalBox;                                     // 0x0508(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpacer*                                             CloseSpacer;                                             // 0x0510(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHorizontalBox*                                      CloseHorizontalBox;                                      // 0x0518(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CloseButton;                                             // 0x0520(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2MK[0x68];                                  // 0x0528(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENcWidgetStyleType                                         Style;                                                   // 0x0590(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RKCV[0x57];                                  // 0x0591(0x0057) MISSED OFFSET (PADDING)

	public:
		void OnClickedCustomButton();
		void OnClickedConfirmButton();
		void OnClickedCancelButton();
		void OnClickCloseButton();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.NcWidgetCreater
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UNcWidgetCreater : public UObject
	{
	public:
		unsigned char                                              UnknownData_H7WD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		class APlayerController* GetPlayerController();
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.SdkDataJsonSaveGame
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USdkDataJsonSaveGame : public USaveGame
	{
	public:
		class FString                                              Data;                                                    // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.SDKSaveData
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class USDKSaveData : public USaveGame
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SaveIndex;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2ZV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GuestAuthnToken;                                         // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UUID;                                                    // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UDID;                                                    // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PushDeviceToken;                                         // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PushProviderCode;                                        // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CountryCode;                                             // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x00A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionSecret;                                           // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastLoggedInAuthProviderCode;                            // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpectCampaigns;                                         // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrderDatum;                                              // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NcSecondaryAuth_DeviceId;                                // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NcSecondaryAuth_InitializationVector;                    // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NcSecondaryAuth_AuthNonce;                               // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         CustomData;                                              // 0x0120(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_Text1
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_Text1 : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_Text2
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_Text2 : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_ButtonText1
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_ButtonText1 : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_PointText
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_PointText : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_TextHovered
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_TextHovered : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.TextBlock_ErrorText
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UTextBlock_ErrorText : public UTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NcPlatformSdk.WindowsNcWebBrowser
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UWindowsNcWebBrowser : public UGenericPlatformNcWebBrowser
	{
	public:
		class UWebBrowser*                                         Window;                                                  // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
