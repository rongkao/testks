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
	 * 		Name   -> DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnWebBrowserClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::OnWebBrowserClosed__DelegateSignature(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnWebBrowserClosed__DelegateSignature");
		
		UGenericPlatformNcWebBrowser_OnWebBrowserClosed__DelegateSignature_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnUrlChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnUrlChanged__DelegateSignature");
		
		UGenericPlatformNcWebBrowser_OnUrlChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnBeforePopup__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.GenericPlatformNcWebBrowser.OnBeforePopup__DelegateSignature");
		
		UGenericPlatformNcWebBrowser_OnBeforePopup__DelegateSignature_Params params {};
		params.URL = URL;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnWebBrowserClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::BroadcastOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnWebBrowserClosed");
		
		UGenericPlatformNcWebBrowser_BroadcastOnWebBrowserClosed_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnUrlChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::BroadcastOnUrlChanged(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnUrlChanged");
		
		UGenericPlatformNcWebBrowser_BroadcastOnUrlChanged_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnBeforePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPlatformNcWebBrowser::BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.GenericPlatformNcWebBrowser.BroadcastOnBeforePopup");
		
		UGenericPlatformNcWebBrowser_BroadcastOnBeforePopup_Params params {};
		params.InUrl = InUrl;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericPlatformNcWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPlatformNcWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.GenericPlatformNcWebBrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcModalWidget.OnClickTemplateCloseButton
	 * 		Flags  -> ()
	 */
	void UNcModalWidget::OnClickTemplateCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcModalWidget.OnClickTemplateCloseButton");
		
		UNcModalWidget_OnClickTemplateCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcModalWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcModalWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcModalWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.Show
	 * 		Flags  -> ()
	 */
	void ULoginViaPlayncWidget::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.Show");
		
		ULoginViaPlayncWidget_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.OnTextChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoginViaPlayncWidget::OnTextChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.OnTextChanged");
		
		ULoginViaPlayncWidget_OnTextChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.OnClickLogin
	 * 		Flags  -> ()
	 */
	void ULoginViaPlayncWidget::OnClickLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.OnClickLogin");
		
		ULoginViaPlayncWidget_OnClickLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.OnClickClose
	 * 		Flags  -> ()
	 */
	void ULoginViaPlayncWidget::OnClickClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.OnClickClose");
		
		ULoginViaPlayncWidget_OnClickClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.NativeConstruct
	 * 		Flags  -> ()
	 */
	void ULoginViaPlayncWidget::NativeConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.NativeConstruct");
		
		ULoginViaPlayncWidget_NativeConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.LoginViaPlayncWidget.Hide
	 * 		Flags  -> ()
	 */
	void ULoginViaPlayncWidget::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.LoginViaPlayncWidget.Hide");
		
		ULoginViaPlayncWidget_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginViaPlayncWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginViaPlayncWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.LoginViaPlayncWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAlertWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAlertWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAlertWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAgeSelectWidget.OnClickUnderLineButtonHandler
	 * 		Flags  -> ()
	 */
	void UNcAgeSelectWidget::OnClickUnderLineButtonHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAgeSelectWidget.OnClickUnderLineButtonHandler");
		
		UNcAgeSelectWidget_OnClickUnderLineButtonHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgeSelectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgeSelectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgeSelectWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgsIdentityAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgsIdentityAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgsIdentityAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgsNotificationAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgsNotificationAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgsNotificationAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgsSdkAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgsSdkAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgsSdkAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgsSessionAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgsSessionAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgsSessionAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAgsSettingsAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAgsSettingsAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAgsSettingsAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAlertWithBottomAreaWidget.OnClickBottomButtonHandler
	 * 		Flags  -> ()
	 */
	void UNcAlertWithBottomAreaWidget::OnClickBottomButtonHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAlertWithBottomAreaWidget.OnClickBottomButtonHandler");
		
		UNcAlertWithBottomAreaWidget_OnClickBottomButtonHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAlertWithBottomAreaWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAlertWithBottomAreaWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAlertWithBottomAreaWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAssetLoader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAssetLoader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAssetLoader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAssetReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAssetReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAssetReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcInputTextAlertWidget.RefreshInputText
	 * 		Flags  -> ()
	 */
	void UNcInputTextAlertWidget::RefreshInputText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcInputTextAlertWidget.RefreshInputText");
		
		UNcInputTextAlertWidget_RefreshInputText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcInputTextAlertWidget.OnTextChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcInputTextAlertWidget::OnTextChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcInputTextAlertWidget.OnTextChanged");
		
		UNcInputTextAlertWidget_OnTextChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcInputTextAlertWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcInputTextAlertWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcInputTextAlertWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthenticationNumberInputWidget.UpdateWarningState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsWarning                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcAuthenticationNumberInputWidget::UpdateWarningState(bool bIsWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthenticationNumberInputWidget.UpdateWarningState");
		
		UNcAuthenticationNumberInputWidget_UpdateWarningState_Params params {};
		params.bIsWarning = bIsWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthenticationNumberInputWidget.BroadcastOnClickRetry
	 * 		Flags  -> ()
	 */
	void UNcAuthenticationNumberInputWidget::BroadcastOnClickRetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthenticationNumberInputWidget.BroadcastOnClickRetry");
		
		UNcAuthenticationNumberInputWidget_BroadcastOnClickRetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthenticationNumberInputWidget.BroadcastOnClickManageInfo
	 * 		Flags  -> ()
	 */
	void UNcAuthenticationNumberInputWidget::BroadcastOnClickManageInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthenticationNumberInputWidget.BroadcastOnClickManageInfo");
		
		UNcAuthenticationNumberInputWidget_BroadcastOnClickManageInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAuthenticationNumberInputWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAuthenticationNumberInputWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAuthenticationNumberInputWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickRegisterDevice
	 * 		Flags  -> ()
	 */
	void UNcAuthTypeSelectorWidget::BroadcastOnClickRegisterDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickRegisterDevice");
		
		UNcAuthTypeSelectorWidget_BroadcastOnClickRegisterDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickPurpleAuth
	 * 		Flags  -> ()
	 */
	void UNcAuthTypeSelectorWidget::BroadcastOnClickPurpleAuth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickPurpleAuth");
		
		UNcAuthTypeSelectorWidget_BroadcastOnClickPurpleAuth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickClose
	 * 		Flags  -> ()
	 */
	void UNcAuthTypeSelectorWidget::BroadcastOnClickClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcAuthTypeSelectorWidget.BroadcastOnClickClose");
		
		UNcAuthTypeSelectorWidget_BroadcastOnClickClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcAuthTypeSelectorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcAuthTypeSelectorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcAuthTypeSelectorWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBackupAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBackupAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBackupAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBaseAnimationDialogWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBaseAnimationDialogWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBaseAnimationDialogWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Background.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Background::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Background");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Box.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Box::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Box");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Line1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Line1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Line1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Line2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Line2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Line2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_PointText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_PointText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_PointText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Text1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Text1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Text1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcBorder_Text2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcBorder_Text2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcBorder_Text2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButtonInfoBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButtonInfoBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButtonInfoBarWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButtonInfoSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButtonInfoSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButtonInfoSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButton_Button1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButton_Button1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButton_Button1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButton_Button2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButton_Button2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButton_Button2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcButton_Button3.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcButton_Button3::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcButton_Button3");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCampaignAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCampaignAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCampaignAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCheckBox.BroadcastCheckStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcCheckBox::BroadcastCheckStateChanged(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCheckBox.BroadcastCheckStateChanged");
		
		UNcCheckBox_BroadcastCheckStateChanged_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCheckBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCheckBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCoinPaymentAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCoinPaymentAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCoinPaymentAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcConfigurationAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcConfigurationAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcConfigurationAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcConsoleAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcConsoleAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcConsoleAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.SetSelectedOptionToInitialCountry
	 * 		Flags  -> ()
	 */
	void UNcCountrySelectWidget::SetSelectedOptionToInitialCountry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.SetSelectedOptionToInitialCountry");
		
		UNcCountrySelectWidget_SetSelectedOptionToInitialCountry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.SetInitialCountry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CountryCode                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcCountrySelectWidget::SetInitialCountry(const class FString& CountryCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.SetInitialCountry");
		
		UNcCountrySelectWidget_SetInitialCountry_Params params {};
		params.CountryCode = CountryCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.OnCountrySelectChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcCountrySelectWidget::OnCountrySelectChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.OnCountrySelectChanged");
		
		UNcCountrySelectWidget_OnCountrySelectChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.LockSelection
	 * 		Flags  -> ()
	 */
	void UNcCountrySelectWidget::LockSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.LockSelection");
		
		UNcCountrySelectWidget_LockSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.GetSelectedCountry
	 * 		Flags  -> ()
	 */
	class FString UNcCountrySelectWidget::GetSelectedCountry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.GetSelectedCountry");
		
		UNcCountrySelectWidget_GetSelectedCountry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcCountrySelectWidget.AddCountry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CountryCode                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EnglishName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcCountrySelectWidget::AddCountry(const class FString& CountryCode, const class FString& EnglishName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcCountrySelectWidget.AddCountry");
		
		UNcCountrySelectWidget_AddCountry_Params params {};
		params.CountryCode = CountryCode;
		params.EnglishName = EnglishName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCountrySelectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCountrySelectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCountrySelectWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCouponAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCouponAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCouponAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcCustomButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcCustomButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcCustomButtonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcDailyStampAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcDailyStampAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcDailyStampAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcDeviceListSlotWidget.BroadcastOnClickDelete
	 * 		Flags  -> ()
	 */
	void UNcDeviceListSlotWidget::BroadcastOnClickDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcDeviceListSlotWidget.BroadcastOnClickDelete");
		
		UNcDeviceListSlotWidget_BroadcastOnClickDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcDeviceListSlotWidget.BroadcastOnClickChangeName
	 * 		Flags  -> ()
	 */
	void UNcDeviceListSlotWidget::BroadcastOnClickChangeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcDeviceListSlotWidget.BroadcastOnClickChangeName");
		
		UNcDeviceListSlotWidget_BroadcastOnClickChangeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcDeviceListSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcDeviceListSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcDeviceListSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcDeviceListWidget.BroadcastOnClickChangePhoneNumberButton
	 * 		Flags  -> ()
	 */
	void UNcDeviceListWidget::BroadcastOnClickChangePhoneNumberButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcDeviceListWidget.BroadcastOnClickChangePhoneNumberButton");
		
		UNcDeviceListWidget_BroadcastOnClickChangePhoneNumberButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcDeviceListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcDeviceListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcDeviceListWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcDimmedWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcDimmedWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcDimmedWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcExtraAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcExtraAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcExtraAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::Show(int32_t InZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.Show");
		
		UNcGeneralWebViewWidget_Show_Params params {};
		params.InZOrder = InZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.SetSupportsTransparency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSupportsTransparency                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::SetSupportsTransparency(bool InSupportsTransparency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.SetSupportsTransparency");
		
		UNcGeneralWebViewWidget_SetSupportsTransparency_Params params {};
		params.InSupportsTransparency = InSupportsTransparency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.LoadURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::LoadURL(const class FString& InUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.LoadURL");
		
		UNcGeneralWebViewWidget_LoadURL_Params params {};
		params.InUrl = InUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.HandleOnWebBrowserClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::HandleOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.HandleOnWebBrowserClosed");
		
		UNcGeneralWebViewWidget_HandleOnWebBrowserClosed_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.GetUrl
	 * 		Flags  -> ()
	 */
	class FString UNcGeneralWebViewWidget::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.GetUrl");
		
		UNcGeneralWebViewWidget_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.ExecuteJavascript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JavascriptExp                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::ExecuteJavascript(const class FString& JavascriptExp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.ExecuteJavascript");
		
		UNcGeneralWebViewWidget_ExecuteJavascript_Params params {};
		params.JavascriptExp = JavascriptExp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnUrlChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::BroadcastOnUrlChanged(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnUrlChanged");
		
		UNcGeneralWebViewWidget_BroadcastOnUrlChanged_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnClickClose
	 * 		Flags  -> ()
	 */
	void UNcGeneralWebViewWidget::BroadcastOnClickClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnClickClose");
		
		UNcGeneralWebViewWidget_BroadcastOnClickClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnBeforePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcGeneralWebViewWidget::BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcGeneralWebViewWidget.BroadcastOnBeforePopup");
		
		UNcGeneralWebViewWidget_BroadcastOnBeforePopup_Params params {};
		params.InUrl = InUrl;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGeneralWebViewWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGeneralWebViewWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGeneralWebViewWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGoogleAchievementAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGoogleAchievementAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGoogleAchievementAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGoogleAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGoogleAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGoogleAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGoogleLeaderboardAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGoogleLeaderboardAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGoogleLeaderboardAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGoogleRewardAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGoogleRewardAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGoogleRewardAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcGoogleSdkAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcGoogleSdkAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcGoogleSdkAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcInputPhoneNumberWidget.OnPhoneNumberInputTextChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcInputPhoneNumberWidget::OnPhoneNumberInputTextChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcInputPhoneNumberWidget.OnPhoneNumberInputTextChanged");
		
		UNcInputPhoneNumberWidget_OnPhoneNumberInputTextChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcInputPhoneNumberWidget.OnCountryComboBoxChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcInputPhoneNumberWidget::OnCountryComboBoxChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcInputPhoneNumberWidget.OnCountryComboBoxChanged");
		
		UNcInputPhoneNumberWidget_OnCountryComboBoxChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcInputPhoneNumberWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcInputPhoneNumberWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcInputPhoneNumberWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcLoggerAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcLoggerAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcLoggerAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcNlpAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcNlpAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcNlpAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcOneStoreAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcOneStoreAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcOneStoreAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcOneStorePaymentV2API.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcOneStorePaymentV2API::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcOneStorePaymentV2API");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcPaymentAccountCheckWidget.OnClickRetryButtonHandler
	 * 		Flags  -> ()
	 */
	void UNcPaymentAccountCheckWidget::OnClickRetryButtonHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcPaymentAccountCheckWidget.OnClickRetryButtonHandler");
		
		UNcPaymentAccountCheckWidget_OnClickRetryButtonHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPaymentAccountCheckWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPaymentAccountCheckWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPaymentAccountCheckWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPaymentV2API.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPaymentV2API::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPaymentV2API");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPlatformOverlayAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPlatformOverlayAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPlatformOverlayAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPlatformSdkAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPlatformSdkAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPlatformSdkAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPlatformSdkBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPlatformSdkBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPlatformSdkBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickResend
	 * 		Flags  -> ()
	 */
	void UNcPurpleAuthenticatorWidget::BroadcastOnClickResend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickResend");
		
		UNcPurpleAuthenticatorWidget_BroadcastOnClickResend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickGooglePlay
	 * 		Flags  -> ()
	 */
	void UNcPurpleAuthenticatorWidget::BroadcastOnClickGooglePlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickGooglePlay");
		
		UNcPurpleAuthenticatorWidget_BroadcastOnClickGooglePlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickClose
	 * 		Flags  -> ()
	 */
	void UNcPurpleAuthenticatorWidget::BroadcastOnClickClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickClose");
		
		UNcPurpleAuthenticatorWidget_BroadcastOnClickClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickAppleStore
	 * 		Flags  -> ()
	 */
	void UNcPurpleAuthenticatorWidget::BroadcastOnClickAppleStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcPurpleAuthenticatorWidget.BroadcastOnClickAppleStore");
		
		UNcPurpleAuthenticatorWidget_BroadcastOnClickAppleStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPurpleAuthenticatorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPurpleAuthenticatorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPurpleAuthenticatorWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcPushAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcPushAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcPushAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcReportAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcReportAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcReportAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlockDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlockDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlock_Text1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlock_Text1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlock_Text1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlock_Text2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlock_Text2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlock_Text2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlock_ButtonText1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlock_ButtonText1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlock_ButtonText1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcRichTextBlock_PointText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcRichTextBlock_PointText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcRichTextBlock_PointText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcSamsungPaymentAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcSamsungPaymentAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcSamsungPaymentAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcScvAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcScvAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcScvAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcSecondaryAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcSecondaryAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcSecondaryAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShopAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShopAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShopAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowAbnormalRefundSlotWidget.BroadcastOnClickPurchaseButton
	 * 		Flags  -> ()
	 */
	void UNcShowAbnormalRefundSlotWidget::BroadcastOnClickPurchaseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowAbnormalRefundSlotWidget.BroadcastOnClickPurchaseButton");
		
		UNcShowAbnormalRefundSlotWidget_BroadcastOnClickPurchaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowAbnormalRefundSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowAbnormalRefundSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowAbnormalRefundSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowAbnormalRefundWidget.BroadcastOnClickContactButton
	 * 		Flags  -> ()
	 */
	void UNcShowAbnormalRefundWidget::BroadcastOnClickContactButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowAbnormalRefundWidget.BroadcastOnClickContactButton");
		
		UNcShowAbnormalRefundWidget_BroadcastOnClickContactButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowAbnormalRefundWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowAbnormalRefundWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowAbnormalRefundWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowAgreementSlotWidget.ToggleCheckBoxState
	 * 		Flags  -> ()
	 */
	void UNcShowAgreementSlotWidget::ToggleCheckBoxState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowAgreementSlotWidget.ToggleCheckBoxState");
		
		UNcShowAgreementSlotWidget_ToggleCheckBoxState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowAgreementSlotWidget.BroadcastOnClickDetailLink
	 * 		Flags  -> ()
	 */
	void UNcShowAgreementSlotWidget::BroadcastOnClickDetailLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowAgreementSlotWidget.BroadcastOnClickDetailLink");
		
		UNcShowAgreementSlotWidget_BroadcastOnClickDetailLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowAgreementSlotWidget.BroadcastOnCheckStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcShowAgreementSlotWidget::BroadcastOnCheckStateChanged(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowAgreementSlotWidget.BroadcastOnCheckStateChanged");
		
		UNcShowAgreementSlotWidget_BroadcastOnCheckStateChanged_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowAgreementSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowAgreementSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowAgreementSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowAgreementWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowAgreementWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowAgreementWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.SetTemplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TemplateType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExceptTitleString                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcShowCampaignWidget::SetTemplete(int32_t TemplateType, const class FString& TitleString, const class FString& ExceptTitleString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.SetTemplete");
		
		UNcShowCampaignWidget_SetTemplete_Params params {};
		params.TemplateType = TemplateType;
		params.TitleString = TitleString;
		params.ExceptTitleString = ExceptTitleString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnUnhoveredExceptCheckButton
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::OnUnhoveredExceptCheckButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnUnhoveredExceptCheckButton");
		
		UNcShowCampaignWidget_OnUnhoveredExceptCheckButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnReleasedExceptCheckButton
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::OnReleasedExceptCheckButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnReleasedExceptCheckButton");
		
		UNcShowCampaignWidget_OnReleasedExceptCheckButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnPressedExceptCheckButton
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::OnPressedExceptCheckButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnPressedExceptCheckButton");
		
		UNcShowCampaignWidget_OnPressedExceptCheckButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnInputEnabled
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::OnInputEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnInputEnabled");
		
		UNcShowCampaignWidget_OnInputEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnImageClickAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UNcShowCampaignWidget::OnImageClickAction(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnImageClickAction");
		
		UNcShowCampaignWidget_OnImageClickAction_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.OnHoveredExceptCheckButton
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::OnHoveredExceptCheckButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.OnHoveredExceptCheckButton");
		
		UNcShowCampaignWidget_OnHoveredExceptCheckButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.LoadCampaignImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImageUrl                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcShowCampaignWidget::LoadCampaignImage(const class FString& ImageUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.LoadCampaignImage");
		
		UNcShowCampaignWidget_LoadCampaignImage_Params params {};
		params.ImageUrl = ImageUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.GetVisibleStartTime
	 * 		Flags  -> ()
	 */
	struct FDateTime UNcShowCampaignWidget::GetVisibleStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.GetVisibleStartTime");
		
		UNcShowCampaignWidget_GetVisibleStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.BroadcastOnClickExceptCheck
	 * 		Flags  -> ()
	 */
	void UNcShowCampaignWidget::BroadcastOnClickExceptCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.BroadcastOnClickExceptCheck");
		
		UNcShowCampaignWidget_BroadcastOnClickExceptCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowCampaignWidget.BroadcastOnCampaignWebBrowserClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcShowCampaignWidget::BroadcastOnCampaignWebBrowserClosed(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowCampaignWidget.BroadcastOnCampaignWebBrowserClosed");
		
		UNcShowCampaignWidget_BroadcastOnCampaignWebBrowserClosed_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowCampaignWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowCampaignWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowCampaignWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginProviderCircleWidget.SetProviderImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InImage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcShowLoginProviderCircleWidget::SetProviderImage(class UTexture2D* InImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginProviderCircleWidget.SetProviderImage");
		
		UNcShowLoginProviderCircleWidget_SetProviderImage_Params params {};
		params.InImage = InImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginProviderCircleWidget.BroadcastOnClickProvider
	 * 		Flags  -> ()
	 */
	void UNcShowLoginProviderCircleWidget::BroadcastOnClickProvider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginProviderCircleWidget.BroadcastOnClickProvider");
		
		UNcShowLoginProviderCircleWidget_BroadcastOnClickProvider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowLoginProviderCircleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowLoginProviderCircleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowLoginProviderCircleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginProviderSquareWidget.SetProviderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcShowLoginProviderSquareWidget::SetProviderText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginProviderSquareWidget.SetProviderText");
		
		UNcShowLoginProviderSquareWidget_SetProviderText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginProviderSquareWidget.RefreshTextLayout
	 * 		Flags  -> ()
	 */
	void UNcShowLoginProviderSquareWidget::RefreshTextLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginProviderSquareWidget.RefreshTextLayout");
		
		UNcShowLoginProviderSquareWidget_RefreshTextLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginProviderSquareWidget.BroadcastOnClickProvider
	 * 		Flags  -> ()
	 */
	void UNcShowLoginProviderSquareWidget::BroadcastOnClickProvider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginProviderSquareWidget.BroadcastOnClickProvider");
		
		UNcShowLoginProviderSquareWidget_BroadcastOnClickProvider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowLoginProviderSquareWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowLoginProviderSquareWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowLoginProviderSquareWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.OnUnhoveredCountryButton
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::OnUnhoveredCountryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.OnUnhoveredCountryButton");
		
		UNcShowLoginWidget_OnUnhoveredCountryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.OnReleasedCountryButton
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::OnReleasedCountryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.OnReleasedCountryButton");
		
		UNcShowLoginWidget_OnReleasedCountryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.OnPressedCountryButton
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::OnPressedCountryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.OnPressedCountryButton");
		
		UNcShowLoginWidget_OnPressedCountryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.OnHoveredCountryButton
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::OnHoveredCountryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.OnHoveredCountryButton");
		
		UNcShowLoginWidget_OnHoveredCountryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.OnClickedCountryButton
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::OnClickedCountryButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.OnClickedCountryButton");
		
		UNcShowLoginWidget_OnClickedCountryButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcShowLoginWidget.BroadcastOnClickClose
	 * 		Flags  -> ()
	 */
	void UNcShowLoginWidget::BroadcastOnClickClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcShowLoginWidget.BroadcastOnClickClose");
		
		UNcShowLoginWidget_BroadcastOnClickClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcShowLoginWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcShowLoginWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcShowLoginWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcSimpleLoginSlotWidget.OnReleasedMemo
	 * 		Flags  -> ()
	 */
	void UNcSimpleLoginSlotWidget::OnReleasedMemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcSimpleLoginSlotWidget.OnReleasedMemo");
		
		UNcSimpleLoginSlotWidget_OnReleasedMemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcSimpleLoginSlotWidget.OnPressedMemo
	 * 		Flags  -> ()
	 */
	void UNcSimpleLoginSlotWidget::OnPressedMemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcSimpleLoginSlotWidget.OnPressedMemo");
		
		UNcSimpleLoginSlotWidget_OnPressedMemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickSlot
	 * 		Flags  -> ()
	 */
	void UNcSimpleLoginSlotWidget::BroadcastOnClickSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickSlot");
		
		UNcSimpleLoginSlotWidget_BroadcastOnClickSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickMemo
	 * 		Flags  -> ()
	 */
	void UNcSimpleLoginSlotWidget::BroadcastOnClickMemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickMemo");
		
		UNcSimpleLoginSlotWidget_BroadcastOnClickMemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickDelete
	 * 		Flags  -> ()
	 */
	void UNcSimpleLoginSlotWidget::BroadcastOnClickDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcSimpleLoginSlotWidget.BroadcastOnClickDelete");
		
		UNcSimpleLoginSlotWidget_BroadcastOnClickDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcSimpleLoginSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcSimpleLoginSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcSimpleLoginSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcSimpleLoginWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcSimpleLoginWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcSimpleLoginWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcStorageAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcStorageAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcStorageAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcToastPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcToastPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcToastPopupWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcTouchBlockerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcTouchBlockerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcTouchBlockerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcTwoFactorAuthAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcTwoFactorAuthAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcTwoFactorAuthAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcUserAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcUserAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcUserAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcUtilAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcUtilAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcUtilAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcWatermarkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcWatermarkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcWatermarkWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.SetExtraParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::SetExtraParams(TMap<class FString, class FString> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.SetExtraParams");
		
		UNcWebBrowser_SetExtraParams_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NcPlatformSdk.NcWebBrowser.OnWebBrowserClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::OnWebBrowserClosed__DelegateSignature(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.NcWebBrowser.OnWebBrowserClosed__DelegateSignature");
		
		UNcWebBrowser_OnWebBrowserClosed__DelegateSignature_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NcPlatformSdk.NcWebBrowser.OnUrlChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.NcWebBrowser.OnUrlChanged__DelegateSignature");
		
		UNcWebBrowser_OnUrlChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NcPlatformSdk.NcWebBrowser.OnBeforePopup__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NcPlatformSdk.NcWebBrowser.OnBeforePopup__DelegateSignature");
		
		UNcWebBrowser_OnBeforePopup__DelegateSignature_Params params {};
		params.URL = URL;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.LoadURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::LoadURL(const class FString& InUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.LoadURL");
		
		UNcWebBrowser_LoadURL_Params params {};
		params.InUrl = InUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.ExecuteJavascript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JavascriptExp                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::ExecuteJavascript(const class FString& JavascriptExp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.ExecuteJavascript");
		
		UNcWebBrowser_ExecuteJavascript_Params params {};
		params.JavascriptExp = JavascriptExp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.BroadcastOnWebBrowserClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::BroadcastOnWebBrowserClosed(bool HasError, const class FString& ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.BroadcastOnWebBrowserClosed");
		
		UNcWebBrowser_BroadcastOnWebBrowserClosed_Params params {};
		params.HasError = HasError;
		params.ErrorMsg = ErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.BroadcastOnUrlChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::BroadcastOnUrlChanged(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.BroadcastOnUrlChanged");
		
		UNcWebBrowser_BroadcastOnUrlChanged_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWebBrowser.BroadcastOnBeforePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNcWebBrowser::BroadcastOnBeforePopup(const class FString& InUrl, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWebBrowser.BroadcastOnBeforePopup");
		
		UNcWebBrowser_BroadcastOnBeforePopup_Params params {};
		params.InUrl = InUrl;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcWebBrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWidget_Template.OnClickedCustomButton
	 * 		Flags  -> ()
	 */
	void UNcWidget_Template::OnClickedCustomButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWidget_Template.OnClickedCustomButton");
		
		UNcWidget_Template_OnClickedCustomButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWidget_Template.OnClickedConfirmButton
	 * 		Flags  -> ()
	 */
	void UNcWidget_Template::OnClickedConfirmButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWidget_Template.OnClickedConfirmButton");
		
		UNcWidget_Template_OnClickedConfirmButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWidget_Template.OnClickedCancelButton
	 * 		Flags  -> ()
	 */
	void UNcWidget_Template::OnClickedCancelButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWidget_Template.OnClickedCancelButton");
		
		UNcWidget_Template_OnClickedCancelButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWidget_Template.OnClickCloseButton
	 * 		Flags  -> ()
	 */
	void UNcWidget_Template::OnClickCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWidget_Template.OnClickCloseButton");
		
		UNcWidget_Template_OnClickCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcWidget_Template.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcWidget_Template::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcWidget_Template");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NcPlatformSdk.NcWidgetCreater.GetPlayerController
	 * 		Flags  -> ()
	 */
	class APlayerController* UNcWidgetCreater::GetPlayerController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NcPlatformSdk.NcWidgetCreater.GetPlayerController");
		
		UNcWidgetCreater_GetPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNcWidgetCreater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNcWidgetCreater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.NcWidgetCreater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USdkDataJsonSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USdkDataJsonSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.SdkDataJsonSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDKSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDKSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.SDKSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_Text1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_Text1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_Text1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_Text2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_Text2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_Text2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_ButtonText1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_ButtonText1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_ButtonText1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_PointText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_PointText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_PointText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_TextHovered.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_TextHovered::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_TextHovered");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock_ErrorText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock_ErrorText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.TextBlock_ErrorText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindowsNcWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowsNcWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NcPlatformSdk.WindowsNcWebBrowser");
		return ptr;
	}

}


