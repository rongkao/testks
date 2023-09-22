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
	 * Function TLUI.TextLayoutWidgetTL.SetJustification
	 */
	struct UTextLayoutWidgetTL_SetJustification_Params
	{
	public:
		ETextJustifyTL                                             InJustification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLCanvasPanel.HandleUpdateVisible
	 */
	struct UTLCanvasPanel_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLCanvasPanel.HandleUpdateEnabled
	 */
	struct UTLCanvasPanel_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLBackgroundBlur.HandleUpdateVisible
	 */
	struct UTLBackgroundBlur_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLBackgroundBlur.HandleUpdateEnabled
	 */
	struct UTLBackgroundBlur_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLBorder.SetContentColorWithColorTable
	 */
	struct UTLBorder_SetContentColorWithColorTable_Params
	{
	public:
		class FName                                                InTableColorKey;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLBorder.SetBrushTintColorWithColorTable
	 */
	struct UTLBorder_SetBrushTintColorWithColorTable_Params
	{
	public:
		class FName                                                InTableColorKey;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLBorder.SetBrushFromSprite
	 */
	struct UTLBorder_SetBrushFromSprite_Params
	{
	public:
		class UPaperSprite*                                        Sprite;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLBorder.SetBrushFromSoftObjectPath
	 */
	struct UTLBorder_SetBrushFromSoftObjectPath_Params
	{
	public:
		struct FSoftObjectPath                                     Path;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAsyncLoad;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLBorder.HandleUpdateVisible
	 */
	struct UTLBorder_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLBorder.HandleUpdateEnabled
	 */
	struct UTLBorder_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLButton.OnUnhoverHandler
	 */
	struct UTLButton_OnUnhoverHandler_Params
	{	};

	/**
	 * Function TLUI.TLButton.OnReleaseHandler
	 */
	struct UTLButton_OnReleaseHandler_Params
	{	};

	/**
	 * Function TLUI.TLButton.OnPressHandler
	 */
	struct UTLButton_OnPressHandler_Params
	{	};

	/**
	 * Function TLUI.TLButton.OnHoverHandler
	 */
	struct UTLButton_OnHoverHandler_Params
	{	};

	/**
	 * Function TLUI.TLButton.OnClickHandler
	 */
	struct UTLButton_OnClickHandler_Params
	{	};

	/**
	 * Function TLUI.TLButton.HandleUpdateVisible
	 */
	struct UTLButton_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLButton.HandleUpdateEnabled
	 */
	struct UTLButton_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLCheckBox.OnTLCheckStateChangedCallback
	 */
	struct UTLCheckBox_OnTLCheckStateChangedCallback_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLCheckBox.HandleUpdateVisible
	 */
	struct UTLCheckBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLCheckBox.HandleUpdateEnabled
	 */
	struct UTLCheckBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLCircularThrobber.HandleUpdateVisible
	 */
	struct UTLCircularThrobber_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLCircularThrobber.HandleUpdateEnabled
	 */
	struct UTLCircularThrobber_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLComboBoxString.SetSelectedOptionIndex
	 */
	struct UTLComboBoxString_SetSelectedOptionIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLComboBoxString.SetMenuPlacement
	 */
	struct UTLComboBoxString_SetMenuPlacement_Params
	{
	public:
		EMenuPlacement                                             InMenuPlacement;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLComboBoxString.OnSelectionChangedHandler
	 */
	struct UTLComboBoxString_OnSelectionChangedHandler_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLComboBoxString.OnOpeningHandler
	 */
	struct UTLComboBoxString_OnOpeningHandler_Params
	{	};

	/**
	 * Function TLUI.TLComboBoxString.HandleUpdateVisible
	 */
	struct UTLComboBoxString_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLComboBoxString.HandleUpdateEnabled
	 */
	struct UTLComboBoxString_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLComboBoxString.GetSelectedOptionIndex
	 */
	struct UTLComboBoxString_GetSelectedOptionIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLDynamicEntryBox.HandleUpdateVisible
	 */
	struct UTLDynamicEntryBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLDynamicEntryBox.HandleUpdateEnabled
	 */
	struct UTLDynamicEntryBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLEditableText.HandleUpdateVisible
	 */
	struct UTLEditableText_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLEditableText.HandleUpdateEnabled
	 */
	struct UTLEditableText_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLEditableTextBox.SetText
	 */
	struct UTLEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetMaxChar
	 */
	struct UTLEditableTextBox_SetMaxChar_Params
	{
	public:
		int32_t                                                    InMaxChar;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetIsReadOnly
	 */
	struct UTLEditableTextBox_SetIsReadOnly_Params
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetIsPassword
	 */
	struct UTLEditableTextBox_SetIsPassword_Params
	{
	public:
		bool                                                       bIsPassword;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetIgnoreFocusLostCommited
	 */
	struct UTLEditableTextBox_SetIgnoreFocusLostCommited_Params
	{
	public:
		bool                                                       InIsIgnore;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetHintText
	 */
	struct UTLEditableTextBox_SetHintText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetEscapeAction
	 */
	struct UTLEditableTextBox_SetEscapeAction_Params
	{
	public:
		ETLEditableBoxEscapeAction                                 InEscapeAction;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SetError
	 */
	struct UTLEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.SelectAllText
	 */
	struct UTLEditableTextBox_SelectAllText_Params
	{	};

	/**
	 * DelegateFunction TLUI.TLEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature
	 */
	struct UTLEditableTextBox_OnEditableTextMouseButtonDownEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature
	 */
	struct UTLEditableTextBox_OnEditableTextFocusReceivedEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature
	 */
	struct UTLEditableTextBox_OnEditableTextFocusLostEvent__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UTLEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UTLEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.HasError
	 */
	struct UTLEditableTextBox_HasError_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.HandleUpdateVisible
	 */
	struct UTLEditableTextBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLEditableTextBox.HandleUpdateEnabled
	 */
	struct UTLEditableTextBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLEditableTextBox.GetText
	 */
	struct UTLEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLEditableTextBox.ClearError
	 */
	struct UTLEditableTextBox_ClearError_Params
	{	};

	/**
	 * Function TLUI.TLExpandableArea.HandleUpdateVisible
	 */
	struct UTLExpandableArea_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLExpandableArea.HandleUpdateEnabled
	 */
	struct UTLExpandableArea_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLImageBase.SetOpacity
	 */
	struct UTLImageBase_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetColorWithColorTable
	 */
	struct UTLImageBase_SetColorWithColorTable_Params
	{
	public:
		class FName                                                InTableColorKey;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetColorAndOpacity
	 */
	struct UTLImageBase_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushTintColorWithColorTable
	 */
	struct UTLImageBase_SetBrushTintColorWithColorTable_Params
	{
	public:
		class FName                                                InTableColorKey;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushTintColor
	 */
	struct UTLImageBase_SetBrushTintColor_Params
	{
	public:
		struct FSlateColor                                         TintColor;                                               // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushSize
	 */
	struct UTLImageBase_SetBrushSize_Params
	{
	public:
		struct FVector2D                                           DesiredSize;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushResourceObject
	 */
	struct UTLImageBase_SetBrushResourceObject_Params
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromTextureDynamic
	 */
	struct UTLImageBase_SetBrushFromTextureDynamic_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromTexture_MaintainRatio
	 */
	struct UTLImageBase_SetBrushFromTexture_MaintainRatio_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           DefaultSize;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromTexture
	 */
	struct UTLImageBase_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromSoftTexture
	 */
	struct UTLImageBase_SetBrushFromSoftTexture_Params
	{
	public:
		unsigned char                                              UnknownData_3RV0[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bMatchSize;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromSoftMaterial
	 */
	struct UTLImageBase_SetBrushFromSoftMaterial_Params
	{	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromRenderTarget
	 */
	struct UTLImageBase_SetBrushFromRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromMediaTexture
	 */
	struct UTLImageBase_SetBrushFromMediaTexture_Params
	{
	public:
		class UBinkMediaTexture*                                   Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromMaterial
	 */
	struct UTLImageBase_SetBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromAtlasInterface
	 */
	struct UTLImageBase_SetBrushFromAtlasInterface_Params
	{
	public:
		unsigned char                                              UnknownData_UPTX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bMatchSize;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrushFromAsset
	 */
	struct UTLImageBase_SetBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.SetBrush
	 */
	struct UTLImageBase_SetBrush_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.PlayOrCloseBinkMediaPlayer
	 */
	struct UTLImageBase_PlayOrCloseBinkMediaPlayer_Params
	{
	public:
		bool                                                       bInPlay;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImageBase.GetDynamicMaterial
	 */
	struct UTLImageBase_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLFlipBookImage.Stop
	 */
	struct UTLFlipBookImage_Stop_Params
	{	};

	/**
	 * Function TLUI.TLFlipBookImage.SetFlipbookFromSoftObjectPath
	 */
	struct UTLFlipBookImage_SetFlipbookFromSoftObjectPath_Params
	{
	public:
		struct FSoftObjectPath                                     Path;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLFlipBookImage.SetCurrentFrame
	 */
	struct UTLFlipBookImage_SetCurrentFrame_Params
	{
	public:
		int32_t                                                    Frame;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLFlipBookImage.Play
	 */
	struct UTLFlipBookImage_Play_Params
	{	};

	/**
	 * Function TLUI.TLFlipBookImage.HandleUpdateVisible
	 */
	struct UTLFlipBookImage_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLFlipBookImage.HandleUpdateEnabled
	 */
	struct UTLFlipBookImage_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLGridPanel.HandleUpdateVisible
	 */
	struct UTLGridPanel_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLGridPanel.HandleUpdateEnabled
	 */
	struct UTLGridPanel_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLHorizontalBox.HandleUpdateVisible
	 */
	struct UTLHorizontalBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLHorizontalBox.HandleUpdateEnabled
	 */
	struct UTLHorizontalBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLImage.SetMaskTexture
	 */
	struct UTLImage_SetMaskTexture_Params
	{
	public:
		class UTexture*                                            InMaskTexture;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.SetHslShift
	 */
	struct UTLImage_SetHslShift_Params
	{
	public:
		struct FLinearColor                                        InHslShift;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.SetBrushFromSprite
	 */
	struct UTLImage_SetBrushFromSprite_Params
	{
	public:
		class UPaperSprite*                                        Sprite;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.SetBrushFromSoftObjectPath
	 */
	struct UTLImage_SetBrushFromSoftObjectPath_Params
	{
	public:
		struct FSoftObjectPath                                     Path;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAsyncLoad;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAutoShowAfterBrushLoading;                            // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.SetBrushFromCustomMaterial
	 */
	struct UTLImage_SetBrushFromCustomMaterial_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.SetBrushByName
	 */
	struct UTLImage_SetBrushByName_Params
	{
	public:
		class FName                                                InSlateBrushName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InApplyVisible;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLImage.HandleUpdateVisible
	 */
	struct UTLImage_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLImage.HandleUpdateImageBrush
	 */
	struct UTLImage_HandleUpdateImageBrush_Params
	{	};

	/**
	 * Function TLUI.TLImage.HandleUpdateEnabled
	 */
	struct UTLImage_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLImage.HandleUpdateColorAndOpacity
	 */
	struct UTLImage_HandleUpdateColorAndOpacity_Params
	{	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetTextBlockVisibility
	 */
	struct UTLInputKeyCombiSelector_SetTextBlockVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetSelectedKey
	 */
	struct UTLInputKeyCombiSelector_SetSelectedKey_Params
	{
	public:
		TArray<struct FInputChord>                                 InSelectedKey;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetNoKeySpecifiedText
	 */
	struct UTLInputKeyCombiSelector_SetNoKeySpecifiedText_Params
	{
	public:
		class FText                                                InNoKeySpecifiedText;                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetKeySelectionText
	 */
	struct UTLInputKeyCombiSelector_SetKeySelectionText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetAllowModifierKeys
	 */
	struct UTLInputKeyCombiSelector_SetAllowModifierKeys_Params
	{
	public:
		bool                                                       bInAllowModifierKeys;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.SetAllowGamepadKeys
	 */
	struct UTLInputKeyCombiSelector_SetAllowGamepadKeys_Params
	{
	public:
		bool                                                       bInAllowGamepadKeys;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLInputKeyCombiSelector.OnKeySelected__DelegateSignature
	 */
	struct UTLInputKeyCombiSelector_OnKeySelected__DelegateSignature_Params
	{
	public:
		TArray<struct FInputChord>                                 SelectedKeys;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLInputKeyCombiSelector.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UTLInputKeyCombiSelector_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.HandleUpdateVisible
	 */
	struct UTLInputKeyCombiSelector_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.HandleUpdateEnabled
	 */
	struct UTLInputKeyCombiSelector_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLInputKeyCombiSelector.GetIsSelectingKey
	 */
	struct UTLInputKeyCombiSelector_GetIsSelectingKey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetTextBlockVisibility
	 */
	struct UTLInputKeySelector_SetTextBlockVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetSelectedKey
	 */
	struct UTLInputKeySelector_SetSelectedKey_Params
	{
	public:
		struct FInputChord                                         InSelectedKey;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetNoKeySpecifiedText
	 */
	struct UTLInputKeySelector_SetNoKeySpecifiedText_Params
	{
	public:
		class FText                                                InNoKeySpecifiedText;                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetKeySelectionText
	 */
	struct UTLInputKeySelector_SetKeySelectionText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetAllowModifierKeys
	 */
	struct UTLInputKeySelector_SetAllowModifierKeys_Params
	{
	public:
		bool                                                       bInAllowModifierKeys;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInputKeySelector.SetAllowGamepadKeys
	 */
	struct UTLInputKeySelector_SetAllowGamepadKeys_Params
	{
	public:
		bool                                                       bInAllowGamepadKeys;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLInputKeySelector.OnKeySelected__DelegateSignature
	 */
	struct UTLInputKeySelector_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLInputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UTLInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function TLUI.TLInputKeySelector.HandleUpdateVisible
	 */
	struct UTLInputKeySelector_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLInputKeySelector.HandleUpdateEnabled
	 */
	struct UTLInputKeySelector_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLInputKeySelector.GetIsSelectingKey
	 */
	struct UTLInputKeySelector_GetIsSelectingKey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLInvalidationBox.HandleUpdateVisible
	 */
	struct UTLInvalidationBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLInvalidationBox.HandleUpdateEnabled
	 */
	struct UTLInvalidationBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLLinearBox.ToggleOrientation
	 */
	struct UTLLinearBox_ToggleOrientation_Params
	{	};

	/**
	 * Function TLUI.TLLinearBox.SetReverseOrder
	 */
	struct UTLLinearBox_SetReverseOrder_Params
	{
	public:
		bool                                                       bInReverseOrder;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBox.SetOrientation
	 */
	struct UTLLinearBox_SetOrientation_Params
	{
	public:
		EOrientation                                               InOrientation;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBox.GetReverseOrder
	 */
	struct UTLLinearBox_GetReverseOrder_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBox.GetOrientation
	 */
	struct UTLLinearBox_GetOrientation_Params
	{
	public:
		EOrientation                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBoxSlot.SetVerticalAlignment
	 */
	struct UTLLinearBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBoxSlot.SetSize
	 */
	struct UTLLinearBoxSlot_SetSize_Params
	{
	public:
		struct FSlateChildSize                                     InSize;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBoxSlot.SetPadding
	 */
	struct UTLLinearBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLLinearBoxSlot.SetHorizontalAlignment
	 */
	struct UTLLinearBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLListView.HandleUpdateVisible
	 */
	struct UTLListView_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLListView.HandleUpdateListChanged
	 */
	struct UTLListView_HandleUpdateListChanged_Params
	{	};

	/**
	 * Function TLUI.TLListView.HandleUpdateEnabled
	 */
	struct UTLListView_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLMenuAnchor.HandleUpdateVisible
	 */
	struct UTLMenuAnchor_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLMenuAnchor.HandleUpdateEnabled
	 */
	struct UTLMenuAnchor_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLMultiLineEditableText.HandleUpdateVisible
	 */
	struct UTLMultiLineEditableText_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLMultiLineEditableText.HandleUpdateEnabled
	 */
	struct UTLMultiLineEditableText_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetTextStyle
	 */
	struct UTLMultiLineEditableTextBox_SetTextStyle_Params
	{
	public:
		struct FTextBlockStyleTL                                   InTextStyle;                                             // 0x0000(0x0208)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetText
	 */
	struct UTLMultiLineEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetMaxChar
	 */
	struct UTLMultiLineEditableTextBox_SetMaxChar_Params
	{
	public:
		int32_t                                                    InMaxChar;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetIsReadOnly
	 */
	struct UTLMultiLineEditableTextBox_SetIsReadOnly_Params
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetHintText
	 */
	struct UTLMultiLineEditableTextBox_SetHintText_Params
	{
	public:
		class FText                                                InHintText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SetError
	 */
	struct UTLMultiLineEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.SelectAllText
	 */
	struct UTLMultiLineEditableTextBox_SelectAllText_Params
	{	};

	/**
	 * DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UTLMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UTLMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature
	 */
	struct UTLMultiLineEditableTextBox_OnEditableTextMouseButtonDownEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature
	 */
	struct UTLMultiLineEditableTextBox_OnEditableTextFocusReceivedEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature
	 */
	struct UTLMultiLineEditableTextBox_OnEditableTextFocusLostEvent__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.HandleUpdateVisible
	 */
	struct UTLMultiLineEditableTextBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.HandleUpdateEnabled
	 */
	struct UTLMultiLineEditableTextBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.GetText
	 */
	struct UTLMultiLineEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.GetHintText
	 */
	struct UTLMultiLineEditableTextBox_GetHintText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.GetCurrentLineCount
	 */
	struct UTLMultiLineEditableTextBox_GetCurrentLineCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLMultiLineEditableTextBox.GetCurrentCursorLine
	 */
	struct UTLMultiLineEditableTextBox_GetCurrentCursorLine_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLNamedSlot.HandleUpdateVisible
	 */
	struct UTLNamedSlot_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLNamedSlot.HandleUpdateEnabled
	 */
	struct UTLNamedSlot_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLNativeWidgetHost.HandleUpdateVisible
	 */
	struct UTLNativeWidgetHost_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLNativeWidgetHost.HandleUpdateEnabled
	 */
	struct UTLNativeWidgetHost_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLOverlay.HandleUpdateVisible
	 */
	struct UTLOverlay_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLOverlay.HandleUpdateEnabled
	 */
	struct UTLOverlay_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.UpdateEdgeImageBrush
	 */
	struct UTLProgressBar_UpdateEdgeImageBrush_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.SetTargetPercent
	 */
	struct UTLProgressBar_SetTargetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetSubPercent
	 */
	struct UTLProgressBar_SetSubPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetPercentMaterial
	 */
	struct UTLProgressBar_SetPercentMaterial_Params
	{
	public:
		class UMaterial*                                           InPercentMaterial;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetIncreaseDuration
	 */
	struct UTLProgressBar_SetIncreaseDuration_Params
	{
	public:
		float                                                      InDurationSec;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetHeadImage
	 */
	struct UTLProgressBar_SetHeadImage_Params
	{
	public:
		class UTLImage*                                            InHeadImage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetFillImageBrush
	 */
	struct UTLProgressBar_SetFillImageBrush_Params
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetEdgeImage
	 */
	struct UTLProgressBar_SetEdgeImage_Params
	{
	public:
		class UWidget*                                             InEdgeImage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetDecreaseDuration
	 */
	struct UTLProgressBar_SetDecreaseDuration_Params
	{
	public:
		float                                                      InDurationSec;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetCurveGraph
	 */
	struct UTLProgressBar_SetCurveGraph_Params
	{
	public:
		class UCurveFloat*                                         InCurve;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetCurrentPercent
	 */
	struct UTLProgressBar_SetCurrentPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.SetAfterImageBar
	 */
	struct UTLProgressBar_SetAfterImageBar_Params
	{
	public:
		class UTLProgressBar*                                      InAfterImageBar;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.PlayWithDuration
	 */
	struct UTLProgressBar_PlayWithDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.PlayAfterImageWithDuration
	 */
	struct UTLProgressBar_PlayAfterImageWithDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.Play
	 */
	struct UTLProgressBar_Play_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.HandleUpdateVisible
	 */
	struct UTLProgressBar_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.HandleUpdatePercent
	 */
	struct UTLProgressBar_HandleUpdatePercent_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.HandleUpdateEnabled
	 */
	struct UTLProgressBar_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLProgressBar.GetRemainSec
	 */
	struct UTLProgressBar_GetRemainSec_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.GetFillImageDynamicMaterial
	 */
	struct UTLProgressBar_GetFillImageDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.GetDurationSec
	 */
	struct UTLProgressBar_GetDurationSec_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLProgressBar.AddSubProgressBar
	 */
	struct UTLProgressBar_AddSubProgressBar_Params
	{
	public:
		class UTLProgressBar*                                      InSubProgressBar;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadarChart.SetValueLayerShapeColor
	 */
	struct UTLRadarChart_SetValueLayerShapeColor_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InColor;                                                 // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadarChart.SetValueLayerOutLineThinckness
	 */
	struct UTLRadarChart_SetValueLayerOutLineThinckness_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadarChart.SetValueLayerOutLineColor
	 */
	struct UTLRadarChart_SetValueLayerOutLineColor_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InColor;                                                 // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadarChart.HandleUpdateVisible
	 */
	struct UTLRadarChart_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLRadarChart.HandleUpdateEnabled
	 */
	struct UTLRadarChart_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLRadioButton.SetButton
	 */
	struct UTLRadioButton_SetButton_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadioGroup.SetCheckIndex
	 */
	struct UTLRadioGroup_SetCheckIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRadioGroup.GetSelectedIndex
	 */
	struct UTLRadioGroup_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLRetainerBox.HandleUpdateVisible
	 */
	struct UTLRetainerBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLRetainerBox.HandleUpdateEnabled
	 */
	struct UTLRetainerBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLScaleBox.HandleUpdateVisible
	 */
	struct UTLScaleBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLScaleBox.HandleUpdateEnabled
	 */
	struct UTLScaleBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLScrollBox.HandleUpdateVisible
	 */
	struct UTLScrollBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLScrollBox.HandleUpdateEnabled
	 */
	struct UTLScrollBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLSizeBox.HandleUpdateVisible
	 */
	struct UTLSizeBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLSizeBox.HandleUpdateEnabled
	 */
	struct UTLSizeBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLSlider.OnCaptureBegin
	 */
	struct UTLSlider_OnCaptureBegin_Params
	{	};

	/**
	 * Function TLUI.TLSlider.HandleUpdateVisible
	 */
	struct UTLSlider_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLSlider.HandleUpdateEnabled
	 */
	struct UTLSlider_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLSlider2D.SetValue
	 */
	struct UTLSlider2D_SetValue_Params
	{
	public:
		struct FVector2D                                           InValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetStepSize
	 */
	struct UTLSlider2D_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetSliderHandleColor
	 */
	struct UTLSlider2D_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetSliderBarColor
	 */
	struct UTLSlider2D_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetRequiresControllerLock
	 */
	struct UTLSlider2D_SetRequiresControllerLock_Params
	{
	public:
		bool                                                       InRequiresControllerLock;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetOnlyPositive
	 */
	struct UTLSlider2D_SetOnlyPositive_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetMouseUsesStep
	 */
	struct UTLSlider2D_SetMouseUsesStep_Params
	{
	public:
		bool                                                       InMouseUsesStep;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetLocked
	 */
	struct UTLSlider2D_SetLocked_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.SetIndentHandle
	 */
	struct UTLSlider2D_SetIndentHandle_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.OnCaptureBegin
	 */
	struct UTLSlider2D_OnCaptureBegin_Params
	{	};

	/**
	 * Function TLUI.TLSlider2D.HandleUpdateVisible
	 */
	struct UTLSlider2D_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLSlider2D.HandleUpdateEnabled
	 */
	struct UTLSlider2D_HandleUpdateEnabled_Params
	{	};

	/**
	 * DelegateFunction TLUI.TLSlider2D.GetVector2D__DelegateSignature
	 */
	struct UTLSlider2D_GetVector2D__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSlider2D.GetValue
	 */
	struct UTLSlider2D_GetValue_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLSpacer.HandleUpdateVisible
	 */
	struct UTLSpacer_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLSpacer.HandleUpdateEnabled
	 */
	struct UTLSpacer_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLSpinBox.HandleUpdateVisible
	 */
	struct UTLSpinBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLSpinBox.HandleUpdateEnabled
	 */
	struct UTLSpinBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLTabButton.This_OnCheckBoxComponentStateChanged
	 */
	struct UTLTabButton_This_OnCheckBoxComponentStateChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLTabButton.OnUnselected__DelegateSignature
	 */
	struct UTLTabButton_OnUnselected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InTabIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLTabButton.OnSelected__DelegateSignature
	 */
	struct UTLTabButton_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InTabIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLTabButton.GetWidgetAnimation__DelegateSignature
	 */
	struct UTLTabButton_GetWidgetAnimation__DelegateSignature_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLTabButton.GetTLTabContent__DelegateSignature
	 */
	struct UTLTabButton_GetTLTabContent__DelegateSignature_Params
	{
	public:
		class UTLTabContent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TLUI.TLTabButton.GetPanelWidget__DelegateSignature
	 */
	struct UTLTabButton_GetPanelWidget__DelegateSignature_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetWrapTextAt
	 */
	struct UTLTextBlockBase_SetWrapTextAt_Params
	{
	public:
		float                                                      InWrapText;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetWrapLimitOverRule
	 */
	struct UTLTextBlockBase_SetWrapLimitOverRule_Params
	{
	public:
		ETLTextWrapLimitOverRule                                   InWrapLimitOverRule;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetUseWrapScaling
	 */
	struct UTLTextBlockBase_SetUseWrapScaling_Params
	{
	public:
		bool                                                       bInValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetUseCustomDisabledColor
	 */
	struct UTLTextBlockBase_SetUseCustomDisabledColor_Params
	{
	public:
		bool                                                       bInUseCustomDisabledColor;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetText
	 */
	struct UTLTextBlockBase_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetShadowOffset
	 */
	struct UTLTextBlockBase_SetShadowOffset_Params
	{
	public:
		struct FVector2D                                           InShadowOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetShadowColorAndOpacity
	 */
	struct UTLTextBlockBase_SetShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InShadowColorAndOpacity;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetOpacity
	 */
	struct UTLTextBlockBase_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetMinDesiredWidth
	 */
	struct UTLTextBlockBase_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetLineHeightPercentage
	 */
	struct UTLTextBlockBase_SetLineHeightPercentage_Params
	{
	public:
		float                                                      InLineHeightPercentage;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetFont
	 */
	struct UTLTextBlockBase_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      InFontInfo;                                              // 0x0000(0x0058)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetCustomDisabledColorAndOpacity
	 */
	struct UTLTextBlockBase_SetCustomDisabledColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InCustomDisabledColorAndOpacity;                         // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetColorAndOpacity
	 */
	struct UTLTextBlockBase_SetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.SetAutoWrapText
	 */
	struct UTLTextBlockBase_SetAutoWrapText_Params
	{
	public:
		bool                                                       bInValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlockBase.GetText
	 */
	struct UTLTextBlockBase_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlock.SetTextColorWithColorTable
	 */
	struct UTLTextBlock_SetTextColorWithColorTable_Params
	{
	public:
		class FName                                                InTableColorKey;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlock.SetTextBlockStylePath
	 */
	struct UTLTextBlock_SetTextBlockStylePath_Params
	{
	public:
		struct FSoftObjectPath                                     InTLTextBlockStylePath;                                  // 0x0000(0x0018)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlock.SetTextBlockStyleFromTable
	 */
	struct UTLTextBlock_SetTextBlockStyleFromTable_Params
	{
	public:
		class FName                                                InTableKey;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTextBlock.ResetTextColor
	 */
	struct UTLTextBlock_ResetTextColor_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateVisible
	 */
	struct UTLTextBlock_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateTextTime
	 */
	struct UTLTextBlock_HandleUpdateTextTime_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateTextColorWithColorTable
	 */
	struct UTLTextBlock_HandleUpdateTextColorWithColorTable_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateTextColorAndOpacity
	 */
	struct UTLTextBlock_HandleUpdateTextColorAndOpacity_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateTextBlockStylePath
	 */
	struct UTLTextBlock_HandleUpdateTextBlockStylePath_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateTextBlockStyleFromTable
	 */
	struct UTLTextBlock_HandleUpdateTextBlockStyleFromTable_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateText
	 */
	struct UTLTextBlock_HandleUpdateText_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.HandleUpdateEnabled
	 */
	struct UTLTextBlock_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLTextBlock.GetTextBlockStyleFontSize
	 */
	struct UTLTextBlock_GetTextBlockStyleFontSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLThrobber.HandleUpdateVisible
	 */
	struct UTLThrobber_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLThrobber.HandleUpdateEnabled
	 */
	struct UTLThrobber_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLTiledImage.SetNumColumns
	 */
	struct UTLTiledImage_SetNumColumns_Params
	{
	public:
		int32_t                                                    InNumColumns;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTiledImage.SetCullingScaleRange
	 */
	struct UTLTiledImage_SetCullingScaleRange_Params
	{
	public:
		struct FFloatRange                                         InCullingScaleRange;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLTileView.HandleUpdateVisible
	 */
	struct UTLTileView_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLTileView.HandleUpdateListChanged
	 */
	struct UTLTileView_HandleUpdateListChanged_Params
	{	};

	/**
	 * Function TLUI.TLTileView.HandleUpdateEnabled
	 */
	struct UTLTileView_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLTreeView.HandleUpdateVisible
	 */
	struct UTLTreeView_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLTreeView.HandleUpdateEnabled
	 */
	struct UTLTreeView_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLUniformGridPanel.HandleUpdateVisible
	 */
	struct UTLUniformGridPanel_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLUniformGridPanel.HandleUpdateEnabled
	 */
	struct UTLUniformGridPanel_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLVerticalBox.HandleUpdateVisible
	 */
	struct UTLVerticalBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLVerticalBox.HandleUpdateEnabled
	 */
	struct UTLVerticalBox_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLWebBrowser.HandleUpdateVisible
	 */
	struct UTLWebBrowser_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLWebBrowser.HandleUpdateEnabled
	 */
	struct UTLWebBrowser_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLWebImage.DownloadImage
	 */
	struct UTLWebImage_DownloadImage_Params
	{	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.SetOnUpdateDefault
	 */
	struct UTLWidgetBindingLibrary_SetOnUpdateDefault_Params
	{
	public:
		int32_t                                                    AnyValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Event;                                                   // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddVisibleBinding
	 */
	struct UTLWidgetBindingLibrary_AddVisibleBinding_Params
	{
	public:
		class UWidget*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETLBindingOperator                                         Operator;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_70BK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SourceValue;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextColorWithColorTableBinding
	 */
	struct UTLWidgetBindingLibrary_AddTextColorWithColorTableBinding_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextColorAndOpacityBinding
	 */
	struct UTLWidgetBindingLibrary_AddTextColorAndOpacityBinding_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextBlockStylePathBinding
	 */
	struct UTLWidgetBindingLibrary_AddTextBlockStylePathBinding_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyColor;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextBlockStyleFromTableBinding
	 */
	struct UTLWidgetBindingLibrary_AddTextBlockStyleFromTableBinding_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyColor;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextBindingFloat
	 */
	struct UTLWidgetBindingLibrary_AddTextBindingFloat_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERoundingMode                                              RoundingMode;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7376[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FractionalDigits;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddTextBinding
	 */
	struct UTLWidgetBindingLibrary_AddTextBinding_Params
	{
	public:
		class UTLTextBlock*                                        Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetVisibleWithValue;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddPercentBinding
	 */
	struct UTLWidgetBindingLibrary_AddPercentBinding_Params
	{
	public:
		class UTLProgressBar*                                      Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddImageColorAndOpacityBinding
	 */
	struct UTLWidgetBindingLibrary_AddImageColorAndOpacityBinding_Params
	{
	public:
		class UTLImage*                                            Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddImageBrushBinding
	 */
	struct UTLWidgetBindingLibrary_AddImageBrushBinding_Params
	{
	public:
		class UTLImage*                                            Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetVisibleWithValue;                                    // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetBindingLibrary.AddEnabledBinding
	 */
	struct UTLWidgetBindingLibrary_AddEnabledBinding_Params
	{
	public:
		class UWidget*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AnyValue;                                                // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETLBindingOperator                                         Operator;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_99OQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SourceValue;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.UseTLFocusable
	 */
	struct UTLWidgetFocusableInterface_UseTLFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.SetTLWidgetToFocusBP
	 */
	struct UTLWidgetFocusableInterface_SetTLWidgetToFocusBP_Params
	{	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.SetTLSaveLastFocusedChild
	 */
	struct UTLWidgetFocusableInterface_SetTLSaveLastFocusedChild_Params
	{
	public:
		bool                                                       bInEnable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.SetTLFocusableEnable
	 */
	struct UTLWidgetFocusableInterface_SetTLFocusableEnable_Params
	{
	public:
		bool                                                       bInEnable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.SetTLFocus
	 */
	struct UTLWidgetFocusableInterface_SetTLFocus_Params
	{	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.IsTLFocusableEnable
	 */
	struct UTLWidgetFocusableInterface_IsTLFocusableEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.IsTLFocusable
	 */
	struct UTLWidgetFocusableInterface_IsTLFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.IsTLFocus
	 */
	struct UTLWidgetFocusableInterface_IsTLFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetFocusableInterface.ClearTLFocus
	 */
	struct UTLWidgetFocusableInterface_ClearTLFocus_Params
	{	};

	/**
	 * Function TLUI.TLWidgetSwitcher.HandleUpdateVisible
	 */
	struct UTLWidgetSwitcher_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLWidgetSwitcher.HandleUpdateEnabled
	 */
	struct UTLWidgetSwitcher_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLWidgetTooltipInterface.GetActionGuideAttachPanel
	 */
	struct UTLWidgetTooltipInterface_GetActionGuideAttachPanel_Params
	{
	public:
		class UTLSizeBox*                                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetViewInterface.SetDataContext
	 */
	struct UTLWidgetViewInterface_SetDataContext_Params
	{
	public:
		class UTLViewModelBase*                                    InDataContext;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetViewInterface.GetDataContext
	 */
	struct UTLWidgetViewInterface_GetDataContext_Params
	{
	public:
		class UTLViewModelBase*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.Toggle
	 */
	struct UTLWidgetVisibilityInterface_Toggle_Params
	{	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.ShowWithValue
	 */
	struct UTLWidgetVisibilityInterface_ShowWithValue_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.Show
	 */
	struct UTLWidgetVisibilityInterface_Show_Params
	{	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.SetVisible
	 */
	struct UTLWidgetVisibilityInterface_SetVisible_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.SetOpacity
	 */
	struct UTLWidgetVisibilityInterface_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.SetEnableHitTest
	 */
	struct UTLWidgetVisibilityInterface_SetEnableHitTest_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.SetCollapsedWhenHide
	 */
	struct UTLWidgetVisibilityInterface_SetCollapsedWhenHide_Params
	{
	public:
		bool                                                       bInCollapsedWhenHide;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.SetApplyDisabledHitTestToChildren
	 */
	struct UTLWidgetVisibilityInterface_SetApplyDisabledHitTestToChildren_Params
	{
	public:
		bool                                                       bInApplyDisabledHitTest;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.IsShow
	 */
	struct UTLWidgetVisibilityInterface_IsShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.Hide
	 */
	struct UTLWidgetVisibilityInterface_Hide_Params
	{	};

	/**
	 * Function TLUI.TLWidgetVisibilityInterface.DisabledHitTestWithAllChildren
	 */
	struct UTLWidgetVisibilityInterface_DisabledHitTestWithAllChildren_Params
	{	};

	/**
	 * Function TLUI.TLWindowTitleBarArea.HandleUpdateVisible
	 */
	struct UTLWindowTitleBarArea_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLWindowTitleBarArea.HandleUpdateEnabled
	 */
	struct UTLWindowTitleBarArea_HandleUpdateEnabled_Params
	{	};

	/**
	 * Function TLUI.TLWrapBox.SetWrapSize
	 */
	struct UTLWrapBox_SetWrapSize_Params
	{
	public:
		float                                                      InWrapSize;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TLUI.TLWrapBox.HandleUpdateVisible
	 */
	struct UTLWrapBox_HandleUpdateVisible_Params
	{	};

	/**
	 * Function TLUI.TLWrapBox.HandleUpdateEnabled
	 */
	struct UTLWrapBox_HandleUpdateEnabled_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
