#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/AnimCurveTypes.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimationAsset.h"
#include "AlphaBlend.h"
#include "Animation/BlendProfile.h"
#include "Animation/AnimStateMachineTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "GameFramework/Pawn.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Animation/AnimNotifies/AnimNotify.h"
void FASRuntimeBind_10Module::Bind_AnimInstance()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Blueprint_GetMainAnimInstance", { ERASE_METHOD_PTR(UAnimInstance, Blueprint_GetMainAnimInstance, () const, ERASE_ARGUMENT_PACK( UAnimInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Blueprint_GetSlotMontageLocalWeight", { ERASE_METHOD_PTR(UAnimInstance, Blueprint_GetSlotMontageLocalWeight, (FName) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "ClearAllTransitionEvents", { ERASE_METHOD_PTR(UAnimInstance, ClearAllTransitionEvents, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "ClearMorphTargets", { ERASE_METHOD_PTR(UAnimInstance, ClearMorphTargets, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "ClearTransitionEvents", { ERASE_METHOD_PTR(UAnimInstance, ClearTransitionEvents, (const FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "DynamicMontage_IsPlayingFrom", { ERASE_METHOD_PTR(UAnimInstance, DynamicMontage_IsPlayingFrom, (const UAnimSequenceBase*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetActiveCurveNames", { ERASE_METHOD_PTR(UAnimInstance, GetActiveCurveNames, (EAnimCurveType,  TArray<FName>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetAllCurveNames", { ERASE_METHOD_PTR(UAnimInstance, GetAllCurveNames, (TArray<FName>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetCurrentActiveMontage", { ERASE_METHOD_PTR(UAnimInstance, GetCurrentActiveMontage, () const, ERASE_ARGUMENT_PACK( UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetCurrentStateName", { ERASE_METHOD_PTR(UAnimInstance, GetCurrentStateName, (int32), ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetCurveValue", { ERASE_METHOD_PTR(UAnimInstance, GetCurveValue, (FName) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetCurveValueWithDefault", { ERASE_METHOD_PTR(UAnimInstance, GetCurveValueWithDefault, (FName,  float,  float&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetDeltaSeconds", { ERASE_METHOD_PTR(UAnimInstance, GetDeltaSeconds, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceAssetPlayerLength", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerLength, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceAssetPlayerTime", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTime, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceAssetPlayerTimeFraction", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFraction, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceAssetPlayerTimeFromEnd", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFromEnd, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceAssetPlayerTimeFromEndFraction", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFromEndFraction, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceCurrentStateElapsedTime", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceCurrentStateElapsedTime, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceMachineWeight", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceMachineWeight, (int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceStateWeight", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceStateWeight, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceTransitionCrossfadeDuration", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionCrossfadeDuration, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceTransitionTimeElapsed", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionTimeElapsed, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetInstanceTransitionTimeElapsedFraction", { ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionTimeElapsedFraction, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetLinkedAnimGraphInstanceByTag", { ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimGraphInstanceByTag, (FName) const, ERASE_ARGUMENT_PACK( UAnimInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetLinkedAnimLayerInstanceByClass", { ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByClass, (TSubclassOf<UAnimInstance>,  bool) const, ERASE_ARGUMENT_PACK( UAnimInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetLinkedAnimLayerInstanceByGroup", { ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByGroup, (FName) const, ERASE_ARGUMENT_PACK( UAnimInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetLinkedAnimLayerInstanceByGroupAndClass", { ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByGroupAndClass, (FName,  TSubclassOf<UAnimInstance>) const, ERASE_ARGUMENT_PACK( UAnimInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetLinkedAnimLayerInstancesByGroup", { ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstancesByGroup, (FName,  TArray<UAnimInstance*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetOwningActor", { ERASE_METHOD_PTR(UAnimInstance, GetOwningActor, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetOwningComponent", { ERASE_METHOD_PTR(UAnimInstance, GetOwningComponent, () const, ERASE_ARGUMENT_PACK( USkeletalMeshComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetPropagateNotifiesToLinkedInstances", { ERASE_METHOD_PTR(UAnimInstance, GetPropagateNotifiesToLinkedInstances, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetReceiveNotifiesFromLinkedInstances", { ERASE_METHOD_PTR(UAnimInstance, GetReceiveNotifiesFromLinkedInstances, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetRelevantAnimLength", { ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimLength, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetRelevantAnimTime", { ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTime, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetRelevantAnimTimeFraction", { ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeFraction, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetRelevantAnimTimeRemaining", { ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeRemaining, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetRelevantAnimTimeRemainingFraction", { ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeRemainingFraction, (int32,  int32), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetSyncGroupPosition", { ERASE_METHOD_PTR(UAnimInstance, GetSyncGroupPosition, (FName) const, ERASE_ARGUMENT_PACK( FMarkerSyncAnimPosition )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "GetTimeToClosestMarker", { ERASE_METHOD_PTR(UAnimInstance, GetTimeToClosestMarker, (FName,  FName,  float&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "HasMarkerBeenHitThisFrame", { ERASE_METHOD_PTR(UAnimInstance, HasMarkerBeenHitThisFrame, (FName,  FName) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "IsAnyMontagePlaying", { ERASE_METHOD_PTR(UAnimInstance, IsAnyMontagePlaying, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "IsPlayingSlotAnimation", { ERASE_METHOD_PTR(UAnimInstance, IsPlayingSlotAnimation, (const UAnimSequenceBase*,  FName) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "IsSlotActive", { ERASE_METHOD_PTR(UAnimInstance, IsSlotActive, (FName) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "IsSyncGroupBetweenMarkers", { ERASE_METHOD_PTR(UAnimInstance, IsSyncGroupBetweenMarkers, (FName,  FName,  FName,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "IsUsingMainInstanceMontageEvaluationData", { ERASE_METHOD_PTR(UAnimInstance, IsUsingMainInstanceMontageEvaluationData, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "LinkAnimClassLayers", { ERASE_METHOD_PTR(UAnimInstance, LinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "LinkAnimGraphByTag", { ERASE_METHOD_PTR(UAnimInstance, LinkAnimGraphByTag, (FName,  TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetBlendTime", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetBlendTime, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetCurrentSection", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetCurrentSection, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetEffectivePlayRate", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetEffectivePlayRate, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetIsStopped", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetIsStopped, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetPlayRate", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetPlayRate, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_GetPosition", { ERASE_METHOD_PTR(UAnimInstance, Montage_GetPosition, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_IsActive", { ERASE_METHOD_PTR(UAnimInstance, Montage_IsActive, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_IsPlaying", { ERASE_METHOD_PTR(UAnimInstance, Montage_IsPlaying, (const UAnimMontage*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_JumpToSection", { ERASE_METHOD_PTR(UAnimInstance, Montage_JumpToSection, (FName,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_JumpToSectionsEnd", { ERASE_METHOD_PTR(UAnimInstance, Montage_JumpToSectionsEnd, (FName,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_Pause", { ERASE_METHOD_PTR(UAnimInstance, Montage_Pause, (const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_Play", { ERASE_METHOD_PTR(UAnimInstance, Montage_Play, (UAnimMontage*,  float,  EMontagePlayReturnType,  float,  bool), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_PlayWithBlendIn", { ERASE_METHOD_PTR(UAnimInstance, Montage_PlayWithBlendIn, (UAnimMontage*,  const FAlphaBlendArgs&,  float,  EMontagePlayReturnType,  float,  bool), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_PlayWithBlendSettings", { ERASE_METHOD_PTR(UAnimInstance, Montage_PlayWithBlendSettings, (UAnimMontage*,  const FMontageBlendSettings&,  float,  EMontagePlayReturnType,  float,  bool), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_Resume", { ERASE_METHOD_PTR(UAnimInstance, Montage_Resume, (const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_SetNextSection", { ERASE_METHOD_PTR(UAnimInstance, Montage_SetNextSection, (FName,  FName,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_SetPlayRate", { ERASE_METHOD_PTR(UAnimInstance, Montage_SetPlayRate, (const UAnimMontage*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_SetPosition", { ERASE_METHOD_PTR(UAnimInstance, Montage_SetPosition, (const UAnimMontage*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_Stop", { ERASE_METHOD_PTR(UAnimInstance, Montage_Stop, (float,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_StopGroupByName", { ERASE_METHOD_PTR(UAnimInstance, Montage_StopGroupByName, (float,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_StopWithBlendOut", { ERASE_METHOD_PTR(UAnimInstance, Montage_StopWithBlendOut, (const FAlphaBlendArgs&,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "Montage_StopWithBlendSettings", { ERASE_METHOD_PTR(UAnimInstance, Montage_StopWithBlendSettings, (const FMontageBlendSettings&,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "MontageSync_Follow", { ERASE_METHOD_PTR(UAnimInstance, MontageSync_Follow, (const UAnimMontage*,  const UAnimInstance*,  const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "MontageSync_StopFollowing", { ERASE_METHOD_PTR(UAnimInstance, MontageSync_StopFollowing, (const UAnimMontage*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "PlaySlotAnimationAsDynamicMontage", { ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage, (UAnimSequenceBase*,  FName,  float,  float,  float,  int32,  float,  float), ERASE_ARGUMENT_PACK( UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "PlaySlotAnimationAsDynamicMontage_WithBlendArgs", { ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage_WithBlendArgs, (UAnimSequenceBase*,  FName,  const FAlphaBlendArgs&,  const FAlphaBlendArgs&,  float,  int32,  float,  float), ERASE_ARGUMENT_PACK( UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "PlaySlotAnimationAsDynamicMontage_WithBlendSettings", { ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage_WithBlendSettings, (UAnimSequenceBase*,  FName,  const FMontageBlendSettings&,  const FMontageBlendSettings&,  float,  int32,  float,  float), ERASE_ARGUMENT_PACK( UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "QueryAndMarkTransitionEvent", { ERASE_METHOD_PTR(UAnimInstance, QueryAndMarkTransitionEvent, (int32,  int32,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "QueryTransitionEvent", { ERASE_METHOD_PTR(UAnimInstance, QueryTransitionEvent, (int32,  int32,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "RemovePoseSnapshot", { ERASE_METHOD_PTR(UAnimInstance, RemovePoseSnapshot, (FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "RequestSlotGroupInertialization", { ERASE_METHOD_PTR(UAnimInstance, RequestSlotGroupInertialization, (FName,  float,  const UBlendProfile*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "RequestTransitionEvent", { ERASE_METHOD_PTR(UAnimInstance, RequestTransitionEvent, (const FName,  const double,  const ETransitionRequestQueueMode,  const ETransitionRequestOverwriteMode), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "ResetDynamics", { ERASE_METHOD_PTR(UAnimInstance, ResetDynamics, (ETeleportType), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SavePoseSnapshot", { ERASE_METHOD_PTR(UAnimInstance, SavePoseSnapshot, (FName), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SetMorphTarget", { ERASE_METHOD_PTR(UAnimInstance, SetMorphTarget, (FName,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SetPropagateNotifiesToLinkedInstances", { ERASE_METHOD_PTR(UAnimInstance, SetPropagateNotifiesToLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SetReceiveNotifiesFromLinkedInstances", { ERASE_METHOD_PTR(UAnimInstance, SetReceiveNotifiesFromLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SetRootMotionMode", { ERASE_METHOD_PTR(UAnimInstance, SetRootMotionMode, (TEnumAsByte<ERootMotionMode::Type>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SetUseMainInstanceMontageEvaluationData", { ERASE_METHOD_PTR(UAnimInstance, SetUseMainInstanceMontageEvaluationData, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "SnapshotPose", { ERASE_METHOD_PTR(UAnimInstance, SnapshotPose, ( FPoseSnapshot&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "StopSlotAnimation", { ERASE_METHOD_PTR(UAnimInstance, StopSlotAnimation, (float,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "TryGetPawnOwner", { ERASE_METHOD_PTR(UAnimInstance, TryGetPawnOwner, () const, ERASE_ARGUMENT_PACK(  APawn* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "UnlinkAnimClassLayers", { ERASE_METHOD_PTR(UAnimInstance, UnlinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyNameTriggeredInAnyState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInAnyState, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyNameTriggeredInSourceState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInSourceState, (int32,  int32,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyNameTriggeredInStateMachine", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInStateMachine, (int32,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyStateActiveInAnyState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInAnyState, (TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyStateActiveInSourceState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInSourceState, (int32,  int32,  TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyStateActiveInStateMachine", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInStateMachine, (int32,  TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyTriggeredInAnyState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInAnyState, (TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyTriggeredInSourceState", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInSourceState, (int32,  int32,   TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimInstance::StaticClass(), "WasAnimNotifyTriggeredInStateMachine", { ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInStateMachine, (int32,  TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK( bool )) } );
}
