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
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.Shutdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bError                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipeline::Shutdown(bool bError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.Shutdown");
		
		UMoviePipeline_Shutdown_Params params {};
		params.bError = bError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipeline::RequestShutdown(bool bIsError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown");
		
		UMoviePipeline_RequestShutdown_Params params {};
		params.bIsError = bIsError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	 * 		Flags  -> ()
	 */
	void UMoviePipeline::OnMoviePipelineFinishedImpl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl");
		
		UMoviePipeline_OnMoviePipelineFinishedImpl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	 * 		Flags  -> ()
	 */
	bool UMoviePipeline::IsShutdownRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested");
		
		UMoviePipeline_IsShutdownRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineExecutorJob*                   InJob                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipeline::Initialize(class UMoviePipelineExecutorJob* InJob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.Initialize");
		
		UMoviePipeline_Initialize_Params params {};
		params.InJob = InJob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	 * 		Flags  -> ()
	 */
	class UTexture* UMoviePipeline::GetPreviewTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture");
		
		UMoviePipeline_GetPreviewTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	 * 		Flags  -> ()
	 */
	class UMoviePipelineMasterConfig* UMoviePipeline::GetPipelineMasterConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig");
		
		UMoviePipeline_GetPipelineMasterConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOutUnrealURLParams                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOutCommandLineArgs                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineSetting::BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, class FString* InOutCommandLineArgs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine");
		
		UMoviePipelineSetting_BuildNewProcessCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutUnrealURLParams != nullptr)
			*InOutUnrealURLParams = params.InOutUnrealURLParams;
		if (InOutCommandLineArgs != nullptr)
			*InOutCommandLineArgs = params.InOutCommandLineArgs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineAntiAliasingSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineAntiAliasingSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMoviePipelineExecutorJob*                   InJob                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShotsChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence");
		
		UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params params {};
		params.InSequence = InSequence;
		params.InJob = InJob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShotsChanged != nullptr)
			*bShotsChanged = params.bShotsChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMoviePipelineFilenameResolveParams         InParams                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UMoviePipelineBlueprintLibrary::ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber");
		
		UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params params {};
		params.InParams = InParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InFormatString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMoviePipelineFilenameResolveParams         InParams                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutFinalPath                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMoviePipelineFormatArgs                    OutMergedFormatArgs                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(const class FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments");
		
		UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params params {};
		params.InFormatString = InFormatString;
		params.InParams = InParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFinalPath != nullptr)
			*OutFinalPath = params.OutFinalPath;
		if (OutMergedFormatArgs != nullptr)
			*OutMergedFormatArgs = params.OutMergedFormatArgs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InPipeline                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(class UMoviePipeline* InPipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState");
		
		UMoviePipelineBlueprintLibrary_GetPipelineState_Params params {};
		params.InPipeline = InPipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutCurrentIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutTotalCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts");
		
		UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCurrentIndex != nullptr)
			*OutCurrentIndex = params.OutCurrentIndex;
		if (OutTotalCount != nullptr)
			*OutTotalCount = params.OutTotalCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutCurrentIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutTotalCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames");
		
		UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCurrentIndex != nullptr)
			*OutCurrentIndex = params.OutCurrentIndex;
		if (OutTotalCount != nullptr)
			*OutTotalCount = params.OutTotalCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode");
		
		UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber");
		
		UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineExecutorJob*                   InJob                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMoviePipelineBlueprintLibrary::GetMapPackageName(class UMoviePipelineExecutorJob* InJob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName");
		
		UMoviePipelineBlueprintLibrary_GetMapPackageName_Params params {};
		params.InJob = InJob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMoviePipelineBlueprintLibrary::GetJobName(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName");
		
		UMoviePipelineBlueprintLibrary_GetJobName_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime");
		
		UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMoviePipelineBlueprintLibrary::GetJobAuthor(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor");
		
		UMoviePipelineBlueprintLibrary_GetJobAuthor_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InPipeline                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimespan                                   OutEstimate                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining");
		
		UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params params {};
		params.InPipeline = InPipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEstimate != nullptr)
			*OutEstimate = params.OutEstimate;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineMasterConfig*                  InMasterConfig                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMoviePipelineExecutorShot*                  InPipelineExecutorShot                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution");
		
		UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params params {};
		params.InMasterConfig = InMasterConfig;
		params.InPipelineExecutorShot = InPipelineExecutorShot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode");
		
		UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber");
		
		UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics");
		
		UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState");
		
		UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        OutOuterName                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        OutInnerName                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName");
		
		UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOuterName != nullptr)
			*OutOuterName = params.OutOuterName;
		if (OutInnerName != nullptr)
			*OutInnerName = params.OutInnerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance");
		
		UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength");
		
		UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InMoviePipeline                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMoviePipelineBlueprintLibrary::GetCurrentAperture(class UMoviePipeline* InMoviePipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture");
		
		UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params params {};
		params.InMoviePipeline = InMoviePipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              InPipeline                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(class UMoviePipeline* InPipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage");
		
		UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params params {};
		params.InPipeline = InPipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InSettingType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMoviePipelineMasterConfig*                  InMasterConfig                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMoviePipelineExecutorShot*                  InShot                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot");
		
		UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params params {};
		params.InSettingType = InSettingType;
		params.InMasterConfig = InMasterConfig;
		params.InShot = InShot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence");
		
		UMoviePipelineBlueprintLibrary_DuplicateSequence_Params params {};
		params.Outer = Outer;
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineCameraSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineCameraSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineCameraSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineColorSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineColorSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineColorSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineCommandLineEncoder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineCommandLineEncoder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineCommandLineEncoderSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineCommandLineEncoderSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineSetting*                       InSetting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineConfigBase::RemoveSetting(class UMoviePipelineSetting* InSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting");
		
		UMoviePipelineConfigBase_RemoveSetting_Params params {};
		params.InSetting = InSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	 * 		Flags  -> ()
	 */
	TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings");
		
		UMoviePipelineConfigBase_GetUserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabledSettings                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass");
		
		UMoviePipelineConfigBase_FindSettingsByClass_Params params {};
		params.InClass = InClass;
		params.bIncludeDisabledSettings = bIncludeDisabledSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabledSettings                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass");
		
		UMoviePipelineConfigBase_FindSettingByClass_Params params {};
		params.InClass = InClass;
		params.bIncludeDisabledSettings = bIncludeDisabledSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabledSettings                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass");
		
		UMoviePipelineConfigBase_FindOrAddSettingByClass_Params params {};
		params.InClass = InClass;
		params.bIncludeDisabledSettings = bIncludeDisabledSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineConfigBase*                    InConfig                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineConfigBase::CopyFrom(class UMoviePipelineConfigBase* InConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom");
		
		UMoviePipelineConfigBase_CopyFrom_Params params {};
		params.InConfig = InConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineConfigBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineConfigBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineConfigBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineDebugSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDebugSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineDebugSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress");
		
		UMoviePipelineExecutorBase_SetStatusProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStatus                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorBase::SetStatusMessage(const class FString& InStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage");
		
		UMoviePipelineExecutorBase_SetStatusMessage_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InPipelineClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorBase::SetMoviePipelineClass(class UClass* InPipelineClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass");
		
		UMoviePipelineExecutorBase_SetMoviePipelineClass_Params params {};
		params.InPipelineClass = InPipelineClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMessage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMoviePipelineExecutorBase::SendSocketMessage(const class FString& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage");
		
		UMoviePipelineExecutorBase_SendSocketMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InVerb                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMessage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 InHeaders                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UMoviePipelineExecutorBase::SendHTTPRequest(const class FString& InUrl, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString> InHeaders)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest");
		
		UMoviePipelineExecutorBase_SendHTTPRequest_Params params {};
		params.InUrl = InUrl;
		params.InVerb = InVerb;
		params.InMessage = InMessage;
		params.InHeaders = InHeaders;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorBase::OnExecutorFinishedImpl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl");
		
		UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              ErroredPipeline                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFatal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        ErrorReason                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorBase::OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, const class FText& ErrorReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl");
		
		UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params params {};
		params.ErroredPipeline = ErroredPipeline;
		params.bFatal = bFatal;
		params.ErrorReason = ErrorReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorBase::OnBeginFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame");
		
		UMoviePipelineExecutorBase_OnBeginFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	 * 		Flags  -> ()
	 */
	bool UMoviePipelineExecutorBase::IsSocketConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected");
		
		UMoviePipelineExecutorBase_IsSocketConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	 * 		Flags  -> ()
	 */
	bool UMoviePipelineExecutorBase::IsRendering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering");
		
		UMoviePipelineExecutorBase_IsRendering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	 * 		Flags  -> ()
	 */
	float UMoviePipelineExecutorBase::GetStatusProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress");
		
		UMoviePipelineExecutorBase_GetStatusProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	 * 		Flags  -> ()
	 */
	class FString UMoviePipelineExecutorBase::GetStatusMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage");
		
		UMoviePipelineExecutorBase_GetStatusMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineQueue*                         InPipelineQueue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorBase::Execute(class UMoviePipelineQueue* InPipelineQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute");
		
		UMoviePipelineExecutorBase_Execute_Params params {};
		params.InPipelineQueue = InPipelineQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorBase::DisconnectSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket");
		
		UMoviePipelineExecutorBase_DisconnectSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InHostName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InPort                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMoviePipelineExecutorBase::ConnectSocket(const class FString& InHostName, int32_t InPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket");
		
		UMoviePipelineExecutorBase_ConnectSocket_Params params {};
		params.InHostName = InHostName;
		params.InPort = InPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorBase::CancelCurrentJob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob");
		
		UMoviePipelineExecutorBase_CancelCurrentJob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorBase::CancelAllJobs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs");
		
		UMoviePipelineExecutorBase_CancelAllJobs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineExecutorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineExecutorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineExecutorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineOutputBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineOutputBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineOutputBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineFCPXMLExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineFCPXMLExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoviePipelineGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoviePipelineGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineGameOverrideSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineGameOverrideSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineHighResSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineHighResSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineHighResSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineLinearExecutorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineLinearExecutorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineInProcessExecutor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineInProcessExecutor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineInProcessExecutorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineInProcessExecutorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
	 * 		Flags  -> ()
	 */
	void UMoviePipelineMasterConfig::InitializeTransientSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings");
		
		UMoviePipelineMasterConfig_InitializeTransientSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
	 * 		Flags  -> ()
	 */
	TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings");
		
		UMoviePipelineMasterConfig_GetTransientSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              InSequence                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(class ULevelSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate");
		
		UMoviePipelineMasterConfig_GetEffectiveFrameRate_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIncludeDisabledSettings                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeTransientSettings                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings");
		
		UMoviePipelineMasterConfig_GetAllSettings_Params params {};
		params.bIncludeDisabledSettings = bIncludeDisabledSettings;
		params.bIncludeTransientSettings = bIncludeTransientSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineMasterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineMasterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineMasterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineOutputSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineOutputSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineOutputSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelinePythonHostExecutor::OnMapLoad(class UWorld* InWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad");
		
		UMoviePipelinePythonHostExecutor_OnMapLoad_Params params {};
		params.InWorld = InWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	 * 		Flags  -> ()
	 */
	class UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld");
		
		UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineQueue*                         InPipelineQueue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelinePythonHostExecutor::ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed");
		
		UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params params {};
		params.InPipelineQueue = InPipelineQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelinePythonHostExecutor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelinePythonHostExecutor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	 * 		Flags  -> ()
	 */
	bool UMoviePipelineExecutorShot::ShouldRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender");
		
		UMoviePipelineExecutorShot_ShouldRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress");
		
		UMoviePipelineExecutorShot_SetStatusProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStatus                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorShot::SetStatusMessage(const class FString& InStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage");
		
		UMoviePipelineExecutorShot_SetStatusMessage_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineShotConfig*                    InPreset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin");
		
		UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params params {};
		params.InPreset = InPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineShotConfig*                    InPreset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration");
		
		UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params params {};
		params.InPreset = InPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	 * 		Flags  -> ()
	 */
	float UMoviePipelineExecutorShot::GetStatusProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress");
		
		UMoviePipelineExecutorShot_GetStatusProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	 * 		Flags  -> ()
	 */
	class FString UMoviePipelineExecutorShot::GetStatusMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage");
		
		UMoviePipelineExecutorShot_GetStatusMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	 * 		Flags  -> ()
	 */
	class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin");
		
		UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	 * 		Flags  -> ()
	 */
	class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration");
		
		UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InConfigType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(class UClass* InConfigType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig");
		
		UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params params {};
		params.InConfigType = InConfigType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineExecutorShot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineExecutorShot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineExecutorShot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress");
		
		UMoviePipelineExecutorJob_SetStatusProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStatus                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetStatusMessage(const class FString& InStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage");
		
		UMoviePipelineExecutorJob_SetStatusMessage_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             InSequence                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetSequence(const struct FSoftObjectPath& InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence");
		
		UMoviePipelineExecutorJob_SetSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineMasterConfig*                  InPreset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin");
		
		UMoviePipelineExecutorJob_SetPresetOrigin_Params params {};
		params.InPreset = InPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInConsumed                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed");
		
		UMoviePipelineExecutorJob_SetConsumed_Params params {};
		params.bInConsumed = bInConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineMasterConfig*                  InPreset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineExecutorJob::SetConfiguration(class UMoviePipelineMasterConfig* InPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration");
		
		UMoviePipelineExecutorJob_SetConfiguration_Params params {};
		params.InPreset = InPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	 * 		Flags  -> ()
	 */
	void UMoviePipelineExecutorJob::OnDuplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated");
		
		UMoviePipelineExecutorJob_OnDuplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	 * 		Flags  -> ()
	 */
	bool UMoviePipelineExecutorJob::IsConsumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed");
		
		UMoviePipelineExecutorJob_IsConsumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	 * 		Flags  -> ()
	 */
	float UMoviePipelineExecutorJob::GetStatusProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress");
		
		UMoviePipelineExecutorJob_GetStatusProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	 * 		Flags  -> ()
	 */
	class FString UMoviePipelineExecutorJob::GetStatusMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage");
		
		UMoviePipelineExecutorJob_GetStatusMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	 * 		Flags  -> ()
	 */
	class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin");
		
		UMoviePipelineExecutorJob_GetPresetOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	 * 		Flags  -> ()
	 */
	class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration");
		
		UMoviePipelineExecutorJob_GetConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineExecutorJob.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineExecutorJob::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineExecutorJob");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	 * 		Flags  -> ()
	 */
	TArray<class UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs");
		
		UMoviePipelineQueue_GetJobs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineExecutorJob*                   InJob                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(class UMoviePipelineExecutorJob* InJob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob");
		
		UMoviePipelineQueue_DuplicateJob_Params params {};
		params.InJob = InJob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineExecutorJob*                   InJob                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineQueue::DeleteJob(class UMoviePipelineExecutorJob* InJob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob");
		
		UMoviePipelineQueue_DeleteJob_Params params {};
		params.InJob = InJob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineQueue*                         InQueue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineQueue::CopyFrom(class UMoviePipelineQueue* InQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom");
		
		UMoviePipelineQueue_CopyFrom_Params params {};
		params.InQueue = InQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InJobType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(class UClass* InJobType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob");
		
		UMoviePipelineQueue_AllocateNewJob_Params params {};
		params.InJobType = InJobType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineQueue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineQueue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineQueue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipelineExecutorBase*                  InExecutor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance");
		
		UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params params {};
		params.InExecutor = InExecutor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InExecutorType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(class UClass* InExecutorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor");
		
		UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params params {};
		params.InExecutorType = InExecutorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	 * 		Flags  -> ()
	 */
	bool UMoviePipelineQueueEngineSubsystem::IsRendering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering");
		
		UMoviePipelineQueueEngineSubsystem_IsRendering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	 * 		Flags  -> ()
	 */
	class UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue");
		
		UMoviePipelineQueueEngineSubsystem_GetQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	 * 		Flags  -> ()
	 */
	class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor");
		
		UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineQueueEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineQueueEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineRenderPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineRenderPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineRenderPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineShotConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineShotConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineShotConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineVideoOutputBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineVideoOutputBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoviePipelineViewFamilySetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineViewFamilySetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMoviePipeline*                              ForPipeline                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieRenderDebugWidget::OnInitializedForPipeline(class UMoviePipeline* ForPipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline");
		
		UMovieRenderDebugWidget_OnInitializedForPipeline_Params params {};
		params.ForPipeline = ForPipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieRenderDebugWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieRenderDebugWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineCore.MovieRenderDebugWidget");
		return ptr;
	}

}


