#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(FUintVector4, opAssign, (const FUintVector4&), ERASE_ARGUMENT_PACK(FUintVector4&)) },


{ ERASE_METHOD_PTR(FVector4d, opAssign, (const FVector4d&), ERASE_ARGUMENT_PACK(FVector4d&)) },


{ ERASE_METHOD_PTR(FFloatRK4SpringInterpolator, opAssign, (const FFloatRK4SpringInterpolator&), ERASE_ARGUMENT_PACK(FFloatRK4SpringInterpolator&)) },


{ ERASE_METHOD_PTR(FFormatArgumentData, opAssign, (const FFormatArgumentData&), ERASE_ARGUMENT_PACK(FFormatArgumentData&)) },


{ ERASE_METHOD_PTR(FVectorRK4SpringInterpolator, opAssign, (const FVectorRK4SpringInterpolator&), ERASE_ARGUMENT_PACK(FVectorRK4SpringInterpolator&)) },


{ ERASE_METHOD_PTR(FAnimDataModelNotifPayload, opAssign, (const FAnimDataModelNotifPayload&), ERASE_ARGUMENT_PACK(FAnimDataModelNotifPayload&)) },


{ ERASE_METHOD_PTR(FChaosBreakEvent, opAssign, (const FChaosBreakEvent&), ERASE_ARGUMENT_PACK(FChaosBreakEvent&)) },


{ ERASE_METHOD_PTR(FCollisionChaosEvent, opAssign, (const FCollisionChaosEvent&), ERASE_ARGUMENT_PACK(FCollisionChaosEvent&)) },


{ ERASE_METHOD_PTR(FCollisionChaosEventBodyInfo, opAssign, (const FCollisionChaosEventBodyInfo&), ERASE_ARGUMENT_PACK(FCollisionChaosEventBodyInfo&)) },


{ ERASE_METHOD_PTR(FChaosCrumblingEvent, opAssign, (const FChaosCrumblingEvent&), ERASE_ARGUMENT_PACK(FChaosCrumblingEvent&)) },


