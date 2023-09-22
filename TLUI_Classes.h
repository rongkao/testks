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
	 * Class TLUI.TLViewModelBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTLViewModelBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TextLayoutWidgetTL
	 * Size -> 0x0090 (FullSize[0x0198] - InheritedSize[0x0108])
	 */
	class UTextLayoutWidgetTL : public UWidget
	{
	public:
		unsigned char                                              UnknownData_WK49[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0110(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		ETextJustifyTL                                             Justification;                                           // 0x0113(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x0114(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoWrapText : 1;                                        // 0x0115(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RRU5[0x2];                                   // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DynamicAutoWrapText : 1;                                 // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseWrapScaling;                                         // 0x011D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBE6[0x2];                                   // 0x011E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinWrapLimitOverFontSize;                                // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2D0[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, int32_t>                               LanguageMinWrapLimitOverFontSizeMap;                     // 0x0128(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		ETLTextWrapLimitOverRule                                   WrapLimitOverRule;                                       // 0x0178(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CZTT[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextHeight;                                          // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RollingSpeed;                                            // 0x0180(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             Margin;                                                  // 0x0184(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      LineHeightPercentage;                                    // 0x0194(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetJustification(ETextJustifyTL InJustification);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLAdvancedMarkupHelper
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTLAdvancedMarkupHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_2AQU[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLCanvasPanel
	 * Size -> 0x0130 (FullSize[0x0268] - InheritedSize[0x0138])
	 */
	class UTLCanvasPanel : public UCanvasPanel
	{
	public:
		unsigned char                                              UnknownData_NT9X[0x68];                                  // 0x0138(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01B0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseExplicitChildZOrder;                                 // 0x01C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC3J[0x17];                                  // 0x01C9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0220(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       ChildDisableHitTestAll;                                  // 0x0260(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MM4Q[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLAttachPanel
	 * Size -> 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
	 */
	class UTLAttachPanel : public UTLCanvasPanel
	{
	public:
		TArray<struct FTLAttachedWidget>                           PreviewFrameList;                                        // 0x0268(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		ETLUIPlatform                                              PreviewUIPlatform;                                       // 0x0278(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FU9Z[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLBackgroundBlur
	 * Size -> 0x00F0 (FullSize[0x02C8] - InheritedSize[0x01D8])
	 */
	class UTLBackgroundBlur : public UBackgroundBlur
	{
	public:
		unsigned char                                              UnknownData_RGVA[0x60];                                  // 0x01D8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x023C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0248(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0288(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLBorder
	 * Size -> 0x0100 (FullSize[0x0370] - InheritedSize[0x0270])
	 */
	class UTLBorder : public UBorder
	{
	public:
		unsigned char                                              UnknownData_J5H0[0x60];                                  // 0x0270(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x02D4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x02E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0320(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15BI[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetContentColorWithColorTable(const class FName& InTableColorKey);
		void SetBrushTintColorWithColorTable(const class FName& InTableColorKey);
		void SetBrushFromSprite(class UPaperSprite* Sprite);
		void SetBrushFromSoftObjectPath(const struct FSoftObjectPath& Path, bool bInAsyncLoad);
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLButton
	 * Size -> 0x0120 (FullSize[0x0548] - InheritedSize[0x0428])
	 */
	class UTLButton : public UButton
	{
	public:
		unsigned char                                              UnknownData_C8PU[0x60];                                  // 0x0428(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x048C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0498(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x04D8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnClickWEvent;                                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnPressWEvent;                                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnReleaseWEvent;                                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnHoverWEvent;                                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnUnhoverWEvent;                                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OQ1[0x8];                                   // 0x0540(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnUnhoverHandler();
		void OnReleaseHandler();
		void OnPressHandler();
		void OnHoverHandler();
		void OnClickHandler();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLCheckBox
	 * Size -> 0x0128 (FullSize[0x0898] - InheritedSize[0x0770])
	 */
	class UTLCheckBox : public UCheckBox
	{
	public:
		unsigned char                                              UnknownData_FG8X[0x60];                                  // 0x0770(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x07D4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x07E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0820(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnCheckSound;                                            // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnUncheckSound;                                          // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnHoverSound;                                            // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnUnhoverSound;                                          // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChecked;                                               // 0x0880(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJ5K[0x8];                                   // 0x0890(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTLCheckStateChangedCallback(bool IsChecked);
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLCircularThrobber
	 * Size -> 0x00F0 (FullSize[0x02B0] - InheritedSize[0x01C0])
	 */
	class UTLCircularThrobber : public UCircularThrobber
	{
	public:
		unsigned char                                              UnknownData_NN8J[0x60];                                  // 0x01C0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0224(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0230(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0270(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLComboBoxString
	 * Size -> 0x0D38 (FullSize[0x1B38] - InheritedSize[0x0E00])
	 */
	class UTLComboBoxString : public UComboBoxString
	{
	public:
		unsigned char                                              UnknownData_J4NV[0x60];                                  // 0x0E00(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0E64(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0E70(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0EB0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnSelectionChangedSound;                                 // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnOpeningSound;                                          // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCustomScrollbar;                                       // 0x0F00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRYF[0x7];                                   // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     WidgetScrollbarStyle;                                    // 0x0F08(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyle;                                   // 0x14E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V5Q[0x7];                                   // 0x14E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyleConsole;                                   // 0x14F0(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyleConsole;                            // 0x1AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB0O[0x3];                                   // 0x1AD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x1AD4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x1ADC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPadding;                                   // 0x1AEC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPaddingConsole;                                 // 0x1AFC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScrollbarThicknessConsole;                               // 0x1B0C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPaddingConsole;                            // 0x1B14(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUAI[0x14];                                  // 0x1B24(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOptionIndex(int32_t Index);
		void SetMenuPlacement(EMenuPlacement InMenuPlacement);
		void OnSelectionChangedHandler(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningHandler();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		int32_t GetSelectedOptionIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLContentsSlot
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UTLContentsSlot : public UWidget
	{
	public:
		unsigned char                                              UnknownData_PGHH[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ContentsWidgetClass[0x28];                               // 0x0118(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bWidgetSyncLoad;                                         // 0x0140(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P6FZ[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         ContentsWidget;                                          // 0x0148(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLDynamicEntryBox
	 * Size -> 0x0128 (FullSize[0x0308] - InheritedSize[0x01E0])
	 */
	class UTLDynamicEntryBox : public UDynamicEntryBox
	{
	public:
		unsigned char                                              UnknownData_54OC[0x68];                                  // 0x01E0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x024C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0258(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0298(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x02D8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWQK[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapWidth;                                               // 0x0300(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapWidth;                                      // 0x0304(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKN6[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLEditableText
	 * Size -> 0x00F0 (FullSize[0x0550] - InheritedSize[0x0460])
	 */
	class UTLEditableText : public UEditableText
	{
	public:
		unsigned char                                              UnknownData_3AMI[0x60];                                  // 0x0460(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x04C4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x04D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0510(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLEditableTextBox
	 * Size -> 0x0DD0 (FullSize[0x0ED8] - InheritedSize[0x0108])
	 */
	class UTLEditableTextBox : public UWidget
	{
	public:
		unsigned char                                              UnknownData_ZFES[0x68];                                  // 0x0108(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0170(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0188(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0198(0x0908) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0AA0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0AA8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0AC0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0AD0(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0B28(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0B38(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0B48(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0B58(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0B59(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLGX[0x2];                                   // 0x0B5A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0B5C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0B60(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0B70(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0B71(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0B72(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0B73(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0B74(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0B75(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreFocusLostCommited;                                 // 0x0B76(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0B77(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0B78(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0B79(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustifyTL                                             Justification;                                           // 0x0B7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0B7B(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAVI[0x2];                                   // 0x0B7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0B80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0B90(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextFocusReceived;                                     // 0x0BA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextFocusLost;                                         // 0x0BB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextMouseButtonDown;                                   // 0x0BC0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UTLTextBlockDecorator*>                       DecoratorObjects;                                        // 0x0BD0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AWJR[0x238];                                 // 0x0BE0(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0E1C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x0E28(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXSS[0x10];                                  // 0x0E40(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0E50(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0E90(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    MaxChar;                                                 // 0x0ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCustomWidgetStyle;                                      // 0x0ED4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETLEditableBoxEscapeAction                                 EscapeAction;                                            // 0x0ED5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J5B1[0x2];                                   // 0x0ED6(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetMaxChar(int32_t InMaxChar);
		void SetIsReadOnly(bool bReadOnly);
		void SetIsPassword(bool bIsPassword);
		void SetIgnoreFocusLostCommited(bool InIsIgnore);
		void SetHintText(const class FText& InText);
		void SetEscapeAction(ETLEditableBoxEscapeAction InEscapeAction);
		void SetError(const class FText& InError);
		void SelectAllText();
		void OnEditableTextMouseButtonDownEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& InMouseEvent);
		void OnEditableTextFocusReceivedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnEditableTextFocusLostEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		bool HasError();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLExpandableArea
	 * Size -> 0x00F0 (FullSize[0x0428] - InheritedSize[0x0338])
	 */
	class UTLExpandableArea : public UExpandableArea
	{
	public:
		unsigned char                                              UnknownData_20KN[0x60];                                  // 0x0338(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x039C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x03A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x03E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLImageBase
	 * Size -> 0x0128 (FullSize[0x0230] - InheritedSize[0x0108])
	 */
	class UTLImageBase : public UWidget
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0108(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushDelegate;                                           // 0x0190(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDisableColorAndOpacity;                              // 0x01C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQ6Q[0x2];                                   // 0x01C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DisabledTint;                                            // 0x01C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      DisabledTintDelegate;                                    // 0x01D4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x01E4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY9R[0x3C];                                  // 0x01F4(0x003C) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetColorWithColorTable(const class FName& InTableColorKey);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushTintColorWithColorTable(const class FName& InTableColorKey);
		void SetBrushTintColor(const struct FSlateColor& TintColor);
		void SetBrushSize(const struct FVector2D& DesiredSize);
		void SetBrushResourceObject(class UObject* ResourceObject);
		void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
		void SetBrushFromTexture_MaintainRatio(class UTexture2D* Texture, const struct FVector2D& DefaultSize);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrushFromSoftTexture(bool bMatchSize);
		void SetBrushFromSoftMaterial();
		void SetBrushFromRenderTarget(class UTextureRenderTarget2D* Texture, bool bMatchSize);
		void SetBrushFromMediaTexture(class UBinkMediaTexture* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAtlasInterface(bool bMatchSize);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrush(const struct FSlateBrush& InBrush);
		void PlayOrCloseBinkMediaPlayer(bool bInPlay);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLFlipBookImage
	 * Size -> 0x0158 (FullSize[0x0388] - InheritedSize[0x0230])
	 */
	class UTLFlipBookImage : public UTLImageBase
	{
	public:
		unsigned char                                              UnknownData_33YV[0x68];                                  // 0x0230(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x029C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x02A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x02E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UObject*                                             CustomMaterial;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperFlipbook*                                      flipbook;                                                // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    FramesPerSecond;                                         // 0x0338(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentFrame;                                            // 0x033C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TotalFrames;                                             // 0x0340(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LoopCount;                                               // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoPlay;                                                // 0x0348(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PB5V[0xF];                                   // 0x0349(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKeyFrameBrush>                              KeyFrameBrushes;                                         // 0x0358(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8WDZ[0x20];                                  // 0x0368(0x0020) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetFlipbookFromSoftObjectPath(const struct FSoftObjectPath& Path);
		void SetCurrentFrame(int32_t Frame);
		void Play();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLGridPanel
	 * Size -> 0x0120 (FullSize[0x0270] - InheritedSize[0x0150])
	 */
	class UTLGridPanel : public UGridPanel
	{
	public:
		unsigned char                                              UnknownData_T39G[0x68];                                  // 0x0150(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01BC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01C8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO3S[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01F0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0230(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLHorizontalBox
	 * Size -> 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
	 */
	class UTLHorizontalBox : public UHorizontalBox
	{
	public:
		unsigned char                                              UnknownData_AUYB[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RZN[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0210(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLImage
	 * Size -> 0x02B0 (FullSize[0x04E0] - InheritedSize[0x0230])
	 */
	class UTLImage : public UTLImageBase
	{
	public:
		unsigned char                                              UnknownData_Y598[0x60];                                  // 0x0230(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0294(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x02A0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x02E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingImageBrush                          ImageBrushBinding;                                       // 0x0320(0x0048) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingImageColorAndOpacity                ColorAndOpacityBinding;                                  // 0x0368(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UObject*                                             CustomMaterial;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HslShift;                                                // 0x03B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Colorize;                                                // 0x03C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2L2[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x03C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            MaskTexture;                                             // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      RenderedCustomMaterialBrushDelegate;                     // 0x03D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RenderedCustomMaterialBrush;                             // 0x03E0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FSlateBrush>                      NamedSlateBrushes;                                       // 0x0468(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                CurrentSlateBrushName;                                   // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WU65[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ResrouceObject;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYUY[0x10];                                  // 0x04D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetMaskTexture(class UTexture* InMaskTexture);
		void SetHslShift(const struct FLinearColor& InHslShift);
		void SetBrushFromSprite(class UPaperSprite* Sprite, bool bMatchSize);
		void SetBrushFromSoftObjectPath(const struct FSoftObjectPath& Path, bool bInAsyncLoad, bool bInAutoShowAfterBrushLoading, bool bMatchSize);
		void SetBrushFromCustomMaterial(class UObject* InObject);
		bool SetBrushByName(const class FName& InSlateBrushName, bool InApplyVisible);
		void HandleUpdateVisible();
		void HandleUpdateImageBrush();
		void HandleUpdateEnabled();
		void HandleUpdateColorAndOpacity();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLInputKeyCombiSelector
	 * Size -> 0x06E8 (FullSize[0x07F0] - InheritedSize[0x0108])
	 */
	class UTLInputKeyCombiSelector : public UWidget
	{
	public:
		unsigned char                                              UnknownData_ZQ0Z[0x60];                                  // 0x0108(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0168(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x03E0(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FInputChord>                                 SelectedKeys;                                            // 0x0650(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0660(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x06B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x06C8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x06D8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                NoKeySpecifiedText;                                      // 0x06F0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x0708(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGamepadKeys;                                       // 0x0709(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4U8[0x6];                                   // 0x070A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        EscapeKeys;                                              // 0x0710(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnSelectingKeyChangedSound;                              // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnMouseHoverSound;                                       // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0730(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0740(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOPR[0x10];                                  // 0x0750(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0764(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0770(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x07B0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetTextBlockVisibility(ESlateVisibility InVisibility);
		void SetSelectedKey(TArray<struct FInputChord> InSelectedKey);
		void SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
		void OnKeySelected__DelegateSignature(TArray<struct FInputChord> SelectedKeys);
		void OnIsSelectingKeyChanged__DelegateSignature();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLInputKeySelector
	 * Size -> 0x06F8 (FullSize[0x0800] - InheritedSize[0x0108])
	 */
	class UTLInputKeySelector : public UWidget
	{
	public:
		unsigned char                                              UnknownData_UX4S[0x60];                                  // 0x0108(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0168(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x03E0(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         SelectedKey;                                             // 0x0650(0x0020) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0670(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x06C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x06D8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x06E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                NoKeySpecifiedText;                                      // 0x0700(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x0718(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGamepadKeys;                                       // 0x0719(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V52D[0x6];                                   // 0x071A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        EscapeKeys;                                              // 0x0720(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnSelectingKeyChangedSound;                              // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnMouseHoverSound;                                       // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0740(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEMT[0x10];                                  // 0x0760(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0770(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0774(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0780(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x07C0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetTextBlockVisibility(ESlateVisibility InVisibility);
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
		void SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void OnIsSelectingKeyChanged__DelegateSignature();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLInvalidationBox
	 * Size -> 0x0100 (FullSize[0x0238] - InheritedSize[0x0138])
	 */
	class UTLInvalidationBox : public UInvalidationBox
	{
	public:
		unsigned char                                              UnknownData_5EPW[0x60];                                  // 0x0138(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    DebugID;                                                 // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByLayerID;                                       // 0x022C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByLocalSize;                                     // 0x022D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByAccumScale;                                    // 0x022E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByAccumTranslation;                              // 0x022F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByClipRectSize;                                  // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByClippingState;                                 // 0x0231(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecacheByColorAndOpacityTint;                           // 0x0232(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNEV[0x5];                                   // 0x0233(0x0005) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLLinearBox
	 * Size -> 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
	 */
	class UTLLinearBox : public UPanelWidget
	{
	public:
		EOrientation                                               Orientation;                                             // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReverseOrder;                                           // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DE4L[0x26];                                  // 0x0122(0x0026) MISSED OFFSET (PADDING)

	public:
		void ToggleOrientation();
		void SetReverseOrder(bool bInReverseOrder);
		void SetOrientation(EOrientation InOrientation);
		bool GetReverseOrder();
		EOrientation GetOrientation();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLLinearBoxSlot
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UTLLinearBoxSlot : public UPanelSlot
	{
	public:
		struct FSlateChildSize                                     Size;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJAN[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LW62[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLListView
	 * Size -> 0x0D80 (FullSize[0x10F0] - InheritedSize[0x0370])
	 */
	class UTLListView : public UListView
	{
	public:
		unsigned char                                              UnknownData_I2AS[0x68];                                  // 0x0370(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x03DC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x03E8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF66[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0410(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0450(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingListChanged                         ListChangedBinding;                                      // 0x0490(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x04D0(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyle;                                   // 0x0AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGLQ[0x7];                                   // 0x0AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyleConsole;                                   // 0x0AB8(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyleConsole;                            // 0x1098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x1099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WK6H[0x2];                                   // 0x109A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x109C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x10A4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPadding;                                   // 0x10B4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPaddingConsole;                                 // 0x10C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScrollbarThicknessConsole;                               // 0x10D4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPaddingConsole;                            // 0x10DC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EDragScrollingType                                         DragScrollingType;                                       // 0x10EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L7Y[0x3];                                   // 0x10ED(0x0003) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateListChanged();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLMenuAnchor
	 * Size -> 0x00F0 (FullSize[0x0260] - InheritedSize[0x0170])
	 */
	class UTLMenuAnchor : public UMenuAnchor
	{
	public:
		unsigned char                                              UnknownData_US70[0x60];                                  // 0x0170(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01D4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0220(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLMultiLineEditableText
	 * Size -> 0x0120 (FullSize[0x0590] - InheritedSize[0x0470])
	 */
	class UTLMultiLineEditableText : public UMultiLineEditableText
	{
	public:
		unsigned char                                              UnknownData_0D8Y[0x68];                                  // 0x0470(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x04DC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x04E8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZKL[0x10];                                  // 0x0500(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0510(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0550(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLMultiLineEditableTextBox
	 * Size -> 0x0FA8 (FullSize[0x1140] - InheritedSize[0x0198])
	 */
	class UTLMultiLineEditableTextBox : public UTextLayoutWidgetTL
	{
	public:
		unsigned char                                              UnknownData_AYSN[0x68];                                  // 0x0198(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0200(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0218(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0230(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0240(0x0908) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyleTL                                   TextStyle;                                               // 0x0B48(0x0208) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0D50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0D51(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0D52(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0D53(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MA4J[0x4];                                   // 0x0D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0D58(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0D60(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0DB8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0DC8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0DD8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0DE8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0DF8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextFocusReceived;                                     // 0x0E08(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextFocusLost;                                         // 0x0E18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextMouseButtonDown;                                   // 0x0E28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UTLTextBlockDecorator*>                       DecoratorObjects;                                        // 0x0E38(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R4Q4[0x238];                                 // 0x0E48(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x1080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x1084(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x1090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O312[0x10];                                  // 0x10A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x10B8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x10F8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    MaxChar;                                                 // 0x1138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCustomWidgetStyle;                                      // 0x113C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9P5F[0x3];                                   // 0x113D(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetTextStyle(const struct FTextBlockStyleTL& InTextStyle);
		void SetText(const class FText& InText);
		void SetMaxChar(int32_t InMaxChar);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void SetError(const class FText& InError);
		void SelectAllText();
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void OnEditableTextMouseButtonDownEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& InMouseEvent);
		void OnEditableTextFocusReceivedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnEditableTextFocusLostEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent);
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		class FText GetText();
		class FText GetHintText();
		int32_t GetCurrentLineCount();
		int32_t GetCurrentCursorLine();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLNamedSlot
	 * Size -> 0x00F0 (FullSize[0x0220] - InheritedSize[0x0130])
	 */
	class UTLNamedSlot : public UNamedSlot
	{
	public:
		unsigned char                                              UnknownData_P54B[0x60];                                  // 0x0130(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0194(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01A0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01E0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLNativeWidgetHost
	 * Size -> 0x00F0 (FullSize[0x0208] - InheritedSize[0x0118])
	 */
	class UTLNativeWidgetHost : public UNativeWidgetHost
	{
	public:
		unsigned char                                              UnknownData_1XCL[0x60];                                  // 0x0118(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x017C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0188(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01C8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLOverlay
	 * Size -> 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
	 */
	class UTLOverlay : public UOverlay
	{
	public:
		unsigned char                                              UnknownData_0AA8[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMCK[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0210(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLProgressBar
	 * Size -> 0x0318 (FullSize[0x0630] - InheritedSize[0x0318])
	 */
	class UTLProgressBar : public UProgressBar
	{
	public:
		unsigned char                                              UnknownData_9FOR[0x60];                                  // 0x0318(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x037C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0388(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x03C8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingPercent                             PercentBinding;                                          // 0x0408(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BP_OnChangePercent;                                      // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGZF[0x30];                                  // 0x0458(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLockMaxPercent;                                         // 0x0488(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPercentOverAction;                                      // 0x0489(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1UXL[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         PercentCurve;                                            // 0x0490(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DecreaseDurationSec;                                     // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IncreaseDurationSec;                                     // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTLProgressSlateBrushInfo>                   EdgeImageBrush;                                          // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UTLProgressBar*>                              SubProgressBars;                                         // 0x04B0(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bCircleBarFillType;                                      // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCW;                                                     // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FX3T[0x2];                                   // 0x04C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartAngle;                                              // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TotalAngle;                                              // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEdgeImagePercentMaterial;                               // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z3XE[0x3];                                   // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CustomMaterial;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             PercentMaterial;                                         // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DisabledTint;                                            // 0x04E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptDelegate                                      DisabledTintDelegate;                                    // 0x04F0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        HslShift;                                                // 0x0500(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Colorize;                                                // 0x0510(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JGNQ[0x3];                                   // 0x0511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0514(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         RenderedCustomMaterialBrush;                             // 0x0518(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YEUH[0x60];                                  // 0x05A0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTLProgressBar*                                      AfterImageBar;                                           // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLProgressBar*                                      TargetBar;                                               // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTLImage*                                            HeadImage;                                               // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             EdgeImage;                                               // 0x0618(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WMEC[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateEdgeImageBrush();
		void SetTargetPercent(float InPercent);
		void SetSubPercent(float InPercent);
		void SetPercentMaterial(class UMaterial* InPercentMaterial);
		void SetIncreaseDuration(float InDurationSec);
		void SetHeadImage(class UTLImage* InHeadImage);
		void SetFillImageBrush(class UObject* ResourceObject);
		void SetEdgeImage(class UWidget* InEdgeImage);
		void SetDecreaseDuration(float InDurationSec);
		void SetCurveGraph(class UCurveFloat* InCurve);
		void SetCurrentPercent(float InPercent);
		void SetAfterImageBar(class UTLProgressBar* InAfterImageBar);
		void PlayWithDuration(float Duration);
		void PlayAfterImageWithDuration(float Duration);
		void Play();
		void HandleUpdateVisible();
		void HandleUpdatePercent();
		void HandleUpdateEnabled();
		float GetRemainSec();
		class UMaterialInstanceDynamic* GetFillImageDynamicMaterial();
		float GetDurationSec();
		void AddSubProgressBar(class UTLProgressBar* InSubProgressBar);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLRadarChart
	 * Size -> 0x00F0 (FullSize[0x0538] - InheritedSize[0x0448])
	 */
	class UTLRadarChart : public URadarChart
	{
	public:
		unsigned char                                              UnknownData_YFX5[0x60];                                  // 0x0448(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x04AC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x04B8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x04F8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetValueLayerShapeColor(int32_t InIndex, const struct FLinearColor& InColor);
		void SetValueLayerOutLineThinckness(int32_t InIndex, float InValue);
		void SetValueLayerOutLineColor(int32_t InIndex, const struct FLinearColor& InColor);
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLRadioButton
	 * Size -> 0x0000 (FullSize[0x0898] - InheritedSize[0x0898])
	 */
	class UTLRadioButton : public UTLCheckBox
	{
	public:
		void SetButton(bool IsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLRadioGroup
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UTLRadioGroup : public UTLGridPanel
	{
	public:
		void SetCheckIndex(int32_t Index);
		int32_t GetSelectedIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLRetainerBox
	 * Size -> 0x00F0 (FullSize[0x0240] - InheritedSize[0x0150])
	 */
	class UTLRetainerBox : public URetainerBox
	{
	public:
		unsigned char                                              UnknownData_WR8Q[0x60];                                  // 0x0150(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01B4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01C0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0200(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSafeZone
	 * Size -> 0x0070 (FullSize[0x01A8] - InheritedSize[0x0138])
	 */
	class UTLSafeZone : public USafeZone
	{
	public:
		unsigned char                                              UnknownData_EEX7[0x60];                                  // 0x0138(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLScaleBox
	 * Size -> 0x00F0 (FullSize[0x0230] - InheritedSize[0x0140])
	 */
	class UTLScaleBox : public UScaleBox
	{
	public:
		unsigned char                                              UnknownData_VL9E[0x60];                                  // 0x0140(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01B0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01F0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLScrollBox
	 * Size -> 0x0968 (FullSize[0x12F8] - InheritedSize[0x0990])
	 */
	class UTLScrollBox : public UScrollBox
	{
	public:
		unsigned char                                              UnknownData_XSFK[0x68];                                  // 0x0990(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x09F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x09FC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x0A08(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH4O[0x10];                                  // 0x0A20(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0A30(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0A70(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyle;                                   // 0x0AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICNX[0x7];                                   // 0x0AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyleConsole;                                   // 0x0AB8(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PanelHoveredVerticalBackgroundImage;                     // 0x1098(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PanelHoveredHorizontalBackgroundImage;                   // 0x1120(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PanelHoveredVerticalBackgroundImageConsole;              // 0x11A8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PanelHoveredHorizontalBackgroundImageConsole;            // 0x1230(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyleConsole;                            // 0x12B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDN2[0x3];                                   // 0x12B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             ScrollbarTrackPadding;                                   // 0x12BC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPaddingConsole;                                 // 0x12CC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScrollbarThicknessConsole;                               // 0x12DC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPaddingConsole;                            // 0x12E4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bScrollbarLeft;                                          // 0x12F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowClickDragScrolling;                                // 0x12F5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragScrollingType                                         DragScrollingType;                                       // 0x12F6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NS3W[0x1];                                   // 0x12F7(0x0001) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSizeBox
	 * Size -> 0x00F0 (FullSize[0x0248] - InheritedSize[0x0158])
	 */
	class UTLSizeBox : public USizeBox
	{
	public:
		unsigned char                                              UnknownData_DDBM[0x60];                                  // 0x0158(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01BC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01C8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0208(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSlider
	 * Size -> 0x00F8 (FullSize[0x05F0] - InheritedSize[0x04F8])
	 */
	class UTLSlider : public USlider
	{
	public:
		unsigned char                                              UnknownData_2BEB[0x60];                                  // 0x04F8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x055C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0568(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x05A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnCaptureBeginSound;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnCaptureBegin();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSlider2D
	 * Size -> 0x0568 (FullSize[0x0670] - InheritedSize[0x0108])
	 */
	class UTLSlider2D : public UWidget
	{
	public:
		unsigned char                                              UnknownData_8B5O[0x60];                                  // 0x0108(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Value;                                                   // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0170(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FTLSlider2DStyle                                    WidgetStyle;                                             // 0x0180(0x03C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x0548(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0558(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0568(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0569(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseUsesStep;                                           // 0x056A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresControllerLock;                                  // 0x056B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlyPositive;                                            // 0x056C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV1V[0x3];                                   // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0570(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0574(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARBN[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVM9[0x10];                                  // 0x05C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x05DC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x05E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0628(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnCaptureBeginSound;                                     // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetValue(const struct FVector2D& InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetRequiresControllerLock(bool InRequiresControllerLock);
		void SetOnlyPositive(bool InValue);
		void SetMouseUsesStep(bool InMouseUsesStep);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void OnCaptureBegin();
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		struct FVector2D GetVector2D__DelegateSignature();
		struct FVector2D GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSpacer
	 * Size -> 0x00F0 (FullSize[0x0210] - InheritedSize[0x0120])
	 */
	class UTLSpacer : public USpacer
	{
	public:
		unsigned char                                              UnknownData_9F06[0x60];                                  // 0x0120(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0184(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0190(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLSpinBox
	 * Size -> 0x00F0 (FullSize[0x0610] - InheritedSize[0x0520])
	 */
	class UTLSpinBox : public USpinBox
	{
	public:
		unsigned char                                              UnknownData_34HL[0x60];                                  // 0x0520(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0584(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0590(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x05D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTabButton
	 * Size -> 0x00F0 (FullSize[0x0860] - InheritedSize[0x0770])
	 */
	class UTLTabButton : public UCheckBox
	{
	public:
		unsigned char                                              UnknownData_RILT[0x60];                                  // 0x0770(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x07D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x07D4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnSelectedSound;                                         // 0x07E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTLSoundEvent*                                       OnUnselectedSound;                                       // 0x07E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPanelWidget*                                        TLTabButtonPanelWidget;                                  // 0x07F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TLTabButtonPanelWidgetDelegate;                          // 0x07F8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UTLTabContent*                                       TLTabContentWidget;                                      // 0x0808(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TLTabContentWidgetDelegate;                              // 0x0810(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetAnimationBind                              OnCheckedAnimationBind;                                  // 0x0820(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetAnimationBind                              OnUncheckedAnimationBind;                                // 0x0830(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonSelected;                                     // 0x0840(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonUnselected;                                   // 0x0850(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void This_OnCheckBoxComponentStateChanged(bool IsChecked);
		void OnUnselected__DelegateSignature(int32_t InTabIndex);
		void OnSelected__DelegateSignature(int32_t InTabIndex);
		class UWidgetAnimation* GetWidgetAnimation__DelegateSignature();
		class UTLTabContent* GetTLTabContent__DelegateSignature();
		class UPanelWidget* GetPanelWidget__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTabContent
	 * Size -> 0x0080 (FullSize[0x01B8] - InheritedSize[0x0138])
	 */
	class UTLTabContent : public UWidgetSwitcher
	{
	public:
		unsigned char                                              UnknownData_KSL9[0x60];                                  // 0x0138(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnContentChanged;                                        // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTestStyle
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTLTestStyle : public UObject
	{
	public:
		unsigned char                                              UnknownData_WIE9[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTextBlockBase
	 * Size -> 0x0350 (FullSize[0x04E8] - InheritedSize[0x0198])
	 */
	class UTLTextBlockBase : public UTextLayoutWidgetTL
	{
	public:
		class FText                                                Text;                                                    // 0x0198(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x01C0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01E8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x01F8(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0258(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x0268(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel;                              // 0x027C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHyperlink;                                       // 0x027D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomDisabledColor;                                 // 0x027E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRFF[0x1];                                   // 0x027F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CustomDisabledColorAndOpacity;                           // 0x0280(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTLTextBlockDecorator*>                       DecoratorObjects;                                        // 0x0290(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YM09[0x248];                                 // 0x02A0(0x0248) MISSED OFFSET (PADDING)

	public:
		void SetWrapTextAt(float InWrapText);
		void SetWrapLimitOverRule(ETLTextWrapLimitOverRule InWrapLimitOverRule);
		void SetUseWrapScaling(bool bInValue);
		void SetUseCustomDisabledColor(bool bInUseCustomDisabledColor);
		void SetText(const class FText& InText);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetOpacity(float InOpacity);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetLineHeightPercentage(float InLineHeightPercentage);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void SetCustomDisabledColorAndOpacity(const struct FLinearColor& InCustomDisabledColorAndOpacity);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool bInValue);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTextBlock
	 * Size -> 0x02D0 (FullSize[0x07B8] - InheritedSize[0x04E8])
	 */
	class UTLTextBlock : public UTLTextBlockBase
	{
	public:
		unsigned char                                              UnknownData_EIU1[0x60];                                  // 0x04E8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x054C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0558(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0598(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingText                                TextBinding;                                             // 0x05D8(0x0048) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingTextTime                            TextTimeBinding;                                         // 0x0620(0x0048) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingTextBlockStyleFromTable             TextBlockStyleBindingFromTable;                          // 0x0668(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingTextBlockStylePath                  TextBlockStylePathBinding;                               // 0x06A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingTextColorAndOpacity                 TextColorAndOpacityBinding;                              // 0x06E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingTextColorWithColorTable             TextColorWithColorTableBinding;                          // 0x0728(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TLTextBlockStyle;                                        // 0x0768(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAdvancedMarkupText;                                     // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseTextBlockStyleMarginAndLineHeightPercentage;         // 0x0781(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZVI1[0x36];                                  // 0x0782(0x0036) MISSED OFFSET (PADDING)

	public:
		void SetTextColorWithColorTable(const class FName& InTableColorKey);
		void SetTextBlockStylePath(const struct FSoftObjectPath& InTLTextBlockStylePath);
		void SetTextBlockStyleFromTable(const class FName& InTableKey);
		void ResetTextColor();
		void HandleUpdateVisible();
		void HandleUpdateTextTime();
		void HandleUpdateTextColorWithColorTable();
		void HandleUpdateTextColorAndOpacity();
		void HandleUpdateTextBlockStylePath();
		void HandleUpdateTextBlockStyleFromTable();
		void HandleUpdateText();
		void HandleUpdateEnabled();
		int32_t GetTextBlockStyleFontSize();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTextBlockDecorator
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UTLTextBlockDecorator : public UObject
	{
	public:
		bool                                                       bReveal;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8M9K[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RevealedIndex;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ColorTable;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          MarkupImageTable;                                        // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          EmojiTable;                                              // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          TextBlockStyleTable;                                     // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MXTL[0x58];                                  // 0x0050(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTextBlockStyle
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UTLTextBlockStyle : public UObject
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0028(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0080(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      LineHeightPercentage;                                    // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomDisabledColor;                                 // 0x00D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K3O[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CustomDisabledColorAndOpacity;                           // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTextBlockStyleStructManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UTLTextBlockStyleStructManager : public UObject
	{
	public:
		TMap<class FName, struct FTLTextBlockStyleStruct>          TextBlockStyleStructMap;                                 // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLThrobber
	 * Size -> 0x00F0 (FullSize[0x02A0] - InheritedSize[0x01B0])
	 */
	class UTLThrobber : public UThrobber
	{
	public:
		unsigned char                                              UnknownData_6WZM[0x60];                                  // 0x01B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0214(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0220(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0260(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTiledImage
	 * Size -> 0x00E8 (FullSize[0x05C8] - InheritedSize[0x04E0])
	 */
	class UTLTiledImage : public UTLImage
	{
	public:
		struct FDirectoryPath                                      TilesDirectory;                                          // 0x04E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    TileSize;                                                // 0x04F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumColumns;                                              // 0x04F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         CullingScaleRange;                                       // 0x04F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Tiles[0x10];                                             // 0x0508(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FVector2D                                           TileTextureSize;                                         // 0x0518(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x0520(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQP7[0x40];                                  // 0x0530(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ValidTiles[0x50];                                        // 0x0570(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_UD2M[0x8];                                   // 0x05C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetNumColumns(int32_t InNumColumns);
		void SetCullingScaleRange(const struct FFloatRange& InCullingScaleRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTileView
	 * Size -> 0x0D80 (FullSize[0x1110] - InheritedSize[0x0390])
	 */
	class UTLTileView : public UTileView
	{
	public:
		unsigned char                                              UnknownData_MCTY[0x68];                                  // 0x0390(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x03FC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x0408(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SB15[0x10];                                  // 0x0420(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0430(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0470(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingListChanged                         ListChangedBinding;                                      // 0x04B0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x04F0(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyle;                                   // 0x0AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN5J[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyleConsole;                                   // 0x0AD8(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCustomScrollBarStyleConsole;                            // 0x10B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x10B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SSG[0x2];                                   // 0x10BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x10BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x10C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPadding;                                   // 0x10D4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPaddingConsole;                                 // 0x10E4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScrollbarThicknessConsole;                               // 0x10F4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarTrackPaddingConsole;                            // 0x10FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A15T[0x4];                                   // 0x110C(0x0004) MISSED OFFSET (PADDING)

	public:
		void HandleUpdateVisible();
		void HandleUpdateListChanged();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLTreeView
	 * Size -> 0x0120 (FullSize[0x04E8] - InheritedSize[0x03C8])
	 */
	class UTLTreeView : public UTreeView
	{
	public:
		unsigned char                                              UnknownData_6UVC[0x68];                                  // 0x03C8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x0434(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x0440(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9M2[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x0468(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x04A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLUIInputModeHelper
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTLUIInputModeHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_93FX[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLUISettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UTLUISettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_A4FF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLUIStyleSettings
	 * Size -> 0x2268 (FullSize[0x22A0] - InheritedSize[0x0038])
	 */
	class UTLUIStyleSettings : public UDeveloperSettings
	{
	public:
		struct FLinearColor                                        DisabledTextBlockTint;                                   // 0x0038(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisabledImageTint;                                       // 0x0048(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9RU[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TooltipViewportBorderMargin;                             // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ConsoleTooltipViewportBorderMargin;                      // 0x007C(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ConsoleTooltipShowDelayTime;                             // 0x008C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     DefaultScrollBarStyle;                                   // 0x0090(0x05E0) Edit, Config, NativeAccessSpecifierPublic
		struct FMargin                                             DefaultScrollBarPadding;                                 // 0x0670(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             DefaultScrollBarTrackPadding;                            // 0x0680(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DefaultScrollBarThickness;                               // 0x0690(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             DefaultConsoleScrollBarPadding;                          // 0x0698(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             DefaultConsoleScrollBarTrackPadding;                     // 0x06A8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DefaultConsoleScrollBarThickness;                        // 0x06B8(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     DefaultConsoleScrollBarStyle;                            // 0x06C0(0x05E0) Edit, Config, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               DefaultEditableTextBoxStyle;                             // 0x0CA0(0x0908) Edit, Config, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               DefaultMultiLineEditableTextBoxStyle;                    // 0x15A8(0x0908) Edit, Config, NativeAccessSpecifierPublic
		struct FTextBlockStyleTL                                   DefaultMultiLineEditableTextBoxTextStyle;                // 0x1EB0(0x0208) Edit, Config, NativeAccessSpecifierPublic
		struct FMargin                                             VirtualKeyboardKeyIconRightTopMargin;                    // 0x20B8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           VirtualKeyboardKeyIconSize;                              // 0x20C8(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             VirtualKeyboardKeyIconMultilineRightTopMargin;           // 0x20D0(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           VirtualKeyboardKeyIconMultilineSize;                     // 0x20E0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VirtualKeyboardKeyIconDualShock;                         // 0x20E8(0x0088) Edit, Config, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VirtualKeyboardKeyIconXbox;                              // 0x2170(0x0088) Edit, Config, NativeAccessSpecifierPublic
		TMap<ETLItemGroupFilter, struct FLinearColor>              ItemGroupFilterColorRefMap;                              // 0x21F8(0x0050) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              LineBreakUsageLanguageSet[0x50];                         // 0x2248(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      KeyIconMatchFontRatio;                                   // 0x2298(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarkupImageMatchFontRatio;                               // 0x229C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLUniformGridPanel
	 * Size -> 0x0120 (FullSize[0x0268] - InheritedSize[0x0148])
	 */
	class UTLUniformGridPanel : public UUniformGridPanel
	{
	public:
		unsigned char                                              UnknownData_JGTG[0x68];                                  // 0x0148(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01B4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01C0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SO6[0x10];                                  // 0x01D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0228(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLVerticalBox
	 * Size -> 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
	 */
	class UTLVerticalBox : public UVerticalBox
	{
	public:
		unsigned char                                              UnknownData_7MJX[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9YX[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01D0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0210(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWebBrowser
	 * Size -> 0x0120 (FullSize[0x0270] - InheritedSize[0x0150])
	 */
	class UTLWebBrowser : public UWebBrowser
	{
	public:
		unsigned char                                              UnknownData_0UA0[0x68];                                  // 0x0150(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01BC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01C8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00YU[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01F0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0230(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWebImage
	 * Size -> 0x0040 (FullSize[0x0250] - InheritedSize[0x0210])
	 */
	class UTLWebImage : public UImage
	{
	public:
		class FString                                              UrlString;                                               // 0x0210(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageDownloadDone;                                     // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKWK[0x20];                                  // 0x0230(0x0020) MISSED OFFSET (PADDING)

	public:
		void DownloadImage();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetBindingLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetBindingLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetOnUpdateDefault(int32_t AnyValue, const class FScriptDelegate& Event);
		bool AddVisibleBinding(class UWidget* Target, int32_t AnyValue, ETLBindingOperator Operator, int32_t SourceValue);
		bool AddTextColorWithColorTableBinding(class UTLTextBlock* Target, int32_t AnyValue);
		bool AddTextColorAndOpacityBinding(class UTLTextBlock* Target, int32_t AnyValue);
		bool AddTextBlockStylePathBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bOnlyColor);
		bool AddTextBlockStyleFromTableBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bOnlyColor);
		bool AddTextBindingFloat(class UTLTextBlock* Target, int32_t AnyValue, ERoundingMode RoundingMode, int32_t FractionalDigits);
		bool AddTextBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bSetVisibleWithValue);
		bool AddPercentBinding(class UTLProgressBar* Target, int32_t AnyValue);
		bool AddImageColorAndOpacityBinding(class UTLImage* Target, int32_t AnyValue);
		bool AddImageBrushBinding(class UTLImage* Target, int32_t AnyValue, bool bMatchSize, bool bSetVisibleWithValue);
		bool AddEnabledBinding(class UWidget* Target, int32_t AnyValue, ETLBindingOperator Operator, int32_t SourceValue);
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetFocusableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetFocusableInterface : public UInterface
	{
	public:
		bool UseTLFocusable();
		void SetTLWidgetToFocusBP();
		void SetTLSaveLastFocusedChild(bool bInEnable);
		void SetTLFocusableEnable(bool bInEnable);
		void SetTLFocus();
		bool IsTLFocusableEnable();
		bool IsTLFocusable();
		bool IsTLFocus();
		void ClearTLFocus();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetFocusableManager
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UTLWidgetFocusableManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_H9R6[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetLanguageChangeHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetLanguageChangeHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetSwitcher
	 * Size -> 0x0100 (FullSize[0x0238] - InheritedSize[0x0138])
	 */
	class UTLWidgetSwitcher : public UWidgetSwitcher
	{
	public:
		unsigned char                                              UnknownData_T571[0x60];                                  // 0x0138(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01A8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01E8(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveWidgetChanged;                                   // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetTickableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetTickableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetTooltipInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetTooltipInterface : public UInterface
	{
	public:
		class UTLSizeBox* GetActionGuideAttachPanel();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetViewInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetViewInterface : public UInterface
	{
	public:
		void SetDataContext(class UTLViewModelBase* InDataContext);
		class UTLViewModelBase* GetDataContext();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWidgetVisibilityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTLWidgetVisibilityInterface : public UInterface
	{
	public:
		void Toggle();
		void ShowWithValue(bool InVisible);
		void Show();
		void SetVisible(bool Show);
		void SetOpacity(float InOpacity);
		void SetEnableHitTest(bool Enable);
		void SetCollapsedWhenHide(bool bInCollapsedWhenHide);
		void SetApplyDisabledHitTestToChildren(bool bInApplyDisabledHitTest);
		bool IsShow();
		void Hide();
		void DisabledHitTestWithAllChildren();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWindowTitleBarArea
	 * Size -> 0x00F0 (FullSize[0x0230] - InheritedSize[0x0140])
	 */
	class UTLWindowTitleBarArea : public UWindowTitleBarArea
	{
	public:
		unsigned char                                              UnknownData_EQ3K[0x60];                                  // 0x0140(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01B0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x01F0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class TLUI.TLWrapBox
	 * Size -> 0x0128 (FullSize[0x0270] - InheritedSize[0x0148])
	 */
	class UTLWrapBox : public UWrapBox
	{
	public:
		unsigned char                                              UnknownData_3NDC[0x68];                                  // 0x0148(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLVisibility                                       TLVisibility;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU0O[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetFocusableData                              TLFocusableData;                                         // 0x01B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T58G[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTooltipPositionData                                TooltipPositionData;                                     // 0x01E0(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMEZ[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTLWidgetBindingVisible                             VisibleBinding;                                          // 0x01F0(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTLWidgetBindingEnabled                             EnabledBinding;                                          // 0x0230(0x0040) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetWrapSize(float InWrapSize);
		void HandleUpdateVisible();
		void HandleUpdateEnabled();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
