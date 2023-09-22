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
	 * 		Name   -> PredefinedFunction UTLViewModelBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLViewModelBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLViewModelBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TextLayoutWidgetTL.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustifyTL                                     InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLayoutWidgetTL::SetJustification(ETextJustifyTL InJustification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TextLayoutWidgetTL.SetJustification");
		
		UTextLayoutWidgetTL_SetJustification_Params params {};
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextLayoutWidgetTL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextLayoutWidgetTL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TextLayoutWidgetTL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAdvancedMarkupHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAdvancedMarkupHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLAdvancedMarkupHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCanvasPanel.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLCanvasPanel::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCanvasPanel.HandleUpdateVisible");
		
		UTLCanvasPanel_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCanvasPanel.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLCanvasPanel::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCanvasPanel.HandleUpdateEnabled");
		
		UTLCanvasPanel_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCanvasPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCanvasPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLCanvasPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLAttachPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLAttachPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLAttachPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBackgroundBlur.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLBackgroundBlur::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBackgroundBlur.HandleUpdateVisible");
		
		UTLBackgroundBlur_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBackgroundBlur.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLBackgroundBlur::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBackgroundBlur.HandleUpdateEnabled");
		
		UTLBackgroundBlur_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLBackgroundBlur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLBackgroundBlur::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLBackgroundBlur");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.SetContentColorWithColorTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableColorKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLBorder::SetContentColorWithColorTable(const class FName& InTableColorKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.SetContentColorWithColorTable");
		
		UTLBorder_SetContentColorWithColorTable_Params params {};
		params.InTableColorKey = InTableColorKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.SetBrushTintColorWithColorTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableColorKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLBorder::SetBrushTintColorWithColorTable(const class FName& InTableColorKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.SetBrushTintColorWithColorTable");
		
		UTLBorder_SetBrushTintColorWithColorTable_Params params {};
		params.InTableColorKey = InTableColorKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.SetBrushFromSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLBorder::SetBrushFromSprite(class UPaperSprite* Sprite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.SetBrushFromSprite");
		
		UTLBorder_SetBrushFromSprite_Params params {};
		params.Sprite = Sprite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.SetBrushFromSoftObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAsyncLoad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLBorder::SetBrushFromSoftObjectPath(const struct FSoftObjectPath& Path, bool bInAsyncLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.SetBrushFromSoftObjectPath");
		
		UTLBorder_SetBrushFromSoftObjectPath_Params params {};
		params.Path = Path;
		params.bInAsyncLoad = bInAsyncLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLBorder::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.HandleUpdateVisible");
		
		UTLBorder_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLBorder.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLBorder::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLBorder.HandleUpdateEnabled");
		
		UTLBorder_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLBorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLBorder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.OnUnhoverHandler
	 * 		Flags  -> ()
	 */
	void UTLButton::OnUnhoverHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.OnUnhoverHandler");
		
		UTLButton_OnUnhoverHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.OnReleaseHandler
	 * 		Flags  -> ()
	 */
	void UTLButton::OnReleaseHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.OnReleaseHandler");
		
		UTLButton_OnReleaseHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.OnPressHandler
	 * 		Flags  -> ()
	 */
	void UTLButton::OnPressHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.OnPressHandler");
		
		UTLButton_OnPressHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.OnHoverHandler
	 * 		Flags  -> ()
	 */
	void UTLButton::OnHoverHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.OnHoverHandler");
		
		UTLButton_OnHoverHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.OnClickHandler
	 * 		Flags  -> ()
	 */
	void UTLButton::OnClickHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.OnClickHandler");
		
		UTLButton_OnClickHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLButton::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.HandleUpdateVisible");
		
		UTLButton_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLButton.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLButton::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLButton.HandleUpdateEnabled");
		
		UTLButton_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCheckBox.OnTLCheckStateChangedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLCheckBox::OnTLCheckStateChangedCallback(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCheckBox.OnTLCheckStateChangedCallback");
		
		UTLCheckBox_OnTLCheckStateChangedCallback_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCheckBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLCheckBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCheckBox.HandleUpdateVisible");
		
		UTLCheckBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCheckBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLCheckBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCheckBox.HandleUpdateEnabled");
		
		UTLCheckBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCheckBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLCheckBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCircularThrobber.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLCircularThrobber::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCircularThrobber.HandleUpdateVisible");
		
		UTLCircularThrobber_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLCircularThrobber.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLCircularThrobber::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLCircularThrobber.HandleUpdateEnabled");
		
		UTLCircularThrobber_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLCircularThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLCircularThrobber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLCircularThrobber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.SetSelectedOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLComboBoxString::SetSelectedOptionIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.SetSelectedOptionIndex");
		
		UTLComboBoxString_SetSelectedOptionIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.SetMenuPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuPlacement                                     InMenuPlacement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLComboBoxString::SetMenuPlacement(EMenuPlacement InMenuPlacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.SetMenuPlacement");
		
		UTLComboBoxString_SetMenuPlacement_Params params {};
		params.InMenuPlacement = InMenuPlacement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.OnSelectionChangedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLComboBoxString::OnSelectionChangedHandler(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.OnSelectionChangedHandler");
		
		UTLComboBoxString_OnSelectionChangedHandler_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.OnOpeningHandler
	 * 		Flags  -> ()
	 */
	void UTLComboBoxString::OnOpeningHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.OnOpeningHandler");
		
		UTLComboBoxString_OnOpeningHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLComboBoxString::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.HandleUpdateVisible");
		
		UTLComboBoxString_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLComboBoxString::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.HandleUpdateEnabled");
		
		UTLComboBoxString_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLComboBoxString.GetSelectedOptionIndex
	 * 		Flags  -> ()
	 */
	int32_t UTLComboBoxString::GetSelectedOptionIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLComboBoxString.GetSelectedOptionIndex");
		
		UTLComboBoxString_GetSelectedOptionIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLComboBoxString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLComboBoxString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLComboBoxString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLContentsSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLContentsSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLContentsSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLDynamicEntryBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLDynamicEntryBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLDynamicEntryBox.HandleUpdateVisible");
		
		UTLDynamicEntryBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLDynamicEntryBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLDynamicEntryBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLDynamicEntryBox.HandleUpdateEnabled");
		
		UTLDynamicEntryBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLDynamicEntryBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLDynamicEntryBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLDynamicEntryBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableText.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLEditableText::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableText.HandleUpdateVisible");
		
		UTLEditableText_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableText.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLEditableText::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableText.HandleUpdateEnabled");
		
		UTLEditableText_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLEditableText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLEditableText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetText");
		
		UTLEditableTextBox_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetMaxChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMaxChar                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetMaxChar(int32_t InMaxChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetMaxChar");
		
		UTLEditableTextBox_SetMaxChar_Params params {};
		params.InMaxChar = InMaxChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetIsReadOnly");
		
		UTLEditableTextBox_SetIsReadOnly_Params params {};
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetIsPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPassword                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetIsPassword(bool bIsPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetIsPassword");
		
		UTLEditableTextBox_SetIsPassword_Params params {};
		params.bIsPassword = bIsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetIgnoreFocusLostCommited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsIgnore                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetIgnoreFocusLostCommited(bool InIsIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetIgnoreFocusLostCommited");
		
		UTLEditableTextBox_SetIgnoreFocusLostCommited_Params params {};
		params.InIsIgnore = InIsIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetHintText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetHintText");
		
		UTLEditableTextBox_SetHintText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetEscapeAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETLEditableBoxEscapeAction                         InEscapeAction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetEscapeAction(ETLEditableBoxEscapeAction InEscapeAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetEscapeAction");
		
		UTLEditableTextBox_SetEscapeAction_Params params {};
		params.InEscapeAction = InEscapeAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SetError");
		
		UTLEditableTextBox_SetError_Params params {};
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.SelectAllText
	 * 		Flags  -> ()
	 */
	void UTLEditableTextBox::SelectAllText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.SelectAllText");
		
		UTLEditableTextBox_SelectAllText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::OnEditableTextMouseButtonDownEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature");
		
		UTLEditableTextBox_OnEditableTextMouseButtonDownEvent__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::OnEditableTextFocusReceivedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature");
		
		UTLEditableTextBox_OnEditableTextFocusReceivedEvent__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::OnEditableTextFocusLostEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature");
		
		UTLEditableTextBox_OnEditableTextFocusLostEvent__DelegateSignature_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UTLEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLEditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UTLEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.HasError
	 * 		Flags  -> ()
	 */
	bool UTLEditableTextBox::HasError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.HasError");
		
		UTLEditableTextBox_HasError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLEditableTextBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.HandleUpdateVisible");
		
		UTLEditableTextBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLEditableTextBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.HandleUpdateEnabled");
		
		UTLEditableTextBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.GetText
	 * 		Flags  -> ()
	 */
	class FText UTLEditableTextBox::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.GetText");
		
		UTLEditableTextBox_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLEditableTextBox.ClearError
	 * 		Flags  -> ()
	 */
	void UTLEditableTextBox::ClearError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLEditableTextBox.ClearError");
		
		UTLEditableTextBox_ClearError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLEditableTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLEditableTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLExpandableArea.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLExpandableArea::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLExpandableArea.HandleUpdateVisible");
		
		UTLExpandableArea_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLExpandableArea.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLExpandableArea::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLExpandableArea.HandleUpdateEnabled");
		
		UTLExpandableArea_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLExpandableArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLExpandableArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLExpandableArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetOpacity");
		
		UTLImageBase_SetOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetColorWithColorTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableColorKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetColorWithColorTable(const class FName& InTableColorKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetColorWithColorTable");
		
		UTLImageBase_SetColorWithColorTable_Params params {};
		params.InTableColorKey = InTableColorKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetColorAndOpacity");
		
		UTLImageBase_SetColorAndOpacity_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushTintColorWithColorTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableColorKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushTintColorWithColorTable(const class FName& InTableColorKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushTintColorWithColorTable");
		
		UTLImageBase_SetBrushTintColorWithColorTable_Params params {};
		params.InTableColorKey = InTableColorKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 TintColor                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushTintColor(const struct FSlateColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushTintColor");
		
		UTLImageBase_SetBrushTintColor_Params params {};
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DesiredSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushSize(const struct FVector2D& DesiredSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushSize");
		
		UTLImageBase_SetBrushSize_Params params {};
		params.DesiredSize = DesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushResourceObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ResourceObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushResourceObject(class UObject* ResourceObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushResourceObject");
		
		UTLImageBase_SetBrushResourceObject_Params params {};
		params.ResourceObject = ResourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromTextureDynamic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromTextureDynamic");
		
		UTLImageBase_SetBrushFromTextureDynamic_Params params {};
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromTexture_MaintainRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   DefaultSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromTexture_MaintainRatio(class UTexture2D* Texture, const struct FVector2D& DefaultSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromTexture_MaintainRatio");
		
		UTLImageBase_SetBrushFromTexture_MaintainRatio_Params params {};
		params.Texture = Texture;
		params.DefaultSize = DefaultSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromTexture");
		
		UTLImageBase_SetBrushFromTexture_Params params {};
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromSoftTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromSoftTexture(bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromSoftTexture");
		
		UTLImageBase_SetBrushFromSoftTexture_Params params {};
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromSoftMaterial
	 * 		Flags  -> ()
	 */
	void UTLImageBase::SetBrushFromSoftMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromSoftMaterial");
		
		UTLImageBase_SetBrushFromSoftMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromRenderTarget(class UTextureRenderTarget2D* Texture, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromRenderTarget");
		
		UTLImageBase_SetBrushFromRenderTarget_Params params {};
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromMediaTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBinkMediaTexture*                           Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromMediaTexture(class UBinkMediaTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromMediaTexture");
		
		UTLImageBase_SetBrushFromMediaTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromMaterial");
		
		UTLImageBase_SetBrushFromMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromAtlasInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromAtlasInterface(bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromAtlasInterface");
		
		UTLImageBase_SetBrushFromAtlasInterface_Params params {};
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrushFromAsset(class USlateBrushAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrushFromAsset");
		
		UTLImageBase_SetBrushFromAsset_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.SetBrush");
		
		UTLImageBase_SetBrush_Params params {};
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.PlayOrCloseBinkMediaPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInPlay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImageBase::PlayOrCloseBinkMediaPlayer(bool bInPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.PlayOrCloseBinkMediaPlayer");
		
		UTLImageBase_PlayOrCloseBinkMediaPlayer_Params params {};
		params.bInPlay = bInPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImageBase.GetDynamicMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UTLImageBase::GetDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImageBase.GetDynamicMaterial");
		
		UTLImageBase_GetDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLImageBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLImageBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLImageBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.Stop
	 * 		Flags  -> ()
	 */
	void UTLFlipBookImage::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.Stop");
		
		UTLFlipBookImage_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.SetFlipbookFromSoftObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLFlipBookImage::SetFlipbookFromSoftObjectPath(const struct FSoftObjectPath& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.SetFlipbookFromSoftObjectPath");
		
		UTLFlipBookImage_SetFlipbookFromSoftObjectPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.SetCurrentFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLFlipBookImage::SetCurrentFrame(int32_t Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.SetCurrentFrame");
		
		UTLFlipBookImage_SetCurrentFrame_Params params {};
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.Play
	 * 		Flags  -> ()
	 */
	void UTLFlipBookImage::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.Play");
		
		UTLFlipBookImage_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLFlipBookImage::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.HandleUpdateVisible");
		
		UTLFlipBookImage_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLFlipBookImage.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLFlipBookImage::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLFlipBookImage.HandleUpdateEnabled");
		
		UTLFlipBookImage_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLFlipBookImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLFlipBookImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLFlipBookImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLGridPanel.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLGridPanel::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLGridPanel.HandleUpdateVisible");
		
		UTLGridPanel_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLGridPanel.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLGridPanel::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLGridPanel.HandleUpdateEnabled");
		
		UTLGridPanel_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLGridPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLGridPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLHorizontalBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLHorizontalBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLHorizontalBox.HandleUpdateVisible");
		
		UTLHorizontalBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLHorizontalBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLHorizontalBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLHorizontalBox.HandleUpdateEnabled");
		
		UTLHorizontalBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLHorizontalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLHorizontalBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLHorizontalBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetMaskTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    InMaskTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImage::SetMaskTexture(class UTexture* InMaskTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetMaskTexture");
		
		UTLImage_SetMaskTexture_Params params {};
		params.InMaskTexture = InMaskTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetHslShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InHslShift                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImage::SetHslShift(const struct FLinearColor& InHslShift)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetHslShift");
		
		UTLImage_SetHslShift_Params params {};
		params.InHslShift = InHslShift;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetBrushFromSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImage::SetBrushFromSprite(class UPaperSprite* Sprite, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetBrushFromSprite");
		
		UTLImage_SetBrushFromSprite_Params params {};
		params.Sprite = Sprite;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetBrushFromSoftObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAsyncLoad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAutoShowAfterBrushLoading                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImage::SetBrushFromSoftObjectPath(const struct FSoftObjectPath& Path, bool bInAsyncLoad, bool bInAutoShowAfterBrushLoading, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetBrushFromSoftObjectPath");
		
		UTLImage_SetBrushFromSoftObjectPath_Params params {};
		params.Path = Path;
		params.bInAsyncLoad = bInAsyncLoad;
		params.bInAutoShowAfterBrushLoading = bInAutoShowAfterBrushLoading;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetBrushFromCustomMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLImage::SetBrushFromCustomMaterial(class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetBrushFromCustomMaterial");
		
		UTLImage_SetBrushFromCustomMaterial_Params params {};
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.SetBrushByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSlateBrushName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InApplyVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLImage::SetBrushByName(const class FName& InSlateBrushName, bool InApplyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.SetBrushByName");
		
		UTLImage_SetBrushByName_Params params {};
		params.InSlateBrushName = InSlateBrushName;
		params.InApplyVisible = InApplyVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLImage::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.HandleUpdateVisible");
		
		UTLImage_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.HandleUpdateImageBrush
	 * 		Flags  -> ()
	 */
	void UTLImage::HandleUpdateImageBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.HandleUpdateImageBrush");
		
		UTLImage_HandleUpdateImageBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLImage::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.HandleUpdateEnabled");
		
		UTLImage_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLImage.HandleUpdateColorAndOpacity
	 * 		Flags  -> ()
	 */
	void UTLImage::HandleUpdateColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLImage.HandleUpdateColorAndOpacity");
		
		UTLImage_HandleUpdateColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetTextBlockVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetTextBlockVisibility");
		
		UTLInputKeyCombiSelector_SetTextBlockVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetSelectedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInputChord>                         InSelectedKey                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetSelectedKey(TArray<struct FInputChord> InSelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetSelectedKey");
		
		UTLInputKeyCombiSelector_SetSelectedKey_Params params {};
		params.InSelectedKey = InSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetNoKeySpecifiedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNoKeySpecifiedText                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetNoKeySpecifiedText");
		
		UTLInputKeyCombiSelector_SetNoKeySpecifiedText_Params params {};
		params.InNoKeySpecifiedText = InNoKeySpecifiedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetKeySelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InKeySelectionText                                         (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetKeySelectionText(const class FText& InKeySelectionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetKeySelectionText");
		
		UTLInputKeyCombiSelector_SetKeySelectionText_Params params {};
		params.InKeySelectionText = InKeySelectionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetAllowModifierKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowModifierKeys                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetAllowModifierKeys");
		
		UTLInputKeyCombiSelector_SetAllowModifierKeys_Params params {};
		params.bInAllowModifierKeys = bInAllowModifierKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.SetAllowGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowGamepadKeys                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.SetAllowGamepadKeys");
		
		UTLInputKeyCombiSelector_SetAllowGamepadKeys_Params params {};
		params.bInAllowGamepadKeys = bInAllowGamepadKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLInputKeyCombiSelector.OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInputChord>                         SelectedKeys                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeyCombiSelector::OnKeySelected__DelegateSignature(TArray<struct FInputChord> SelectedKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLInputKeyCombiSelector.OnKeySelected__DelegateSignature");
		
		UTLInputKeyCombiSelector_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKeys = SelectedKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLInputKeyCombiSelector.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTLInputKeyCombiSelector::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLInputKeyCombiSelector.OnIsSelectingKeyChanged__DelegateSignature");
		
		UTLInputKeyCombiSelector_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLInputKeyCombiSelector::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.HandleUpdateVisible");
		
		UTLInputKeyCombiSelector_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLInputKeyCombiSelector::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.HandleUpdateEnabled");
		
		UTLInputKeyCombiSelector_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeyCombiSelector.GetIsSelectingKey
	 * 		Flags  -> ()
	 */
	bool UTLInputKeyCombiSelector::GetIsSelectingKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeyCombiSelector.GetIsSelectingKey");
		
		UTLInputKeyCombiSelector_GetIsSelectingKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLInputKeyCombiSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLInputKeyCombiSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLInputKeyCombiSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetTextBlockVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetTextBlockVisibility");
		
		UTLInputKeySelector_SetTextBlockVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetSelectedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InSelectedKey                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetSelectedKey");
		
		UTLInputKeySelector_SetSelectedKey_Params params {};
		params.InSelectedKey = InSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetNoKeySpecifiedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNoKeySpecifiedText                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetNoKeySpecifiedText");
		
		UTLInputKeySelector_SetNoKeySpecifiedText_Params params {};
		params.InNoKeySpecifiedText = InNoKeySpecifiedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetKeySelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InKeySelectionText                                         (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetKeySelectionText(const class FText& InKeySelectionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetKeySelectionText");
		
		UTLInputKeySelector_SetKeySelectionText_Params params {};
		params.InKeySelectionText = InKeySelectionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetAllowModifierKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowModifierKeys                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetAllowModifierKeys");
		
		UTLInputKeySelector_SetAllowModifierKeys_Params params {};
		params.bInAllowModifierKeys = bInAllowModifierKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.SetAllowGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowGamepadKeys                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.SetAllowGamepadKeys");
		
		UTLInputKeySelector_SetAllowGamepadKeys_Params params {};
		params.bInAllowGamepadKeys = bInAllowGamepadKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLInputKeySelector.OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLInputKeySelector.OnKeySelected__DelegateSignature");
		
		UTLInputKeySelector_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLInputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTLInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLInputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");
		
		UTLInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLInputKeySelector::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.HandleUpdateVisible");
		
		UTLInputKeySelector_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLInputKeySelector::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.HandleUpdateEnabled");
		
		UTLInputKeySelector_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInputKeySelector.GetIsSelectingKey
	 * 		Flags  -> ()
	 */
	bool UTLInputKeySelector::GetIsSelectingKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInputKeySelector.GetIsSelectingKey");
		
		UTLInputKeySelector_GetIsSelectingKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLInputKeySelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLInputKeySelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLInputKeySelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInvalidationBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLInvalidationBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInvalidationBox.HandleUpdateVisible");
		
		UTLInvalidationBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLInvalidationBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLInvalidationBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLInvalidationBox.HandleUpdateEnabled");
		
		UTLInvalidationBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLInvalidationBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLInvalidationBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLInvalidationBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBox.ToggleOrientation
	 * 		Flags  -> ()
	 */
	void UTLLinearBox::ToggleOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBox.ToggleOrientation");
		
		UTLLinearBox_ToggleOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBox.SetReverseOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInReverseOrder                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBox::SetReverseOrder(bool bInReverseOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBox.SetReverseOrder");
		
		UTLLinearBox_SetReverseOrder_Params params {};
		params.bInReverseOrder = bInReverseOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBox.SetOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOrientation                                       InOrientation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBox::SetOrientation(EOrientation InOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBox.SetOrientation");
		
		UTLLinearBox_SetOrientation_Params params {};
		params.InOrientation = InOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBox.GetReverseOrder
	 * 		Flags  -> ()
	 */
	bool UTLLinearBox::GetReverseOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBox.GetReverseOrder");
		
		UTLLinearBox_GetReverseOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBox.GetOrientation
	 * 		Flags  -> ()
	 */
	EOrientation UTLLinearBox::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBox.GetOrientation");
		
		UTLLinearBox_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLinearBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLinearBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLLinearBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBoxSlot.SetVerticalAlignment");
		
		UTLLinearBoxSlot_SetVerticalAlignment_Params params {};
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBoxSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBoxSlot::SetSize(const struct FSlateChildSize& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBoxSlot.SetSize");
		
		UTLLinearBoxSlot_SetSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBoxSlot.SetPadding");
		
		UTLLinearBoxSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLLinearBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLLinearBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLLinearBoxSlot.SetHorizontalAlignment");
		
		UTLLinearBoxSlot_SetHorizontalAlignment_Params params {};
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLLinearBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLLinearBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLLinearBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLListView.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLListView::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLListView.HandleUpdateVisible");
		
		UTLListView_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLListView.HandleUpdateListChanged
	 * 		Flags  -> ()
	 */
	void UTLListView::HandleUpdateListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLListView.HandleUpdateListChanged");
		
		UTLListView_HandleUpdateListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLListView.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLListView::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLListView.HandleUpdateEnabled");
		
		UTLListView_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLListView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMenuAnchor.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLMenuAnchor::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMenuAnchor.HandleUpdateVisible");
		
		UTLMenuAnchor_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMenuAnchor.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLMenuAnchor::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMenuAnchor.HandleUpdateEnabled");
		
		UTLMenuAnchor_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMenuAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMenuAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLMenuAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableText.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLMultiLineEditableText::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableText.HandleUpdateVisible");
		
		UTLMultiLineEditableText_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableText.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLMultiLineEditableText::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableText.HandleUpdateEnabled");
		
		UTLMultiLineEditableText_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMultiLineEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMultiLineEditableText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLMultiLineEditableText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyleTL                           InTextStyle                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyleTL& InTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetTextStyle");
		
		UTLMultiLineEditableTextBox_SetTextStyle_Params params {};
		params.InTextStyle = InTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetText");
		
		UTLMultiLineEditableTextBox_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetMaxChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMaxChar                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetMaxChar(int32_t InMaxChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetMaxChar");
		
		UTLMultiLineEditableTextBox_SetMaxChar_Params params {};
		params.InMaxChar = InMaxChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetIsReadOnly");
		
		UTLMultiLineEditableTextBox_SetIsReadOnly_Params params {};
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetHintText");
		
		UTLMultiLineEditableTextBox_SetHintText_Params params {};
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SetError");
		
		UTLMultiLineEditableTextBox_SetError_Params params {};
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.SelectAllText
	 * 		Flags  -> ()
	 */
	void UTLMultiLineEditableTextBox::SelectAllText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.SelectAllText");
		
		UTLMultiLineEditableTextBox_SelectAllText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		UTLMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLMultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
		
		UTLMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::OnEditableTextMouseButtonDownEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextMouseButtonDownEvent__DelegateSignature");
		
		UTLMultiLineEditableTextBox_OnEditableTextMouseButtonDownEvent__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::OnEditableTextFocusReceivedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusReceivedEvent__DelegateSignature");
		
		UTLMultiLineEditableTextBox_OnEditableTextFocusReceivedEvent__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTLMultiLineEditableTextBox::OnEditableTextFocusLostEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLMultiLineEditableTextBox.OnEditableTextFocusLostEvent__DelegateSignature");
		
		UTLMultiLineEditableTextBox_OnEditableTextFocusLostEvent__DelegateSignature_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLMultiLineEditableTextBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.HandleUpdateVisible");
		
		UTLMultiLineEditableTextBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLMultiLineEditableTextBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.HandleUpdateEnabled");
		
		UTLMultiLineEditableTextBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.GetText
	 * 		Flags  -> ()
	 */
	class FText UTLMultiLineEditableTextBox::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.GetText");
		
		UTLMultiLineEditableTextBox_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.GetHintText
	 * 		Flags  -> ()
	 */
	class FText UTLMultiLineEditableTextBox::GetHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.GetHintText");
		
		UTLMultiLineEditableTextBox_GetHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.GetCurrentLineCount
	 * 		Flags  -> ()
	 */
	int32_t UTLMultiLineEditableTextBox::GetCurrentLineCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.GetCurrentLineCount");
		
		UTLMultiLineEditableTextBox_GetCurrentLineCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLMultiLineEditableTextBox.GetCurrentCursorLine
	 * 		Flags  -> ()
	 */
	int32_t UTLMultiLineEditableTextBox::GetCurrentCursorLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLMultiLineEditableTextBox.GetCurrentCursorLine");
		
		UTLMultiLineEditableTextBox_GetCurrentCursorLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLMultiLineEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLMultiLineEditableTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLMultiLineEditableTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLNamedSlot.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLNamedSlot::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLNamedSlot.HandleUpdateVisible");
		
		UTLNamedSlot_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLNamedSlot.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLNamedSlot::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLNamedSlot.HandleUpdateEnabled");
		
		UTLNamedSlot_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLNamedSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLNamedSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLNamedSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLNativeWidgetHost.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLNativeWidgetHost::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLNativeWidgetHost.HandleUpdateVisible");
		
		UTLNativeWidgetHost_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLNativeWidgetHost.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLNativeWidgetHost::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLNativeWidgetHost.HandleUpdateEnabled");
		
		UTLNativeWidgetHost_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLNativeWidgetHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLNativeWidgetHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLNativeWidgetHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLOverlay.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLOverlay::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLOverlay.HandleUpdateVisible");
		
		UTLOverlay_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLOverlay.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLOverlay::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLOverlay.HandleUpdateEnabled");
		
		UTLOverlay_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLOverlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLOverlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLOverlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.UpdateEdgeImageBrush
	 * 		Flags  -> ()
	 */
	void UTLProgressBar::UpdateEdgeImageBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.UpdateEdgeImageBrush");
		
		UTLProgressBar_UpdateEdgeImageBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetTargetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetTargetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetTargetPercent");
		
		UTLProgressBar_SetTargetPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetSubPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetSubPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetSubPercent");
		
		UTLProgressBar_SetSubPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetPercentMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterial*                                   InPercentMaterial                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetPercentMaterial(class UMaterial* InPercentMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetPercentMaterial");
		
		UTLProgressBar_SetPercentMaterial_Params params {};
		params.InPercentMaterial = InPercentMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetIncreaseDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDurationSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetIncreaseDuration(float InDurationSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetIncreaseDuration");
		
		UTLProgressBar_SetIncreaseDuration_Params params {};
		params.InDurationSec = InDurationSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetHeadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLImage*                                    InHeadImage                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetHeadImage(class UTLImage* InHeadImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetHeadImage");
		
		UTLProgressBar_SetHeadImage_Params params {};
		params.InHeadImage = InHeadImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetFillImageBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ResourceObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetFillImageBrush(class UObject* ResourceObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetFillImageBrush");
		
		UTLProgressBar_SetFillImageBrush_Params params {};
		params.ResourceObject = ResourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetEdgeImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InEdgeImage                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetEdgeImage(class UWidget* InEdgeImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetEdgeImage");
		
		UTLProgressBar_SetEdgeImage_Params params {};
		params.InEdgeImage = InEdgeImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetDecreaseDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDurationSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetDecreaseDuration(float InDurationSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetDecreaseDuration");
		
		UTLProgressBar_SetDecreaseDuration_Params params {};
		params.InDurationSec = InDurationSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetCurveGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 InCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetCurveGraph(class UCurveFloat* InCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetCurveGraph");
		
		UTLProgressBar_SetCurveGraph_Params params {};
		params.InCurve = InCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetCurrentPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetCurrentPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetCurrentPercent");
		
		UTLProgressBar_SetCurrentPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.SetAfterImageBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLProgressBar*                              InAfterImageBar                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::SetAfterImageBar(class UTLProgressBar* InAfterImageBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.SetAfterImageBar");
		
		UTLProgressBar_SetAfterImageBar_Params params {};
		params.InAfterImageBar = InAfterImageBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.PlayWithDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::PlayWithDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.PlayWithDuration");
		
		UTLProgressBar_PlayWithDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.PlayAfterImageWithDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::PlayAfterImageWithDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.PlayAfterImageWithDuration");
		
		UTLProgressBar_PlayAfterImageWithDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.Play
	 * 		Flags  -> ()
	 */
	void UTLProgressBar::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.Play");
		
		UTLProgressBar_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLProgressBar::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.HandleUpdateVisible");
		
		UTLProgressBar_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.HandleUpdatePercent
	 * 		Flags  -> ()
	 */
	void UTLProgressBar::HandleUpdatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.HandleUpdatePercent");
		
		UTLProgressBar_HandleUpdatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLProgressBar::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.HandleUpdateEnabled");
		
		UTLProgressBar_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.GetRemainSec
	 * 		Flags  -> ()
	 */
	float UTLProgressBar::GetRemainSec()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.GetRemainSec");
		
		UTLProgressBar_GetRemainSec_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.GetFillImageDynamicMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UTLProgressBar::GetFillImageDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.GetFillImageDynamicMaterial");
		
		UTLProgressBar_GetFillImageDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.GetDurationSec
	 * 		Flags  -> ()
	 */
	float UTLProgressBar::GetDurationSec()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.GetDurationSec");
		
		UTLProgressBar_GetDurationSec_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLProgressBar.AddSubProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLProgressBar*                              InSubProgressBar                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLProgressBar::AddSubProgressBar(class UTLProgressBar* InSubProgressBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLProgressBar.AddSubProgressBar");
		
		UTLProgressBar_AddSubProgressBar_Params params {};
		params.InSubProgressBar = InSubProgressBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadarChart.SetValueLayerShapeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLRadarChart::SetValueLayerShapeColor(int32_t InIndex, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadarChart.SetValueLayerShapeColor");
		
		UTLRadarChart_SetValueLayerShapeColor_Params params {};
		params.InIndex = InIndex;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadarChart.SetValueLayerOutLineThinckness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLRadarChart::SetValueLayerOutLineThinckness(int32_t InIndex, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadarChart.SetValueLayerOutLineThinckness");
		
		UTLRadarChart_SetValueLayerOutLineThinckness_Params params {};
		params.InIndex = InIndex;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadarChart.SetValueLayerOutLineColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLRadarChart::SetValueLayerOutLineColor(int32_t InIndex, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadarChart.SetValueLayerOutLineColor");
		
		UTLRadarChart_SetValueLayerOutLineColor_Params params {};
		params.InIndex = InIndex;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadarChart.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLRadarChart::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadarChart.HandleUpdateVisible");
		
		UTLRadarChart_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadarChart.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLRadarChart::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadarChart.HandleUpdateEnabled");
		
		UTLRadarChart_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLRadarChart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLRadarChart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLRadarChart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadioButton.SetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLRadioButton::SetButton(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadioButton.SetButton");
		
		UTLRadioButton_SetButton_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLRadioButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLRadioButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLRadioButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadioGroup.SetCheckIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLRadioGroup::SetCheckIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadioGroup.SetCheckIndex");
		
		UTLRadioGroup_SetCheckIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRadioGroup.GetSelectedIndex
	 * 		Flags  -> ()
	 */
	int32_t UTLRadioGroup::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRadioGroup.GetSelectedIndex");
		
		UTLRadioGroup_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLRadioGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLRadioGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLRadioGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRetainerBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLRetainerBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRetainerBox.HandleUpdateVisible");
		
		UTLRetainerBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLRetainerBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLRetainerBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLRetainerBox.HandleUpdateEnabled");
		
		UTLRetainerBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLRetainerBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLRetainerBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLRetainerBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSafeZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSafeZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSafeZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLScaleBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLScaleBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLScaleBox.HandleUpdateVisible");
		
		UTLScaleBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLScaleBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLScaleBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLScaleBox.HandleUpdateEnabled");
		
		UTLScaleBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLScaleBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLScaleBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLScaleBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLScrollBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLScrollBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLScrollBox.HandleUpdateVisible");
		
		UTLScrollBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLScrollBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLScrollBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLScrollBox.HandleUpdateEnabled");
		
		UTLScrollBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLScrollBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLScrollBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSizeBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLSizeBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSizeBox.HandleUpdateVisible");
		
		UTLSizeBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSizeBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLSizeBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSizeBox.HandleUpdateEnabled");
		
		UTLSizeBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSizeBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSizeBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSizeBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider.OnCaptureBegin
	 * 		Flags  -> ()
	 */
	void UTLSlider::OnCaptureBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider.OnCaptureBegin");
		
		UTLSlider_OnCaptureBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLSlider::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider.HandleUpdateVisible");
		
		UTLSlider_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLSlider::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider.HandleUpdateEnabled");
		
		UTLSlider_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetValue(const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetValue");
		
		UTLSlider2D_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetStepSize");
		
		UTLSlider2D_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetSliderHandleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetSliderHandleColor");
		
		UTLSlider2D_SetSliderHandleColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetSliderBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetSliderBarColor");
		
		UTLSlider2D_SetSliderBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetRequiresControllerLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRequiresControllerLock                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetRequiresControllerLock(bool InRequiresControllerLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetRequiresControllerLock");
		
		UTLSlider2D_SetRequiresControllerLock_Params params {};
		params.InRequiresControllerLock = InRequiresControllerLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetOnlyPositive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetOnlyPositive(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetOnlyPositive");
		
		UTLSlider2D_SetOnlyPositive_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetMouseUsesStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InMouseUsesStep                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetMouseUsesStep(bool InMouseUsesStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetMouseUsesStep");
		
		UTLSlider2D_SetMouseUsesStep_Params params {};
		params.InMouseUsesStep = InMouseUsesStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetLocked");
		
		UTLSlider2D_SetLocked_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.SetIndentHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLSlider2D::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.SetIndentHandle");
		
		UTLSlider2D_SetIndentHandle_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.OnCaptureBegin
	 * 		Flags  -> ()
	 */
	void UTLSlider2D::OnCaptureBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.OnCaptureBegin");
		
		UTLSlider2D_OnCaptureBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLSlider2D::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.HandleUpdateVisible");
		
		UTLSlider2D_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLSlider2D::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.HandleUpdateEnabled");
		
		UTLSlider2D_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLSlider2D.GetVector2D__DelegateSignature
	 * 		Flags  -> ()
	 */
	struct FVector2D UTLSlider2D::GetVector2D__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLSlider2D.GetVector2D__DelegateSignature");
		
		UTLSlider2D_GetVector2D__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSlider2D.GetValue
	 * 		Flags  -> ()
	 */
	struct FVector2D UTLSlider2D::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSlider2D.GetValue");
		
		UTLSlider2D_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSlider2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSlider2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSlider2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSpacer.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLSpacer::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSpacer.HandleUpdateVisible");
		
		UTLSpacer_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSpacer.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLSpacer::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSpacer.HandleUpdateEnabled");
		
		UTLSpacer_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSpacer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSpacer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSpacer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSpinBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLSpinBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSpinBox.HandleUpdateVisible");
		
		UTLSpinBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLSpinBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLSpinBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLSpinBox.HandleUpdateEnabled");
		
		UTLSpinBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLSpinBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLSpinBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLSpinBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTabButton.This_OnCheckBoxComponentStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTabButton::This_OnCheckBoxComponentStateChanged(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTabButton.This_OnCheckBoxComponentStateChanged");
		
		UTLTabButton_This_OnCheckBoxComponentStateChanged_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLTabButton.OnUnselected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTabIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTabButton::OnUnselected__DelegateSignature(int32_t InTabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLTabButton.OnUnselected__DelegateSignature");
		
		UTLTabButton_OnUnselected__DelegateSignature_Params params {};
		params.InTabIndex = InTabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLTabButton.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTabIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTabButton::OnSelected__DelegateSignature(int32_t InTabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLTabButton.OnSelected__DelegateSignature");
		
		UTLTabButton_OnSelected__DelegateSignature_Params params {};
		params.InTabIndex = InTabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLTabButton.GetWidgetAnimation__DelegateSignature
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UTLTabButton::GetWidgetAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLTabButton.GetWidgetAnimation__DelegateSignature");
		
		UTLTabButton_GetWidgetAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLTabButton.GetTLTabContent__DelegateSignature
	 * 		Flags  -> ()
	 */
	class UTLTabContent* UTLTabButton::GetTLTabContent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLTabButton.GetTLTabContent__DelegateSignature");
		
		UTLTabButton_GetTLTabContent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction TLUI.TLTabButton.GetPanelWidget__DelegateSignature
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UTLTabButton::GetPanelWidget__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TLUI.TLTabButton.GetPanelWidget__DelegateSignature");
		
		UTLTabButton_GetPanelWidget__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTabButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTabButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTabButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTabContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTabContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTabContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTestStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTestStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTestStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetWrapTextAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWrapText                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetWrapTextAt(float InWrapText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetWrapTextAt");
		
		UTLTextBlockBase_SetWrapTextAt_Params params {};
		params.InWrapText = InWrapText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetWrapLimitOverRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETLTextWrapLimitOverRule                           InWrapLimitOverRule                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetWrapLimitOverRule(ETLTextWrapLimitOverRule InWrapLimitOverRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetWrapLimitOverRule");
		
		UTLTextBlockBase_SetWrapLimitOverRule_Params params {};
		params.InWrapLimitOverRule = InWrapLimitOverRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetUseWrapScaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetUseWrapScaling(bool bInValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetUseWrapScaling");
		
		UTLTextBlockBase_SetUseWrapScaling_Params params {};
		params.bInValue = bInValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetUseCustomDisabledColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInUseCustomDisabledColor                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetUseCustomDisabledColor(bool bInUseCustomDisabledColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetUseCustomDisabledColor");
		
		UTLTextBlockBase_SetUseCustomDisabledColor_Params params {};
		params.bInUseCustomDisabledColor = bInUseCustomDisabledColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetText");
		
		UTLTextBlockBase_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetShadowOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetShadowOffset(const struct FVector2D& InShadowOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetShadowOffset");
		
		UTLTextBlockBase_SetShadowOffset_Params params {};
		params.InShadowOffset = InShadowOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetShadowColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetShadowColorAndOpacity");
		
		UTLTextBlockBase_SetShadowColorAndOpacity_Params params {};
		params.InShadowColorAndOpacity = InShadowColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetOpacity");
		
		UTLTextBlockBase_SetOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetMinDesiredWidth");
		
		UTLTextBlockBase_SetMinDesiredWidth_Params params {};
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetLineHeightPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLineHeightPercentage                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetLineHeightPercentage(float InLineHeightPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetLineHeightPercentage");
		
		UTLTextBlockBase_SetLineHeightPercentage_Params params {};
		params.InLineHeightPercentage = InLineHeightPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetFont");
		
		UTLTextBlockBase_SetFont_Params params {};
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetCustomDisabledColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InCustomDisabledColorAndOpacity                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetCustomDisabledColorAndOpacity(const struct FLinearColor& InCustomDisabledColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetCustomDisabledColorAndOpacity");
		
		UTLTextBlockBase_SetCustomDisabledColorAndOpacity_Params params {};
		params.InCustomDisabledColorAndOpacity = InCustomDisabledColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetColorAndOpacity");
		
		UTLTextBlockBase_SetColorAndOpacity_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlockBase::SetAutoWrapText(bool bInValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.SetAutoWrapText");
		
		UTLTextBlockBase_SetAutoWrapText_Params params {};
		params.bInValue = bInValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlockBase.GetText
	 * 		Flags  -> ()
	 */
	class FText UTLTextBlockBase::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlockBase.GetText");
		
		UTLTextBlockBase_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTextBlockBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTextBlockBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTextBlockBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.SetTextColorWithColorTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableColorKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlock::SetTextColorWithColorTable(const class FName& InTableColorKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.SetTextColorWithColorTable");
		
		UTLTextBlock_SetTextColorWithColorTable_Params params {};
		params.InTableColorKey = InTableColorKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.SetTextBlockStylePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             InTLTextBlockStylePath                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlock::SetTextBlockStylePath(const struct FSoftObjectPath& InTLTextBlockStylePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.SetTextBlockStylePath");
		
		UTLTextBlock_SetTextBlockStylePath_Params params {};
		params.InTLTextBlockStylePath = InTLTextBlockStylePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.SetTextBlockStyleFromTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTableKey                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTextBlock::SetTextBlockStyleFromTable(const class FName& InTableKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.SetTextBlockStyleFromTable");
		
		UTLTextBlock_SetTextBlockStyleFromTable_Params params {};
		params.InTableKey = InTableKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.ResetTextColor
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::ResetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.ResetTextColor");
		
		UTLTextBlock_ResetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateVisible");
		
		UTLTextBlock_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateTextTime
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateTextTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateTextTime");
		
		UTLTextBlock_HandleUpdateTextTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateTextColorWithColorTable
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateTextColorWithColorTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateTextColorWithColorTable");
		
		UTLTextBlock_HandleUpdateTextColorWithColorTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateTextColorAndOpacity
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateTextColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateTextColorAndOpacity");
		
		UTLTextBlock_HandleUpdateTextColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateTextBlockStylePath
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateTextBlockStylePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateTextBlockStylePath");
		
		UTLTextBlock_HandleUpdateTextBlockStylePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateTextBlockStyleFromTable
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateTextBlockStyleFromTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateTextBlockStyleFromTable");
		
		UTLTextBlock_HandleUpdateTextBlockStyleFromTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateText
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateText");
		
		UTLTextBlock_HandleUpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLTextBlock::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.HandleUpdateEnabled");
		
		UTLTextBlock_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTextBlock.GetTextBlockStyleFontSize
	 * 		Flags  -> ()
	 */
	int32_t UTLTextBlock::GetTextBlockStyleFontSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTextBlock.GetTextBlockStyleFontSize");
		
		UTLTextBlock_GetTextBlockStyleFontSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTextBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTextBlockDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTextBlockDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTextBlockStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTextBlockStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTextBlockStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTextBlockStyleStructManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTextBlockStyleStructManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTextBlockStyleStructManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLThrobber.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLThrobber::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLThrobber.HandleUpdateVisible");
		
		UTLThrobber_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLThrobber.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLThrobber::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLThrobber.HandleUpdateEnabled");
		
		UTLThrobber_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLThrobber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLThrobber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTiledImage.SetNumColumns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumColumns                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTiledImage::SetNumColumns(int32_t InNumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTiledImage.SetNumColumns");
		
		UTLTiledImage_SetNumColumns_Params params {};
		params.InNumColumns = InNumColumns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTiledImage.SetCullingScaleRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFloatRange                                 InCullingScaleRange                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLTiledImage::SetCullingScaleRange(const struct FFloatRange& InCullingScaleRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTiledImage.SetCullingScaleRange");
		
		UTLTiledImage_SetCullingScaleRange_Params params {};
		params.InCullingScaleRange = InCullingScaleRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTiledImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTiledImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTiledImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTileView.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLTileView::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTileView.HandleUpdateVisible");
		
		UTLTileView_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTileView.HandleUpdateListChanged
	 * 		Flags  -> ()
	 */
	void UTLTileView::HandleUpdateListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTileView.HandleUpdateListChanged");
		
		UTLTileView_HandleUpdateListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTileView.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLTileView::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTileView.HandleUpdateEnabled");
		
		UTLTileView_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTileView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTileView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTileView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTreeView.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLTreeView::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTreeView.HandleUpdateVisible");
		
		UTLTreeView_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLTreeView.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLTreeView::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLTreeView.HandleUpdateEnabled");
		
		UTLTreeView_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLTreeView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLTreeView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLTreeView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLUIInputModeHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLUIInputModeHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLUIInputModeHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLUISettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLUISettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLUISettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLUIStyleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLUIStyleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLUIStyleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLUniformGridPanel.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLUniformGridPanel::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLUniformGridPanel.HandleUpdateVisible");
		
		UTLUniformGridPanel_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLUniformGridPanel.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLUniformGridPanel::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLUniformGridPanel.HandleUpdateEnabled");
		
		UTLUniformGridPanel_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLUniformGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLUniformGridPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLUniformGridPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLVerticalBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLVerticalBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLVerticalBox.HandleUpdateVisible");
		
		UTLVerticalBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLVerticalBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLVerticalBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLVerticalBox.HandleUpdateEnabled");
		
		UTLVerticalBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLVerticalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLVerticalBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLVerticalBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWebBrowser.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLWebBrowser::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWebBrowser.HandleUpdateVisible");
		
		UTLWebBrowser_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWebBrowser.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLWebBrowser::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWebBrowser.HandleUpdateEnabled");
		
		UTLWebBrowser_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWebBrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWebImage.DownloadImage
	 * 		Flags  -> ()
	 */
	void UTLWebImage::DownloadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWebImage.DownloadImage");
		
		UTLWebImage_DownloadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWebImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWebImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWebImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.SetOnUpdateDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::SetOnUpdateDefault(int32_t AnyValue, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.SetOnUpdateDefault");
		
		UTLWidgetBindingLibrary_SetOnUpdateDefault_Params params {};
		params.AnyValue = AnyValue;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddVisibleBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETLBindingOperator                                 Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddVisibleBinding(class UWidget* Target, int32_t AnyValue, ETLBindingOperator Operator, int32_t SourceValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddVisibleBinding");
		
		UTLWidgetBindingLibrary_AddVisibleBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.Operator = Operator;
		params.SourceValue = SourceValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextColorWithColorTableBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextColorWithColorTableBinding(class UTLTextBlock* Target, int32_t AnyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextColorWithColorTableBinding");
		
		UTLWidgetBindingLibrary_AddTextColorWithColorTableBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextColorAndOpacityBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextColorAndOpacityBinding(class UTLTextBlock* Target, int32_t AnyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextColorAndOpacityBinding");
		
		UTLWidgetBindingLibrary_AddTextColorAndOpacityBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextBlockStylePathBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextBlockStylePathBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bOnlyColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextBlockStylePathBinding");
		
		UTLWidgetBindingLibrary_AddTextBlockStylePathBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.bOnlyColor = bOnlyColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextBlockStyleFromTableBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextBlockStyleFromTableBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bOnlyColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextBlockStyleFromTableBinding");
		
		UTLWidgetBindingLibrary_AddTextBlockStyleFromTableBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.bOnlyColor = bOnlyColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextBindingFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERoundingMode                                      RoundingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FractionalDigits                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextBindingFloat(class UTLTextBlock* Target, int32_t AnyValue, ERoundingMode RoundingMode, int32_t FractionalDigits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextBindingFloat");
		
		UTLWidgetBindingLibrary_AddTextBindingFloat_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.RoundingMode = RoundingMode;
		params.FractionalDigits = FractionalDigits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddTextBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLTextBlock*                                Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetVisibleWithValue                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddTextBinding(class UTLTextBlock* Target, int32_t AnyValue, bool bSetVisibleWithValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddTextBinding");
		
		UTLWidgetBindingLibrary_AddTextBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.bSetVisibleWithValue = bSetVisibleWithValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddPercentBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLProgressBar*                              Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddPercentBinding(class UTLProgressBar* Target, int32_t AnyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddPercentBinding");
		
		UTLWidgetBindingLibrary_AddPercentBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddImageColorAndOpacityBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLImage*                                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddImageColorAndOpacityBinding(class UTLImage* Target, int32_t AnyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddImageColorAndOpacityBinding");
		
		UTLWidgetBindingLibrary_AddImageColorAndOpacityBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddImageBrushBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLImage*                                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetVisibleWithValue                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddImageBrushBinding(class UTLImage* Target, int32_t AnyValue, bool bMatchSize, bool bSetVisibleWithValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddImageBrushBinding");
		
		UTLWidgetBindingLibrary_AddImageBrushBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.bMatchSize = bMatchSize;
		params.bSetVisibleWithValue = bSetVisibleWithValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetBindingLibrary.AddEnabledBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AnyValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETLBindingOperator                                 Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTLWidgetBindingLibrary::AddEnabledBinding(class UWidget* Target, int32_t AnyValue, ETLBindingOperator Operator, int32_t SourceValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetBindingLibrary.AddEnabledBinding");
		
		UTLWidgetBindingLibrary_AddEnabledBinding_Params params {};
		params.Target = Target;
		params.AnyValue = AnyValue;
		params.Operator = Operator;
		params.SourceValue = SourceValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetBindingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetBindingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetBindingLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.UseTLFocusable
	 * 		Flags  -> ()
	 */
	bool UTLWidgetFocusableInterface::UseTLFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.UseTLFocusable");
		
		UTLWidgetFocusableInterface_UseTLFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.SetTLWidgetToFocusBP
	 * 		Flags  -> ()
	 */
	void UTLWidgetFocusableInterface::SetTLWidgetToFocusBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.SetTLWidgetToFocusBP");
		
		UTLWidgetFocusableInterface_SetTLWidgetToFocusBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.SetTLSaveLastFocusedChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInEnable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetFocusableInterface::SetTLSaveLastFocusedChild(bool bInEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.SetTLSaveLastFocusedChild");
		
		UTLWidgetFocusableInterface_SetTLSaveLastFocusedChild_Params params {};
		params.bInEnable = bInEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.SetTLFocusableEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInEnable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetFocusableInterface::SetTLFocusableEnable(bool bInEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.SetTLFocusableEnable");
		
		UTLWidgetFocusableInterface_SetTLFocusableEnable_Params params {};
		params.bInEnable = bInEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.SetTLFocus
	 * 		Flags  -> ()
	 */
	void UTLWidgetFocusableInterface::SetTLFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.SetTLFocus");
		
		UTLWidgetFocusableInterface_SetTLFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.IsTLFocusableEnable
	 * 		Flags  -> ()
	 */
	bool UTLWidgetFocusableInterface::IsTLFocusableEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.IsTLFocusableEnable");
		
		UTLWidgetFocusableInterface_IsTLFocusableEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.IsTLFocusable
	 * 		Flags  -> ()
	 */
	bool UTLWidgetFocusableInterface::IsTLFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.IsTLFocusable");
		
		UTLWidgetFocusableInterface_IsTLFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.IsTLFocus
	 * 		Flags  -> ()
	 */
	bool UTLWidgetFocusableInterface::IsTLFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.IsTLFocus");
		
		UTLWidgetFocusableInterface_IsTLFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetFocusableInterface.ClearTLFocus
	 * 		Flags  -> ()
	 */
	void UTLWidgetFocusableInterface::ClearTLFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetFocusableInterface.ClearTLFocus");
		
		UTLWidgetFocusableInterface_ClearTLFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetFocusableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetFocusableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetFocusableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetFocusableManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetFocusableManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetFocusableManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetLanguageChangeHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetLanguageChangeHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetLanguageChangeHandlerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetSwitcher.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLWidgetSwitcher::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetSwitcher.HandleUpdateVisible");
		
		UTLWidgetSwitcher_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetSwitcher.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLWidgetSwitcher::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetSwitcher.HandleUpdateEnabled");
		
		UTLWidgetSwitcher_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetTickableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetTickableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetTickableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetTooltipInterface.GetActionGuideAttachPanel
	 * 		Flags  -> ()
	 */
	class UTLSizeBox* UTLWidgetTooltipInterface::GetActionGuideAttachPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetTooltipInterface.GetActionGuideAttachPanel");
		
		UTLWidgetTooltipInterface_GetActionGuideAttachPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetTooltipInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetTooltipInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetTooltipInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetViewInterface.SetDataContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTLViewModelBase*                            InDataContext                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetViewInterface::SetDataContext(class UTLViewModelBase* InDataContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetViewInterface.SetDataContext");
		
		UTLWidgetViewInterface_SetDataContext_Params params {};
		params.InDataContext = InDataContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetViewInterface.GetDataContext
	 * 		Flags  -> ()
	 */
	class UTLViewModelBase* UTLWidgetViewInterface::GetDataContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetViewInterface.GetDataContext");
		
		UTLWidgetViewInterface_GetDataContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.Toggle
	 * 		Flags  -> ()
	 */
	void UTLWidgetVisibilityInterface::Toggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.Toggle");
		
		UTLWidgetVisibilityInterface_Toggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.ShowWithValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::ShowWithValue(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.ShowWithValue");
		
		UTLWidgetVisibilityInterface_ShowWithValue_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.Show
	 * 		Flags  -> ()
	 */
	void UTLWidgetVisibilityInterface::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.Show");
		
		UTLWidgetVisibilityInterface_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::SetVisible(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.SetVisible");
		
		UTLWidgetVisibilityInterface_SetVisible_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::SetOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.SetOpacity");
		
		UTLWidgetVisibilityInterface_SetOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.SetEnableHitTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::SetEnableHitTest(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.SetEnableHitTest");
		
		UTLWidgetVisibilityInterface_SetEnableHitTest_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.SetCollapsedWhenHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInCollapsedWhenHide                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::SetCollapsedWhenHide(bool bInCollapsedWhenHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.SetCollapsedWhenHide");
		
		UTLWidgetVisibilityInterface_SetCollapsedWhenHide_Params params {};
		params.bInCollapsedWhenHide = bInCollapsedWhenHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.SetApplyDisabledHitTestToChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInApplyDisabledHitTest                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWidgetVisibilityInterface::SetApplyDisabledHitTestToChildren(bool bInApplyDisabledHitTest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.SetApplyDisabledHitTestToChildren");
		
		UTLWidgetVisibilityInterface_SetApplyDisabledHitTestToChildren_Params params {};
		params.bInApplyDisabledHitTest = bInApplyDisabledHitTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.IsShow
	 * 		Flags  -> ()
	 */
	bool UTLWidgetVisibilityInterface::IsShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.IsShow");
		
		UTLWidgetVisibilityInterface_IsShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.Hide
	 * 		Flags  -> ()
	 */
	void UTLWidgetVisibilityInterface::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.Hide");
		
		UTLWidgetVisibilityInterface_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWidgetVisibilityInterface.DisabledHitTestWithAllChildren
	 * 		Flags  -> ()
	 */
	void UTLWidgetVisibilityInterface::DisabledHitTestWithAllChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWidgetVisibilityInterface.DisabledHitTestWithAllChildren");
		
		UTLWidgetVisibilityInterface_DisabledHitTestWithAllChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWidgetVisibilityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWidgetVisibilityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWidgetVisibilityInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWindowTitleBarArea.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLWindowTitleBarArea::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWindowTitleBarArea.HandleUpdateVisible");
		
		UTLWindowTitleBarArea_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWindowTitleBarArea.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLWindowTitleBarArea::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWindowTitleBarArea.HandleUpdateEnabled");
		
		UTLWindowTitleBarArea_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWindowTitleBarArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWindowTitleBarArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWindowTitleBarArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWrapBox.SetWrapSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWrapSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTLWrapBox::SetWrapSize(float InWrapSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWrapBox.SetWrapSize");
		
		UTLWrapBox_SetWrapSize_Params params {};
		params.InWrapSize = InWrapSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWrapBox.HandleUpdateVisible
	 * 		Flags  -> ()
	 */
	void UTLWrapBox::HandleUpdateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWrapBox.HandleUpdateVisible");
		
		UTLWrapBox_HandleUpdateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TLUI.TLWrapBox.HandleUpdateEnabled
	 * 		Flags  -> ()
	 */
	void UTLWrapBox::HandleUpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TLUI.TLWrapBox.HandleUpdateEnabled");
		
		UTLWrapBox_HandleUpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTLWrapBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTLWrapBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TLUI.TLWrapBox");
		return ptr;
	}

}