{ ERASE_METHOD_PTR(FKey, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsModifierKey, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsGamepadKey, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsTouch, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsMouseButton, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsAxis1D, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsAxis2D, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, IsAxis3D, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, GetDisplayName, (bool = true), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(FKey, GetKeyName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FKey, opEquals, (const FKey&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKey, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FKey, opAssign, (const FKey&), ERASE_ARGUMENT_PACK(FKey&)) },
{ ERASE_METHOD_PTR(FKey, SetKeyName, (const FName&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FHitResult, GetActor, (), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(FHitResult, GetbBlockingHit, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FHitResult, GetbStartPenetrating, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FHitResult, GetComponent, (), ERASE_ARGUMENT_PACK(UPrimitiveComponent*)) },
{ ERASE_METHOD_PTR(FHitResult, GetPhysMaterial, (), ERASE_ARGUMENT_PACK(UPhysicalMaterial*)) },
{ ERASE_METHOD_PTR(FHitResult, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, SetActor, (AActor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, SetbBlockingHit, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, SetBlockingHit, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, SetbStartPenetrating, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, SetComponent, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHitResult, opAssign, (const FHitResult&), ERASE_ARGUMENT_PACK(FHitResult&)) },


{ ERASE_METHOD_PTR(FActorInstanceHandle, opAssign, (const FActorInstanceHandle&), ERASE_ARGUMENT_PACK(FActorInstanceHandle&)) },


{ ERASE_METHOD_PTR(FVector_NetQuantize, opAssign, (const FVector_NetQuantize&), ERASE_ARGUMENT_PACK(FVector_NetQuantize&)) },


{ ERASE_METHOD_PTR(FVector_NetQuantizeNormal, opAssign, (const FVector_NetQuantizeNormal&), ERASE_ARGUMENT_PACK(FVector_NetQuantizeNormal&)) },


{ ERASE_METHOD_PTR(FSubtitleCue, opAssign, (const FSubtitleCue&), ERASE_ARGUMENT_PACK(FSubtitleCue&)) },


{ ERASE_METHOD_PTR(FChaosRemovalEvent, opAssign, (const FChaosRemovalEvent&), ERASE_ARGUMENT_PACK(FChaosRemovalEvent&)) },


{ ERASE_METHOD_PTR(FTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorComponentTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInterpControlPoint, opAssign, (const FInterpControlPoint&), ERASE_ARGUMENT_PACK(FInterpControlPoint&)) },


{ ERASE_METHOD_PTR(FDebugFloatHistory, opAssign, (const FDebugFloatHistory&), ERASE_ARGUMENT_PACK(FDebugFloatHistory&)) },


{ ERASE_METHOD_PTR(FBaseComponentReference, opAssign, (const FBaseComponentReference&), ERASE_ARGUMENT_PACK(FBaseComponentReference&)) },


{ ERASE_METHOD_PTR(FSoftComponentReference, opAssign, (const FSoftComponentReference&), ERASE_ARGUMENT_PACK(FSoftComponentReference&)) },


{ ERASE_METHOD_PTR(FComponentReference, GetComponent, (AActor), ERASE_ARGUMENT_PACK(UActorComponent*)) },
{ ERASE_METHOD_PTR(FComponentReference, opAssign, (const FComponentReference&), ERASE_ARGUMENT_PACK(FComponentReference&)) },


{ ERASE_METHOD_PTR(FLatentActionInfo, opAssign, (const FLatentActionInfo&), ERASE_ARGUMENT_PACK(FLatentActionInfo&)) },


{ ERASE_METHOD_PTR(FTimerHandle, opAssign, (const FTimerHandle&), ERASE_ARGUMENT_PACK(FTimerHandle&)) },


{ ERASE_METHOD_PTR(FCollisionProfileName, opAssign, (const FCollisionProfileName&), ERASE_ARGUMENT_PACK(FCollisionProfileName&)) },


{ ERASE_METHOD_PTR(FGenericStruct, opAssign, (const FGenericStruct&), ERASE_ARGUMENT_PACK(FGenericStruct&)) },


{ ERASE_METHOD_PTR(FUserActivity, opAssign, (const FUserActivity&), ERASE_ARGUMENT_PACK(FUserActivity&)) },


{ ERASE_METHOD_PTR(FFloatAnimationAttribute, opAssign, (const FFloatAnimationAttribute&), ERASE_ARGUMENT_PACK(FFloatAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FIntegerAnimationAttribute, opAssign, (const FIntegerAnimationAttribute&), ERASE_ARGUMENT_PACK(FIntegerAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FStringAnimationAttribute, opAssign, (const FStringAnimationAttribute&), ERASE_ARGUMENT_PACK(FStringAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FTransformAnimationAttribute, opAssign, (const FTransformAnimationAttribute&), ERASE_ARGUMENT_PACK(FTransformAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FVectorAnimationAttribute, opAssign, (const FVectorAnimationAttribute&), ERASE_ARGUMENT_PACK(FVectorAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FQuaternionAnimationAttribute, opAssign, (const FQuaternionAnimationAttribute&), ERASE_ARGUMENT_PACK(FQuaternionAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FScriptTypedElementHandle, opAssign, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle&)) },


{ ERASE_METHOD_PTR(FTypedElementSelectionOptions, opAssign, (const FTypedElementSelectionOptions&), ERASE_ARGUMENT_PACK(FTypedElementSelectionOptions&)) },


{ ERASE_METHOD_PTR(FTypedElementSelectionSetState, opAssign, (const FTypedElementSelectionSetState&), ERASE_ARGUMENT_PACK(FTypedElementSelectionSetState&)) },


{ ERASE_METHOD_PTR(FTypedElementIsSelectedOptions, opAssign, (const FTypedElementIsSelectedOptions&), ERASE_ARGUMENT_PACK(FTypedElementIsSelectedOptions&)) },


{ ERASE_METHOD_PTR(FToolMenuContext, opAssign, (const FToolMenuContext&), ERASE_ARGUMENT_PACK(FToolMenuContext&)) },


{ ERASE_METHOD_PTR(FGameplayResourceSet, opAssign, (const FGameplayResourceSet&), ERASE_ARGUMENT_PACK(FGameplayResourceSet&)) },


{ ERASE_METHOD_PTR(FActorPerceptionUpdateInfo, opAssign, (const FActorPerceptionUpdateInfo&), ERASE_ARGUMENT_PACK(FActorPerceptionUpdateInfo&)) },


{ ERASE_METHOD_PTR(FAIStimulus, opAssign, (const FAIStimulus&), ERASE_ARGUMENT_PACK(FAIStimulus&)) },
{ ERASE_METHOD_PTR(FAIStimulus, GetbSuccessfullySensed, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAIStimulus, SetbSuccessfullySensed, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAIRequestID, opAssign, (const FAIRequestID&), ERASE_ARGUMENT_PACK(FAIRequestID&)) },


{ ERASE_METHOD_PTR(FChaosPhysicsCollisionInfo, opAssign, (const FChaosPhysicsCollisionInfo&), ERASE_ARGUMENT_PACK(FChaosPhysicsCollisionInfo&)) },


{ ERASE_METHOD_PTR(FChaosBreakingEventData, opAssign, (const FChaosBreakingEventData&), ERASE_ARGUMENT_PACK(FChaosBreakingEventData&)) },


{ ERASE_METHOD_PTR(FChaosCollisionEventData, opAssign, (const FChaosCollisionEventData&), ERASE_ARGUMENT_PACK(FChaosCollisionEventData&)) },


{ ERASE_METHOD_PTR(FChaosRemovalEventData, opAssign, (const FChaosRemovalEventData&), ERASE_ARGUMENT_PACK(FChaosRemovalEventData&)) },


{ ERASE_METHOD_PTR(FChaosTrailingEventData, opAssign, (const FChaosTrailingEventData&), ERASE_ARGUMENT_PACK(FChaosTrailingEventData&)) },


{ ERASE_METHOD_PTR(FBodyInstanceAsyncPhysicsTickHandle, opAssign, (const FBodyInstanceAsyncPhysicsTickHandle&), ERASE_ARGUMENT_PACK(FBodyInstanceAsyncPhysicsTickHandle&)) },


{ ERASE_METHOD_PTR(FWalkableSlopeOverride, opAssign, (const FWalkableSlopeOverride&), ERASE_ARGUMENT_PACK(FWalkableSlopeOverride&)) },


{ ERASE_METHOD_PTR(FBodyInstanceCore, opAssign, (const FBodyInstanceCore&), ERASE_ARGUMENT_PACK(FBodyInstanceCore&)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbSimulatePhysics, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbSimulatePhysics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbOverrideMass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbEnableGravity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbEnableGravity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbUpdateKinematicFromSimulation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbUpdateKinematicFromSimulation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbAutoWeld, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbAutoWeld, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbStartAwake, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbStartAwake, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbGenerateWakeEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbGenerateWakeEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, GetbUpdateMassWhenScaleChanges, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstanceCore, SetbUpdateMassWhenScaleChanges, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBodyInstance, GetBodySetup, (), ERASE_ARGUMENT_PACK(UBodySetup*)) },
{ ERASE_METHOD_PTR(FBodyInstance, Weld, (FBodyInstance&, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, UnWeld, (FBodyInstance&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetUseCCD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbUseCCD, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbUseCCD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbUseMACD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbIgnoreAnalyticCollisions, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbIgnoreAnalyticCollisions, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbNotifyRigidBodyCollision, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbNotifyRigidBodyCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbSmoothEdgeCollisions, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbSmoothEdgeCollisions, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockTranslation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockRotation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockXTranslation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockYTranslation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockZTranslation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockXRotation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockYRotation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbLockZRotation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOverrideMaxAngularVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOverrideMaxDepenetrationVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOverrideWalkableSlopeOnInstance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbInertiaConditioning, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbInertiaConditioning, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbOneWayInteraction, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOneWayInteraction, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbOverrideSolverAsyncDeltaTime, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOverrideSolverAsyncDeltaTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbSimulatePhysics, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbSimulatePhysics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbOverrideMass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbEnableGravity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbEnableGravity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbUpdateKinematicFromSimulation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbUpdateKinematicFromSimulation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbAutoWeld, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbAutoWeld, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbStartAwake, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbStartAwake, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbGenerateWakeEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbGenerateWakeEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBodyInstance, GetbUpdateMassWhenScaleChanges, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBodyInstance, SetbUpdateMassWhenScaleChanges, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCollisionResponse, opAssign, (const FCollisionResponse&), ERASE_ARGUMENT_PACK(FCollisionResponse&)) },


{ ERASE_METHOD_PTR(FResponseChannel, opAssign, (const FResponseChannel&), ERASE_ARGUMENT_PACK(FResponseChannel&)) },


{ ERASE_METHOD_PTR(FCollisionResponseContainer, SetResponse, (ECollisionChannel, ECollisionResponse), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionResponseContainer, SetAllChannels, (ECollisionResponse), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionResponseContainer, ReplaceChannels, (ECollisionResponse, ECollisionResponse), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionResponseContainer, GetResponse, (ECollisionChannel), ERASE_ARGUMENT_PACK(ECollisionResponse)) },
{ ERASE_METHOD_PTR(FCollisionResponseContainer, opEquals, (const FCollisionResponseContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionResponseContainer, opAssign, (const FCollisionResponseContainer&), ERASE_ARGUMENT_PACK(FCollisionResponseContainer&)) },


{ ERASE_METHOD_PTR(FCustomPrimitiveData, opAssign, (const FCustomPrimitiveData&), ERASE_ARGUMENT_PACK(FCustomPrimitiveData&)) },


{ ERASE_METHOD_PTR(FLightingChannels, opAssign, (const FLightingChannels&), ERASE_ARGUMENT_PACK(FLightingChannels&)) },
{ ERASE_METHOD_PTR(FLightingChannels, GetbChannel0, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightingChannels, SetbChannel0, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightingChannels, GetbChannel1, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightingChannels, SetbChannel1, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightingChannels, GetbChannel2, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightingChannels, SetbChannel2, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGeometryCollectionDamagePropagationData, opAssign, (const FGeometryCollectionDamagePropagationData&), ERASE_ARGUMENT_PACK(FGeometryCollectionDamagePropagationData&)) },


{ ERASE_METHOD_PTR(FGeomComponentCacheParameters, opAssign, (const FGeomComponentCacheParameters&), ERASE_ARGUMENT_PACK(FGeomComponentCacheParameters&)) },


{ ERASE_METHOD_PTR(FGeometry, GetLocalSize, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FGeometry, GetAbsoluteSize, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FGeometry, AbsoluteToLocal, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FGeometry, LocalToAbsolute, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FGeometry, MakeChild, (const FVector2D&, const FVector2D&), ERASE_ARGUMENT_PACK(FGeometry)) },
{ ERASE_METHOD_PTR(FGeometry, opAssign, (const FGeometry&), ERASE_ARGUMENT_PACK(FGeometry&)) },


{ ERASE_METHOD_PTR(FSlateBrush, opAssign, (const FSlateBrush&), ERASE_ARGUMENT_PACK(FSlateBrush&)) },


{ ERASE_METHOD_PTR(FSlateBrushOutlineSettings, opAssign, (const FSlateBrushOutlineSettings&), ERASE_ARGUMENT_PACK(FSlateBrushOutlineSettings&)) },


{ ERASE_METHOD_PTR(FSlateColor, opAssign, (const FSlateColor&), ERASE_ARGUMENT_PACK(FSlateColor&)) },


{ ERASE_METHOD_PTR(FMargin, opMul, (float32), ERASE_ARGUMENT_PACK(FMargin)) },
{ ERASE_METHOD_PTR(FMargin, opMul, (const FMargin&), ERASE_ARGUMENT_PACK(FMargin)) },
{ ERASE_METHOD_PTR(FMargin, opAdd, (const FMargin&), ERASE_ARGUMENT_PACK(FMargin)) },
{ ERASE_METHOD_PTR(FMargin, opSub, (const FMargin&), ERASE_ARGUMENT_PACK(FMargin)) },
{ ERASE_METHOD_PTR(FMargin, opEquals, (const FMargin&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMargin, GetTopLeft, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FMargin, GetDesiredSize, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FMargin, GetTotalSpaceAlongHorizontal, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FMargin, GetTotalSpaceAlongVertical, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FMargin, opAssign, (const FMargin&), ERASE_ARGUMENT_PACK(FMargin&)) },


{ ERASE_METHOD_PTR(FDeprecateSlateVector2D, opAssign, (const FDeprecateSlateVector2D&), ERASE_ARGUMENT_PACK(FDeprecateSlateVector2D&)) },


{ ERASE_METHOD_PTR(FFieldNotificationId, opAssign, (const FFieldNotificationId&), ERASE_ARGUMENT_PACK(FFieldNotificationId&)) },


{ ERASE_METHOD_PTR(FEventReply, PreventThrottling, (), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, SetUserFocus, (UWidget, EFocusCause = EFocusCause :: SetDirectly, bool = false), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, ClearUserFocus, (bool = false), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, CaptureMouse, (UWidget), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, UseHighPrecisionMouseMovement, (UWidget), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, ReleaseMouseCapture, (), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, LockMouseToWidget, (UWidget), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, ReleaseMouseLock, (), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, SetMousePos, (const FIntPoint&), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, SetNavigation, (EUINavigation, ENavigationGenesis, ENavigationSource = ENavigationSource :: FocusedWidget), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, SetNavigation, (UWidget, ENavigationGenesis, ENavigationSource = ENavigationSource :: FocusedWidget), ERASE_ARGUMENT_PACK(FEventReply&)) },
{ ERASE_METHOD_PTR(FEventReply, opAssign, (const FEventReply&), ERASE_ARGUMENT_PACK(FEventReply&)) },


{ ERASE_METHOD_PTR(FInputEvent, opAssign, (const FInputEvent&), ERASE_ARGUMENT_PACK(FInputEvent&)) },


{ ERASE_METHOD_PTR(FPointerEvent, IsRepeat, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsLeftShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsRightShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsLeftControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsRightControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsLeftAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsRightAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsLeftCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsRightCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, AreCapsLocked, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetUserIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetPlatformUserid, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetInputDeviceId, (), ERASE_ARGUMENT_PACK(FInputDeviceId)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetScreenSpacePosition, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetLastScreenSpacePosition, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetCursorDelta, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetGestureDelta, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsMouseButtonDown, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetEffectingButton, (), ERASE_ARGUMENT_PACK(FKey)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetWheelDelta, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetPointerIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetTouchpadIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FPointerEvent, GetTouchForce, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsTouchEvent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsTouchForceChangedEvent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsTouchFirstMoveEvent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, IsDirectionInvertedFromDevice, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPointerEvent, opAssign, (const FPointerEvent&), ERASE_ARGUMENT_PACK(FPointerEvent&)) },


{ ERASE_METHOD_PTR(FWidgetTransform, opAssign, (const FWidgetTransform&), ERASE_ARGUMENT_PACK(FWidgetTransform&)) },


{ ERASE_METHOD_PTR(FScrollBarStyle, opAssign, (const FScrollBarStyle&), ERASE_ARGUMENT_PACK(FScrollBarStyle&)) },


{ ERASE_METHOD_PTR(FTableRowStyle, opAssign, (const FTableRowStyle&), ERASE_ARGUMENT_PACK(FTableRowStyle&)) },


{ ERASE_METHOD_PTR(FComboBoxStyle, opAssign, (const FComboBoxStyle&), ERASE_ARGUMENT_PACK(FComboBoxStyle&)) },


{ ERASE_METHOD_PTR(FSlateSound, opAssign, (const FSlateSound&), ERASE_ARGUMENT_PACK(FSlateSound&)) },


{ ERASE_METHOD_PTR(FComboButtonStyle, opAssign, (const FComboButtonStyle&), ERASE_ARGUMENT_PACK(FComboButtonStyle&)) },


{ ERASE_METHOD_PTR(FButtonStyle, opAssign, (const FButtonStyle&), ERASE_ARGUMENT_PACK(FButtonStyle&)) },


{ ERASE_METHOD_PTR(FSlateFontInfo, opAssign, (const FSlateFontInfo&), ERASE_ARGUMENT_PACK(FSlateFontInfo&)) },


{ ERASE_METHOD_PTR(FFontOutlineSettings, opAssign, (const FFontOutlineSettings&), ERASE_ARGUMENT_PACK(FFontOutlineSettings&)) },


{ ERASE_METHOD_PTR(FShapedTextOptions, opAssign, (const FShapedTextOptions&), ERASE_ARGUMENT_PACK(FShapedTextOptions&)) },
{ ERASE_METHOD_PTR(FShapedTextOptions, SetbOverride_TextShapingMethod, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FShapedTextOptions, SetbOverride_TextFlowDirection, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FVirtualKeyboardOptions, opAssign, (const FVirtualKeyboardOptions&), ERASE_ARGUMENT_PACK(FVirtualKeyboardOptions&)) },


{ ERASE_METHOD_PTR(FEditableTextStyle, opAssign, (const FEditableTextStyle&), ERASE_ARGUMENT_PACK(FEditableTextStyle&)) },


{ ERASE_METHOD_PTR(FEditableTextBoxStyle, opAssign, (const FEditableTextBoxStyle&), ERASE_ARGUMENT_PACK(FEditableTextBoxStyle&)) },


{ ERASE_METHOD_PTR(FTextBlockStyle, opAssign, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK(FTextBlockStyle&)) },


{ ERASE_METHOD_PTR(FInputChord, opAssign, (const FInputChord&), ERASE_ARGUMENT_PACK(FInputChord&)) },
{ ERASE_METHOD_PTR(FInputChord, GetbShift, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputChord, SetbShift, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputChord, GetbCtrl, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputChord, SetbCtrl, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputChord, GetbAlt, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputChord, SetbAlt, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputChord, GetbCmd, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputChord, SetbCmd, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSpinBoxStyle, opAssign, (const FSpinBoxStyle&), ERASE_ARGUMENT_PACK(FSpinBoxStyle&)) },


{ ERASE_METHOD_PTR(FPaintContext, GetAllottedGeometry, (), ERASE_ARGUMENT_PACK(const FGeometry&)) },
{ ERASE_METHOD_PTR(FPaintContext, GetStyleColor, (const FName&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FPaintContext, GetStyleBrush, (const FName&), ERASE_ARGUMENT_PACK(const FSlateBrush&)) },
{ ERASE_METHOD_PTR(FPaintContext, GetStyleFont, (int), ERASE_ARGUMENT_PACK(FSlateFontInfo)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawBox, (const FVector2D&, const FVector2D&, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawBox, (const FVector2D&, const FVector2D&, const FName&, const FLinearColor& = FLinearColor :: White), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawBox, (const FVector2D&, const FVector2D&, const FSlateBrush&, const FLinearColor& = FLinearColor :: White), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawBox, (const FVector2D&, const FVector2D&, USlateBrushAsset, const FLinearColor& = FLinearColor :: White), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawLine, (const FVector2D&, const FVector2D&, const FLinearColor&, float32 = 1.f, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawLines, (const TArray<FVector2D>&, const FLinearColor&, float32 = 1.f, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawText, (const FString&, const FVector2D&, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, DrawText, (const FSlateFontInfo&, const FString&, const FVector2D&, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPaintContext, opAssign, (const FPaintContext&), ERASE_ARGUMENT_PACK(FPaintContext&)) },


{ ERASE_METHOD_PTR(FCharacterEvent, IsRepeat, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsLeftShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsRightShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsLeftControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsRightControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsLeftAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsRightAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsLeftCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, IsRightCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, AreCapsLocked, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCharacterEvent, GetUserIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FCharacterEvent, GetPlatformUserid, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(FCharacterEvent, GetInputDeviceId, (), ERASE_ARGUMENT_PACK(FInputDeviceId)) },
{ ERASE_METHOD_PTR(FCharacterEvent, GetCharacter, (), ERASE_ARGUMENT_PACK(uint3216)) },
{ ERASE_METHOD_PTR(FCharacterEvent, GetString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FCharacterEvent, opAssign, (const FCharacterEvent&), ERASE_ARGUMENT_PACK(FCharacterEvent&)) },


{ ERASE_METHOD_PTR(FKeyEvent, IsRepeat, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsLeftShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsRightShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsLeftControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsRightControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsLeftAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsRightAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsLeftCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, IsRightCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, AreCapsLocked, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetUserIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetPlatformUserid, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetInputDeviceId, (), ERASE_ARGUMENT_PACK(FInputDeviceId)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetKey, (), ERASE_ARGUMENT_PACK(FKey)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetCharacter, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FKeyEvent, GetKeyCode, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FKeyEvent, opAssign, (const FKeyEvent&), ERASE_ARGUMENT_PACK(FKeyEvent&)) },


{ ERASE_METHOD_PTR(FNavigationEvent, IsRepeat, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsLeftShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsRightShiftDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsLeftControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsRightControlDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsLeftAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsRightAltDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsLeftCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, IsRightCommandDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, AreCapsLocked, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavigationEvent, GetUserIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FNavigationEvent, GetPlatformUserid, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(FNavigationEvent, GetInputDeviceId, (), ERASE_ARGUMENT_PACK(FInputDeviceId)) },
{ ERASE_METHOD_PTR(FNavigationEvent, GetNavigationType, (), ERASE_ARGUMENT_PACK(EUINavigation)) },
{ ERASE_METHOD_PTR(FNavigationEvent, GetNavigationGenesis, (), ERASE_ARGUMENT_PACK(ENavigationGenesis)) },
{ ERASE_METHOD_PTR(FNavigationEvent, opAssign, (const FNavigationEvent&), ERASE_ARGUMENT_PACK(FNavigationEvent&)) },


{ ERASE_METHOD_PTR(FAnalogInputEvent, GetAnalogValue, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, GetUserIndex, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, GetPlatformUserid, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, GetInputDeviceId, (), ERASE_ARGUMENT_PACK(FInputDeviceId)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, GetKey, (), ERASE_ARGUMENT_PACK(FKey)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, GetKeyCode, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FAnalogInputEvent, opAssign, (const FAnalogInputEvent&), ERASE_ARGUMENT_PACK(FAnalogInputEvent&)) },


{ ERASE_METHOD_PTR(FAssetRenameData, opAssign, (const FAssetRenameData&), ERASE_ARGUMENT_PACK(FAssetRenameData&)) },


{ ERASE_METHOD_PTR(FAudioOutputDeviceInfo, opAssign, (const FAudioOutputDeviceInfo&), ERASE_ARGUMENT_PACK(FAudioOutputDeviceInfo&)) },
{ ERASE_METHOD_PTR(FAudioOutputDeviceInfo, GetbIsSystemDefault, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAudioOutputDeviceInfo, GetbIsCurrentDevice, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FSwapAudioOutputResult, opAssign, (const FSwapAudioOutputResult&), ERASE_ARGUMENT_PACK(FSwapAudioOutputResult&)) },


{ ERASE_METHOD_PTR(FBlueprintSessionResult, opAssign, (const FBlueprintSessionResult&), ERASE_ARGUMENT_PACK(FBlueprintSessionResult&)) },


{ ERASE_METHOD_PTR(FOnlineProxyStoreOffer, opAssign, (const FOnlineProxyStoreOffer&), ERASE_ARGUMENT_PACK(FOnlineProxyStoreOffer&)) },


{ ERASE_METHOD_PTR(FInAppPurchaseRestoreInfo2, opAssign, (const FInAppPurchaseRestoreInfo2&), ERASE_ARGUMENT_PACK(FInAppPurchaseRestoreInfo2&)) },


{ ERASE_METHOD_PTR(FInAppPurchaseReceiptInfo2, opAssign, (const FInAppPurchaseReceiptInfo2&), ERASE_ARGUMENT_PACK(FInAppPurchaseReceiptInfo2&)) },


{ ERASE_METHOD_PTR(FFontSdfSettings, opAssign, (const FFontSdfSettings&), ERASE_ARGUMENT_PACK(FFontSdfSettings&)) },


{ ERASE_METHOD_PTR(FCompositeFont, opAssign, (const FCompositeFont&), ERASE_ARGUMENT_PACK(FCompositeFont&)) },


{ ERASE_METHOD_PTR(FFocusEvent, GetCause, (), ERASE_ARGUMENT_PACK(EFocusCause)) },
{ ERASE_METHOD_PTR(FFocusEvent, GetUser, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FFocusEvent, opAssign, (const FFocusEvent&), ERASE_ARGUMENT_PACK(FFocusEvent&)) },


{ ERASE_METHOD_PTR(FCaptureLostEvent, opAssign, (const FCaptureLostEvent&), ERASE_ARGUMENT_PACK(FCaptureLostEvent&)) },


{ ERASE_METHOD_PTR(FMotionEvent, opAssign, (const FMotionEvent&), ERASE_ARGUMENT_PACK(FMotionEvent&)) },


{ ERASE_METHOD_PTR(FSegmentedControlStyle, opAssign, (const FSegmentedControlStyle&), ERASE_ARGUMENT_PACK(FSegmentedControlStyle&)) },


{ ERASE_METHOD_PTR(FCheckBoxStyle, opAssign, (const FCheckBoxStyle&), ERASE_ARGUMENT_PACK(FCheckBoxStyle&)) },


{ ERASE_METHOD_PTR(FHyperlinkStyle, opAssign, (const FHyperlinkStyle&), ERASE_ARGUMENT_PACK(FHyperlinkStyle&)) },


{ ERASE_METHOD_PTR(FInlineEditableTextBlockStyle, opAssign, (const FInlineEditableTextBlockStyle&), ERASE_ARGUMENT_PACK(FInlineEditableTextBlockStyle&)) },


{ ERASE_METHOD_PTR(FProgressBarStyle, opAssign, (const FProgressBarStyle&), ERASE_ARGUMENT_PACK(FProgressBarStyle&)) },


{ ERASE_METHOD_PTR(FExpandableAreaStyle, opAssign, (const FExpandableAreaStyle&), ERASE_ARGUMENT_PACK(FExpandableAreaStyle&)) },


{ ERASE_METHOD_PTR(FSearchBoxStyle, opAssign, (const FSearchBoxStyle&), ERASE_ARGUMENT_PACK(FSearchBoxStyle&)) },


{ ERASE_METHOD_PTR(FSliderStyle, opAssign, (const FSliderStyle&), ERASE_ARGUMENT_PACK(FSliderStyle&)) },


{ ERASE_METHOD_PTR(FVolumeControlStyle, opAssign, (const FVolumeControlStyle&), ERASE_ARGUMENT_PACK(FVolumeControlStyle&)) },


{ ERASE_METHOD_PTR(FInlineTextImageStyle, opAssign, (const FInlineTextImageStyle&), ERASE_ARGUMENT_PACK(FInlineTextImageStyle&)) },


{ ERASE_METHOD_PTR(FSplitterStyle, opAssign, (const FSplitterStyle&), ERASE_ARGUMENT_PACK(FSplitterStyle&)) },


{ ERASE_METHOD_PTR(FTableViewStyle, opAssign, (const FTableViewStyle&), ERASE_ARGUMENT_PACK(FTableViewStyle&)) },


{ ERASE_METHOD_PTR(FTableColumnHeaderStyle, opAssign, (const FTableColumnHeaderStyle&), ERASE_ARGUMENT_PACK(FTableColumnHeaderStyle&)) },


{ ERASE_METHOD_PTR(FHeaderRowStyle, opAssign, (const FHeaderRowStyle&), ERASE_ARGUMENT_PACK(FHeaderRowStyle&)) },


{ ERASE_METHOD_PTR(FDockTabStyle, opAssign, (const FDockTabStyle&), ERASE_ARGUMENT_PACK(FDockTabStyle&)) },


{ ERASE_METHOD_PTR(FScrollBoxStyle, opAssign, (const FScrollBoxStyle&), ERASE_ARGUMENT_PACK(FScrollBoxStyle&)) },


{ ERASE_METHOD_PTR(FScrollBorderStyle, opAssign, (const FScrollBorderStyle&), ERASE_ARGUMENT_PACK(FScrollBorderStyle&)) },


{ ERASE_METHOD_PTR(FWindowStyle, opAssign, (const FWindowStyle&), ERASE_ARGUMENT_PACK(FWindowStyle&)) },


{ ERASE_METHOD_PTR(FStyleColorList, opAssign, (const FStyleColorList&), ERASE_ARGUMENT_PACK(FStyleColorList&)) },


{ ERASE_METHOD_PTR(FToolBarStyle, opAssign, (const FToolBarStyle&), ERASE_ARGUMENT_PACK(FToolBarStyle&)) },


{ ERASE_METHOD_PTR(FAnchors, opEquals, (const FAnchors&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnchors, IsStretchedVertical, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnchors, IsStretchedHorizontal, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnchors, opAssign, (const FAnchors&), ERASE_ARGUMENT_PACK(FAnchors&)) },


{ ERASE_METHOD_PTR(FCharRange, opAssign, (const FCharRange&), ERASE_ARGUMENT_PACK(FCharRange&)) },


{ ERASE_METHOD_PTR(FCharRangeList, opAssign, (const FCharRangeList&), ERASE_ARGUMENT_PACK(FCharRangeList&)) },


{ ERASE_METHOD_PTR(FScriptTypedElementListProxy, opAssign, (const FScriptTypedElementListProxy&), ERASE_ARGUMENT_PACK(FScriptTypedElementListProxy&)) },


{ ERASE_METHOD_PTR(FTypedElementSelectionNormalizationOptions, opAssign, (const FTypedElementSelectionNormalizationOptions&), ERASE_ARGUMENT_PACK(FTypedElementSelectionNormalizationOptions&)) },


{ ERASE_METHOD_PTR(FMaterialQualityOverrides, opAssign, (const FMaterialQualityOverrides&), ERASE_ARGUMENT_PACK(FMaterialQualityOverrides&)) },


{ ERASE_METHOD_PTR(FUniversalObjectLocator, opAssign, (const FUniversalObjectLocator&), ERASE_ARGUMENT_PACK(FUniversalObjectLocator&)) },


{ ERASE_METHOD_PTR(FUniversalObjectLocatorFragment, opAssign, (const FUniversalObjectLocatorFragment&), ERASE_ARGUMENT_PACK(FUniversalObjectLocatorFragment&)) },


{ ERASE_METHOD_PTR(FPerPlatformSettings, opAssign, (const FPerPlatformSettings&), ERASE_ARGUMENT_PACK(FPerPlatformSettings&)) },


{ ERASE_METHOD_PTR(FProjectBuildSettings, opAssign, (const FProjectBuildSettings&), ERASE_ARGUMENT_PACK(FProjectBuildSettings&)) },


{ ERASE_METHOD_PTR(FSharedImageConstRefBlueprint, opAssign, (const FSharedImageConstRefBlueprint&), ERASE_ARGUMENT_PACK(FSharedImageConstRefBlueprint&)) },


{ ERASE_METHOD_PTR(FJsonObjectWrapper, opAssign, (const FJsonObjectWrapper&), ERASE_ARGUMENT_PACK(FJsonObjectWrapper&)) },


{ ERASE_METHOD_PTR(FTagAndValue, opAssign, (const FTagAndValue&), ERASE_ARGUMENT_PACK(FTagAndValue&)) },


{ ERASE_METHOD_PTR(FAssetRegistryDependencyOptions, opAssign, (const FAssetRegistryDependencyOptions&), ERASE_ARGUMENT_PACK(FAssetRegistryDependencyOptions&)) },


{ ERASE_METHOD_PTR(FEngineServicePong, opAssign, (const FEngineServicePong&), ERASE_ARGUMENT_PACK(FEngineServicePong&)) },


{ ERASE_METHOD_PTR(FEngineServiceAuthDeny, opAssign, (const FEngineServiceAuthDeny&), ERASE_ARGUMENT_PACK(FEngineServiceAuthDeny&)) },


{ ERASE_METHOD_PTR(FEngineServiceAuthGrant, opAssign, (const FEngineServiceAuthGrant&), ERASE_ARGUMENT_PACK(FEngineServiceAuthGrant&)) },


{ ERASE_METHOD_PTR(FEngineServiceExecuteCommand, opAssign, (const FEngineServiceExecuteCommand&), ERASE_ARGUMENT_PACK(FEngineServiceExecuteCommand&)) },


{ ERASE_METHOD_PTR(FEngineServiceTerminate, opAssign, (const FEngineServiceTerminate&), ERASE_ARGUMENT_PACK(FEngineServiceTerminate&)) },


{ ERASE_METHOD_PTR(FEngineServiceNotification, opAssign, (const FEngineServiceNotification&), ERASE_ARGUMENT_PACK(FEngineServiceNotification&)) },


{ ERASE_METHOD_PTR(FAutoCompleteCommand, opAssign, (const FAutoCompleteCommand&), ERASE_ARGUMENT_PACK(FAutoCompleteCommand&)) },


{ ERASE_METHOD_PTR(FGameModeName, opAssign, (const FGameModeName&), ERASE_ARGUMENT_PACK(FGameModeName&)) },


{ ERASE_METHOD_PTR(FTemplateMapInfoOverride, opAssign, (const FTemplateMapInfoOverride&), ERASE_ARGUMENT_PACK(FTemplateMapInfoOverride&)) },


{ ERASE_METHOD_PTR(FPlatformRuntimeAudioCompressionOverrides, opAssign, (const FPlatformRuntimeAudioCompressionOverrides&), ERASE_ARGUMENT_PACK(FPlatformRuntimeAudioCompressionOverrides&)) },


{ ERASE_METHOD_PTR(FElementID, opAssign, (const FElementID&), ERASE_ARGUMENT_PACK(FElementID&)) },


{ ERASE_METHOD_PTR(FVertexID, opAssign, (const FVertexID&), ERASE_ARGUMENT_PACK(FVertexID&)) },


{ ERASE_METHOD_PTR(FVertexInstanceID, opAssign, (const FVertexInstanceID&), ERASE_ARGUMENT_PACK(FVertexInstanceID&)) },


{ ERASE_METHOD_PTR(FEdgeID, opAssign, (const FEdgeID&), ERASE_ARGUMENT_PACK(FEdgeID&)) },


{ ERASE_METHOD_PTR(FUVID, opAssign, (const FUVID&), ERASE_ARGUMENT_PACK(FUVID&)) },


{ ERASE_METHOD_PTR(FTriangleID, opAssign, (const FTriangleID&), ERASE_ARGUMENT_PACK(FTriangleID&)) },


{ ERASE_METHOD_PTR(FPolygonGroupID, opAssign, (const FPolygonGroupID&), ERASE_ARGUMENT_PACK(FPolygonGroupID&)) },


{ ERASE_METHOD_PTR(FPolygonID, opAssign, (const FPolygonID&), ERASE_ARGUMENT_PACK(FPolygonID&)) },


{ ERASE_METHOD_PTR(FUVMapSettings, opAssign, (const FUVMapSettings&), ERASE_ARGUMENT_PACK(FUVMapSettings&)) },


{ ERASE_METHOD_PTR(FBoneID, opAssign, (const FBoneID&), ERASE_ARGUMENT_PACK(FBoneID&)) },


{ ERASE_METHOD_PTR(FSourceGeometryPartID, opAssign, (const FSourceGeometryPartID&), ERASE_ARGUMENT_PACK(FSourceGeometryPartID&)) },


{ ERASE_METHOD_PTR(FChaosVDContactPoint, opAssign, (const FChaosVDContactPoint&), ERASE_ARGUMENT_PACK(FChaosVDContactPoint&)) },


{ ERASE_METHOD_PTR(FChaosVDManifoldPoint, opAssign, (const FChaosVDManifoldPoint&), ERASE_ARGUMENT_PACK(FChaosVDManifoldPoint&)) },


{ ERASE_METHOD_PTR(FChaosVDCollisionMaterial, opAssign, (const FChaosVDCollisionMaterial&), ERASE_ARGUMENT_PACK(FChaosVDCollisionMaterial&)) },


{ ERASE_METHOD_PTR(FChaosVDConstraint, opAssign, (const FChaosVDConstraint&), ERASE_ARGUMENT_PACK(FChaosVDConstraint&)) },


{ ERASE_METHOD_PTR(FChaosVDParticlePairMidPhase, opAssign, (const FChaosVDParticlePairMidPhase&), ERASE_ARGUMENT_PACK(FChaosVDParticlePairMidPhase&)) },


{ ERASE_METHOD_PTR(FChaosVDCollisionFilterData, opAssign, (const FChaosVDCollisionFilterData&), ERASE_ARGUMENT_PACK(FChaosVDCollisionFilterData&)) },


{ ERASE_METHOD_PTR(FChaosVDShapeCollisionData, opAssign, (const FChaosVDShapeCollisionData&), ERASE_ARGUMENT_PACK(FChaosVDShapeCollisionData&)) },


{ ERASE_METHOD_PTR(FChaosVDJointStateDataWrapper, opAssign, (const FChaosVDJointStateDataWrapper&), ERASE_ARGUMENT_PACK(FChaosVDJointStateDataWrapper&)) },


{ ERASE_METHOD_PTR(FChaosVDJointSolverSettingsDataWrapper, opAssign, (const FChaosVDJointSolverSettingsDataWrapper&), ERASE_ARGUMENT_PACK(FChaosVDJointSolverSettingsDataWrapper&)) },


{ ERASE_METHOD_PTR(FChaosVDJointSettingsDataWrapper, opAssign, (const FChaosVDJointSettingsDataWrapper&), ERASE_ARGUMENT_PACK(FChaosVDJointSettingsDataWrapper&)) },


{ ERASE_METHOD_PTR(FChaosVDJointConstraint, opAssign, (const FChaosVDJointConstraint&), ERASE_ARGUMENT_PACK(FChaosVDJointConstraint&)) },


{ ERASE_METHOD_PTR(FChaosVDFRigidParticleControlFlags, opAssign, (const FChaosVDFRigidParticleControlFlags&), ERASE_ARGUMENT_PACK(FChaosVDFRigidParticleControlFlags&)) },


{ ERASE_METHOD_PTR(FChaosVDParticlePositionRotation, opAssign, (const FChaosVDParticlePositionRotation&), ERASE_ARGUMENT_PACK(FChaosVDParticlePositionRotation&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleVelocities, opAssign, (const FChaosVDParticleVelocities&), ERASE_ARGUMENT_PACK(FChaosVDParticleVelocities&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleDynamics, opAssign, (const FChaosVDParticleDynamics&), ERASE_ARGUMENT_PACK(FChaosVDParticleDynamics&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleMassProps, opAssign, (const FChaosVDParticleMassProps&), ERASE_ARGUMENT_PACK(FChaosVDParticleMassProps&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleDynamicMisc, opAssign, (const FChaosVDParticleDynamicMisc&), ERASE_ARGUMENT_PACK(FChaosVDParticleDynamicMisc&)) },


{ ERASE_METHOD_PTR(FChaosVDConnectivityEdge, opAssign, (const FChaosVDConnectivityEdge&), ERASE_ARGUMENT_PACK(FChaosVDConnectivityEdge&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleCluster, opAssign, (const FChaosVDParticleCluster&), ERASE_ARGUMENT_PACK(FChaosVDParticleCluster&)) },


{ ERASE_METHOD_PTR(FChaosVDParticleDataWrapper, opAssign, (const FChaosVDParticleDataWrapper&), ERASE_ARGUMENT_PACK(FChaosVDParticleDataWrapper&)) },


{ ERASE_METHOD_PTR(FChaosVDCollisionResponseParams, opAssign, (const FChaosVDCollisionResponseParams&), ERASE_ARGUMENT_PACK(FChaosVDCollisionResponseParams&)) },


{ ERASE_METHOD_PTR(FChaosVDCollisionObjectQueryParams, opAssign, (const FChaosVDCollisionObjectQueryParams&), ERASE_ARGUMENT_PACK(FChaosVDCollisionObjectQueryParams&)) },


{ ERASE_METHOD_PTR(FChaosVDCollisionQueryParams, opAssign, (const FChaosVDCollisionQueryParams&), ERASE_ARGUMENT_PACK(FChaosVDCollisionQueryParams&)) },


{ ERASE_METHOD_PTR(FChaosVDQueryFastData, opAssign, (const FChaosVDQueryFastData&), ERASE_ARGUMENT_PACK(FChaosVDQueryFastData&)) },


{ ERASE_METHOD_PTR(FChaosVDQueryHitData, opAssign, (const FChaosVDQueryHitData&), ERASE_ARGUMENT_PACK(FChaosVDQueryHitData&)) },


{ ERASE_METHOD_PTR(FChaosVDQueryVisitStep, opAssign, (const FChaosVDQueryVisitStep&), ERASE_ARGUMENT_PACK(FChaosVDQueryVisitStep&)) },


{ ERASE_METHOD_PTR(FChaosVDQueryDataWrapper, opAssign, (const FChaosVDQueryDataWrapper&), ERASE_ARGUMENT_PACK(FChaosVDQueryDataWrapper&)) },


{ ERASE_METHOD_PTR(FClosestPhysicsObjectResult, opAssign, (const FClosestPhysicsObjectResult&), ERASE_ARGUMENT_PACK(FClosestPhysicsObjectResult&)) },


{ ERASE_METHOD_PTR(FChaosSolverConfiguration, opAssign, (const FChaosSolverConfiguration&), ERASE_ARGUMENT_PACK(FChaosSolverConfiguration&)) },


{ ERASE_METHOD_PTR(FSolverTrailingFilterSettings, opAssign, (const FSolverTrailingFilterSettings&), ERASE_ARGUMENT_PACK(FSolverTrailingFilterSettings&)) },


{ ERASE_METHOD_PTR(FSolverBreakingFilterSettings, opAssign, (const FSolverBreakingFilterSettings&), ERASE_ARGUMENT_PACK(FSolverBreakingFilterSettings&)) },


{ ERASE_METHOD_PTR(FSolverCollisionFilterSettings, opAssign, (const FSolverCollisionFilterSettings&), ERASE_ARGUMENT_PACK(FSolverCollisionFilterSettings&)) },


{ ERASE_METHOD_PTR(FSolverRemovalFilterSettings, opAssign, (const FSolverRemovalFilterSettings&), ERASE_ARGUMENT_PACK(FSolverRemovalFilterSettings&)) },


{ ERASE_METHOD_PTR(FPhysicalMaterialStrength, opAssign, (const FPhysicalMaterialStrength&), ERASE_ARGUMENT_PACK(FPhysicalMaterialStrength&)) },


{ ERASE_METHOD_PTR(FPhysicalMaterialDamageModifier, opAssign, (const FPhysicalMaterialDamageModifier&), ERASE_ARGUMENT_PACK(FPhysicalMaterialDamageModifier&)) },


{ ERASE_METHOD_PTR(FSoundWaveCloudStreamingPlatformProjectSettings, opAssign, (const FSoundWaveCloudStreamingPlatformProjectSettings&), ERASE_ARGUMENT_PACK(FSoundWaveCloudStreamingPlatformProjectSettings&)) },


{ ERASE_METHOD_PTR(FSoundWaveCloudStreamingPlatformSettings, opAssign, (const FSoundWaveCloudStreamingPlatformSettings&), ERASE_ARGUMENT_PACK(FSoundWaveCloudStreamingPlatformSettings&)) },


{ ERASE_METHOD_PTR(FSoundGeneratorOutput, opAssign, (const FSoundGeneratorOutput&), ERASE_ARGUMENT_PACK(FSoundGeneratorOutput&)) },


{ ERASE_METHOD_PTR(FAudioParameter, opAssign, (const FAudioParameter&), ERASE_ARGUMENT_PACK(FAudioParameter&)) },


{ ERASE_METHOD_PTR(FClothCollisionData, opAssign, (const FClothCollisionData&), ERASE_ARGUMENT_PACK(FClothCollisionData&)) },


{ ERASE_METHOD_PTR(FSwarmPongMessage, opAssign, (const FSwarmPongMessage&), ERASE_ARGUMENT_PACK(FSwarmPongMessage&)) },


{ ERASE_METHOD_PTR(FSwarmInfoMessage, opAssign, (const FSwarmInfoMessage&), ERASE_ARGUMENT_PACK(FSwarmInfoMessage&)) },


{ ERASE_METHOD_PTR(FSwarmAlertMessage, opAssign, (const FSwarmAlertMessage&), ERASE_ARGUMENT_PACK(FSwarmAlertMessage&)) },


{ ERASE_METHOD_PTR(FSwarmTimingMessage, opAssign, (const FSwarmTimingMessage&), ERASE_ARGUMENT_PACK(FSwarmTimingMessage&)) },


{ ERASE_METHOD_PTR(FSwarmTaskRequestSpecificationMessage, opAssign, (const FSwarmTaskRequestSpecificationMessage&), ERASE_ARGUMENT_PACK(FSwarmTaskRequestSpecificationMessage&)) },


{ ERASE_METHOD_PTR(FSwarmJobStateMessage, opAssign, (const FSwarmJobStateMessage&), ERASE_ARGUMENT_PACK(FSwarmJobStateMessage&)) },


{ ERASE_METHOD_PTR(FSwarmTaskStateMessage, opAssign, (const FSwarmTaskStateMessage&), ERASE_ARGUMENT_PACK(FSwarmTaskStateMessage&)) },


{ ERASE_METHOD_PTR(FToolDynamicUIAction, opAssign, (const FToolDynamicUIAction&), ERASE_ARGUMENT_PACK(FToolDynamicUIAction&)) },


{ ERASE_METHOD_PTR(FToolMenuStringCommand, opAssign, (const FToolMenuStringCommand&), ERASE_ARGUMENT_PACK(FToolMenuStringCommand&)) },


{ ERASE_METHOD_PTR(FToolMenuInsert, opAssign, (const FToolMenuInsert&), ERASE_ARGUMENT_PACK(FToolMenuInsert&)) },


{ ERASE_METHOD_PTR(FToolMenuOwner, opAssign, (const FToolMenuOwner&), ERASE_ARGUMENT_PACK(FToolMenuOwner&)) },


{ ERASE_METHOD_PTR(FToolMenuEntry, opAssign, (const FToolMenuEntry&), ERASE_ARGUMENT_PACK(FToolMenuEntry&)) },


{ ERASE_METHOD_PTR(FScriptSlateIcon, opAssign, (const FScriptSlateIcon&), ERASE_ARGUMENT_PACK(FScriptSlateIcon&)) },


{ ERASE_METHOD_PTR(FToolMenuEntryScriptDataAdvanced, opAssign, (const FToolMenuEntryScriptDataAdvanced&), ERASE_ARGUMENT_PACK(FToolMenuEntryScriptDataAdvanced&)) },


{ ERASE_METHOD_PTR(FToolMenuEntryScriptData, opAssign, (const FToolMenuEntryScriptData&), ERASE_ARGUMENT_PACK(FToolMenuEntryScriptData&)) },


{ ERASE_METHOD_PTR(FToolMenuSection, opAssign, (const FToolMenuSection&), ERASE_ARGUMENT_PACK(FToolMenuSection&)) },


{ ERASE_METHOD_PTR(FAssetEditorRequestOpenAsset, opAssign, (const FAssetEditorRequestOpenAsset&), ERASE_ARGUMENT_PACK(FAssetEditorRequestOpenAsset&)) },


{ ERASE_METHOD_PTR(FFileServerReady, opAssign, (const FFileServerReady&), ERASE_ARGUMENT_PACK(FFileServerReady&)) },


{ ERASE_METHOD_PTR(FInterchangePipelinePropertyStatePerContext, opAssign, (const FInterchangePipelinePropertyStatePerContext&), ERASE_ARGUMENT_PACK(FInterchangePipelinePropertyStatePerContext&)) },


{ ERASE_METHOD_PTR(FInterchangePipelinePropertyStates, opAssign, (const FInterchangePipelinePropertyStates&), ERASE_ARGUMENT_PACK(FInterchangePipelinePropertyStates&)) },


{ ERASE_METHOD_PTR(FInterchangeUserDefinedAttributeInfo, opAssign, (const FInterchangeUserDefinedAttributeInfo&), ERASE_ARGUMENT_PACK(FInterchangeUserDefinedAttributeInfo&)) },


{ ERASE_METHOD_PTR(FToolkitWidgetStyle, opAssign, (const FToolkitWidgetStyle&), ERASE_ARGUMENT_PACK(FToolkitWidgetStyle&)) },


{ ERASE_METHOD_PTR(FPropertyPathTestInnerStruct, opAssign, (const FPropertyPathTestInnerStruct&), ERASE_ARGUMENT_PACK(FPropertyPathTestInnerStruct&)) },


{ ERASE_METHOD_PTR(FPropertyPathTestStruct, opAssign, (const FPropertyPathTestStruct&), ERASE_ARGUMENT_PACK(FPropertyPathTestStruct&)) },


{ ERASE_METHOD_PTR(FAxis, opAssign, (const FAxis&), ERASE_ARGUMENT_PACK(FAxis&)) },


{ ERASE_METHOD_PTR(FFilterOptionPerAxis, opAssign, (const FFilterOptionPerAxis&), ERASE_ARGUMENT_PACK(FFilterOptionPerAxis&)) },


{ ERASE_METHOD_PTR(FTransformFilter, opAssign, (const FTransformFilter&), ERASE_ARGUMENT_PACK(FTransformFilter&)) },


{ ERASE_METHOD_PTR(FConstraintDescription, opAssign, (const FConstraintDescription&), ERASE_ARGUMENT_PACK(FConstraintDescription&)) },


{ ERASE_METHOD_PTR(FTransformConstraint, opAssign, (const FTransformConstraint&), ERASE_ARGUMENT_PACK(FTransformConstraint&)) },


{ ERASE_METHOD_PTR(FConstraintDescriptionEx, opAssign, (const FConstraintDescriptionEx&), ERASE_ARGUMENT_PACK(FConstraintDescriptionEx&)) },


{ ERASE_METHOD_PTR(FTransformConstraintDescription, opAssign, (const FTransformConstraintDescription&), ERASE_ARGUMENT_PACK(FTransformConstraintDescription&)) },


{ ERASE_METHOD_PTR(FAimConstraintDescription, opAssign, (const FAimConstraintDescription&), ERASE_ARGUMENT_PACK(FAimConstraintDescription&)) },


{ ERASE_METHOD_PTR(FEulerTransform, opAssign, (const FEulerTransform&), ERASE_ARGUMENT_PACK(FEulerTransform&)) },


{ ERASE_METHOD_PTR(FTransformNoScale, opAssign, (const FTransformNoScale&), ERASE_ARGUMENT_PACK(FTransformNoScale&)) },


{ ERASE_METHOD_PTR(FWidgetCarouselNavigationBarStyle, opAssign, (const FWidgetCarouselNavigationBarStyle&), ERASE_ARGUMENT_PACK(FWidgetCarouselNavigationBarStyle&)) },


{ ERASE_METHOD_PTR(FDataflowNode, opAssign, (const FDataflowNode&), ERASE_ARGUMENT_PACK(FDataflowNode&)) },


{ ERASE_METHOD_PTR(FDataflowOverrideNode, opAssign, (const FDataflowOverrideNode&), ERASE_ARGUMENT_PACK(FDataflowOverrideNode&)) },


{ ERASE_METHOD_PTR(FNodeColors, opAssign, (const FNodeColors&), ERASE_ARGUMENT_PACK(FNodeColors&)) },


{ ERASE_METHOD_PTR(FDataflowTerminalNode, opAssign, (const FDataflowTerminalNode&), ERASE_ARGUMENT_PACK(FDataflowTerminalNode&)) },


{ ERASE_METHOD_PTR(FLiveLinkSourceHandle, opAssign, (const FLiveLinkSourceHandle&), ERASE_ARGUMENT_PACK(FLiveLinkSourceHandle&)) },


{ ERASE_METHOD_PTR(FLiveLinkBaseStaticData, opAssign, (const FLiveLinkBaseStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkBaseStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkSkeletonStaticData, opAssign, (const FLiveLinkSkeletonStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkSkeletonStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkBaseFrameData, opAssign, (const FLiveLinkBaseFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkBaseFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkMetaData, opAssign, (const FLiveLinkMetaData&), ERASE_ARGUMENT_PACK(FLiveLinkMetaData&)) },


{ ERASE_METHOD_PTR(FLiveLinkAnimationFrameData, opAssign, (const FLiveLinkAnimationFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkAnimationFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkBaseBlueprintData, opAssign, (const FLiveLinkBaseBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkBaseBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkBasicBlueprintData, opAssign, (const FLiveLinkBasicBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkBasicBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkTransformStaticData, opAssign, (const FLiveLinkTransformStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkTransformStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkCameraStaticData, opAssign, (const FLiveLinkCameraStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkCameraStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkTransformFrameData, opAssign, (const FLiveLinkTransformFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkTransformFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkCameraFrameData, opAssign, (const FLiveLinkCameraFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkCameraFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkCameraBlueprintData, opAssign, (const FLiveLinkCameraBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkCameraBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkGamepadInputDeviceStaticData, opAssign, (const FLiveLinkGamepadInputDeviceStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkGamepadInputDeviceStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkGamepadInputDeviceFrameData, opAssign, (const FLiveLinkGamepadInputDeviceFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkGamepadInputDeviceFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkGamepadInputDeviceBlueprintData, opAssign, (const FLiveLinkGamepadInputDeviceBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkGamepadInputDeviceBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkLightStaticData, opAssign, (const FLiveLinkLightStaticData&), ERASE_ARGUMENT_PACK(FLiveLinkLightStaticData&)) },


{ ERASE_METHOD_PTR(FLiveLinkLightFrameData, opAssign, (const FLiveLinkLightFrameData&), ERASE_ARGUMENT_PACK(FLiveLinkLightFrameData&)) },


{ ERASE_METHOD_PTR(FLiveLinkLightBlueprintData, opAssign, (const FLiveLinkLightBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkLightBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkSourcePreset, opAssign, (const FLiveLinkSourcePreset&), ERASE_ARGUMENT_PACK(FLiveLinkSourcePreset&)) },


{ ERASE_METHOD_PTR(FLiveLinkSubjectPreset, opAssign, (const FLiveLinkSubjectPreset&), ERASE_ARGUMENT_PACK(FLiveLinkSubjectPreset&)) },


{ ERASE_METHOD_PTR(FLiveLinkSubjectKey, opAssign, (const FLiveLinkSubjectKey&), ERASE_ARGUMENT_PACK(FLiveLinkSubjectKey&)) },


{ ERASE_METHOD_PTR(FLiveLinkSubjectName, opAssign, (const FLiveLinkSubjectName&), ERASE_ARGUMENT_PACK(FLiveLinkSubjectName&)) },


{ ERASE_METHOD_PTR(FLiveLinkSubjectRepresentation, opAssign, (const FLiveLinkSubjectRepresentation&), ERASE_ARGUMENT_PACK(FLiveLinkSubjectRepresentation&)) },


{ ERASE_METHOD_PTR(FLiveLinkTransformBlueprintData, opAssign, (const FLiveLinkTransformBlueprintData&), ERASE_ARGUMENT_PACK(FLiveLinkTransformBlueprintData&)) },


{ ERASE_METHOD_PTR(FLiveLinkCurveConversionSettings, opAssign, (const FLiveLinkCurveConversionSettings&), ERASE_ARGUMENT_PACK(FLiveLinkCurveConversionSettings&)) },


{ ERASE_METHOD_PTR(FLiveLinkSourceBufferManagementSettings, opAssign, (const FLiveLinkSourceBufferManagementSettings&), ERASE_ARGUMENT_PACK(FLiveLinkSourceBufferManagementSettings&)) },


{ ERASE_METHOD_PTR(FLiveLinkSourceDebugInfo, opAssign, (const FLiveLinkSourceDebugInfo&), ERASE_ARGUMENT_PACK(FLiveLinkSourceDebugInfo&)) },


{ ERASE_METHOD_PTR(FLiveLinkTimeSynchronizationSettings, opAssign, (const FLiveLinkTimeSynchronizationSettings&), ERASE_ARGUMENT_PACK(FLiveLinkTimeSynchronizationSettings&)) },


{ ERASE_METHOD_PTR(FLiveLinkInterpolationSettings, opAssign, (const FLiveLinkInterpolationSettings&), ERASE_ARGUMENT_PACK(FLiveLinkInterpolationSettings&)) },


{ ERASE_METHOD_PTR(FLiveLinkTime, opAssign, (const FLiveLinkTime&), ERASE_ARGUMENT_PACK(FLiveLinkTime&)) },


{ ERASE_METHOD_PTR(FLiveLinkFrameRate, opAssign, (const FLiveLinkFrameRate&), ERASE_ARGUMENT_PACK(FLiveLinkFrameRate&)) },


{ ERASE_METHOD_PTR(FSubjectMetadata, opAssign, (const FSubjectMetadata&), ERASE_ARGUMENT_PACK(FSubjectMetadata&)) },


{ ERASE_METHOD_PTR(FLiveLinkTransform, opAssign, (const FLiveLinkTransform&), ERASE_ARGUMENT_PACK(FLiveLinkTransform&)) },


{ ERASE_METHOD_PTR(FSubjectFrameHandle, opAssign, (const FSubjectFrameHandle&), ERASE_ARGUMENT_PACK(FSubjectFrameHandle&)) },


{ ERASE_METHOD_PTR(FPhysAssetCreateParams, opAssign, (const FPhysAssetCreateParams&), ERASE_ARGUMENT_PACK(FPhysAssetCreateParams&)) },


{ ERASE_METHOD_PTR(FGizmosParameters, opAssign, (const FGizmosParameters&), ERASE_ARGUMENT_PACK(FGizmosParameters&)) },


{ ERASE_METHOD_PTR(FCompositionGraphCapturePasses, opAssign, (const FCompositionGraphCapturePasses&), ERASE_ARGUMENT_PACK(FCompositionGraphCapturePasses&)) },


{ ERASE_METHOD_PTR(FCaptureResolution, opAssign, (const FCaptureResolution&), ERASE_ARGUMENT_PACK(FCaptureResolution&)) },


{ ERASE_METHOD_PTR(FMovieSceneCaptureSettings, opAssign, (const FMovieSceneCaptureSettings&), ERASE_ARGUMENT_PACK(FMovieSceneCaptureSettings&)) },


{ ERASE_METHOD_PTR(FFrameMetrics, opAssign, (const FFrameMetrics&), ERASE_ARGUMENT_PACK(FFrameMetrics&)) },


{ ERASE_METHOD_PTR(FCapturedPixelsID, opAssign, (const FCapturedPixelsID&), ERASE_ARGUMENT_PACK(FCapturedPixelsID&)) },


{ ERASE_METHOD_PTR(FCapturedPixels, opAssign, (const FCapturedPixels&), ERASE_ARGUMENT_PACK(FCapturedPixels&)) },


{ ERASE_METHOD_PTR(FActorRecordingSettings, opAssign, (const FActorRecordingSettings&), ERASE_ARGUMENT_PACK(FActorRecordingSettings&)) },


{ ERASE_METHOD_PTR(FTimecodeBoneMethod, opAssign, (const FTimecodeBoneMethod&), ERASE_ARGUMENT_PACK(FTimecodeBoneMethod&)) },


{ ERASE_METHOD_PTR(FSequenceRecorderActorFilter, opAssign, (const FSequenceRecorderActorFilter&), ERASE_ARGUMENT_PACK(FSequenceRecorderActorFilter&)) },


{ ERASE_METHOD_PTR(FPropertiesToRecordForActorClass, opAssign, (const FPropertiesToRecordForActorClass&), ERASE_ARGUMENT_PACK(FPropertiesToRecordForActorClass&)) },


{ ERASE_METHOD_PTR(FPropertiesToRecordForClass, opAssign, (const FPropertiesToRecordForClass&), ERASE_ARGUMENT_PACK(FPropertiesToRecordForClass&)) },


{ ERASE_METHOD_PTR(FSettingsForActorClass, opAssign, (const FSettingsForActorClass&), ERASE_ARGUMENT_PACK(FSettingsForActorClass&)) },


{ ERASE_METHOD_PTR(FBakingAnimationKeySettings, opAssign, (const FBakingAnimationKeySettings&), ERASE_ARGUMENT_PACK(FBakingAnimationKeySettings&)) },


{ ERASE_METHOD_PTR(FMovieSceneToolsPropertyTrackSettings, opAssign, (const FMovieSceneToolsPropertyTrackSettings&), ERASE_ARGUMENT_PACK(FMovieSceneToolsPropertyTrackSettings&)) },


{ ERASE_METHOD_PTR(FMovieSceneToolsFbxSettings, opAssign, (const FMovieSceneToolsFbxSettings&), ERASE_ARGUMENT_PACK(FMovieSceneToolsFbxSettings&)) },


{ ERASE_METHOD_PTR(FControlToTransformMappings, opAssign, (const FControlToTransformMappings&), ERASE_ARGUMENT_PACK(FControlToTransformMappings&)) },


{ ERASE_METHOD_PTR(FControlFindReplaceString, opAssign, (const FControlFindReplaceString&), ERASE_ARGUMENT_PACK(FControlFindReplaceString&)) },


{ ERASE_METHOD_PTR(FSequencerViewModelScriptingStruct, opAssign, (const FSequencerViewModelScriptingStruct&), ERASE_ARGUMENT_PACK(FSequencerViewModelScriptingStruct&)) },


{ ERASE_METHOD_PTR(FColumnVisibilitySetting, opAssign, (const FColumnVisibilitySetting&), ERASE_ARGUMENT_PACK(FColumnVisibilitySetting&)) },


{ ERASE_METHOD_PTR(FMovieScenePasteFoldersParams, opAssign, (const FMovieScenePasteFoldersParams&), ERASE_ARGUMENT_PACK(FMovieScenePasteFoldersParams&)) },


{ ERASE_METHOD_PTR(FMovieScenePasteSectionsParams, opAssign, (const FMovieScenePasteSectionsParams&), ERASE_ARGUMENT_PACK(FMovieScenePasteSectionsParams&)) },


{ ERASE_METHOD_PTR(FMovieScenePasteTracksParams, opAssign, (const FMovieScenePasteTracksParams&), ERASE_ARGUMENT_PACK(FMovieScenePasteTracksParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneBindingProxy, opAssign, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(FMovieSceneBindingProxy&)) },


{ ERASE_METHOD_PTR(FMovieScenePasteBindingsParams, opAssign, (const FMovieScenePasteBindingsParams&), ERASE_ARGUMENT_PACK(FMovieScenePasteBindingsParams&)) },


{ ERASE_METHOD_PTR(FVREditorFloatingUICreationContext, opAssign, (const FVREditorFloatingUICreationContext&), ERASE_ARGUMENT_PACK(FVREditorFloatingUICreationContext&)) },


{ ERASE_METHOD_PTR(FXRHMDData, opAssign, (const FXRHMDData&), ERASE_ARGUMENT_PACK(FXRHMDData&)) },


{ ERASE_METHOD_PTR(FXRMotionControllerData, opAssign, (const FXRMotionControllerData&), ERASE_ARGUMENT_PACK(FXRMotionControllerData&)) },


{ ERASE_METHOD_PTR(FXRDeviceId, opAssign, (const FXRDeviceId&), ERASE_ARGUMENT_PACK(FXRDeviceId&)) },


{ ERASE_METHOD_PTR(FViewportActionKeyInput, opAssign, (const FViewportActionKeyInput&), ERASE_ARGUMENT_PACK(FViewportActionKeyInput&)) },


{ ERASE_METHOD_PTR(FGameplayTag, opEquals, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, GetTagName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGameplayTag, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FGameplayTag, GetGameplayTagParents, (), ERASE_ARGUMENT_PACK(FGameplayTagContainer)) },
{ ERASE_METHOD_PTR(FGameplayTag, GetSingleTagContainer, (), ERASE_ARGUMENT_PACK(FGameplayTagContainer)) },
{ ERASE_METHOD_PTR(FGameplayTag, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, MatchesAny, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, MatchesAnyExact, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, MatchesTag, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, MatchesTagDepth, (const FGameplayTag&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FGameplayTag, MatchesTagExact, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTag, RequestDirectParent, (), ERASE_ARGUMENT_PACK(FGameplayTag)) },
{ ERASE_METHOD_PTR(FGameplayTag, opAssign, (const FGameplayTag&), ERASE_ARGUMENT_PACK(FGameplayTag&)) },


{ ERASE_METHOD_PTR(FGameplayTagContainer, AddLeafTag, (const FGameplayTag&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, AddTag, (const FGameplayTag&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, AddTagFast, (const FGameplayTag&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, Filter, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(FGameplayTagContainer)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, FilterExact, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(FGameplayTagContainer)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, First, (), ERASE_ARGUMENT_PACK(FGameplayTag)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, GetGameplayTagParents, (), ERASE_ARGUMENT_PACK(FGameplayTagContainer)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasAll, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasAllExact, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasAny, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasAnyExact, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasTag, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, HasTagExact, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, Last, (), ERASE_ARGUMENT_PACK(FGameplayTag)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, MatchesQuery, (const FGameplayTagQuery&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, Num, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, RemoveTag, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, RemoveTags, (FGameplayTagContainer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayTagContainer, opAssign, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(FGameplayTagContainer&)) },


{ ERASE_METHOD_PTR(FGameplayTagQuery, GetDescription, (), ERASE_ARGUMENT_PACK(const FString&)) },
{ ERASE_METHOD_PTR(FGameplayTagQuery, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagQuery, Matches, (const FGameplayTagContainer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGameplayTagQuery, opAssign, (const FGameplayTagQuery&), ERASE_ARGUMENT_PACK(FGameplayTagQuery&)) },


{ ERASE_METHOD_PTR(FGameplayTagRedirect, opAssign, (const FGameplayTagRedirect&), ERASE_ARGUMENT_PACK(FGameplayTagRedirect&)) },


{ ERASE_METHOD_PTR(FTableRowBase, opAssign, (const FTableRowBase&), ERASE_ARGUMENT_PACK(FTableRowBase&)) },


{ ERASE_METHOD_PTR(FGameplayTagTableRow, opAssign, (const FGameplayTagTableRow&), ERASE_ARGUMENT_PACK(FGameplayTagTableRow&)) },


{ ERASE_METHOD_PTR(FRestrictedGameplayTagTableRow, opAssign, (const FRestrictedGameplayTagTableRow&), ERASE_ARGUMENT_PACK(FRestrictedGameplayTagTableRow&)) },


{ ERASE_METHOD_PTR(FGameplayTagCategoryRemap, opAssign, (const FGameplayTagCategoryRemap&), ERASE_ARGUMENT_PACK(FGameplayTagCategoryRemap&)) },


{ ERASE_METHOD_PTR(FRestrictedConfigInfo, opAssign, (const FRestrictedConfigInfo&), ERASE_ARGUMENT_PACK(FRestrictedConfigInfo&)) },


{ ERASE_METHOD_PTR(FGameplayDebuggerInputConfig, opAssign, (const FGameplayDebuggerInputConfig&), ERASE_ARGUMENT_PACK(FGameplayDebuggerInputConfig&)) },
{ ERASE_METHOD_PTR(FGameplayDebuggerInputConfig, SetbModShift, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayDebuggerInputConfig, SetbModCtrl, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayDebuggerInputConfig, SetbModAlt, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGameplayDebuggerInputConfig, SetbModCmd, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGameplayDebuggerCategoryConfig, opAssign, (const FGameplayDebuggerCategoryConfig&), ERASE_ARGUMENT_PACK(FGameplayDebuggerCategoryConfig&)) },
{ ERASE_METHOD_PTR(FGameplayDebuggerCategoryConfig, SetbOverrideSlotIdx, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGameplayDebuggerExtensionConfig, opAssign, (const FGameplayDebuggerExtensionConfig&), ERASE_ARGUMENT_PACK(FGameplayDebuggerExtensionConfig&)) },


{ ERASE_METHOD_PTR(FIntervalCountdown, opAssign, (const FIntervalCountdown&), ERASE_ARGUMENT_PACK(FIntervalCountdown&)) },


{ ERASE_METHOD_PTR(FEnvNamedValue, opAssign, (const FEnvNamedValue&), ERASE_ARGUMENT_PACK(FEnvNamedValue&)) },


{ ERASE_METHOD_PTR(FEnvDirection, opAssign, (const FEnvDirection&), ERASE_ARGUMENT_PACK(FEnvDirection&)) },


{ ERASE_METHOD_PTR(FEnvTraceData, opAssign, (const FEnvTraceData&), ERASE_ARGUMENT_PACK(FEnvTraceData&)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbTraceComplex, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbOnlyBlockingHits, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbCanTraceOnNavMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbCanTraceOnGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbCanDisableTrace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvTraceData, SetbCanProjectDown, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEnvOverlapData, opAssign, (const FEnvOverlapData&), ERASE_ARGUMENT_PACK(FEnvOverlapData&)) },
{ ERASE_METHOD_PTR(FEnvOverlapData, SetbOnlyBlockingHits, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvOverlapData, SetbOverlapComplex, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnvOverlapData, SetbSkipOverlapQuerier, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEnvQueryResult, opAssign, (const FEnvQueryResult&), ERASE_ARGUMENT_PACK(FEnvQueryResult&)) },


{ ERASE_METHOD_PTR(FAIDynamicParam, opAssign, (const FAIDynamicParam&), ERASE_ARGUMENT_PACK(FAIDynamicParam&)) },


{ ERASE_METHOD_PTR(FBlackboardKeySelector, opAssign, (const FBlackboardKeySelector&), ERASE_ARGUMENT_PACK(FBlackboardKeySelector&)) },
{ ERASE_METHOD_PTR(FBlackboardKeySelector, GetbNoneIsAllowedValue, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBlackboardKeySelector, SetbNoneIsAllowedValue, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEQSParametrizedQueryExecutionRequest, opAssign, (const FEQSParametrizedQueryExecutionRequest&), ERASE_ARGUMENT_PACK(FEQSParametrizedQueryExecutionRequest&)) },
{ ERASE_METHOD_PTR(FEQSParametrizedQueryExecutionRequest, SetbUseBBKeyForQueryTemplate, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGenericTeamId, opAssign, (const FGenericTeamId&), ERASE_ARGUMENT_PACK(FGenericTeamId&)) },


{ ERASE_METHOD_PTR(FBlackboardEntry, opAssign, (const FBlackboardEntry&), ERASE_ARGUMENT_PACK(FBlackboardEntry&)) },
{ ERASE_METHOD_PTR(FBlackboardEntry, SetbInstanceSynced, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAIDataProviderValue, opAssign, (const FAIDataProviderValue&), ERASE_ARGUMENT_PACK(FAIDataProviderValue&)) },


{ ERASE_METHOD_PTR(FAIDataProviderTypedValue, opAssign, (const FAIDataProviderTypedValue&), ERASE_ARGUMENT_PACK(FAIDataProviderTypedValue&)) },


{ ERASE_METHOD_PTR(FAIDataProviderStructValue, opAssign, (const FAIDataProviderStructValue&), ERASE_ARGUMENT_PACK(FAIDataProviderStructValue&)) },


{ ERASE_METHOD_PTR(FAIDataProviderIntValue, opAssign, (const FAIDataProviderIntValue&), ERASE_ARGUMENT_PACK(FAIDataProviderIntValue&)) },


{ ERASE_METHOD_PTR(FAIDataProviderFloatValue, opAssign, (const FAIDataProviderFloatValue&), ERASE_ARGUMENT_PACK(FAIDataProviderFloatValue&)) },


{ ERASE_METHOD_PTR(FAIDataProviderBoolValue, opAssign, (const FAIDataProviderBoolValue&), ERASE_ARGUMENT_PACK(FAIDataProviderBoolValue&)) },


{ ERASE_METHOD_PTR(FCrowdAvoidanceConfig, opAssign, (const FCrowdAvoidanceConfig&), ERASE_ARGUMENT_PACK(FCrowdAvoidanceConfig&)) },


{ ERASE_METHOD_PTR(FCrowdAvoidanceSamplingPattern, opAssign, (const FCrowdAvoidanceSamplingPattern&), ERASE_ARGUMENT_PACK(FCrowdAvoidanceSamplingPattern&)) },


{ ERASE_METHOD_PTR(FActorPerceptionBlueprintInfo, opAssign, (const FActorPerceptionBlueprintInfo&), ERASE_ARGUMENT_PACK(FActorPerceptionBlueprintInfo&)) },
{ ERASE_METHOD_PTR(FActorPerceptionBlueprintInfo, GetbIsHostile, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorPerceptionBlueprintInfo, SetbIsHostile, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorPerceptionBlueprintInfo, GetbIsFriendly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorPerceptionBlueprintInfo, SetbIsFriendly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, opAssign, (const FAISenseAffiliationFilter&), ERASE_ARGUMENT_PACK(FAISenseAffiliationFilter&)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, GetbDetectEnemies, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, SetbDetectEnemies, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, GetbDetectNeutrals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, SetbDetectNeutrals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, GetbDetectFriendlies, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAISenseAffiliationFilter, SetbDetectFriendlies, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAIDamageEvent, opAssign, (const FAIDamageEvent&), ERASE_ARGUMENT_PACK(FAIDamageEvent&)) },


{ ERASE_METHOD_PTR(FAINoiseEvent, opAssign, (const FAINoiseEvent&), ERASE_ARGUMENT_PACK(FAINoiseEvent&)) },


{ ERASE_METHOD_PTR(FStringValuePair, opAssign, (const FStringValuePair&), ERASE_ARGUMENT_PACK(FStringValuePair&)) },


{ ERASE_METHOD_PTR(FChaosDebugSubstepControl, opAssign, (const FChaosDebugSubstepControl&), ERASE_ARGUMENT_PACK(FChaosDebugSubstepControl&)) },


{ ERASE_METHOD_PTR(FFieldObjectCommands, opAssign, (const FFieldObjectCommands&), ERASE_ARGUMENT_PACK(FFieldObjectCommands&)) },


{ ERASE_METHOD_PTR(FChaosBreakingEventRequestSettings, opAssign, (const FChaosBreakingEventRequestSettings&), ERASE_ARGUMENT_PACK(FChaosBreakingEventRequestSettings&)) },


{ ERASE_METHOD_PTR(FChaosCollisionEventRequestSettings, opAssign, (const FChaosCollisionEventRequestSettings&), ERASE_ARGUMENT_PACK(FChaosCollisionEventRequestSettings&)) },


{ ERASE_METHOD_PTR(FChaosRemovalEventRequestSettings, opAssign, (const FChaosRemovalEventRequestSettings&), ERASE_ARGUMENT_PACK(FChaosRemovalEventRequestSettings&)) },


{ ERASE_METHOD_PTR(FChaosTrailingEventRequestSettings, opAssign, (const FChaosTrailingEventRequestSettings&), ERASE_ARGUMENT_PACK(FChaosTrailingEventRequestSettings&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionDebugDrawActorSelectedRigidBody, opAssign, (const FGeometryCollectionDebugDrawActorSelectedRigidBody&), ERASE_ARGUMENT_PACK(FGeometryCollectionDebugDrawActorSelectedRigidBody&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionSource, opAssign, (const FGeometryCollectionSource&), ERASE_ARGUMENT_PACK(FGeometryCollectionSource&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionAutoInstanceMesh, opAssign, (const FGeometryCollectionAutoInstanceMesh&), ERASE_ARGUMENT_PACK(FGeometryCollectionAutoInstanceMesh&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionEmbeddedExemplar, opAssign, (const FGeometryCollectionEmbeddedExemplar&), ERASE_ARGUMENT_PACK(FGeometryCollectionEmbeddedExemplar&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionLevelSetData, opAssign, (const FGeometryCollectionLevelSetData&), ERASE_ARGUMENT_PACK(FGeometryCollectionLevelSetData&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionCollisionParticleData, opAssign, (const FGeometryCollectionCollisionParticleData&), ERASE_ARGUMENT_PACK(FGeometryCollectionCollisionParticleData&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionCollisionTypeData, opAssign, (const FGeometryCollectionCollisionTypeData&), ERASE_ARGUMENT_PACK(FGeometryCollectionCollisionTypeData&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionSizeSpecificData, opAssign, (const FGeometryCollectionSizeSpecificData&), ERASE_ARGUMENT_PACK(FGeometryCollectionSizeSpecificData&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionProxyMeshData, opAssign, (const FGeometryCollectionProxyMeshData&), ERASE_ARGUMENT_PACK(FGeometryCollectionProxyMeshData&)) },


{ ERASE_METHOD_PTR(FNavCollisionCylinder, opAssign, (const FNavCollisionCylinder&), ERASE_ARGUMENT_PACK(FNavCollisionCylinder&)) },


{ ERASE_METHOD_PTR(FNavCollisionBox, opAssign, (const FNavCollisionBox&), ERASE_ARGUMENT_PACK(FNavCollisionBox&)) },


{ ERASE_METHOD_PTR(FNavigationFilterArea, opAssign, (const FNavigationFilterArea&), ERASE_ARGUMENT_PACK(FNavigationFilterArea&)) },
{ ERASE_METHOD_PTR(FNavigationFilterArea, SetbIsExcluded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterArea, SetbOverrideTravelCost, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterArea, SetbOverrideEnteringCost, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavigationFilterFlags, opAssign, (const FNavigationFilterFlags&), ERASE_ARGUMENT_PACK(FNavigationFilterFlags&)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag0, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag1, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag2, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag3, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag4, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag5, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag6, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag7, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag8, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag9, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag10, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag11, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag12, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag13, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag14, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationFilterFlags, SetbNavFlag15, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, opAssign, (const FRecastNavMeshGenerationProperties&), ERASE_ARGUMENT_PACK(FRecastNavMeshGenerationProperties&)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbSortNavigationAreasByCost, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbPerformVoxelFiltering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbMarkLowHeightAreas, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbUseExtraTopCellWhenMarkingAreas, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbFilterLowSpanSequences, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbFilterLowSpanFromTileCache, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbFixedTilePoolSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshGenerationProperties, SetbIsWorldPartitioned, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, opAssign, (const FRecastNavMeshTileGenerationDebug&), ERASE_ARGUMENT_PACK(FRecastNavMeshTileGenerationDebug&)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbGenerateDebugTileOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbCollisionGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbHeightfieldFromRasterization, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbHeightfieldPostInclusionBoundsFiltering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbHeightfieldPostHeightFiltering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbHeightfieldBounds, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbCompactHeightfield, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbCompactHeightfieldEroded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbCompactHeightfieldRegions, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbCompactHeightfieldDistances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbTileCacheLayerAreas, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbTileCacheLayerRegions, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbSkipContourSimplification, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbTileCacheContours, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbTileCachePolyMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRecastNavMeshTileGenerationDebug, SetbTileCacheDetailMesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavMeshResolutionParam, opAssign, (const FNavMeshResolutionParam&), ERASE_ARGUMENT_PACK(FNavMeshResolutionParam&)) },


{ ERASE_METHOD_PTR(FUserGeneratedContentLocalizationDescriptor, opAssign, (const FUserGeneratedContentLocalizationDescriptor&), ERASE_ARGUMENT_PACK(FUserGeneratedContentLocalizationDescriptor&)) },


{ ERASE_METHOD_PTR(FGatherTextSearchDirectory, opAssign, (const FGatherTextSearchDirectory&), ERASE_ARGUMENT_PACK(FGatherTextSearchDirectory&)) },


{ ERASE_METHOD_PTR(FGatherTextIncludePath, opAssign, (const FGatherTextIncludePath&), ERASE_ARGUMENT_PACK(FGatherTextIncludePath&)) },


{ ERASE_METHOD_PTR(FGatherTextExcludePath, opAssign, (const FGatherTextExcludePath&), ERASE_ARGUMENT_PACK(FGatherTextExcludePath&)) },


{ ERASE_METHOD_PTR(FGatherTextFileExtension, opAssign, (const FGatherTextFileExtension&), ERASE_ARGUMENT_PACK(FGatherTextFileExtension&)) },


{ ERASE_METHOD_PTR(FGatherTextFromTextFilesConfiguration, opAssign, (const FGatherTextFromTextFilesConfiguration&), ERASE_ARGUMENT_PACK(FGatherTextFromTextFilesConfiguration&)) },


{ ERASE_METHOD_PTR(FGatherTextFromPackagesConfiguration, opAssign, (const FGatherTextFromPackagesConfiguration&), ERASE_ARGUMENT_PACK(FGatherTextFromPackagesConfiguration&)) },


{ ERASE_METHOD_PTR(FMetaDataTextKeyPattern, opAssign, (const FMetaDataTextKeyPattern&), ERASE_ARGUMENT_PACK(FMetaDataTextKeyPattern&)) },


{ ERASE_METHOD_PTR(FMetaDataKeyName, opAssign, (const FMetaDataKeyName&), ERASE_ARGUMENT_PACK(FMetaDataKeyName&)) },


{ ERASE_METHOD_PTR(FMetaDataKeyGatherSpecification, opAssign, (const FMetaDataKeyGatherSpecification&), ERASE_ARGUMENT_PACK(FMetaDataKeyGatherSpecification&)) },


{ ERASE_METHOD_PTR(FGatherTextFromMetaDataConfiguration, opAssign, (const FGatherTextFromMetaDataConfiguration&), ERASE_ARGUMENT_PACK(FGatherTextFromMetaDataConfiguration&)) },


{ ERASE_METHOD_PTR(FLocalizationExportingSettings, opAssign, (const FLocalizationExportingSettings&), ERASE_ARGUMENT_PACK(FLocalizationExportingSettings&)) },


{ ERASE_METHOD_PTR(FLocalizationCompilationSettings, opAssign, (const FLocalizationCompilationSettings&), ERASE_ARGUMENT_PACK(FLocalizationCompilationSettings&)) },


{ ERASE_METHOD_PTR(FLocalizationImportDialogueSettings, opAssign, (const FLocalizationImportDialogueSettings&), ERASE_ARGUMENT_PACK(FLocalizationImportDialogueSettings&)) },


{ ERASE_METHOD_PTR(FCultureStatistics, opAssign, (const FCultureStatistics&), ERASE_ARGUMENT_PACK(FCultureStatistics&)) },


{ ERASE_METHOD_PTR(FLocalizationTargetSettings, opAssign, (const FLocalizationTargetSettings&), ERASE_ARGUMENT_PACK(FLocalizationTargetSettings&)) },


{ ERASE_METHOD_PTR(FPreviewSceneProfile, opAssign, (const FPreviewSceneProfile&), ERASE_ARGUMENT_PACK(FPreviewSceneProfile&)) },


{ ERASE_METHOD_PTR(FPostProcessSettings, opAssign, (const FPostProcessSettings&), ERASE_ARGUMENT_PACK(FPostProcessSettings&)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_TemperatureType, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_TemperatureType, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_WhiteTemp, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_WhiteTemp, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_WhiteTint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_WhiteTint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorSaturation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorSaturation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorContrast, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorContrast, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGamma, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGamma, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGain, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGain, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorOffset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorSaturationShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorSaturationShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorContrastShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorContrastShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGammaShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGammaShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGainShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGainShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorOffsetShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorOffsetShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorSaturationMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorSaturationMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorContrastMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorContrastMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGammaMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGammaMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGainMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGainMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorOffsetMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorOffsetMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorSaturationHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorSaturationHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorContrastHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorContrastHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGammaHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGammaHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGainHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGainHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorOffsetHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorOffsetHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorCorrectionShadowsMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorCorrectionShadowsMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorCorrectionHighlightsMin, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorCorrectionHighlightsMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorCorrectionHighlightsMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorCorrectionHighlightsMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BlueCorrection, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BlueCorrection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ExpandGamut, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ExpandGamut, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ToneCurveAmount, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ToneCurveAmount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmSlope, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmSlope, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmToe, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmToe, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmShoulder, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmShoulder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmBlackClip, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmBlackClip, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmWhiteClip, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmWhiteClip, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_SceneColorTint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_SceneColorTint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_SceneFringeIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_SceneFringeIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ChromaticAberrationStartOffset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ChromaticAberrationStartOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientCubemapTint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientCubemapTint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientCubemapIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientCubemapIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomMethod, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomMethod, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom1Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom1Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom1Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom1Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom2Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom2Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom2Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom2Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom3Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom3Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom3Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom3Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom4Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom4Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom4Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom4Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom5Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom5Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom5Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom5Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom6Tint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom6Tint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Bloom6Size, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Bloom6Size, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomSizeScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomSizeScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionTexture, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionTexture, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionScatterDispersion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionScatterDispersion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionCenterUV, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionCenterUV, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionPreFilterMin, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionPreFilterMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionPreFilterMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionPreFilterMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionPreFilterMult, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionPreFilterMult, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomConvolutionBufferScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomConvolutionBufferScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomDirtMaskIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomDirtMaskIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomDirtMaskTint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomDirtMaskTint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_BloomDirtMask, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_BloomDirtMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_CameraShutterSpeed, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_CameraShutterSpeed, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_CameraISO, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_CameraISO, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureMethod, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureMethod, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureLowPercent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureLowPercent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureHighPercent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureHighPercent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureMinBrightness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureMinBrightness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureMaxBrightness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureMaxBrightness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureSpeedUp, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureSpeedUp, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureSpeedDown, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureSpeedDown, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureBias, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureBias, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureBiasCurve, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureBiasCurve, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureMeterMask, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureMeterMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AutoExposureApplyPhysicalCameraExposure, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AutoExposureApplyPhysicalCameraExposure, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_HistogramLogMin, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_HistogramLogMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_HistogramLogMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_HistogramLogMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureHighlightContrastScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureHighlightContrastScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureShadowContrastScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureShadowContrastScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureHighlightContrastCurve, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureHighlightContrastCurve, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureShadowContrastCurve, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureShadowContrastCurve, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureHighlightThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureHighlightThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureShadowThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureShadowThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureDetailStrength, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureDetailStrength, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureBlurredLuminanceBlend, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureBlurredLuminanceBlend, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureBlurredLuminanceKernelSizePercent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureBlurredLuminanceKernelSizePercent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LocalExposureMiddleGreyBias, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LocalExposureMiddleGreyBias, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareTint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareTint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareTints, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareTints, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareBokehSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareBokehSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareBokehShape, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareBokehShape, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LensFlareThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LensFlareThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_VignetteIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_VignetteIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_Sharpen, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_Sharpen, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainIntensityShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainIntensityShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainIntensityMidtones, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainIntensityMidtones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainIntensityHighlights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainIntensityHighlights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainShadowsMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainShadowsMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainHighlightsMin, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainHighlightsMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainHighlightsMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainHighlightsMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainTexelSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainTexelSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_FilmGrainTexture, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_FilmGrainTexture, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionStaticFraction, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionStaticFraction, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionRadius, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionRadius, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionFadeDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionFadeDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionFadeRadius, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionFadeRadius, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionRadiusInWS, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionRadiusInWS, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionPower, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionPower, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionBias, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionBias, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionQuality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionQuality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionMipBlend, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionMipBlend, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionMipScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionMipScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionMipThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionMipThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_AmbientOcclusionTemporalBlendWeight, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_AmbientOcclusionTemporalBlendWeight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingAO, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingAO, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingAOSamplesPerPixel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingAOSamplesPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingAOIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingAOIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingAORadius, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingAORadius, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_IndirectLightingColor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_IndirectLightingColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_IndirectLightingIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_IndirectLightingIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGradingIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGradingIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ColorGradingLUT, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ColorGradingLUT, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldFocalDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldFocalDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldFstop, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldFstop, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldMinFstop, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldMinFstop, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldBladeCount, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldBladeCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldSensorWidth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldSensorWidth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldSqueezeFactor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldSqueezeFactor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldDepthBlurRadius, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldDepthBlurRadius, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldUseHairDepth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldUseHairDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldDepthBlurAmount, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldDepthBlurAmount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldFocalRegion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldFocalRegion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldNearTransitionRegion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldNearTransitionRegion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldFarTransitionRegion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldFarTransitionRegion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldNearBlurSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldNearBlurSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldFarBlurSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldFarBlurSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_MobileHQGaussian, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_MobileHQGaussian, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldSkyFocusDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldSkyFocusDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DepthOfFieldVignetteSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DepthOfFieldVignetteSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_MotionBlurAmount, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_MotionBlurAmount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_MotionBlurMax, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_MotionBlurMax, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_MotionBlurTargetFPS, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_MotionBlurTargetFPS, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_MotionBlurPerObjectSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_MotionBlurPerObjectSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ReflectionMethod, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ReflectionMethod, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenReflectionQuality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenReflectionQuality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ScreenSpaceReflectionIntensity, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ScreenSpaceReflectionIntensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ScreenSpaceReflectionQuality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ScreenSpaceReflectionQuality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ScreenSpaceReflectionMaxRoughness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ScreenSpaceReflectionMaxRoughness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_ScreenSpaceReflectionRoughnessScale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_ScreenSpaceReflectionRoughnessScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingReflectionsMaxRoughness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingReflectionsMaxRoughness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingReflectionsMaxBounces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingReflectionsMaxBounces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingReflectionsSamplesPerPixel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingReflectionsSamplesPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingReflectionsShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingReflectionsShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingReflectionsTranslucency, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingReflectionsTranslucency, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_TranslucencyType, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_TranslucencyType, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingTranslucencyMaxRoughness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingTranslucencyMaxRoughness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingTranslucencyRefractionRays, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingTranslucencyRefractionRays, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingTranslucencySamplesPerPixel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingTranslucencySamplesPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingTranslucencyShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingTranslucencyShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingTranslucencyRefraction, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingTranslucencyRefraction, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_DynamicGlobalIlluminationMethod, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_DynamicGlobalIlluminationMethod, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSceneLightingQuality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSceneLightingQuality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSceneDetail, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSceneDetail, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSceneViewDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSceneViewDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSceneLightingUpdateSpeed, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSceneLightingUpdateSpeed, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenFinalGatherQuality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenFinalGatherQuality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenFinalGatherLightingUpdateSpeed, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenFinalGatherLightingUpdateSpeed, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenFinalGatherScreenTraces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenFinalGatherScreenTraces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenMaxTraceDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenMaxTraceDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenDiffuseColorBoost, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenDiffuseColorBoost, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSkylightLeaking, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSkylightLeaking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenFullSkylightLeakingDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenFullSkylightLeakingDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenRayLightingMode, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenRayLightingMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenReflectionsScreenTraces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenReflectionsScreenTraces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenFrontLayerTranslucencyReflections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenFrontLayerTranslucencyReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenMaxRoughnessToTraceReflections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenMaxRoughnessToTraceReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenMaxReflectionBounces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenMaxReflectionBounces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenMaxRefractionBounces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenMaxRefractionBounces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_LumenSurfaceCacheResolution, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_LumenSurfaceCacheResolution, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingGI, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingGI, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingGIMaxBounces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingGIMaxBounces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_RayTracingGISamplesPerPixel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_RayTracingGISamplesPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingMaxBounces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingMaxBounces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingSamplesPerPixel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingSamplesPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingMaxPathExposure, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingMaxPathExposure, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingEnableEmissiveMaterials, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingEnableEmissiveMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingEnableReferenceDOF, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingEnableReferenceDOF, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingEnableReferenceAtmosphere, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingEnableReferenceAtmosphere, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingEnableDenoiser, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingEnableDenoiser, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeEmissive, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeEmissive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeDiffuse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeDiffuse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeIndirectDiffuse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeIndirectDiffuse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeSpecular, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeSpecular, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeIndirectSpecular, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeIndirectSpecular, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeVolume, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeVolume, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbOverride_PathTracingIncludeIndirectVolume, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbOverride_PathTracingIncludeIndirectVolume, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetbMobileHQGaussian, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetbMobileHQGaussian, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetLumenFinalGatherScreenTraces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetLumenFinalGatherScreenTraces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetLumenReflectionsScreenTraces, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetLumenReflectionsScreenTraces, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetLumenFrontLayerTranslucencyReflections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetLumenFrontLayerTranslucencyReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetAutoExposureApplyPhysicalCameraExposure, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetAutoExposureApplyPhysicalCameraExposure, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetAmbientOcclusionRadiusInWS, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetAmbientOcclusionRadiusInWS, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetRayTracingAO, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetRayTracingAO, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetDepthOfFieldUseHairDepth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetDepthOfFieldUseHairDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetRayTracingTranslucencyRefraction, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetRayTracingTranslucencyRefraction, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingEnableEmissiveMaterials, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingEnableEmissiveMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingEnableReferenceDOF, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingEnableReferenceDOF, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingEnableReferenceAtmosphere, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingEnableReferenceAtmosphere, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingEnableDenoiser, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingEnableDenoiser, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeEmissive, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeEmissive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeDiffuse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeDiffuse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeIndirectDiffuse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeIndirectDiffuse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeSpecular, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeSpecular, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeIndirectSpecular, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeIndirectSpecular, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeVolume, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeVolume, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, GetPathTracingIncludeIndirectVolume, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPostProcessSettings, SetPathTracingIncludeIndirectVolume, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FWeightedBlendables, opAssign, (const FWeightedBlendables&), ERASE_ARGUMENT_PACK(FWeightedBlendables&)) },


{ ERASE_METHOD_PTR(FWeightedBlendable, opAssign, (const FWeightedBlendable&), ERASE_ARGUMENT_PACK(FWeightedBlendable&)) },


{ ERASE_METHOD_PTR(FPropertyEntry, opAssign, (const FPropertyEntry&), ERASE_ARGUMENT_PACK(FPropertyEntry&)) },


{ ERASE_METHOD_PTR(FCheckerboardSettings, opAssign, (const FCheckerboardSettings&), ERASE_ARGUMENT_PACK(FCheckerboardSettings&)) },


{ ERASE_METHOD_PTR(FPreviewBackgroundSettings, opAssign, (const FPreviewBackgroundSettings&), ERASE_ARGUMENT_PACK(FPreviewBackgroundSettings&)) },


{ ERASE_METHOD_PTR(FMaterialStatistics, opAssign, (const FMaterialStatistics&), ERASE_ARGUMENT_PACK(FMaterialStatistics&)) },


{ ERASE_METHOD_PTR(FCurveEditorBakeFilterRange, opAssign, (const FCurveEditorBakeFilterRange&), ERASE_ARGUMENT_PACK(FCurveEditorBakeFilterRange&)) },


{ ERASE_METHOD_PTR(FCustomColorForChannel, opAssign, (const FCustomColorForChannel&), ERASE_ARGUMENT_PACK(FCustomColorForChannel&)) },


{ ERASE_METHOD_PTR(FCustomColorForSpaceSwitch, opAssign, (const FCustomColorForSpaceSwitch&), ERASE_ARGUMENT_PACK(FCustomColorForSpaceSwitch&)) },


{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, opAssign, (const FCameraLookatTrackingSettings&), ERASE_ARGUMENT_PACK(FCameraLookatTrackingSettings&)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, GetbEnableLookAtTracking, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, SetbEnableLookAtTracking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, GetbDrawDebugLookAtTrackingPosition, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, SetbDrawDebugLookAtTrackingPosition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, GetbAllowRoll, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraLookatTrackingSettings, SetbAllowRoll, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCameraFilmbackSettings, opAssign, (const FCameraFilmbackSettings&), ERASE_ARGUMENT_PACK(FCameraFilmbackSettings&)) },


{ ERASE_METHOD_PTR(FNamedFilmbackPreset, opAssign, (const FNamedFilmbackPreset&), ERASE_ARGUMENT_PACK(FNamedFilmbackPreset&)) },


{ ERASE_METHOD_PTR(FCameraLensSettings, opAssign, (const FCameraLensSettings&), ERASE_ARGUMENT_PACK(FCameraLensSettings&)) },


{ ERASE_METHOD_PTR(FNamedLensPreset, opAssign, (const FNamedLensPreset&), ERASE_ARGUMENT_PACK(FNamedLensPreset&)) },


{ ERASE_METHOD_PTR(FPlateCropSettings, opAssign, (const FPlateCropSettings&), ERASE_ARGUMENT_PACK(FPlateCropSettings&)) },


{ ERASE_METHOD_PTR(FNamedPlateCropPreset, opAssign, (const FNamedPlateCropPreset&), ERASE_ARGUMENT_PACK(FNamedPlateCropPreset&)) },


{ ERASE_METHOD_PTR(FCameraTrackingFocusSettings, opAssign, (const FCameraTrackingFocusSettings&), ERASE_ARGUMENT_PACK(FCameraTrackingFocusSettings&)) },
{ ERASE_METHOD_PTR(FCameraTrackingFocusSettings, GetbDrawDebugTrackingFocusPoint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraTrackingFocusSettings, SetbDrawDebugTrackingFocusPoint, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCameraFocusSettings, opAssign, (const FCameraFocusSettings&), ERASE_ARGUMENT_PACK(FCameraFocusSettings&)) },
{ ERASE_METHOD_PTR(FCameraFocusSettings, SetbDrawDebugFocusPlane, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCameraFocusSettings, GetbSmoothFocusChanges, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraFocusSettings, SetbSmoothFocusChanges, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FConstraintTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FDataLayerCreationParameters, opAssign, (const FDataLayerCreationParameters&), ERASE_ARGUMENT_PACK(FDataLayerCreationParameters&)) },


{ ERASE_METHOD_PTR(FInputRayHit, opAssign, (const FInputRayHit&), ERASE_ARGUMENT_PACK(FInputRayHit&)) },


{ ERASE_METHOD_PTR(FDeviceButtonState, opAssign, (const FDeviceButtonState&), ERASE_ARGUMENT_PACK(FDeviceButtonState&)) },


{ ERASE_METHOD_PTR(FKeyboardInputDeviceState, opAssign, (const FKeyboardInputDeviceState&), ERASE_ARGUMENT_PACK(FKeyboardInputDeviceState&)) },


{ ERASE_METHOD_PTR(FMouseInputDeviceState, opAssign, (const FMouseInputDeviceState&), ERASE_ARGUMENT_PACK(FMouseInputDeviceState&)) },


{ ERASE_METHOD_PTR(FInputDeviceState, opAssign, (const FInputDeviceState&), ERASE_ARGUMENT_PACK(FInputDeviceState&)) },


{ ERASE_METHOD_PTR(FInputDeviceRay, opAssign, (const FInputDeviceRay&), ERASE_ARGUMENT_PACK(FInputDeviceRay&)) },


{ ERASE_METHOD_PTR(FSubobjectData, opAssign, (const FSubobjectData&), ERASE_ARGUMENT_PACK(FSubobjectData&)) },


{ ERASE_METHOD_PTR(FSubobjectDataHandle, opAssign, (const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(FSubobjectDataHandle&)) },


{ ERASE_METHOD_PTR(FAddNewSubobjectParams, opAssign, (const FAddNewSubobjectParams&), ERASE_ARGUMENT_PACK(FAddNewSubobjectParams&)) },
{ ERASE_METHOD_PTR(FAddNewSubobjectParams, GetbSkipMarkBlueprintModified, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAddNewSubobjectParams, SetbSkipMarkBlueprintModified, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAddNewSubobjectParams, GetbConformTransformToParent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAddNewSubobjectParams, SetbConformTransformToParent, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FReparentSubobjectParams, opAssign, (const FReparentSubobjectParams&), ERASE_ARGUMENT_PACK(FReparentSubobjectParams&)) },


{ ERASE_METHOD_PTR(FSlatePostSettings, opAssign, (const FSlatePostSettings&), ERASE_ARGUMENT_PACK(FSlatePostSettings&)) },
{ ERASE_METHOD_PTR(FSlatePostSettings, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSlatePostSettings, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRadialBoxSettings, opAssign, (const FRadialBoxSettings&), ERASE_ARGUMENT_PACK(FRadialBoxSettings&)) },


{ ERASE_METHOD_PTR(FSlateChildSize, opAssign, (const FSlateChildSize&), ERASE_ARGUMENT_PACK(FSlateChildSize&)) },


{ ERASE_METHOD_PTR(FWidgetChild, opAssign, (const FWidgetChild&), ERASE_ARGUMENT_PACK(FWidgetChild&)) },


{ ERASE_METHOD_PTR(FWidgetEventField, opAssign, (const FWidgetEventField&), ERASE_ARGUMENT_PACK(FWidgetEventField&)) },


{ ERASE_METHOD_PTR(FWidgetNavigationData, opAssign, (const FWidgetNavigationData&), ERASE_ARGUMENT_PACK(FWidgetNavigationData&)) },


{ ERASE_METHOD_PTR(FGameViewportWidgetSlot, opAssign, (const FGameViewportWidgetSlot&), ERASE_ARGUMENT_PACK(FGameViewportWidgetSlot&)) },


{ ERASE_METHOD_PTR(FAnchorData, opAssign, (const FAnchorData&), ERASE_ARGUMENT_PACK(FAnchorData&)) },


{ ERASE_METHOD_PTR(FRichTextStyleRow, opAssign, (const FRichTextStyleRow&), ERASE_ARGUMENT_PACK(FRichTextStyleRow&)) },


{ ERASE_METHOD_PTR(FRichImageRow, opAssign, (const FRichImageRow&), ERASE_ARGUMENT_PACK(FRichImageRow&)) },


{ ERASE_METHOD_PTR(FContentBrowserDataFilter, opAssign, (const FContentBrowserDataFilter&), ERASE_ARGUMENT_PACK(FContentBrowserDataFilter&)) },


{ ERASE_METHOD_PTR(FContentBrowserDataObjectFilter, opAssign, (const FContentBrowserDataObjectFilter&), ERASE_ARGUMENT_PACK(FContentBrowserDataObjectFilter&)) },


{ ERASE_METHOD_PTR(FContentBrowserDataPackageFilter, opAssign, (const FContentBrowserDataPackageFilter&), ERASE_ARGUMENT_PACK(FContentBrowserDataPackageFilter&)) },


{ ERASE_METHOD_PTR(FContentBrowserDataClassFilter, opAssign, (const FContentBrowserDataClassFilter&), ERASE_ARGUMENT_PACK(FContentBrowserDataClassFilter&)) },


{ ERASE_METHOD_PTR(FContentBrowserDataCollectionFilter, opAssign, (const FContentBrowserDataCollectionFilter&), ERASE_ARGUMENT_PACK(FContentBrowserDataCollectionFilter&)) },


{ ERASE_METHOD_PTR(FContentBrowserItem, opAssign, (const FContentBrowserItem&), ERASE_ARGUMENT_PACK(FContentBrowserItem&)) },


{ ERASE_METHOD_PTR(FContentBrowserItemPath, opAssign, (const FContentBrowserItemPath&), ERASE_ARGUMENT_PACK(FContentBrowserItemPath&)) },


{ ERASE_METHOD_PTR(FClothLODDataCommon, opAssign, (const FClothLODDataCommon&), ERASE_ARGUMENT_PACK(FClothLODDataCommon&)) },


{ ERASE_METHOD_PTR(FClothPhysicalMeshData, opAssign, (const FClothPhysicalMeshData&), ERASE_ARGUMENT_PACK(FClothPhysicalMeshData&)) },


{ ERASE_METHOD_PTR(FInterchangeFilePickerParameters, opAssign, (const FInterchangeFilePickerParameters&), ERASE_ARGUMENT_PACK(FInterchangeFilePickerParameters&)) },


{ ERASE_METHOD_PTR(FInterchangeStackInfo, opAssign, (const FInterchangeStackInfo&), ERASE_ARGUMENT_PACK(FInterchangeStackInfo&)) },


{ ERASE_METHOD_PTR(FInterchangeTranslatorPipelines, opAssign, (const FInterchangeTranslatorPipelines&), ERASE_ARGUMENT_PACK(FInterchangeTranslatorPipelines&)) },


{ ERASE_METHOD_PTR(FInterchangePipelineStack, opAssign, (const FInterchangePipelineStack&), ERASE_ARGUMENT_PACK(FInterchangePipelineStack&)) },


{ ERASE_METHOD_PTR(FInterchangeImportSettings, opAssign, (const FInterchangeImportSettings&), ERASE_ARGUMENT_PACK(FInterchangeImportSettings&)) },


{ ERASE_METHOD_PTR(FInterchangePerTranslatorDialogOverride, opAssign, (const FInterchangePerTranslatorDialogOverride&), ERASE_ARGUMENT_PACK(FInterchangePerTranslatorDialogOverride&)) },


{ ERASE_METHOD_PTR(FInterchangeDialogOverride, opAssign, (const FInterchangeDialogOverride&), ERASE_ARGUMENT_PACK(FInterchangeDialogOverride&)) },


{ ERASE_METHOD_PTR(FInterchangeContentImportSettings, opAssign, (const FInterchangeContentImportSettings&), ERASE_ARGUMENT_PACK(FInterchangeContentImportSettings&)) },


{ ERASE_METHOD_PTR(FImportAssetParameters, opAssign, (const FImportAssetParameters&), ERASE_ARGUMENT_PACK(FImportAssetParameters&)) },


{ ERASE_METHOD_PTR(FRevisionInfo, opAssign, (const FRevisionInfo&), ERASE_ARGUMENT_PACK(FRevisionInfo&)) },


{ ERASE_METHOD_PTR(FAdvancedCopyMap, opAssign, (const FAdvancedCopyMap&), ERASE_ARGUMENT_PACK(FAdvancedCopyMap&)) },


{ ERASE_METHOD_PTR(FMigrationOptions, opAssign, (const FMigrationOptions&), ERASE_ARGUMENT_PACK(FMigrationOptions&)) },


{ ERASE_METHOD_PTR(FSourceControlState, opAssign, (const FSourceControlState&), ERASE_ARGUMENT_PACK(FSourceControlState&)) },


{ ERASE_METHOD_PTR(FAdditionalBlueprintCategory, opAssign, (const FAdditionalBlueprintCategory&), ERASE_ARGUMENT_PACK(FAdditionalBlueprintCategory&)) },


{ ERASE_METHOD_PTR(FOptionalPinFromProperty, opAssign, (const FOptionalPinFromProperty&), ERASE_ARGUMENT_PACK(FOptionalPinFromProperty&)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbShowPin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbCanToggleVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbPropertyIsCustomized, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbHasOverridePin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbIsMarkedForAdvancedDisplay, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbIsOverrideEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbIsSetValuePinVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOptionalPinFromProperty, SetbIsOverridePinVisible, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEdGraphPinType, opAssign, (const FEdGraphPinType&), ERASE_ARGUMENT_PACK(FEdGraphPinType&)) },


{ ERASE_METHOD_PTR(FAnimBlueprintFunctionPinInfo, opAssign, (const FAnimBlueprintFunctionPinInfo&), ERASE_ARGUMENT_PACK(FAnimBlueprintFunctionPinInfo&)) },


{ ERASE_METHOD_PTR(FAnimPoseEvaluationOptions, opAssign, (const FAnimPoseEvaluationOptions&), ERASE_ARGUMENT_PACK(FAnimPoseEvaluationOptions&)) },


{ ERASE_METHOD_PTR(FAnimPose, opAssign, (const FAnimPose&), ERASE_ARGUMENT_PACK(FAnimPose&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpaceGraphBase, opAssign, (const FAnimNode_BlendSpaceGraphBase&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpaceGraphBase&)) },


{ ERASE_METHOD_PTR(FPoseLinkBase, opAssign, (const FPoseLinkBase&), ERASE_ARGUMENT_PACK(FPoseLinkBase&)) },


{ ERASE_METHOD_PTR(FPoseLink, opAssign, (const FPoseLink&), ERASE_ARGUMENT_PACK(FPoseLink&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpaceGraph, opAssign, (const FAnimNode_BlendSpaceGraph&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpaceGraph&)) },


{ ERASE_METHOD_PTR(FAnimNode_Root, opAssign, (const FAnimNode_Root&), ERASE_ARGUMENT_PACK(FAnimNode_Root&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpaceSampleResult, opAssign, (const FAnimNode_BlendSpaceSampleResult&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpaceSampleResult&)) },


{ ERASE_METHOD_PTR(FAnimNode_SkeletalControlBase, opAssign, (const FAnimNode_SkeletalControlBase&), ERASE_ARGUMENT_PACK(FAnimNode_SkeletalControlBase&)) },


{ ERASE_METHOD_PTR(FInputScaleBiasClamp, opAssign, (const FInputScaleBiasClamp&), ERASE_ARGUMENT_PACK(FInputScaleBiasClamp&)) },


{ ERASE_METHOD_PTR(FInputRange, opAssign, (const FInputRange&), ERASE_ARGUMENT_PACK(FInputRange&)) },


{ ERASE_METHOD_PTR(FInputAlphaBoolBlend, opAssign, (const FInputAlphaBoolBlend&), ERASE_ARGUMENT_PACK(FInputAlphaBoolBlend&)) },


{ ERASE_METHOD_PTR(FAlphaBlend, opAssign, (const FAlphaBlend&), ERASE_ARGUMENT_PACK(FAlphaBlend&)) },


{ ERASE_METHOD_PTR(FInputScaleBias, opAssign, (const FInputScaleBias&), ERASE_ARGUMENT_PACK(FInputScaleBias&)) },


{ ERASE_METHOD_PTR(FComponentSpacePoseLink, opAssign, (const FComponentSpacePoseLink&), ERASE_ARGUMENT_PACK(FComponentSpacePoseLink&)) },


{ ERASE_METHOD_PTR(FAnimNode_ModifyBone, opAssign, (const FAnimNode_ModifyBone&), ERASE_ARGUMENT_PACK(FAnimNode_ModifyBone&)) },


{ ERASE_METHOD_PTR(FBoneReference, opAssign, (const FBoneReference&), ERASE_ARGUMENT_PACK(FBoneReference&)) },


{ ERASE_METHOD_PTR(FAnimNodeReference, opAssign, (const FAnimNodeReference&), ERASE_ARGUMENT_PACK(FAnimNodeReference&)) },


{ ERASE_METHOD_PTR(FRigidBodyAnimNodeReference, opAssign, (const FRigidBodyAnimNodeReference&), ERASE_ARGUMENT_PACK(FRigidBodyAnimNodeReference&)) },


{ ERASE_METHOD_PTR(FAnimNode_RotationMultiplier, opAssign, (const FAnimNode_RotationMultiplier&), ERASE_ARGUMENT_PACK(FAnimNode_RotationMultiplier&)) },


{ ERASE_METHOD_PTR(FBlendSpaceReference, opAssign, (const FBlendSpaceReference&), ERASE_ARGUMENT_PACK(FBlendSpaceReference&)) },


{ ERASE_METHOD_PTR(FRotationRetargetingInfo, opAssign, (const FRotationRetargetingInfo&), ERASE_ARGUMENT_PACK(FRotationRetargetingInfo&)) },


{ ERASE_METHOD_PTR(FRuntimeFloatCurve, AddDefaultKey, (float32, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, Equals, (const FRuntimeFloatCurve&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetFloatValue, (const float32, const float32 = 0.000000), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetNumKeys, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetTimeRange, (float32&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetTimeRange, (float&, float&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetValueRange, (float32&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, GetValueRange, (float&, float&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRuntimeFloatCurve, opAssign, (const FRuntimeFloatCurve&), ERASE_ARGUMENT_PACK(FRuntimeFloatCurve&)) },


{ ERASE_METHOD_PTR(FRealCurve, opAssign, (const FRealCurve&), ERASE_ARGUMENT_PACK(FRealCurve&)) },


{ ERASE_METHOD_PTR(FRichCurve, opAssign, (const FRichCurve&), ERASE_ARGUMENT_PACK(FRichCurve&)) },


{ ERASE_METHOD_PTR(FRichCurveKey, opAssign, (const FRichCurveKey&), ERASE_ARGUMENT_PACK(FRichCurveKey&)) },


{ ERASE_METHOD_PTR(FPositionHistory, opAssign, (const FPositionHistory&), ERASE_ARGUMENT_PACK(FPositionHistory&)) },


{ ERASE_METHOD_PTR(FAnimationStateResultReference, opAssign, (const FAnimationStateResultReference&), ERASE_ARGUMENT_PACK(FAnimationStateResultReference&)) },


{ ERASE_METHOD_PTR(FAnimationStateMachineReference, opAssign, (const FAnimationStateMachineReference&), ERASE_ARGUMENT_PACK(FAnimationStateMachineReference&)) },


{ ERASE_METHOD_PTR(FAnimNode_AssetPlayerRelevancyBase, opAssign, (const FAnimNode_AssetPlayerRelevancyBase&), ERASE_ARGUMENT_PACK(FAnimNode_AssetPlayerRelevancyBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_AssetPlayerBase, opAssign, (const FAnimNode_AssetPlayerBase&), ERASE_ARGUMENT_PACK(FAnimNode_AssetPlayerBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpacePlayerBase, opAssign, (const FAnimNode_BlendSpacePlayerBase&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpacePlayerBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpacePlayer, opAssign, (const FAnimNode_BlendSpacePlayer&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpacePlayer&)) },


{ ERASE_METHOD_PTR(FAnimNode_AimOffsetLookAt, opAssign, (const FAnimNode_AimOffsetLookAt&), ERASE_ARGUMENT_PACK(FAnimNode_AimOffsetLookAt&)) },


{ ERASE_METHOD_PTR(FAnimNode_ApplyAdditive, opAssign, (const FAnimNode_ApplyAdditive&), ERASE_ARGUMENT_PACK(FAnimNode_ApplyAdditive&)) },


{ ERASE_METHOD_PTR(FBlendBoneByChannelEntry, opAssign, (const FBlendBoneByChannelEntry&), ERASE_ARGUMENT_PACK(FBlendBoneByChannelEntry&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendBoneByChannel, opAssign, (const FAnimNode_BlendBoneByChannel&), ERASE_ARGUMENT_PACK(FAnimNode_BlendBoneByChannel&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendListBase, opAssign, (const FAnimNode_BlendListBase&), ERASE_ARGUMENT_PACK(FAnimNode_BlendListBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendListByBool, opAssign, (const FAnimNode_BlendListByBool&), ERASE_ARGUMENT_PACK(FAnimNode_BlendListByBool&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendListByEnum, opAssign, (const FAnimNode_BlendListByEnum&), ERASE_ARGUMENT_PACK(FAnimNode_BlendListByEnum&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendListByInt, opAssign, (const FAnimNode_BlendListByInt&), ERASE_ARGUMENT_PACK(FAnimNode_BlendListByInt&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpaceEvaluator, opAssign, (const FAnimNode_BlendSpaceEvaluator&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpaceEvaluator&)) },


{ ERASE_METHOD_PTR(FAnimNode_BlendSpacePlayer_Standalone, opAssign, (const FAnimNode_BlendSpacePlayer_Standalone&), ERASE_ARGUMENT_PACK(FAnimNode_BlendSpacePlayer_Standalone&)) },


{ ERASE_METHOD_PTR(FAnimNode_CallFunction, opAssign, (const FAnimNode_CallFunction&), ERASE_ARGUMENT_PACK(FAnimNode_CallFunction&)) },


{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, opAssign, (const FAnimNode_CopyPoseFromMesh&), ERASE_ARGUMENT_PACK(FAnimNode_CopyPoseFromMesh&)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, GetbUseAttachedParent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, SetbUseAttachedParent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, GetbCopyCurves, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, SetbCopyCurves, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, GetbUseMeshPose, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_CopyPoseFromMesh, SetbUseMeshPose, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_CurveSource, opAssign, (const FAnimNode_CurveSource&), ERASE_ARGUMENT_PACK(FAnimNode_CurveSource&)) },


{ ERASE_METHOD_PTR(FAnimNode_LayeredBoneBlend, opAssign, (const FAnimNode_LayeredBoneBlend&), ERASE_ARGUMENT_PACK(FAnimNode_LayeredBoneBlend&)) },


{ ERASE_METHOD_PTR(FPerBoneBlendWeight, opAssign, (const FPerBoneBlendWeight&), ERASE_ARGUMENT_PACK(FPerBoneBlendWeight&)) },


{ ERASE_METHOD_PTR(FInputBlendPose, opAssign, (const FInputBlendPose&), ERASE_ARGUMENT_PACK(FInputBlendPose&)) },


{ ERASE_METHOD_PTR(FBranchFilter, opAssign, (const FBranchFilter&), ERASE_ARGUMENT_PACK(FBranchFilter&)) },


{ ERASE_METHOD_PTR(FAnimNode_MakeDynamicAdditive, opAssign, (const FAnimNode_MakeDynamicAdditive&), ERASE_ARGUMENT_PACK(FAnimNode_MakeDynamicAdditive&)) },


{ ERASE_METHOD_PTR(FAnimNode_MirrorBase, opAssign, (const FAnimNode_MirrorBase&), ERASE_ARGUMENT_PACK(FAnimNode_MirrorBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_Mirror, opAssign, (const FAnimNode_Mirror&), ERASE_ARGUMENT_PACK(FAnimNode_Mirror&)) },


{ ERASE_METHOD_PTR(FAnimNode_Mirror_Standalone, opAssign, (const FAnimNode_Mirror_Standalone&), ERASE_ARGUMENT_PACK(FAnimNode_Mirror_Standalone&)) },


{ ERASE_METHOD_PTR(FAnimNode_ModifyCurve, opAssign, (const FAnimNode_ModifyCurve&), ERASE_ARGUMENT_PACK(FAnimNode_ModifyCurve&)) },


{ ERASE_METHOD_PTR(FAnimNode_MultiWayBlend, opAssign, (const FAnimNode_MultiWayBlend&), ERASE_ARGUMENT_PACK(FAnimNode_MultiWayBlend&)) },


{ ERASE_METHOD_PTR(FAnimNode_PoseHandler, opAssign, (const FAnimNode_PoseHandler&), ERASE_ARGUMENT_PACK(FAnimNode_PoseHandler&)) },


{ ERASE_METHOD_PTR(FAnimNode_PoseBlendNode, opAssign, (const FAnimNode_PoseBlendNode&), ERASE_ARGUMENT_PACK(FAnimNode_PoseBlendNode&)) },


{ ERASE_METHOD_PTR(FAnimNode_PoseByName, opAssign, (const FAnimNode_PoseByName&), ERASE_ARGUMENT_PACK(FAnimNode_PoseByName&)) },


{ ERASE_METHOD_PTR(FPoseDriverTransform, opAssign, (const FPoseDriverTransform&), ERASE_ARGUMENT_PACK(FPoseDriverTransform&)) },


{ ERASE_METHOD_PTR(FPoseDriverTarget, opAssign, (const FPoseDriverTarget&), ERASE_ARGUMENT_PACK(FPoseDriverTarget&)) },


{ ERASE_METHOD_PTR(FAnimNode_PoseDriver, opAssign, (const FAnimNode_PoseDriver&), ERASE_ARGUMENT_PACK(FAnimNode_PoseDriver&)) },


{ ERASE_METHOD_PTR(FRBFParams, opAssign, (const FRBFParams&), ERASE_ARGUMENT_PACK(FRBFParams&)) },


{ ERASE_METHOD_PTR(FAnimNode_PoseSnapshot, opAssign, (const FAnimNode_PoseSnapshot&), ERASE_ARGUMENT_PACK(FAnimNode_PoseSnapshot&)) },


{ ERASE_METHOD_PTR(FPoseSnapshot, opAssign, (const FPoseSnapshot&), ERASE_ARGUMENT_PACK(FPoseSnapshot&)) },


{ ERASE_METHOD_PTR(FRandomPlayerSequenceEntry, opAssign, (const FRandomPlayerSequenceEntry&), ERASE_ARGUMENT_PACK(FRandomPlayerSequenceEntry&)) },


{ ERASE_METHOD_PTR(FAnimNode_RandomPlayer, opAssign, (const FAnimNode_RandomPlayer&), ERASE_ARGUMENT_PACK(FAnimNode_RandomPlayer&)) },


{ ERASE_METHOD_PTR(FAnimNode_RotateRootBone, opAssign, (const FAnimNode_RotateRootBone&), ERASE_ARGUMENT_PACK(FAnimNode_RotateRootBone&)) },


{ ERASE_METHOD_PTR(FAnimNode_RotationOffsetBlendSpace, opAssign, (const FAnimNode_RotationOffsetBlendSpace&), ERASE_ARGUMENT_PACK(FAnimNode_RotationOffsetBlendSpace&)) },


{ ERASE_METHOD_PTR(FAnimNode_RotationOffsetBlendSpaceGraph, opAssign, (const FAnimNode_RotationOffsetBlendSpaceGraph&), ERASE_ARGUMENT_PACK(FAnimNode_RotationOffsetBlendSpaceGraph&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequenceEvaluatorBase, opAssign, (const FAnimNode_SequenceEvaluatorBase&), ERASE_ARGUMENT_PACK(FAnimNode_SequenceEvaluatorBase&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequenceEvaluator, opAssign, (const FAnimNode_SequenceEvaluator&), ERASE_ARGUMENT_PACK(FAnimNode_SequenceEvaluator&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequenceEvaluator_Standalone, opAssign, (const FAnimNode_SequenceEvaluator_Standalone&), ERASE_ARGUMENT_PACK(FAnimNode_SequenceEvaluator_Standalone&)) },


{ ERASE_METHOD_PTR(FAnimNode_Slot, opAssign, (const FAnimNode_Slot&), ERASE_ARGUMENT_PACK(FAnimNode_Slot&)) },


{ ERASE_METHOD_PTR(FAnimNode_Sync, opAssign, (const FAnimNode_Sync&), ERASE_ARGUMENT_PACK(FAnimNode_Sync&)) },


{ ERASE_METHOD_PTR(FAnimNode_TwoWayBlend, opAssign, (const FAnimNode_TwoWayBlend&), ERASE_ARGUMENT_PACK(FAnimNode_TwoWayBlend&)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoWayBlend, GetbAlphaBoolEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoWayBlend, SetbAlphaBoolEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoWayBlend, SetbResetChildOnActivation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoWayBlend, SetbAlwaysUpdateChildren, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBlendListBaseReference, opAssign, (const FBlendListBaseReference&), ERASE_ARGUMENT_PACK(FBlendListBaseReference&)) },


{ ERASE_METHOD_PTR(FBlendSpacePlayerReference, opAssign, (const FBlendSpacePlayerReference&), ERASE_ARGUMENT_PACK(FBlendSpacePlayerReference&)) },


{ ERASE_METHOD_PTR(FAnimPhysConstraintSetup, opAssign, (const FAnimPhysConstraintSetup&), ERASE_ARGUMENT_PACK(FAnimPhysConstraintSetup&)) },


{ ERASE_METHOD_PTR(FAnimPhysPlanarLimit, opAssign, (const FAnimPhysPlanarLimit&), ERASE_ARGUMENT_PACK(FAnimPhysPlanarLimit&)) },


{ ERASE_METHOD_PTR(FAnimPhysSphericalLimit, opAssign, (const FAnimPhysSphericalLimit&), ERASE_ARGUMENT_PACK(FAnimPhysSphericalLimit&)) },


{ ERASE_METHOD_PTR(FAnimPhysBodyDefinition, opAssign, (const FAnimPhysBodyDefinition&), ERASE_ARGUMENT_PACK(FAnimPhysBodyDefinition&)) },


{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, opAssign, (const FAnimNode_AnimDynamics&), ERASE_ARGUMENT_PACK(FAnimNode_AnimDynamics&)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbUseSphericalLimits, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbUsePlanarLimit, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbDoUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbDoEval, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbOverrideLinearDamping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbOverrideAngularBias, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbOverrideAngularDamping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbEnableWind, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, GetbUseGravityOverride, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbUseGravityOverride, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbGravityOverrideInSimSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbLinearSpring, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbAngularSpring, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_AnimDynamics, SetbChain, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAngularRangeLimit, opAssign, (const FAngularRangeLimit&), ERASE_ARGUMENT_PACK(FAngularRangeLimit&)) },


{ ERASE_METHOD_PTR(FAnimNode_ApplyLimits, opAssign, (const FAnimNode_ApplyLimits&), ERASE_ARGUMENT_PACK(FAnimNode_ApplyLimits&)) },


{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, opAssign, (const FAnimNode_BoneDrivenController&), ERASE_ARGUMENT_PACK(FAnimNode_BoneDrivenController&)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbUseRange, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetTranslationX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetTranslationY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetTranslationZ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetRotationX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetRotationY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetRotationZ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetScaleX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetScaleY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_BoneDrivenController, SetbAffectTargetScaleZ, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_CCDIK, opAssign, (const FAnimNode_CCDIK&), ERASE_ARGUMENT_PACK(FAnimNode_CCDIK&)) },


{ ERASE_METHOD_PTR(FBoneSocketTarget, opAssign, (const FBoneSocketTarget&), ERASE_ARGUMENT_PACK(FBoneSocketTarget&)) },


{ ERASE_METHOD_PTR(FSocketReference, opAssign, (const FSocketReference&), ERASE_ARGUMENT_PACK(FSocketReference&)) },


{ ERASE_METHOD_PTR(FConstraint, opAssign, (const FConstraint&), ERASE_ARGUMENT_PACK(FConstraint&)) },


{ ERASE_METHOD_PTR(FAnimNode_Constraint, opAssign, (const FAnimNode_Constraint&), ERASE_ARGUMENT_PACK(FAnimNode_Constraint&)) },


{ ERASE_METHOD_PTR(FAnimNode_CopyBone, opAssign, (const FAnimNode_CopyBone&), ERASE_ARGUMENT_PACK(FAnimNode_CopyBone&)) },


{ ERASE_METHOD_PTR(FAnimNode_CopyBoneDelta, opAssign, (const FAnimNode_CopyBoneDelta&), ERASE_ARGUMENT_PACK(FAnimNode_CopyBoneDelta&)) },


{ ERASE_METHOD_PTR(FAnimNode_Fabrik, opAssign, (const FAnimNode_Fabrik&), ERASE_ARGUMENT_PACK(FAnimNode_Fabrik&)) },


{ ERASE_METHOD_PTR(FAnimNode_HandIKRetargeting, opAssign, (const FAnimNode_HandIKRetargeting&), ERASE_ARGUMENT_PACK(FAnimNode_HandIKRetargeting&)) },


{ ERASE_METHOD_PTR(FAnimLegIKDefinition, opAssign, (const FAnimLegIKDefinition&), ERASE_ARGUMENT_PACK(FAnimLegIKDefinition&)) },


{ ERASE_METHOD_PTR(FAnimNode_LegIK, opAssign, (const FAnimNode_LegIK&), ERASE_ARGUMENT_PACK(FAnimNode_LegIK&)) },


{ ERASE_METHOD_PTR(FAnimNode_LookAt, opAssign, (const FAnimNode_LookAt&), ERASE_ARGUMENT_PACK(FAnimNode_LookAt&)) },


{ ERASE_METHOD_PTR(FAnimNode_ObserveBone, opAssign, (const FAnimNode_ObserveBone&), ERASE_ARGUMENT_PACK(FAnimNode_ObserveBone&)) },


{ ERASE_METHOD_PTR(FAnimNode_ResetRoot, opAssign, (const FAnimNode_ResetRoot&), ERASE_ARGUMENT_PACK(FAnimNode_ResetRoot&)) },


{ ERASE_METHOD_PTR(FSimSpaceSettings, opAssign, (const FSimSpaceSettings&), ERASE_ARGUMENT_PACK(FSimSpaceSettings&)) },


{ ERASE_METHOD_PTR(FAnimNode_RigidBody, opAssign, (const FAnimNode_RigidBody&), ERASE_ARGUMENT_PACK(FAnimNode_RigidBody&)) },
{ ERASE_METHOD_PTR(FAnimNode_RigidBody, SetbEnableWorldGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_RigidBody, SetbOverrideWorldGravity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_RigidBody, SetbTransferBoneVelocities, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_RigidBody, SetbFreezeIncomingPoseOnStart, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_RigidBody, SetbClampLinearTranslationLimitToRefPose, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_ScaleChainLength, opAssign, (const FAnimNode_ScaleChainLength&), ERASE_ARGUMENT_PACK(FAnimNode_ScaleChainLength&)) },


{ ERASE_METHOD_PTR(FAnimNode_SplineIK, opAssign, (const FAnimNode_SplineIK&), ERASE_ARGUMENT_PACK(FAnimNode_SplineIK&)) },


{ ERASE_METHOD_PTR(FAnimNode_SpringBone, opAssign, (const FAnimNode_SpringBone&), ERASE_ARGUMENT_PACK(FAnimNode_SpringBone&)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbLimitDisplacement, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbTranslateX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbTranslateY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbTranslateZ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbRotateX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbRotateY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_SpringBone, SetbRotateZ, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRotationLimit, opAssign, (const FRotationLimit&), ERASE_ARGUMENT_PACK(FRotationLimit&)) },


{ ERASE_METHOD_PTR(FAnimNode_Trail, opAssign, (const FAnimNode_Trail&), ERASE_ARGUMENT_PACK(FAnimNode_Trail&)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbInvertChainBoneAxis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbLimitStretch, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbLimitRotation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbUsePlanarLimit, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbActorSpaceFakeVel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbReorientParentToChild, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbEnableDebug, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbShowBaseMotion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbShowTrailLocation, (bool), ERASE_ARGUMENT_PACK(void)) },
*/