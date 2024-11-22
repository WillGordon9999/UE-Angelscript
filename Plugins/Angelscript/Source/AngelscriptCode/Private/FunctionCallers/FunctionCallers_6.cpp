#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(FOnLocalPlayerSaveGameLoaded, Execute, (ULocalPlayerSaveGame), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLocalPlayerSaveGameLoaded, ExecuteIfBound, (ULocalPlayerSaveGame), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, opAssign, (const FOnMontageBlendedInEndedMCDelegate&), ERASE_ARGUMENT_PACK(FOnMontageBlendedInEndedMCDelegate&)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendedInEndedMCDelegate, Broadcast, (UAnimMontage), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, opAssign, (const FOnMontageBlendingOutStartedMCDelegate&), ERASE_ARGUMENT_PACK(FOnMontageBlendingOutStartedMCDelegate&)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageBlendingOutStartedMCDelegate, Broadcast, (UAnimMontage, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, opAssign, (const FOnMontageEndedMCDelegate&), ERASE_ARGUMENT_PACK(FOnMontageEndedMCDelegate&)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageEndedMCDelegate, Broadcast, (UAnimMontage, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, opAssign, (const FOnMontageStartedMCDelegate&), ERASE_ARGUMENT_PACK(FOnMontageStartedMCDelegate&)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontageStartedMCDelegate, Broadcast, (UAnimMontage), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPawnControllerChanged, opAssign, (const FOnPawnControllerChanged&), ERASE_ARGUMENT_PACK(FOnPawnControllerChanged&)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPawnControllerChanged, Broadcast, (APawn, AController), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, opAssign, (const FOnPlayerStatePawnSet&), ERASE_ARGUMENT_PACK(FOnPlayerStatePawnSet&)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPlayerStatePawnSet, Broadcast, (APlayerState, APawn, APawn), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, opAssign, (const FOnPossessedPawnChanged&), ERASE_ARGUMENT_PACK(FOnPossessedPawnChanged&)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPossessedPawnChanged, Broadcast, (APawn, APawn), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, opAssign, (const FOnPrimaryAssetBundlesChanged&), ERASE_ARGUMENT_PACK(FOnPrimaryAssetBundlesChanged&)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetBundlesChanged, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, opAssign, (const FOnPrimaryAssetClassListLoaded&), ERASE_ARGUMENT_PACK(FOnPrimaryAssetClassListLoaded&)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassListLoaded, Broadcast, (const TArray<TSubclassOf<UObject>>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, opAssign, (const FOnPrimaryAssetClassLoaded&), ERASE_ARGUMENT_PACK(FOnPrimaryAssetClassLoaded&)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetClassLoaded, Broadcast, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, opAssign, (const FOnPrimaryAssetListLoaded&), ERASE_ARGUMENT_PACK(FOnPrimaryAssetListLoaded&)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetListLoaded, Broadcast, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, opAssign, (const FOnPrimaryAssetLoaded&), ERASE_ARGUMENT_PACK(FOnPrimaryAssetLoaded&)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPrimaryAssetLoaded, Broadcast, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, opAssign, (const FOnQuartzCommandEvent&), ERASE_ARGUMENT_PACK(FOnQuartzCommandEvent&)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEvent, Broadcast, (EQuartzCommandDelegateSubType, FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, opAssign, (const FOnQuartzCommandEventBP&), ERASE_ARGUMENT_PACK(FOnQuartzCommandEventBP&)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, Execute, (EQuartzCommandDelegateSubType, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzCommandEventBP, ExecuteIfBound, (EQuartzCommandDelegateSubType, FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, opAssign, (const FOnQuartzMetronomeEvent&), ERASE_ARGUMENT_PACK(FOnQuartzMetronomeEvent&)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEvent, Broadcast, (FName, EQuartzCommandQuantization, int, int, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, opAssign, (const FOnQuartzMetronomeEventBP&), ERASE_ARGUMENT_PACK(FOnQuartzMetronomeEventBP&)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, Execute, (FName, EQuartzCommandQuantization, int, int, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQuartzMetronomeEventBP, ExecuteIfBound, (FName, EQuartzCommandQuantization, int, int, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnQueueSubtitles, opAssign, (const FOnQueueSubtitles&), ERASE_ARGUMENT_PACK(FOnQueueSubtitles&)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, Execute, (const TArray<FSubtitleCue>&, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnQueueSubtitles, ExecuteIfBound, (const TArray<FSubtitleCue>&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSubmixEnvelope, opAssign, (const FOnSubmixEnvelope&), ERASE_ARGUMENT_PACK(FOnSubmixEnvelope&)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelope, Broadcast, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, opAssign, (const FOnSubmixEnvelopeBP&), ERASE_ARGUMENT_PACK(FOnSubmixEnvelopeBP&)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, Execute, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixEnvelopeBP, ExecuteIfBound, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, opAssign, (const FOnSubmixRecordedFileDone&), ERASE_ARGUMENT_PACK(FOnSubmixRecordedFileDone&)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixRecordedFileDone, Broadcast, (const USoundWave), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, opAssign, (const FOnSubmixSpectralAnalysis&), ERASE_ARGUMENT_PACK(FOnSubmixSpectralAnalysis&)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysis, Broadcast, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, opAssign, (const FOnSubmixSpectralAnalysisBP&), ERASE_ARGUMENT_PACK(FOnSubmixSpectralAnalysisBP&)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, Execute, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSubmixSpectralAnalysisBP, ExecuteIfBound, (const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSystemFinished, opAssign, (const FOnSystemFinished&), ERASE_ARGUMENT_PACK(FOnSystemFinished&)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSystemFinished, Broadcast, (UParticleSystemComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTimelineEvent, opAssign, (const FOnTimelineEvent&), ERASE_ARGUMENT_PACK(FOnTimelineEvent&)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineEvent, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTimelineFloat, opAssign, (const FOnTimelineFloat&), ERASE_ARGUMENT_PACK(FOnTimelineFloat&)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, Execute, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineFloat, ExecuteIfBound, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTimelineLinearColor, opAssign, (const FOnTimelineLinearColor&), ERASE_ARGUMENT_PACK(FOnTimelineLinearColor&)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, Execute, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineLinearColor, ExecuteIfBound, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTimelineVector, opAssign, (const FOnTimelineVector&), ERASE_ARGUMENT_PACK(FOnTimelineVector&)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, Execute, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTimelineVector, ExecuteIfBound, (FVector), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnUserClickedBanner, opAssign, (const FOnUserClickedBanner&), ERASE_ARGUMENT_PACK(FOnUserClickedBanner&)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClickedBanner, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, opAssign, (const FOnUserClosedAdvertisement&), ERASE_ARGUMENT_PACK(FOnUserClosedAdvertisement&)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserClosedAdvertisement, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, opAssign, (const FOnUserInputDeviceConnectionChange&), ERASE_ARGUMENT_PACK(FOnUserInputDeviceConnectionChange&)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDeviceConnectionChange, Broadcast, (EInputDeviceConnectionState, FPlatformUserId, FInputDeviceId), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, opAssign, (const FOnUserInputDevicePairingChange&), ERASE_ARGUMENT_PACK(FOnUserInputDevicePairingChange&)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserInputDevicePairingChange, Broadcast, (FInputDeviceId, FPlatformUserId, FPlatformUserId), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParticleBurstSignature, opAssign, (const FParticleBurstSignature&), ERASE_ARGUMENT_PACK(FParticleBurstSignature&)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleBurstSignature, Broadcast, (FName, float32, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParticleCollisionSignature, opAssign, (const FParticleCollisionSignature&), ERASE_ARGUMENT_PACK(FParticleCollisionSignature&)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleCollisionSignature, Broadcast, (FName, float32, int, FVector, FVector, FVector, FVector, FName, UPhysicalMaterial), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParticleDeathSignature, opAssign, (const FParticleDeathSignature&), ERASE_ARGUMENT_PACK(FParticleDeathSignature&)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleDeathSignature, Broadcast, (FName, float32, int, FVector, FVector, FVector), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParticleSpawnSignature, opAssign, (const FParticleSpawnSignature&), ERASE_ARGUMENT_PACK(FParticleSpawnSignature&)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSpawnSignature, Broadcast, (FName, float32, FVector, FVector), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, opAssign, (const FPlasticDeformationEventSignature&), ERASE_ARGUMENT_PACK(FPlasticDeformationEventSignature&)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlasticDeformationEventSignature, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, opAssign, (const FPlatformInterfaceDelegate&), ERASE_ARGUMENT_PACK(FPlatformInterfaceDelegate&)) },
{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformInterfaceDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, opAssign, (const FPlayMontageAnimNotifyDelegate&), ERASE_ARGUMENT_PACK(FPlayMontageAnimNotifyDelegate&)) },
{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlayMontageAnimNotifyDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, opAssign, (const FPostEvaluateAnimEvent&), ERASE_ARGUMENT_PACK(FPostEvaluateAnimEvent&)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostEvaluateAnimEvent, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRemovalEventSignature, opAssign, (const FRemovalEventSignature&), ERASE_ARGUMENT_PACK(FRemovalEventSignature&)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRemovalEventSignature, Broadcast, (const TArray<FChaosRemovalEvent>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTimerDynamicDelegate, opAssign, (const FTimerDynamicDelegate&), ERASE_ARGUMENT_PACK(FTimerDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTimerDynamicDelegate, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FViewportDisplayCallback, opAssign, (const FViewportDisplayCallback&), ERASE_ARGUMENT_PACK(FViewportDisplayCallback&)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, Execute, (FText&, FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FViewportDisplayCallback, ExecuteIfBound, (FText&, FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, opAssign, (const FApplicationLifetimeDelegate__ApplicationLifecycleComponent&), ERASE_ARGUMENT_PACK(FApplicationLifetimeDelegate__ApplicationLifecycleComponent&)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationLifetimeDelegate__ApplicationLifecycleComponent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, opAssign, (const FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent&), ERASE_ARGUMENT_PACK(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent&)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FApplicationStartupArgumentsDelegate__ApplicationLifecycleComponent, Broadcast, (const TArray<FString>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, opAssign, (const FOnLowPowerModeDelegate__ApplicationLifecycleComponent&), ERASE_ARGUMENT_PACK(FOnLowPowerModeDelegate__ApplicationLifecycleComponent&)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLowPowerModeDelegate__ApplicationLifecycleComponent, Broadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, opAssign, (const FOnTemperatureChangeDelegate__ApplicationLifecycleComponent&), ERASE_ARGUMENT_PACK(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent&)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTemperatureChangeDelegate__ApplicationLifecycleComponent, Broadcast, (ETemperatureSeverityType), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, opAssign, (const FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem&), ERASE_ARGUMENT_PACK(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem&)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDataDrivenCVarChanged__DataDrivenCVarEngineSubsystem, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, opAssign, (const FOnInterpToResetDelegate__InterpToMovementComponent&), ERASE_ARGUMENT_PACK(FOnInterpToResetDelegate__InterpToMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToResetDelegate__InterpToMovementComponent, Broadcast, (const FHitResult&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, opAssign, (const FOnInterpToReverseDelegate__InterpToMovementComponent&), ERASE_ARGUMENT_PACK(FOnInterpToReverseDelegate__InterpToMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToReverseDelegate__InterpToMovementComponent, Broadcast, (const FHitResult&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, opAssign, (const FOnInterpToStopDelegate__InterpToMovementComponent&), ERASE_ARGUMENT_PACK(FOnInterpToStopDelegate__InterpToMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToStopDelegate__InterpToMovementComponent, Broadcast, (const FHitResult&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, opAssign, (const FOnInterpToWaitBeginDelegate__InterpToMovementComponent&), ERASE_ARGUMENT_PACK(FOnInterpToWaitBeginDelegate__InterpToMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitBeginDelegate__InterpToMovementComponent, Broadcast, (const FHitResult&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, opAssign, (const FOnInterpToWaitEndDelegate__InterpToMovementComponent&), ERASE_ARGUMENT_PACK(FOnInterpToWaitEndDelegate__InterpToMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInterpToWaitEndDelegate__InterpToMovementComponent, Broadcast, (const FHitResult&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, opAssign, (const FOnAssetLoaded__KismetSystemLibrary&), ERASE_ARGUMENT_PACK(FOnAssetLoaded__KismetSystemLibrary&)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, Execute, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetLoaded__KismetSystemLibrary, ExecuteIfBound, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, opAssign, (const FOnAssetClassLoaded__KismetSystemLibrary&), ERASE_ARGUMENT_PACK(FOnAssetClassLoaded__KismetSystemLibrary&)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, Execute, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetClassLoaded__KismetSystemLibrary, ExecuteIfBound, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, opAssign, (const FPlatformEventDelegate__PlatformEventsComponent&), ERASE_ARGUMENT_PACK(FPlatformEventDelegate__PlatformEventsComponent&)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformEventDelegate__PlatformEventsComponent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, opAssign, (const FPlatformDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformDelegate__PlatformGameInstance, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, opAssign, (const FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformFailedToRegisterForRemoteNotificationsDelegate__PlatformGameInstance, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, opAssign, (const FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedLocalNotificationDelegate__PlatformGameInstance, Broadcast, (FString, int, EApplicationState), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, opAssign, (const FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformReceivedRemoteNotificationDelegate__PlatformGameInstance, Broadcast, (FString, EApplicationState), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, opAssign, (const FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForRemoteNotificationsDelegate__PlatformGameInstance, Broadcast, (const TArray<uint8>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, opAssign, (const FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformRegisteredForUserNotificationsDelegate__PlatformGameInstance, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, opAssign, (const FPlatformScreenOrientationChangedDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformScreenOrientationChangedDelegate__PlatformGameInstance, Broadcast, (EScreenOrientation), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, opAssign, (const FPlatformStartupArgumentsDelegate__PlatformGameInstance&), ERASE_ARGUMENT_PACK(FPlatformStartupArgumentsDelegate__PlatformGameInstance&)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlatformStartupArgumentsDelegate__PlatformGameInstance, Broadcast, (const TArray<FString>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, opAssign, (const FOnProjectileBounceDelegate__ProjectileMovementComponent&), ERASE_ARGUMENT_PACK(FOnProjectileBounceDelegate__ProjectileMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileBounceDelegate__ProjectileMovementComponent, Broadcast, (const FHitResult&, const FVector&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, opAssign, (const FOnProjectileStopDelegate__ProjectileMovementComponent&), ERASE_ARGUMENT_PACK(FOnProjectileStopDelegate__ProjectileMovementComponent&)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnProjectileStopDelegate__ProjectileMovementComponent, Broadcast, (const FHitResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, opAssign, (const FOnChangeDynamic__TypedElementSelectionSet&), ERASE_ARGUMENT_PACK(FOnChangeDynamic__TypedElementSelectionSet&)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChangeDynamic__TypedElementSelectionSet, Broadcast, (const UTypedElementSelectionSet), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, opAssign, (const FOnPreChangeDynamic__TypedElementSelectionSet&), ERASE_ARGUMENT_PACK(FOnPreChangeDynamic__TypedElementSelectionSet&)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPreChangeDynamic__TypedElementSelectionSet, Broadcast, (const UTypedElementSelectionSet), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, opAssign, (const FToolMenuDynamicCanExecuteAction&), ERASE_ARGUMENT_PACK(FToolMenuDynamicCanExecuteAction&)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, Execute, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicCanExecuteAction, ExecuteIfBound, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, opAssign, (const FToolMenuDynamicExecuteAction&), ERASE_ARGUMENT_PACK(FToolMenuDynamicExecuteAction&)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, Execute, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicExecuteAction, ExecuteIfBound, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, opAssign, (const FToolMenuDynamicGetActionCheckState&), ERASE_ARGUMENT_PACK(FToolMenuDynamicGetActionCheckState&)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, Execute, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(ECheckBoxState)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicGetActionCheckState, ExecuteIfBound, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(ECheckBoxState)) },


{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, opAssign, (const FToolMenuDynamicIsActionButtonVisible&), ERASE_ARGUMENT_PACK(FToolMenuDynamicIsActionButtonVisible&)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, Execute, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionButtonVisible, ExecuteIfBound, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, opAssign, (const FToolMenuDynamicIsActionChecked&), ERASE_ARGUMENT_PACK(FToolMenuDynamicIsActionChecked&)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, Execute, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FToolMenuDynamicIsActionChecked, ExecuteIfBound, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, opAssign, (const FOnLevelEditorEditorCameraMoved&), ERASE_ARGUMENT_PACK(FOnLevelEditorEditorCameraMoved&)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorEditorCameraMoved, Broadcast, (const FVector&, const FRotator&, ELevelViewportType, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, opAssign, (const FOnExtractAssetFromFileDynamic__EditorAssetSubsystem&), ERASE_ARGUMENT_PACK(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem&)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, Execute, (const TArray<FString>&, TArray<FAssetData>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExtractAssetFromFileDynamic__EditorAssetSubsystem, ExecuteIfBound, (const TArray<FString>&, TArray<FAssetData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, opAssign, (const FOnAssetPostImport_Dyn__ImportSubsystem&), ERASE_ARGUMENT_PACK(FOnAssetPostImport_Dyn__ImportSubsystem&)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostImport_Dyn__ImportSubsystem, Broadcast, (UFactory, UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, opAssign, (const FOnAssetPostLODImport_Dyn__ImportSubsystem&), ERASE_ARGUMENT_PACK(FOnAssetPostLODImport_Dyn__ImportSubsystem&)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPostLODImport_Dyn__ImportSubsystem, Broadcast, (UObject, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, opAssign, (const FOnAssetPreImport_Dyn__ImportSubsystem&), ERASE_ARGUMENT_PACK(FOnAssetPreImport_Dyn__ImportSubsystem&)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetPreImport_Dyn__ImportSubsystem, Broadcast, (UFactory, UClass, UObject, const FName&, const FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, opAssign, (const FOnAssetReimport_Dyn__ImportSubsystem&), ERASE_ARGUMENT_PACK(FOnAssetReimport_Dyn__ImportSubsystem&)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAssetReimport_Dyn__ImportSubsystem, Broadcast, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, opAssign, (const FOnDeleteActorsBegin&), ERASE_ARGUMENT_PACK(FOnDeleteActorsBegin&)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsBegin, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, opAssign, (const FOnDeleteActorsEnd&), ERASE_ARGUMENT_PACK(FOnDeleteActorsEnd&)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDeleteActorsEnd, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, opAssign, (const FOnDuplicateActorsBegin&), ERASE_ARGUMENT_PACK(FOnDuplicateActorsBegin&)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsBegin, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, opAssign, (const FOnDuplicateActorsEnd&), ERASE_ARGUMENT_PACK(FOnDuplicateActorsEnd&)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDuplicateActorsEnd, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, opAssign, (const FOnEditCopyActorsBegin&), ERASE_ARGUMENT_PACK(FOnEditCopyActorsBegin&)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsBegin, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, opAssign, (const FOnEditCopyActorsEnd&), ERASE_ARGUMENT_PACK(FOnEditCopyActorsEnd&)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCopyActorsEnd, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, opAssign, (const FOnEditCutActorsBegin&), ERASE_ARGUMENT_PACK(FOnEditCutActorsBegin&)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsBegin, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, opAssign, (const FOnEditCutActorsEnd&), ERASE_ARGUMENT_PACK(FOnEditCutActorsEnd&)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditCutActorsEnd, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, opAssign, (const FOnEditNewActorsDropped&), ERASE_ARGUMENT_PACK(FOnEditNewActorsDropped&)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsDropped, Broadcast, (const TArray<UObject*>&, const TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, opAssign, (const FOnEditNewActorsPlaced&), ERASE_ARGUMENT_PACK(FOnEditNewActorsPlaced&)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditNewActorsPlaced, Broadcast, (UObject, const TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, opAssign, (const FOnEditPasteActorsBegin&), ERASE_ARGUMENT_PACK(FOnEditPasteActorsBegin&)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsBegin, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, opAssign, (const FOnEditPasteActorsEnd&), ERASE_ARGUMENT_PACK(FOnEditPasteActorsEnd&)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditPasteActorsEnd, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, opAssign, (const FOnLevelEditorMapChanged&), ERASE_ARGUMENT_PACK(FOnLevelEditorMapChanged&)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapChanged, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, opAssign, (const FOnLevelEditorMapOpened&), ERASE_ARGUMENT_PACK(FOnLevelEditorMapOpened&)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorMapOpened, Broadcast, (const FString&, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, opAssign, (const FOnLevelEditorPostSaveWorld&), ERASE_ARGUMENT_PACK(FOnLevelEditorPostSaveWorld&)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPostSaveWorld, Broadcast, (int, UWorld, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, opAssign, (const FOnLevelEditorPreSaveWorld&), ERASE_ARGUMENT_PACK(FOnLevelEditorPreSaveWorld&)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelEditorPreSaveWorld, Broadcast, (int, UWorld), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, opAssign, (const FGameplayTaskSpawnActorDelegate&), ERASE_ARGUMENT_PACK(FGameplayTaskSpawnActorDelegate&)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTaskSpawnActorDelegate, Broadcast, (AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, opAssign, (const FOnClaimedResourcesChangeSignature&), ERASE_ARGUMENT_PACK(FOnClaimedResourcesChangeSignature&)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnClaimedResourcesChangeSignature, Broadcast, (FGameplayResourceSet, FGameplayResourceSet), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, opAssign, (const FGenericGameplayTaskDelegate__GameplayTask&), ERASE_ARGUMENT_PACK(FGenericGameplayTaskDelegate__GameplayTask&)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenericGameplayTaskDelegate__GameplayTask, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, opAssign, (const FTaskFinishDelegate__GameplayTask_TimeLimitedExecution&), ERASE_ARGUMENT_PACK(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution&)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskFinishDelegate__GameplayTask_TimeLimitedExecution, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, opAssign, (const FTaskDelayDelegate__GameplayTask_WaitDelay&), ERASE_ARGUMENT_PACK(FTaskDelayDelegate__GameplayTask_WaitDelay&)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTaskDelayDelegate__GameplayTask_WaitDelay, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, opAssign, (const FActorPerceptionForgetUpdatedDelegate&), ERASE_ARGUMENT_PACK(FActorPerceptionForgetUpdatedDelegate&)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionForgetUpdatedDelegate, Broadcast, (AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, opAssign, (const FActorPerceptionInfoUpdatedDelegate&), ERASE_ARGUMENT_PACK(FActorPerceptionInfoUpdatedDelegate&)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionInfoUpdatedDelegate, Broadcast, (const FActorPerceptionUpdateInfo&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, opAssign, (const FActorPerceptionUpdatedDelegate&), ERASE_ARGUMENT_PACK(FActorPerceptionUpdatedDelegate&)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionUpdatedDelegate, Broadcast, (AActor, FAIStimulus), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, opAssign, (const FAIMoveCompletedSignature&), ERASE_ARGUMENT_PACK(FAIMoveCompletedSignature&)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAIMoveCompletedSignature, Broadcast, (FAIRequestID, EPathFollowingResult), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, opAssign, (const FMoveTaskCompletedSignature&), ERASE_ARGUMENT_PACK(FMoveTaskCompletedSignature&)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMoveTaskCompletedSignature, Broadcast, (EPathFollowingResult, AAIController), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOAISimpleDelegate, opAssign, (const FOAISimpleDelegate&), ERASE_ARGUMENT_PACK(FOAISimpleDelegate&)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOAISimpleDelegate, Broadcast, (EPathFollowingResult), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, opAssign, (const FPerceptionUpdatedDelegate&), ERASE_ARGUMENT_PACK(FPerceptionUpdatedDelegate&)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPerceptionUpdatedDelegate, Broadcast, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, opAssign, (const FSmartLinkReachedSignature&), ERASE_ARGUMENT_PACK(FSmartLinkReachedSignature&)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSmartLinkReachedSignature, Broadcast, (AActor, const FVector&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, opAssign, (const FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper&), ERASE_ARGUMENT_PACK(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper&)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEQSQueryDoneSignature__EnvQueryInstanceBlueprintWrapper, Broadcast, (UEnvQueryInstanceBlueprintWrapper, EEnvQueryStatus), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, opAssign, (const FHearNoiseDelegate__PawnSensingComponent&), ERASE_ARGUMENT_PACK(FHearNoiseDelegate__PawnSensingComponent&)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHearNoiseDelegate__PawnSensingComponent, Broadcast, (APawn, const FVector&, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, opAssign, (const FSeePawnDelegate__PawnSensingComponent&), ERASE_ARGUMENT_PACK(FSeePawnDelegate__PawnSensingComponent&)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSeePawnDelegate__PawnSensingComponent, Broadcast, (APawn), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, opAssign, (const FOnChaosPhysicsCollision&), ERASE_ARGUMENT_PACK(FOnChaosPhysicsCollision&)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosPhysicsCollision, Broadcast, (const FChaosPhysicsCollisionInfo&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosBreakEvent, opAssign, (const FOnChaosBreakEvent&), ERASE_ARGUMENT_PACK(FOnChaosBreakEvent&)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakEvent, Broadcast, (const FChaosBreakEvent&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, opAssign, (const FOnChaosBreakingEvents&), ERASE_ARGUMENT_PACK(FOnChaosBreakingEvents&)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosBreakingEvents, Broadcast, (const TArray<FChaosBreakingEventData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, opAssign, (const FOnChaosCollisionEvents&), ERASE_ARGUMENT_PACK(FOnChaosCollisionEvents&)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCollisionEvents, Broadcast, (const TArray<FChaosCollisionEventData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, opAssign, (const FOnChaosCrumblingEvent&), ERASE_ARGUMENT_PACK(FOnChaosCrumblingEvent&)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosCrumblingEvent, Broadcast, (const FChaosCrumblingEvent&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, opAssign, (const FOnChaosRemovalEvent&), ERASE_ARGUMENT_PACK(FOnChaosRemovalEvent&)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvent, Broadcast, (const FChaosRemovalEvent&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, opAssign, (const FOnChaosRemovalEvents&), ERASE_ARGUMENT_PACK(FOnChaosRemovalEvents&)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosRemovalEvents, Broadcast, (const TArray<FChaosRemovalEventData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, opAssign, (const FOnChaosTrailingEvents&), ERASE_ARGUMENT_PACK(FOnChaosTrailingEvents&)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnChaosTrailingEvents, Broadcast, (const TArray<FChaosTrailingEventData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, opAssign, (const FOnGeometryCollectionFullyDecayedEvent&), ERASE_ARGUMENT_PACK(FOnGeometryCollectionFullyDecayedEvent&)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionFullyDecayedEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, opAssign, (const FOnGeometryCollectionRootMovedEvent&), ERASE_ARGUMENT_PACK(FOnGeometryCollectionRootMovedEvent&)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGeometryCollectionRootMovedEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, opAssign, (const FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent&), ERASE_ARGUMENT_PACK(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent&)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsLoadingStateChange__GeometryCollectionComponent, Broadcast, (UGeometryCollectionComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, opAssign, (const FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent&), ERASE_ARGUMENT_PACK(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent&)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNotifyGeometryCollectionPhysicsStateChange__GeometryCollectionComponent, Broadcast, (UGeometryCollectionComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, opAssign, (const FOnNavDataGenericEvent&), ERASE_ARGUMENT_PACK(FOnNavDataGenericEvent&)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavDataGenericEvent, Broadcast, (ANavigationData), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, opAssign, (const FOnNavigationPathUpdated&), ERASE_ARGUMENT_PACK(FOnNavigationPathUpdated&)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNavigationPathUpdated, Broadcast, (UNavigationPath, ENavPathEvent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, opAssign, (const FGenerateWidgetForObject__Widget&), ERASE_ARGUMENT_PACK(FGenerateWidgetForObject__Widget&)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, Execute, (UObject), ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForObject__Widget, ExecuteIfBound, (UObject), ERASE_ARGUMENT_PACK(UWidget*)) },


{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, opAssign, (const FGenerateWidgetForString__Widget&), ERASE_ARGUMENT_PACK(FGenerateWidgetForString__Widget&)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, Execute, (FString), ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetForString__Widget, ExecuteIfBound, (FString), ERASE_ARGUMENT_PACK(UWidget*)) },


{ ERASE_METHOD_PTR(FGetBool__Widget, opAssign, (const FGetBool__Widget&), ERASE_ARGUMENT_PACK(FGetBool__Widget&)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, Execute, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetBool__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, opAssign, (const FGetCheckBoxState__Widget&), ERASE_ARGUMENT_PACK(FGetCheckBoxState__Widget&)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, Execute, (), ERASE_ARGUMENT_PACK(ECheckBoxState)) },
{ ERASE_METHOD_PTR(FGetCheckBoxState__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(ECheckBoxState)) },


{ ERASE_METHOD_PTR(FGetFloat__Widget, opAssign, (const FGetFloat__Widget&), ERASE_ARGUMENT_PACK(FGetFloat__Widget&)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, Execute, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FGetFloat__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(float)) },


{ ERASE_METHOD_PTR(FGetInt32__Widget, opAssign, (const FGetInt32__Widget&), ERASE_ARGUMENT_PACK(FGetInt32__Widget&)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, Execute, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FGetInt32__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(int)) },


{ ERASE_METHOD_PTR(FGetLinearColor__Widget, opAssign, (const FGetLinearColor__Widget&), ERASE_ARGUMENT_PACK(FGetLinearColor__Widget&)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, Execute, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FGetLinearColor__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FLinearColor)) },


{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, opAssign, (const FGetMouseCursor__Widget&), ERASE_ARGUMENT_PACK(FGetMouseCursor__Widget&)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, Execute, (), ERASE_ARGUMENT_PACK(EMouseCursor)) },
{ ERASE_METHOD_PTR(FGetMouseCursor__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(EMouseCursor)) },


{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, opAssign, (const FGetSlateBrush__Widget&), ERASE_ARGUMENT_PACK(FGetSlateBrush__Widget&)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, Execute, (), ERASE_ARGUMENT_PACK(FSlateBrush)) },
{ ERASE_METHOD_PTR(FGetSlateBrush__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FSlateBrush)) },


{ ERASE_METHOD_PTR(FGetSlateColor__Widget, opAssign, (const FGetSlateColor__Widget&), ERASE_ARGUMENT_PACK(FGetSlateColor__Widget&)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, Execute, (), ERASE_ARGUMENT_PACK(FSlateColor)) },
{ ERASE_METHOD_PTR(FGetSlateColor__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FSlateColor)) },


{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, opAssign, (const FGetSlateVisibility__Widget&), ERASE_ARGUMENT_PACK(FGetSlateVisibility__Widget&)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, Execute, (), ERASE_ARGUMENT_PACK(ESlateVisibility)) },
{ ERASE_METHOD_PTR(FGetSlateVisibility__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(ESlateVisibility)) },


{ ERASE_METHOD_PTR(FGetText__Widget, opAssign, (const FGetText__Widget&), ERASE_ARGUMENT_PACK(FGetText__Widget&)) },
{ ERASE_METHOD_PTR(FGetText__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetText__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetText__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetText__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetText__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetText__Widget, Execute, (), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(FGetText__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FText)) },


{ ERASE_METHOD_PTR(FGetWidget__Widget, opAssign, (const FGetWidget__Widget&), ERASE_ARGUMENT_PACK(FGetWidget__Widget&)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, Execute, (), ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(FGetWidget__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(UWidget*)) },


{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, opAssign, (const FFieldValueChangedDynamicDelegate&), ERASE_ARGUMENT_PACK(FFieldValueChangedDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, Execute, (UObject, FFieldNotificationId), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFieldValueChangedDynamicDelegate, ExecuteIfBound, (UObject, FFieldNotificationId), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, opAssign, (const FOnPointerEvent__Widget&), ERASE_ARGUMENT_PACK(FOnPointerEvent__Widget&)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, Execute, (FGeometry, const FPointerEvent&), ERASE_ARGUMENT_PACK(FEventReply)) },
{ ERASE_METHOD_PTR(FOnPointerEvent__Widget, ExecuteIfBound, (FGeometry, const FPointerEvent&), ERASE_ARGUMENT_PACK(FEventReply)) },


{ ERASE_METHOD_PTR(FOnReply__Widget, opAssign, (const FOnReply__Widget&), ERASE_ARGUMENT_PACK(FOnReply__Widget&)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, Execute, (), ERASE_ARGUMENT_PACK(FEventReply)) },
{ ERASE_METHOD_PTR(FOnReply__Widget, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FEventReply)) },


{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, opAssign, (const FCustomWidgetNavigationDelegate&), ERASE_ARGUMENT_PACK(FCustomWidgetNavigationDelegate&)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, Execute, (EUINavigation), ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(FCustomWidgetNavigationDelegate, ExecuteIfBound, (EUINavigation), ERASE_ARGUMENT_PACK(UWidget*)) },


{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, opAssign, (const FGenerateWidgetEvent__ComboBoxKey&), ERASE_ARGUMENT_PACK(FGenerateWidgetEvent__ComboBoxKey&)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, Execute, (FName), ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(FGenerateWidgetEvent__ComboBoxKey, ExecuteIfBound, (FName), ERASE_ARGUMENT_PACK(UWidget*)) },


{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, opAssign, (const FOnOpeningEvent__ComboBoxKey&), ERASE_ARGUMENT_PACK(FOnOpeningEvent__ComboBoxKey&)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxKey, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, opAssign, (const FOnSelectionChangedEvent__ComboBoxKey&), ERASE_ARGUMENT_PACK(FOnSelectionChangedEvent__ComboBoxKey&)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxKey, Broadcast, (FName, ESelectInfo), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, opAssign, (const FOnOpeningEvent__ComboBoxString&), ERASE_ARGUMENT_PACK(FOnOpeningEvent__ComboBoxString&)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOpeningEvent__ComboBoxString, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, opAssign, (const FOnSelectionChangedEvent__ComboBoxString&), ERASE_ARGUMENT_PACK(FOnSelectionChangedEvent__ComboBoxString&)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSelectionChangedEvent__ComboBoxString, Broadcast, (FString, ESelectInfo), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, opAssign, (const FOnEditableTextChangedEvent__EditableText&), ERASE_ARGUMENT_PACK(FOnEditableTextChangedEvent__EditableText&)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextChangedEvent__EditableText, Broadcast, (const FText&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, opAssign, (const FOnEditableTextCommittedEvent__EditableText&), ERASE_ARGUMENT_PACK(FOnEditableTextCommittedEvent__EditableText&)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextCommittedEvent__EditableText, Broadcast, (const FText&, ETextCommit), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, opAssign, (const FOnEditableTextBoxChangedEvent__EditableTextBox&), ERASE_ARGUMENT_PACK(FOnEditableTextBoxChangedEvent__EditableTextBox&)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxChangedEvent__EditableTextBox, Broadcast, (const FText&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, opAssign, (const FOnEditableTextBoxCommittedEvent__EditableTextBox&), ERASE_ARGUMENT_PACK(FOnEditableTextBoxCommittedEvent__EditableTextBox&)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditableTextBoxCommittedEvent__EditableTextBox, Broadcast, (const FText&, ETextCommit), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, opAssign, (const FOnIsSelectingKeyChanged__InputKeySelector&), ERASE_ARGUMENT_PACK(FOnIsSelectingKeyChanged__InputKeySelector&)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnIsSelectingKeyChanged__InputKeySelector, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, opAssign, (const FOnKeySelected__InputKeySelector&), ERASE_ARGUMENT_PACK(FOnKeySelected__InputKeySelector&)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnKeySelected__InputKeySelector, Broadcast, (FInputChord), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, opAssign, (const FGetUserWidget__MenuAnchor&), ERASE_ARGUMENT_PACK(FGetUserWidget__MenuAnchor&)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, Execute, (), ERASE_ARGUMENT_PACK(UUserWidget*)) },
{ ERASE_METHOD_PTR(FGetUserWidget__MenuAnchor, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(UUserWidget*)) },


{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, opAssign, (const FOnMenuOpenChangedEvent&), ERASE_ARGUMENT_PACK(FOnMenuOpenChangedEvent&)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMenuOpenChangedEvent, Broadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FDownloadImageDelegate, opAssign, (const FDownloadImageDelegate&), ERASE_ARGUMENT_PACK(FDownloadImageDelegate&)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDownloadImageDelegate, Broadcast, (UTexture2DDynamic), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnButtonClickedEvent, opAssign, (const FOnButtonClickedEvent&), ERASE_ARGUMENT_PACK(FOnButtonClickedEvent&)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonClickedEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnButtonHoverEvent, opAssign, (const FOnButtonHoverEvent&), ERASE_ARGUMENT_PACK(FOnButtonHoverEvent&)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonHoverEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnButtonPressedEvent, opAssign, (const FOnButtonPressedEvent&), ERASE_ARGUMENT_PACK(FOnButtonPressedEvent&)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonPressedEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, opAssign, (const FOnButtonReleasedEvent&), ERASE_ARGUMENT_PACK(FOnButtonReleasedEvent&)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnButtonReleasedEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, opAssign, (const FOnCheckBoxComponentStateChanged&), ERASE_ARGUMENT_PACK(FOnCheckBoxComponentStateChanged&)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCheckBoxComponentStateChanged, Broadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstructEvent, opAssign, (const FOnConstructEvent&), ERASE_ARGUMENT_PACK(FOnConstructEvent&)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstructEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, opAssign, (const FOnControllerCaptureBeginEvent&), ERASE_ARGUMENT_PACK(FOnControllerCaptureBeginEvent&)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, opAssign, (const FOnControllerCaptureEndEvent&), ERASE_ARGUMENT_PACK(FOnControllerCaptureEndEvent&)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDragDropMulticast, opAssign, (const FOnDragDropMulticast&), ERASE_ARGUMENT_PACK(FOnDragDropMulticast&)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDragDropMulticast, Broadcast, (UDragDropOperation), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, opAssign, (const FOnExpandableAreaExpansionChanged&), ERASE_ARGUMENT_PACK(FOnExpandableAreaExpansionChanged&)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExpandableAreaExpansionChanged, Broadcast, (UExpandableArea, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, opAssign, (const FOnFloatValueChangedEvent&), ERASE_ARGUMENT_PACK(FOnFloatValueChangedEvent&)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEvent, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, opAssign, (const FOnGetItemChildrenDynamic&), ERASE_ARGUMENT_PACK(FOnGetItemChildrenDynamic&)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, Execute, (UObject, TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGetItemChildrenDynamic, ExecuteIfBound, (UObject, TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, opAssign, (const FOnHoveredWidgetChanged&), ERASE_ARGUMENT_PACK(FOnHoveredWidgetChanged&)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnHoveredWidgetChanged, Broadcast, (UWidgetComponent, UWidgetComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnInputAction, opAssign, (const FOnInputAction&), ERASE_ARGUMENT_PACK(FOnInputAction&)) },
{ ERASE_METHOD_PTR(FOnInputAction, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnInputAction, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnInputAction, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnInputAction, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInputAction, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInputAction, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnInputAction, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, opAssign, (const FOnItemExpansionChangedDynamic&), ERASE_ARGUMENT_PACK(FOnItemExpansionChangedDynamic&)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemExpansionChangedDynamic, Broadcast, (UObject, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, opAssign, (const FOnItemIsHoveredChangedDynamic&), ERASE_ARGUMENT_PACK(FOnItemIsHoveredChangedDynamic&)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnItemIsHoveredChangedDynamic, Broadcast, (UObject, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, opAssign, (const FOnListEntryGeneratedDynamic&), ERASE_ARGUMENT_PACK(FOnListEntryGeneratedDynamic&)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryGeneratedDynamic, Broadcast, (UUserWidget), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, opAssign, (const FOnListEntryInitializedDynamic&), ERASE_ARGUMENT_PACK(FOnListEntryInitializedDynamic&)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryInitializedDynamic, Broadcast, (UObject, UUserWidget), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, opAssign, (const FOnListEntryReleasedDynamic&), ERASE_ARGUMENT_PACK(FOnListEntryReleasedDynamic&)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListEntryReleasedDynamic, Broadcast, (UUserWidget), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, opAssign, (const FOnListItemScrolledIntoViewDynamic&), ERASE_ARGUMENT_PACK(FOnListItemScrolledIntoViewDynamic&)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemScrolledIntoViewDynamic, Broadcast, (UObject, UUserWidget), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, opAssign, (const FOnListItemSelectionChangedDynamic&), ERASE_ARGUMENT_PACK(FOnListItemSelectionChangedDynamic&)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListItemSelectionChangedDynamic, Broadcast, (UObject, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, opAssign, (const FOnListViewScrolledDynamic&), ERASE_ARGUMENT_PACK(FOnListViewScrolledDynamic&)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnListViewScrolledDynamic, Broadcast, (float32, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, opAssign, (const FOnMouseCaptureBeginEvent&), ERASE_ARGUMENT_PACK(FOnMouseCaptureBeginEvent&)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, opAssign, (const FOnMouseCaptureEndEvent&), ERASE_ARGUMENT_PACK(FOnMouseCaptureEndEvent&)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, opAssign, (const FOnScrollBarVisibilityChangedEvent&), ERASE_ARGUMENT_PACK(FOnScrollBarVisibilityChangedEvent&)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnScrollBarVisibilityChangedEvent, Broadcast, (ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnUserScrolledEvent, opAssign, (const FOnUserScrolledEvent&), ERASE_ARGUMENT_PACK(FOnUserScrolledEvent&)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnUserScrolledEvent, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, opAssign, (const FOnVisibilityChangedEvent&), ERASE_ARGUMENT_PACK(FOnVisibilityChangedEvent&)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnVisibilityChangedEvent, Broadcast, (ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, opAssign, (const FOnWidgetAnimationPlaybackStatusChanged&), ERASE_ARGUMENT_PACK(FOnWidgetAnimationPlaybackStatusChanged&)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnWidgetAnimationPlaybackStatusChanged, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, opAssign, (const FSimpleListItemEventDynamic&), ERASE_ARGUMENT_PACK(FSimpleListItemEventDynamic&)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSimpleListItemEventDynamic, Broadcast, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, opAssign, (const FWidgetAnimationDynamicEvent&), ERASE_ARGUMENT_PACK(FWidgetAnimationDynamicEvent&)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvent, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, opAssign, (const FWidgetAnimationDynamicEvents&), ERASE_ARGUMENT_PACK(FWidgetAnimationDynamicEvents&)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationDynamicEvents, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FWidgetAnimationResult, opAssign, (const FWidgetAnimationResult&), ERASE_ARGUMENT_PACK(FWidgetAnimationResult&)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FWidgetAnimationResult, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, opAssign, (const FOnMultiLineEditableTextChangedEvent__MultiLineEditableText&), ERASE_ARGUMENT_PACK(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText&)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextChangedEvent__MultiLineEditableText, Broadcast, (const FText&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, opAssign, (const FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText&), ERASE_ARGUMENT_PACK(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText&)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextCommittedEvent__MultiLineEditableText, Broadcast, (const FText&, ETextCommit), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, opAssign, (const FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox&), ERASE_ARGUMENT_PACK(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox&)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxChangedEvent__MultiLineEditableTextBox, Broadcast, (const FText&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, opAssign, (const FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox&), ERASE_ARGUMENT_PACK(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox&)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMultiLineEditableTextBoxCommittedEvent__MultiLineEditableTextBox, Broadcast, (const FText&, ETextCommit), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, opAssign, (const FGetText__SlateAccessibleWidgetData&), ERASE_ARGUMENT_PACK(FGetText__SlateAccessibleWidgetData&)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, Execute, (), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(FGetText__SlateAccessibleWidgetData, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FText)) },


{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, opAssign, (const FOnSpinBoxBeginSliderMovement__SpinBox&), ERASE_ARGUMENT_PACK(FOnSpinBoxBeginSliderMovement__SpinBox&)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxBeginSliderMovement__SpinBox, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, opAssign, (const FOnSpinBoxValueChangedEvent__SpinBox&), ERASE_ARGUMENT_PACK(FOnSpinBoxValueChangedEvent__SpinBox&)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueChangedEvent__SpinBox, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, opAssign, (const FOnSpinBoxValueCommittedEvent__SpinBox&), ERASE_ARGUMENT_PACK(FOnSpinBoxValueCommittedEvent__SpinBox&)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpinBoxValueCommittedEvent__SpinBox, Broadcast, (float32, ETextCommit), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, opAssign, (const FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary&), ERASE_ARGUMENT_PACK(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary&)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnGameWindowCloseButtonClickedDelegate__WidgetBlueprintLibrary, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnImportDoneDynamic, opAssign, (const FOnImportDoneDynamic&), ERASE_ARGUMENT_PACK(FOnImportDoneDynamic&)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, Execute, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImportDoneDynamic, ExecuteIfBound, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, opAssign, (const FOnObjectImportDoneDynamic&), ERASE_ARGUMENT_PACK(FOnObjectImportDoneDynamic&)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, Execute, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnObjectImportDoneDynamic, ExecuteIfBound, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, opAssign, (const FAdvancedCopyCompletedEvent&), ERASE_ARGUMENT_PACK(FAdvancedCopyCompletedEvent&)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, Execute, (bool, const TArray<FAssetRenameData>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAdvancedCopyCompletedEvent, ExecuteIfBound, (bool, const TArray<FAssetRenameData>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNotifyReplaced, opAssign, (const FOnNotifyReplaced&), ERASE_ARGUMENT_PACK(FOnNotifyReplaced&)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, Execute, (const UAnimNotify, const UAnimNotify), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyReplaced, ExecuteIfBound, (const UAnimNotify, const UAnimNotify), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, opAssign, (const FOnNotifyStateReplaced&), ERASE_ARGUMENT_PACK(FOnNotifyStateReplaced&)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, Execute, (const UAnimNotifyState, const UAnimNotifyState), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNotifyStateReplaced, ExecuteIfBound, (const UAnimNotifyState, const UAnimNotifyState), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, opAssign, (const FOnMontagePlayDelegate&), ERASE_ARGUMENT_PACK(FOnMontagePlayDelegate&)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMontagePlayDelegate, Broadcast, (FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, opAssign, (const FMovieSceneActorPredictionFailure&), ERASE_ARGUMENT_PACK(FMovieSceneActorPredictionFailure&)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionFailure, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, opAssign, (const FMovieSceneActorPredictionResult&), ERASE_ARGUMENT_PACK(FMovieSceneActorPredictionResult&)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneActorPredictionResult, Broadcast, (FTransform), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, opAssign, (const FOnMovieSceneSequencePlayerEvent&), ERASE_ARGUMENT_PACK(FOnMovieSceneSequencePlayerEvent&)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMovieSceneSequencePlayerEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, opAssign, (const FOnAudioDefaultDeviceChanged&), ERASE_ARGUMENT_PACK(FOnAudioDefaultDeviceChanged&)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDefaultDeviceChanged, Broadcast, (EAudioDeviceChangedRole, FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioDeviceChange, opAssign, (const FOnAudioDeviceChange&), ERASE_ARGUMENT_PACK(FOnAudioDeviceChange&)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceChange, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, opAssign, (const FOnAudioDeviceStateChanged&), ERASE_ARGUMENT_PACK(FOnAudioDeviceStateChanged&)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioDeviceStateChanged, Broadcast, (FString, EAudioDeviceChangedState), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, opAssign, (const FOnAudioOutputDevicesObtained&), ERASE_ARGUMENT_PACK(FOnAudioOutputDevicesObtained&)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, Execute, (const TArray<FAudioOutputDeviceInfo>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioOutputDevicesObtained, ExecuteIfBound, (const TArray<FAudioOutputDeviceInfo>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, opAssign, (const FOnCompletedDeviceSwap&), ERASE_ARGUMENT_PACK(FOnCompletedDeviceSwap&)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, Execute, (const FSwapAudioOutputResult&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCompletedDeviceSwap, ExecuteIfBound, (const FSwapAudioOutputResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, opAssign, (const FOnMainAudioOutputDeviceObtained&), ERASE_ARGUMENT_PACK(FOnMainAudioOutputDeviceObtained&)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, Execute, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMainAudioOutputDeviceObtained, ExecuteIfBound, (const FString&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSoundLoadComplete, opAssign, (const FOnSoundLoadComplete&), ERASE_ARGUMENT_PACK(FOnSoundLoadComplete&)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, Execute, (const USoundWave, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoundLoadComplete, ExecuteIfBound, (const USoundWave, const bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, opAssign, (const FOnSynthEnvelopeValue&), ERASE_ARGUMENT_PACK(FOnSynthEnvelopeValue&)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSynthEnvelopeValue, Broadcast, (const float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, opAssign, (const FOnMediaPlayerMediaEvent&), ERASE_ARGUMENT_PACK(FOnMediaPlayerMediaEvent&)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaEvent, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, opAssign, (const FOnMediaPlayerMediaOpened&), ERASE_ARGUMENT_PACK(FOnMediaPlayerMediaOpened&)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpened, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, opAssign, (const FOnMediaPlayerMediaOpenFailed&), ERASE_ARGUMENT_PACK(FOnMediaPlayerMediaOpenFailed&)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMediaPlayerMediaOpenFailed, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInstancePointDamageSignature, opAssign, (const FInstancePointDamageSignature&), ERASE_ARGUMENT_PACK(FInstancePointDamageSignature&)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstancePointDamageSignature, Broadcast, (int, float32, AController, FVector, FVector, const UDamageType, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, opAssign, (const FInstanceRadialDamageSignature&), ERASE_ARGUMENT_PACK(FInstanceRadialDamageSignature&)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInstanceRadialDamageSignature, Broadcast, (const TArray<int>&, const TArray<float32>&, AController, FVector, float32, const UDamageType, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnImageWriteComplete, opAssign, (const FOnImageWriteComplete&), ERASE_ARGUMENT_PACK(FOnImageWriteComplete&)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, Execute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnImageWriteComplete, ExecuteIfBound, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAchievementWriteDelegate, opAssign, (const FAchievementWriteDelegate&), ERASE_ARGUMENT_PACK(FAchievementWriteDelegate&)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAchievementWriteDelegate, Broadcast, (FName, float32, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, opAssign, (const FBlueprintFindSessionsResultDelegate&), ERASE_ARGUMENT_PACK(FBlueprintFindSessionsResultDelegate&)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBlueprintFindSessionsResultDelegate, Broadcast, (const TArray<FBlueprintSessionResult>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, opAssign, (const FInAppPurchaseQuery2Result&), ERASE_ARGUMENT_PACK(FInAppPurchaseQuery2Result&)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseQuery2Result, Broadcast, (const TArray<FOnlineProxyStoreOffer>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, opAssign, (const FInAppPurchaseRestoreResult2&), ERASE_ARGUMENT_PACK(FInAppPurchaseRestoreResult2&)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseRestoreResult2, Broadcast, (EInAppPurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInAppPurchaseResult2, opAssign, (const FInAppPurchaseResult2&), ERASE_ARGUMENT_PACK(FInAppPurchaseResult2&)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInAppPurchaseResult2, Broadcast, (EInAppPurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLeaderboardQueryResult, opAssign, (const FLeaderboardQueryResult&), ERASE_ARGUMENT_PACK(FLeaderboardQueryResult&)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLeaderboardQueryResult, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, opAssign, (const FOnLeaderboardFlushed&), ERASE_ARGUMENT_PACK(FOnLeaderboardFlushed&)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLeaderboardFlushed, Broadcast, (FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineConnectionResult, opAssign, (const FOnlineConnectionResult&), ERASE_ARGUMENT_PACK(FOnlineConnectionResult&)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineConnectionResult, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineLogoutResult, opAssign, (const FOnlineLogoutResult&), ERASE_ARGUMENT_PACK(FOnlineLogoutResult&)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineLogoutResult, Broadcast, (APlayerController), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, opAssign, (const FOnlineProxyInAppCheckoutResult&), ERASE_ARGUMENT_PACK(FOnlineProxyInAppCheckoutResult&)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppCheckoutResult, Broadcast, (EInAppPurchaseStatus, const FInAppPurchaseReceiptInfo2&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, opAssign, (const FOnlineProxyInAppReceiptsResult&), ERASE_ARGUMENT_PACK(FOnlineProxyInAppReceiptsResult&)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineProxyInAppReceiptsResult, Broadcast, (EInAppPurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, opAssign, (const FOnlineShowLoginUIResult&), ERASE_ARGUMENT_PACK(FOnlineShowLoginUIResult&)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineShowLoginUIResult, Broadcast, (APlayerController), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, opAssign, (const FOnlineTurnBasedMatchResult&), ERASE_ARGUMENT_PACK(FOnlineTurnBasedMatchResult&)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnlineTurnBasedMatchResult, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, opAssign, (const FOnNiagaraScriptCompilationComplete&), ERASE_ARGUMENT_PACK(FOnNiagaraScriptCompilationComplete&)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraScriptCompilationComplete, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, opAssign, (const FSequencerOutlinerSelectionChanged&), ERASE_ARGUMENT_PACK(FSequencerOutlinerSelectionChanged&)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSequencerOutlinerSelectionChanged, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, opAssign, (const FQueryFileStateDelegate__SourceControlHelpers&), ERASE_ARGUMENT_PACK(FQueryFileStateDelegate__SourceControlHelpers&)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, Execute, (FSourceControlState), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FQueryFileStateDelegate__SourceControlHelpers, ExecuteIfBound, (FSourceControlState), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, opAssign, (const FOnLevelSequenceLoaded__LevelSequenceActor&), ERASE_ARGUMENT_PACK(FOnLevelSequenceLoaded__LevelSequenceActor&)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequenceLoaded__LevelSequenceActor, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, opAssign, (const FOnLevelSequencePlayerCameraCutEvent&), ERASE_ARGUMENT_PACK(FOnLevelSequencePlayerCameraCutEvent&)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLevelSequencePlayerCameraCutEvent, Broadcast, (UCameraComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, opAssign, (const FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent&), ERASE_ARGUMENT_PACK(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent&)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMockDataMeshTrackerUpdated__MockDataMeshTrackerComponent, Broadcast, (int, const TArray<FVector>&, const TArray<int>&, const TArray<FVector>&, const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, opAssign, (const FGetHighlightTextDelegate&), ERASE_ARGUMENT_PACK(FGetHighlightTextDelegate&)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, Execute, (), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(FGetHighlightTextDelegate, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(FText)) },


{ ERASE_METHOD_PTR(FOnPropertyValueChanged, opAssign, (const FOnPropertyValueChanged&), ERASE_ARGUMENT_PACK(FOnPropertyValueChanged&)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPropertyValueChanged, Broadcast, (FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, opAssign, (const FFunctionalTestAISpawned&), ERASE_ARGUMENT_PACK(FFunctionalTestAISpawned&)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestAISpawned, Broadcast, (AAIController, APawn), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, opAssign, (const FFunctionalTestEventSignature&), ERASE_ARGUMENT_PACK(FFunctionalTestEventSignature&)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFunctionalTestEventSignature, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, opAssign, (const FEnhancedInputActionHandlerDynamicSignature&), ERASE_ARGUMENT_PACK(FEnhancedInputActionHandlerDynamicSignature&)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
*/