#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(FMapPlayerKeyArgs, GetbDeferOnSettingsChangedBroadcast, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMapPlayerKeyArgs, SetbDeferOnSettingsChangedBroadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKeyMappingRow, opAssign, (const FKeyMappingRow&), ERASE_ARGUMENT_PACK(FKeyMappingRow&)) },


{ ERASE_METHOD_PTR(FPlayerMappableKeyQueryOptions, opAssign, (const FPlayerMappableKeyQueryOptions&), ERASE_ARGUMENT_PACK(FPlayerMappableKeyQueryOptions&)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyQueryOptions, GetbMatchBasicKeyTypes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyQueryOptions, SetbMatchBasicKeyTypes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyQueryOptions, GetbMatchKeyAxisType, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyQueryOptions, SetbMatchKeyAxisType, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMappingQueryIssue, opAssign, (const FMappingQueryIssue&), ERASE_ARGUMENT_PACK(FMappingQueryIssue&)) },


{ ERASE_METHOD_PTR(FPlayerMappableKeySlot, opAssign, (const FPlayerMappableKeySlot&), ERASE_ARGUMENT_PACK(FPlayerMappableKeySlot&)) },


{ ERASE_METHOD_PTR(FPlayerMappableKeyOptions, opAssign, (const FPlayerMappableKeyOptions&), ERASE_ARGUMENT_PACK(FPlayerMappableKeyOptions&)) },


{ ERASE_METHOD_PTR(FEnhancedActionKeyMapping, opAssign, (const FEnhancedActionKeyMapping&), ERASE_ARGUMENT_PACK(FEnhancedActionKeyMapping&)) },
{ ERASE_METHOD_PTR(FEnhancedActionKeyMapping, SetbIsPlayerMappable, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FDefaultContextSetting, opAssign, (const FDefaultContextSetting&), ERASE_ARGUMENT_PACK(FDefaultContextSetting&)) },


{ ERASE_METHOD_PTR(FModifyContextOptions, opAssign, (const FModifyContextOptions&), ERASE_ARGUMENT_PACK(FModifyContextOptions&)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, GetbIgnoreAllPressedKeysUntilRelease, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, SetbIgnoreAllPressedKeysUntilRelease, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, GetbForceImmediately, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, SetbForceImmediately, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, GetbNotifyUserSettings, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModifyContextOptions, SetbNotifyUserSettings, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInputActionInstance, opAssign, (const FInputActionInstance&), ERASE_ARGUMENT_PACK(FInputActionInstance&)) },


{ ERASE_METHOD_PTR(FInputComboStepData, opAssign, (const FInputComboStepData&), ERASE_ARGUMENT_PACK(FInputComboStepData&)) },


{ ERASE_METHOD_PTR(FInputCancelAction, opAssign, (const FInputCancelAction&), ERASE_ARGUMENT_PACK(FInputCancelAction&)) },


{ ERASE_METHOD_PTR(FActorRecordedProperty, opAssign, (const FActorRecordedProperty&), ERASE_ARGUMENT_PACK(FActorRecordedProperty&)) },


{ ERASE_METHOD_PTR(FAudioInputDeviceInfoProperty, opAssign, (const FAudioInputDeviceInfoProperty&), ERASE_ARGUMENT_PACK(FAudioInputDeviceInfoProperty&)) },


{ ERASE_METHOD_PTR(FAudioInputDeviceProperty, opAssign, (const FAudioInputDeviceProperty&), ERASE_ARGUMENT_PACK(FAudioInputDeviceProperty&)) },


{ ERASE_METHOD_PTR(FAudioInputDeviceChannelProperty, opAssign, (const FAudioInputDeviceChannelProperty&), ERASE_ARGUMENT_PACK(FAudioInputDeviceChannelProperty&)) },


{ ERASE_METHOD_PTR(FTakeRecorderPropertyTrackSettings, opAssign, (const FTakeRecorderPropertyTrackSettings&), ERASE_ARGUMENT_PACK(FTakeRecorderPropertyTrackSettings&)) },


{ ERASE_METHOD_PTR(FTakeRecorderTrackSettings, opAssign, (const FTakeRecorderTrackSettings&), ERASE_ARGUMENT_PACK(FTakeRecorderTrackSettings&)) },


{ ERASE_METHOD_PTR(FTakeRecorderUserParameters, opAssign, (const FTakeRecorderUserParameters&), ERASE_ARGUMENT_PACK(FTakeRecorderUserParameters&)) },


{ ERASE_METHOD_PTR(FTakeRecorderProjectParameters, opAssign, (const FTakeRecorderProjectParameters&), ERASE_ARGUMENT_PACK(FTakeRecorderProjectParameters&)) },


{ ERASE_METHOD_PTR(FTakeRecorderParameters, opAssign, (const FTakeRecorderParameters&), ERASE_ARGUMENT_PACK(FTakeRecorderParameters&)) },


{ ERASE_METHOD_PTR(FTranslationChange, opAssign, (const FTranslationChange&), ERASE_ARGUMENT_PACK(FTranslationChange&)) },


{ ERASE_METHOD_PTR(FTranslationContextInfo, opAssign, (const FTranslationContextInfo&), ERASE_ARGUMENT_PACK(FTranslationContextInfo&)) },


{ ERASE_METHOD_PTR(FRigVMUserWorkflow, opAssign, (const FRigVMUserWorkflow&), ERASE_ARGUMENT_PACK(FRigVMUserWorkflow&)) },


{ ERASE_METHOD_PTR(FRigElementKey, opAssign, (const FRigElementKey&), ERASE_ARGUMENT_PACK(FRigElementKey&)) },


{ ERASE_METHOD_PTR(FRigVMExtendedExecuteContext, opAssign, (const FRigVMExtendedExecuteContext&), ERASE_ARGUMENT_PACK(FRigVMExtendedExecuteContext&)) },


{ ERASE_METHOD_PTR(FRigVMDrawContainer, opAssign, (const FRigVMDrawContainer&), ERASE_ARGUMENT_PACK(FRigVMDrawContainer&)) },


{ ERASE_METHOD_PTR(FRigVMDrawInstruction, opAssign, (const FRigVMDrawInstruction&), ERASE_ARGUMENT_PACK(FRigVMDrawInstruction&)) },


{ ERASE_METHOD_PTR(FRigVMRuntimeSettings, opAssign, (const FRigVMRuntimeSettings&), ERASE_ARGUMENT_PACK(FRigVMRuntimeSettings&)) },


{ ERASE_METHOD_PTR(FRigBaseElement, opAssign, (const FRigBaseElement&), ERASE_ARGUMENT_PACK(FRigBaseElement&)) },


{ ERASE_METHOD_PTR(FRigTransformElement, opAssign, (const FRigTransformElement&), ERASE_ARGUMENT_PACK(FRigTransformElement&)) },


{ ERASE_METHOD_PTR(FRigCurrentAndInitialTransform, opAssign, (const FRigCurrentAndInitialTransform&), ERASE_ARGUMENT_PACK(FRigCurrentAndInitialTransform&)) },


{ ERASE_METHOD_PTR(FRigLocalAndGlobalTransform, opAssign, (const FRigLocalAndGlobalTransform&), ERASE_ARGUMENT_PACK(FRigLocalAndGlobalTransform&)) },


{ ERASE_METHOD_PTR(FRigComputedTransform, opAssign, (const FRigComputedTransform&), ERASE_ARGUMENT_PACK(FRigComputedTransform&)) },


{ ERASE_METHOD_PTR(FRigMultiParentElement, opAssign, (const FRigMultiParentElement&), ERASE_ARGUMENT_PACK(FRigMultiParentElement&)) },


{ ERASE_METHOD_PTR(FRigControlElement, opAssign, (const FRigControlElement&), ERASE_ARGUMENT_PACK(FRigControlElement&)) },


{ ERASE_METHOD_PTR(FRigPreferredEulerAngles, opAssign, (const FRigPreferredEulerAngles&), ERASE_ARGUMENT_PACK(FRigPreferredEulerAngles&)) },


{ ERASE_METHOD_PTR(FRigControlSettings, opAssign, (const FRigControlSettings&), ERASE_ARGUMENT_PACK(FRigControlSettings&)) },


{ ERASE_METHOD_PTR(FRigControlElementCustomization, opAssign, (const FRigControlElementCustomization&), ERASE_ARGUMENT_PACK(FRigControlElementCustomization&)) },


{ ERASE_METHOD_PTR(FRigControlValue, opAssign, (const FRigControlValue&), ERASE_ARGUMENT_PACK(FRigControlValue&)) },


{ ERASE_METHOD_PTR(FRigControlValueStorage, opAssign, (const FRigControlValueStorage&), ERASE_ARGUMENT_PACK(FRigControlValueStorage&)) },


{ ERASE_METHOD_PTR(FRigControlLimitEnabled, opAssign, (const FRigControlLimitEnabled&), ERASE_ARGUMENT_PACK(FRigControlLimitEnabled&)) },


{ ERASE_METHOD_PTR(FRigModuleSettings, opAssign, (const FRigModuleSettings&), ERASE_ARGUMENT_PACK(FRigModuleSettings&)) },


{ ERASE_METHOD_PTR(FRigModuleConnector, opAssign, (const FRigModuleConnector&), ERASE_ARGUMENT_PACK(FRigModuleConnector&)) },


{ ERASE_METHOD_PTR(FRigConnectorSettings, opAssign, (const FRigConnectorSettings&), ERASE_ARGUMENT_PACK(FRigConnectorSettings&)) },


{ ERASE_METHOD_PTR(FRigConnectionRuleStash, opAssign, (const FRigConnectionRuleStash&), ERASE_ARGUMENT_PACK(FRigConnectionRuleStash&)) },


{ ERASE_METHOD_PTR(FRigModuleIdentifier, opAssign, (const FRigModuleIdentifier&), ERASE_ARGUMENT_PACK(FRigModuleIdentifier&)) },


{ ERASE_METHOD_PTR(FRigInfluenceMapPerEvent, opAssign, (const FRigInfluenceMapPerEvent&), ERASE_ARGUMENT_PACK(FRigInfluenceMapPerEvent&)) },


{ ERASE_METHOD_PTR(FRigInfluenceMap, opAssign, (const FRigInfluenceMap&), ERASE_ARGUMENT_PACK(FRigInfluenceMap&)) },


{ ERASE_METHOD_PTR(FRigInfluenceEntry, opAssign, (const FRigInfluenceEntry&), ERASE_ARGUMENT_PACK(FRigInfluenceEntry&)) },


{ ERASE_METHOD_PTR(FRigHierarchySettings, opAssign, (const FRigHierarchySettings&), ERASE_ARGUMENT_PACK(FRigHierarchySettings&)) },


{ ERASE_METHOD_PTR(FInstancedStruct, opAssign, (const FInstancedStruct&), ERASE_ARGUMENT_PACK(FInstancedStruct&)) },


{ ERASE_METHOD_PTR(FPropertyBagPropertyDesc, opAssign, (const FPropertyBagPropertyDesc&), ERASE_ARGUMENT_PACK(FPropertyBagPropertyDesc&)) },


{ ERASE_METHOD_PTR(FInstancedPropertyBag, opAssign, (const FInstancedPropertyBag&), ERASE_ARGUMENT_PACK(FInstancedPropertyBag&)) },


{ ERASE_METHOD_PTR(FRigVMExternalVariableDef, opAssign, (const FRigVMExternalVariableDef&), ERASE_ARGUMENT_PACK(FRigVMExternalVariableDef&)) },


{ ERASE_METHOD_PTR(FRigVMStructMutable, opAssign, (const FRigVMStructMutable&), ERASE_ARGUMENT_PACK(FRigVMStructMutable&)) },


{ ERASE_METHOD_PTR(FRigVMExecuteContext, opAssign, (const FRigVMExecuteContext&), ERASE_ARGUMENT_PACK(FRigVMExecuteContext&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugBaseMutable, opAssign, (const FRigVMFunction_DebugBaseMutable&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMutableBase, opAssign, (const FRigVMFunction_MathMutableBase&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMutableBase&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_Sequence, opAssign, (const FRigVMFunction_Sequence&), ERASE_ARGUMENT_PACK(FRigVMFunction_Sequence&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_SimBaseMutable, opAssign, (const FRigVMFunction_SimBaseMutable&), ERASE_ARGUMENT_PACK(FRigVMFunction_SimBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigVMGraphFunctionData, opAssign, (const FRigVMGraphFunctionData&), ERASE_ARGUMENT_PACK(FRigVMGraphFunctionData&)) },


{ ERASE_METHOD_PTR(FRigVMFunctionCompilationData, opAssign, (const FRigVMFunctionCompilationData&), ERASE_ARGUMENT_PACK(FRigVMFunctionCompilationData&)) },


{ ERASE_METHOD_PTR(FRigVMGraphFunctionHeader, opAssign, (const FRigVMGraphFunctionHeader&), ERASE_ARGUMENT_PACK(FRigVMGraphFunctionHeader&)) },


{ ERASE_METHOD_PTR(FRigVMGraphFunctionIdentifier, opAssign, (const FRigVMGraphFunctionIdentifier&), ERASE_ARGUMENT_PACK(FRigVMGraphFunctionIdentifier&)) },


{ ERASE_METHOD_PTR(FRigVMGraphFunctionArgument, opAssign, (const FRigVMGraphFunctionArgument&), ERASE_ARGUMENT_PACK(FRigVMGraphFunctionArgument&)) },


{ ERASE_METHOD_PTR(FRigVMMemoryStorageStruct, opAssign, (const FRigVMMemoryStorageStruct&), ERASE_ARGUMENT_PACK(FRigVMMemoryStorageStruct&)) },


{ ERASE_METHOD_PTR(FRigVMMemoryStatistics, opAssign, (const FRigVMMemoryStatistics&), ERASE_ARGUMENT_PACK(FRigVMMemoryStatistics&)) },


{ ERASE_METHOD_PTR(FRigVMByteCodeStatistics, opAssign, (const FRigVMByteCodeStatistics&), ERASE_ARGUMENT_PACK(FRigVMByteCodeStatistics&)) },


{ ERASE_METHOD_PTR(FRigVMStatistics, opAssign, (const FRigVMStatistics&), ERASE_ARGUMENT_PACK(FRigVMStatistics&)) },


{ ERASE_METHOD_PTR(FRigVMParameter, opAssign, (const FRigVMParameter&), ERASE_ARGUMENT_PACK(FRigVMParameter&)) },


{ ERASE_METHOD_PTR(FRigVMDrawInterface, opAssign, (const FRigVMDrawInterface&), ERASE_ARGUMENT_PACK(FRigVMDrawInterface&)) },


{ ERASE_METHOD_PTR(FRigVMInstructionSetExecuteState, opAssign, (const FRigVMInstructionSetExecuteState&), ERASE_ARGUMENT_PACK(FRigVMInstructionSetExecuteState&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AnimEasingType, opAssign, (const FRigVMFunction_AnimEasingType&), ERASE_ARGUMENT_PACK(FRigVMFunction_AnimEasingType&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AnimEasing, opAssign, (const FRigVMFunction_AnimEasing&), ERASE_ARGUMENT_PACK(FRigVMFunction_AnimEasing&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AnimEvalRichCurve, opAssign, (const FRigVMFunction_AnimEvalRichCurve&), ERASE_ARGUMENT_PACK(FRigVMFunction_AnimEvalRichCurve&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AnimRichCurve, opAssign, (const FRigVMFunction_AnimRichCurve&), ERASE_ARGUMENT_PACK(FRigVMFunction_AnimRichCurve&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_GetDeltaTime, opAssign, (const FRigVMFunction_GetDeltaTime&), ERASE_ARGUMENT_PACK(FRigVMFunction_GetDeltaTime&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_GetWorldTime, opAssign, (const FRigVMFunction_GetWorldTime&), ERASE_ARGUMENT_PACK(FRigVMFunction_GetWorldTime&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_FramesToSeconds, opAssign, (const FRigVMFunction_FramesToSeconds&), ERASE_ARGUMENT_PACK(FRigVMFunction_FramesToSeconds&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_SecondsToFrames, opAssign, (const FRigVMFunction_SecondsToFrames&), ERASE_ARGUMENT_PACK(FRigVMFunction_SecondsToFrames&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugLineNoSpace, opAssign, (const FRigVMFunction_DebugLineNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugLineNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugLineStripNoSpace, opAssign, (const FRigVMFunction_DebugLineStripNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugLineStripNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugPoint, opAssign, (const FRigVMFunction_DebugPoint&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugPoint&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugPointMutable, opAssign, (const FRigVMFunction_DebugPointMutable&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugPointMutable&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugRectangle, opAssign, (const FRigVMFunction_DebugRectangle&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugRectangle&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugRectangleNoSpace, opAssign, (const FRigVMFunction_DebugRectangleNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugRectangleNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugArc, opAssign, (const FRigVMFunction_DebugArc&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugArc&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugArcNoSpace, opAssign, (const FRigVMFunction_DebugArcNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugArcNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugTransformMutableNoSpace, opAssign, (const FRigVMFunction_DebugTransformMutableNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugTransformMutableNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DebugTransformArrayMutableNoSpace, opAssign, (const FRigVMFunction_DebugTransformArrayMutableNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_DebugTransformArrayMutableNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugVector, opAssign, (const FRigVMFunction_VisualDebugVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugVectorNoSpace, opAssign, (const FRigVMFunction_VisualDebugVectorNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugVectorNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugQuat, opAssign, (const FRigVMFunction_VisualDebugQuat&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugQuat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugQuatNoSpace, opAssign, (const FRigVMFunction_VisualDebugQuatNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugQuatNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugTransform, opAssign, (const FRigVMFunction_VisualDebugTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VisualDebugTransformNoSpace, opAssign, (const FRigVMFunction_VisualDebugTransformNoSpace&), ERASE_ARGUMENT_PACK(FRigVMFunction_VisualDebugTransformNoSpace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_ForLoopCount, opAssign, (const FRigVMFunction_ForLoopCount&), ERASE_ARGUMENT_PACK(FRigVMFunction_ForLoopCount&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_UserDefinedEvent, opAssign, (const FRigVMFunction_UserDefinedEvent&), ERASE_ARGUMENT_PACK(FRigVMFunction_UserDefinedEvent&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolConstant, opAssign, (const FRigVMFunction_MathBoolConstant&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolConstant&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolUnaryOp, opAssign, (const FRigVMFunction_MathBoolUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolBinaryOp, opAssign, (const FRigVMFunction_MathBoolBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolBinaryAggregateOp, opAssign, (const FRigVMFunction_MathBoolBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolMake, opAssign, (const FRigVMFunction_MathBoolMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolConstTrue, opAssign, (const FRigVMFunction_MathBoolConstTrue&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolConstTrue&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolConstFalse, opAssign, (const FRigVMFunction_MathBoolConstFalse&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolConstFalse&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolNot, opAssign, (const FRigVMFunction_MathBoolNot&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolNot&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolAnd, opAssign, (const FRigVMFunction_MathBoolAnd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolAnd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolNand, opAssign, (const FRigVMFunction_MathBoolNand&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolNand&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolNand2, opAssign, (const FRigVMFunction_MathBoolNand2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolNand2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolOr, opAssign, (const FRigVMFunction_MathBoolOr&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolOr&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolEquals, opAssign, (const FRigVMFunction_MathBoolEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolNotEquals, opAssign, (const FRigVMFunction_MathBoolNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolToggled, opAssign, (const FRigVMFunction_MathBoolToggled&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolToggled&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolFlipFlop, opAssign, (const FRigVMFunction_MathBoolFlipFlop&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolFlipFlop&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolOnce, opAssign, (const FRigVMFunction_MathBoolOnce&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolOnce&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolToFloat, opAssign, (const FRigVMFunction_MathBoolToFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolToFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathBoolToInteger, opAssign, (const FRigVMFunction_MathBoolToInteger&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathBoolToInteger&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorBinaryOp, opAssign, (const FRigVMFunction_MathColorBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorBinaryAggregateOp, opAssign, (const FRigVMFunction_MathColorBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorMake, opAssign, (const FRigVMFunction_MathColorMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorFromFloat, opAssign, (const FRigVMFunction_MathColorFromFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorFromFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorFromDouble, opAssign, (const FRigVMFunction_MathColorFromDouble&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorFromDouble&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorAdd, opAssign, (const FRigVMFunction_MathColorAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorSub, opAssign, (const FRigVMFunction_MathColorSub&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorSub&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorMul, opAssign, (const FRigVMFunction_MathColorMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathColorLerp, opAssign, (const FRigVMFunction_MathColorLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathColorLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleConstant, opAssign, (const FRigVMFunction_MathDoubleConstant&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleConstant&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleUnaryOp, opAssign, (const FRigVMFunction_MathDoubleUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleBinaryOp, opAssign, (const FRigVMFunction_MathDoubleBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleBinaryAggregateOp, opAssign, (const FRigVMFunction_MathDoubleBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleMake, opAssign, (const FRigVMFunction_MathDoubleMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleConstPi, opAssign, (const FRigVMFunction_MathDoubleConstPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleConstPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleConstHalfPi, opAssign, (const FRigVMFunction_MathDoubleConstHalfPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleConstHalfPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleConstTwoPi, opAssign, (const FRigVMFunction_MathDoubleConstTwoPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleConstTwoPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleConstE, opAssign, (const FRigVMFunction_MathDoubleConstE&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleConstE&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAdd, opAssign, (const FRigVMFunction_MathDoubleAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleSub, opAssign, (const FRigVMFunction_MathDoubleSub&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleSub&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleMul, opAssign, (const FRigVMFunction_MathDoubleMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleDiv, opAssign, (const FRigVMFunction_MathDoubleDiv&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleDiv&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleMod, opAssign, (const FRigVMFunction_MathDoubleMod&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleMod&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleMin, opAssign, (const FRigVMFunction_MathDoubleMin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleMin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleMax, opAssign, (const FRigVMFunction_MathDoubleMax&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleMax&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoublePow, opAssign, (const FRigVMFunction_MathDoublePow&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoublePow&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleSqrt, opAssign, (const FRigVMFunction_MathDoubleSqrt&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleSqrt&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleNegate, opAssign, (const FRigVMFunction_MathDoubleNegate&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleNegate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAbs, opAssign, (const FRigVMFunction_MathDoubleAbs&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAbs&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleFloor, opAssign, (const FRigVMFunction_MathDoubleFloor&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleFloor&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleCeil, opAssign, (const FRigVMFunction_MathDoubleCeil&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleCeil&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleRound, opAssign, (const FRigVMFunction_MathDoubleRound&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleRound&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleToInt, opAssign, (const FRigVMFunction_MathDoubleToInt&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleToInt&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleSign, opAssign, (const FRigVMFunction_MathDoubleSign&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleSign&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleClamp, opAssign, (const FRigVMFunction_MathDoubleClamp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleClamp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleLerp, opAssign, (const FRigVMFunction_MathDoubleLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleRemap, opAssign, (const FRigVMFunction_MathDoubleRemap&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleRemap&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleEquals, opAssign, (const FRigVMFunction_MathDoubleEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleNotEquals, opAssign, (const FRigVMFunction_MathDoubleNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleGreater, opAssign, (const FRigVMFunction_MathDoubleGreater&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleGreater&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleLess, opAssign, (const FRigVMFunction_MathDoubleLess&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleLess&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleGreaterEqual, opAssign, (const FRigVMFunction_MathDoubleGreaterEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleGreaterEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleLessEqual, opAssign, (const FRigVMFunction_MathDoubleLessEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleLessEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleIsNearlyZero, opAssign, (const FRigVMFunction_MathDoubleIsNearlyZero&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleIsNearlyZero&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleIsNearlyEqual, opAssign, (const FRigVMFunction_MathDoubleIsNearlyEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleIsNearlyEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleDeg, opAssign, (const FRigVMFunction_MathDoubleDeg&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleDeg&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleRad, opAssign, (const FRigVMFunction_MathDoubleRad&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleRad&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleSin, opAssign, (const FRigVMFunction_MathDoubleSin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleSin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleCos, opAssign, (const FRigVMFunction_MathDoubleCos&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleCos&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleTan, opAssign, (const FRigVMFunction_MathDoubleTan&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleTan&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAsin, opAssign, (const FRigVMFunction_MathDoubleAsin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAsin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAcos, opAssign, (const FRigVMFunction_MathDoubleAcos&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAcos&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAtan, opAssign, (const FRigVMFunction_MathDoubleAtan&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAtan&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleAtan2, opAssign, (const FRigVMFunction_MathDoubleAtan2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleAtan2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleLawOfCosine, opAssign, (const FRigVMFunction_MathDoubleLawOfCosine&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleLawOfCosine&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleExponential, opAssign, (const FRigVMFunction_MathDoubleExponential&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleExponential&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleArraySum, opAssign, (const FRigVMFunction_MathDoubleArraySum&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleArraySum&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDoubleArrayAverage, opAssign, (const FRigVMFunction_MathDoubleArrayAverage&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDoubleArrayAverage&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatConstant, opAssign, (const FRigVMFunction_MathFloatConstant&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatConstant&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatUnaryOp, opAssign, (const FRigVMFunction_MathFloatUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatBinaryOp, opAssign, (const FRigVMFunction_MathFloatBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatBinaryAggregateOp, opAssign, (const FRigVMFunction_MathFloatBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatMake, opAssign, (const FRigVMFunction_MathFloatMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatConstPi, opAssign, (const FRigVMFunction_MathFloatConstPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatConstPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatConstHalfPi, opAssign, (const FRigVMFunction_MathFloatConstHalfPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatConstHalfPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatConstTwoPi, opAssign, (const FRigVMFunction_MathFloatConstTwoPi&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatConstTwoPi&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatConstE, opAssign, (const FRigVMFunction_MathFloatConstE&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatConstE&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAdd, opAssign, (const FRigVMFunction_MathFloatAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatSub, opAssign, (const FRigVMFunction_MathFloatSub&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatSub&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatMul, opAssign, (const FRigVMFunction_MathFloatMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatDiv, opAssign, (const FRigVMFunction_MathFloatDiv&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatDiv&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatMod, opAssign, (const FRigVMFunction_MathFloatMod&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatMod&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatMin, opAssign, (const FRigVMFunction_MathFloatMin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatMin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatMax, opAssign, (const FRigVMFunction_MathFloatMax&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatMax&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatPow, opAssign, (const FRigVMFunction_MathFloatPow&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatPow&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatSqrt, opAssign, (const FRigVMFunction_MathFloatSqrt&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatSqrt&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatNegate, opAssign, (const FRigVMFunction_MathFloatNegate&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatNegate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAbs, opAssign, (const FRigVMFunction_MathFloatAbs&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAbs&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatFloor, opAssign, (const FRigVMFunction_MathFloatFloor&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatFloor&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatCeil, opAssign, (const FRigVMFunction_MathFloatCeil&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatCeil&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatRound, opAssign, (const FRigVMFunction_MathFloatRound&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatRound&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatToInt, opAssign, (const FRigVMFunction_MathFloatToInt&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatToInt&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatSign, opAssign, (const FRigVMFunction_MathFloatSign&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatSign&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatClamp, opAssign, (const FRigVMFunction_MathFloatClamp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatClamp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatLerp, opAssign, (const FRigVMFunction_MathFloatLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatRemap, opAssign, (const FRigVMFunction_MathFloatRemap&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatRemap&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatEquals, opAssign, (const FRigVMFunction_MathFloatEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatNotEquals, opAssign, (const FRigVMFunction_MathFloatNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatGreater, opAssign, (const FRigVMFunction_MathFloatGreater&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatGreater&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatLess, opAssign, (const FRigVMFunction_MathFloatLess&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatLess&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatGreaterEqual, opAssign, (const FRigVMFunction_MathFloatGreaterEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatGreaterEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatLessEqual, opAssign, (const FRigVMFunction_MathFloatLessEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatLessEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatIsNearlyZero, opAssign, (const FRigVMFunction_MathFloatIsNearlyZero&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatIsNearlyZero&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatIsNearlyEqual, opAssign, (const FRigVMFunction_MathFloatIsNearlyEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatIsNearlyEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatSelectBool, opAssign, (const FRigVMFunction_MathFloatSelectBool&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatSelectBool&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatDeg, opAssign, (const FRigVMFunction_MathFloatDeg&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatDeg&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatRad, opAssign, (const FRigVMFunction_MathFloatRad&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatRad&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatSin, opAssign, (const FRigVMFunction_MathFloatSin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatSin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatCos, opAssign, (const FRigVMFunction_MathFloatCos&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatCos&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatTan, opAssign, (const FRigVMFunction_MathFloatTan&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatTan&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAsin, opAssign, (const FRigVMFunction_MathFloatAsin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAsin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAcos, opAssign, (const FRigVMFunction_MathFloatAcos&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAcos&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAtan, opAssign, (const FRigVMFunction_MathFloatAtan&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAtan&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatAtan2, opAssign, (const FRigVMFunction_MathFloatAtan2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatAtan2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatLawOfCosine, opAssign, (const FRigVMFunction_MathFloatLawOfCosine&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatLawOfCosine&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatExponential, opAssign, (const FRigVMFunction_MathFloatExponential&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatExponential&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatArraySum, opAssign, (const FRigVMFunction_MathFloatArraySum&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatArraySum&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathFloatArrayAverage, opAssign, (const FRigVMFunction_MathFloatArrayAverage&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathFloatArrayAverage&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntUnaryOp, opAssign, (const FRigVMFunction_MathIntUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntBinaryOp, opAssign, (const FRigVMFunction_MathIntBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntBinaryAggregateOp, opAssign, (const FRigVMFunction_MathIntBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntMake, opAssign, (const FRigVMFunction_MathIntMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntAdd, opAssign, (const FRigVMFunction_MathIntAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntSub, opAssign, (const FRigVMFunction_MathIntSub&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntSub&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntMul, opAssign, (const FRigVMFunction_MathIntMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntDiv, opAssign, (const FRigVMFunction_MathIntDiv&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntDiv&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntMod, opAssign, (const FRigVMFunction_MathIntMod&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntMod&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntMin, opAssign, (const FRigVMFunction_MathIntMin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntMin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntMax, opAssign, (const FRigVMFunction_MathIntMax&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntMax&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntPow, opAssign, (const FRigVMFunction_MathIntPow&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntPow&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntNegate, opAssign, (const FRigVMFunction_MathIntNegate&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntNegate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntAbs, opAssign, (const FRigVMFunction_MathIntAbs&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntAbs&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntToFloat, opAssign, (const FRigVMFunction_MathIntToFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntToFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntToDouble, opAssign, (const FRigVMFunction_MathIntToDouble&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntToDouble&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntSign, opAssign, (const FRigVMFunction_MathIntSign&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntSign&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntClamp, opAssign, (const FRigVMFunction_MathIntClamp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntClamp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntEquals, opAssign, (const FRigVMFunction_MathIntEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntNotEquals, opAssign, (const FRigVMFunction_MathIntNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntGreater, opAssign, (const FRigVMFunction_MathIntGreater&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntGreater&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntLess, opAssign, (const FRigVMFunction_MathIntLess&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntLess&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntGreaterEqual, opAssign, (const FRigVMFunction_MathIntGreaterEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntGreaterEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntLessEqual, opAssign, (const FRigVMFunction_MathIntLessEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntLessEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntArraySum, opAssign, (const FRigVMFunction_MathIntArraySum&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntArraySum&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntArrayAverage, opAssign, (const FRigVMFunction_MathIntArrayAverage&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntArrayAverage&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntToString, opAssign, (const FRigVMFunction_MathIntToString&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntToString&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntToName, opAssign, (const FRigVMFunction_MathIntToName&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntToName&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixUnaryOp, opAssign, (const FRigVMFunction_MathMatrixUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixBinaryOp, opAssign, (const FRigVMFunction_MathMatrixBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixBinaryAggregateOp, opAssign, (const FRigVMFunction_MathMatrixBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixToTransform, opAssign, (const FRigVMFunction_MathMatrixToTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixToTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixFromTransform, opAssign, (const FRigVMFunction_MathMatrixFromTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixFromTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixFromTransformV2, opAssign, (const FRigVMFunction_MathMatrixFromTransformV2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixFromTransformV2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixToVectors, opAssign, (const FRigVMFunction_MathMatrixToVectors&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixToVectors&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixFromVectors, opAssign, (const FRigVMFunction_MathMatrixFromVectors&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixFromVectors&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixMul, opAssign, (const FRigVMFunction_MathMatrixMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathMatrixInverse, opAssign, (const FRigVMFunction_MathMatrixInverse&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathMatrixInverse&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionUnaryOp, opAssign, (const FRigVMFunction_MathQuaternionUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionBinaryOp, opAssign, (const FRigVMFunction_MathQuaternionBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionBinaryAggregateOp, opAssign, (const FRigVMFunction_MathQuaternionBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionMake, opAssign, (const FRigVMFunction_MathQuaternionMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionFromAxisAndAngle, opAssign, (const FRigVMFunction_MathQuaternionFromAxisAndAngle&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionFromAxisAndAngle&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionFromEuler, opAssign, (const FRigVMFunction_MathQuaternionFromEuler&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionFromEuler&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionFromRotator, opAssign, (const FRigVMFunction_MathQuaternionFromRotator&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionFromRotator&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionFromRotatorV2, opAssign, (const FRigVMFunction_MathQuaternionFromRotatorV2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionFromRotatorV2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionFromTwoVectors, opAssign, (const FRigVMFunction_MathQuaternionFromTwoVectors&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionFromTwoVectors&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionToAxisAndAngle, opAssign, (const FRigVMFunction_MathQuaternionToAxisAndAngle&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionToAxisAndAngle&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionToVectors, opAssign, (const FRigVMFunction_MathQuaternionToVectors&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionToVectors&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionScale, opAssign, (const FRigVMFunction_MathQuaternionScale&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionScale&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionScaleV2, opAssign, (const FRigVMFunction_MathQuaternionScaleV2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionScaleV2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionToEuler, opAssign, (const FRigVMFunction_MathQuaternionToEuler&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionToEuler&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionToRotator, opAssign, (const FRigVMFunction_MathQuaternionToRotator&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionToRotator&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionMul, opAssign, (const FRigVMFunction_MathQuaternionMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionInverse, opAssign, (const FRigVMFunction_MathQuaternionInverse&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionInverse&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionSlerp, opAssign, (const FRigVMFunction_MathQuaternionSlerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionSlerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionEquals, opAssign, (const FRigVMFunction_MathQuaternionEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionNotEquals, opAssign, (const FRigVMFunction_MathQuaternionNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionSelectBool, opAssign, (const FRigVMFunction_MathQuaternionSelectBool&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionSelectBool&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionDot, opAssign, (const FRigVMFunction_MathQuaternionDot&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionDot&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionUnit, opAssign, (const FRigVMFunction_MathQuaternionUnit&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionUnit&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionRotateVector, opAssign, (const FRigVMFunction_MathQuaternionRotateVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionRotateVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionGetAxis, opAssign, (const FRigVMFunction_MathQuaternionGetAxis&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionGetAxis&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionSwingTwist, opAssign, (const FRigVMFunction_MathQuaternionSwingTwist&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionSwingTwist&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionRotationOrder, opAssign, (const FRigVMFunction_MathQuaternionRotationOrder&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionRotationOrder&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionMakeRelative, opAssign, (const FRigVMFunction_MathQuaternionMakeRelative&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionMakeRelative&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionMakeAbsolute, opAssign, (const FRigVMFunction_MathQuaternionMakeAbsolute&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionMakeAbsolute&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathQuaternionMirrorTransform, opAssign, (const FRigVMFunction_MathQuaternionMirrorTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathQuaternionMirrorTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRayIntersectRay, opAssign, (const FRigVMFunction_MathRayIntersectRay&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRayIntersectRay&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRayIntersectPlane, opAssign, (const FRigVMFunction_MathRayIntersectPlane&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRayIntersectPlane&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRayGetAt, opAssign, (const FRigVMFunction_MathRayGetAt&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRayGetAt&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRayTransform, opAssign, (const FRigVMFunction_MathRayTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRayTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatBase, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatBase&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatBase&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorBase, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorBase&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorBase&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateQuatFloat_Target, opAssign, (const FMathRBFInterpolateQuatFloat_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateQuatFloat_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatFloat, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatFloat&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateQuatVector_Target, opAssign, (const FMathRBFInterpolateQuatVector_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateQuatVector_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatVector, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatVector&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateQuatColor_Target, opAssign, (const FMathRBFInterpolateQuatColor_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateQuatColor_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatColor, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatColor&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatColor&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateQuatQuat_Target, opAssign, (const FMathRBFInterpolateQuatQuat_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateQuatQuat_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatQuat, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatQuat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatQuat&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateQuatXform_Target, opAssign, (const FMathRBFInterpolateQuatXform_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateQuatXform_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateQuatXform, opAssign, (const FRigVMFunction_MathRBFInterpolateQuatXform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateQuatXform&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateVectorFloat_Target, opAssign, (const FMathRBFInterpolateVectorFloat_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateVectorFloat_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorFloat, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorFloat&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateVectorVector_Target, opAssign, (const FMathRBFInterpolateVectorVector_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateVectorVector_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorVector, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorVector&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateVectorColor_Target, opAssign, (const FMathRBFInterpolateVectorColor_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateVectorColor_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorColor, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorColor&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorColor&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateVectorQuat_Target, opAssign, (const FMathRBFInterpolateVectorQuat_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateVectorQuat_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorQuat, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorQuat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorQuat&)) },


{ ERASE_METHOD_PTR(FMathRBFInterpolateVectorXform_Target, opAssign, (const FMathRBFInterpolateVectorXform_Target&), ERASE_ARGUMENT_PACK(FMathRBFInterpolateVectorXform_Target&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathRBFInterpolateVectorXform, opAssign, (const FRigVMFunction_MathRBFInterpolateVectorXform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathRBFInterpolateVectorXform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMutableBase, opAssign, (const FRigVMFunction_MathTransformMutableBase&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMutableBase&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformUnaryOp, opAssign, (const FRigVMFunction_MathTransformUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformBinaryOp, opAssign, (const FRigVMFunction_MathTransformBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformBinaryAggregateOp, opAssign, (const FRigVMFunction_MathTransformBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMake, opAssign, (const FRigVMFunction_MathTransformMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformFromEulerTransform, opAssign, (const FRigVMFunction_MathTransformFromEulerTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformFromEulerTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformFromEulerTransformV2, opAssign, (const FRigVMFunction_MathTransformFromEulerTransformV2&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformFromEulerTransformV2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformToEulerTransform, opAssign, (const FRigVMFunction_MathTransformToEulerTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformToEulerTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformToVectors, opAssign, (const FRigVMFunction_MathTransformToVectors&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformToVectors&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMul, opAssign, (const FRigVMFunction_MathTransformMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMakeRelative, opAssign, (const FRigVMFunction_MathTransformMakeRelative&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMakeRelative&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMakeAbsolute, opAssign, (const FRigVMFunction_MathTransformMakeAbsolute&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMakeAbsolute&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformAccumulateArray, opAssign, (const FRigVMFunction_MathTransformAccumulateArray&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformAccumulateArray&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformInverse, opAssign, (const FRigVMFunction_MathTransformInverse&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformInverse&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformLerp, opAssign, (const FRigVMFunction_MathTransformLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformSelectBool, opAssign, (const FRigVMFunction_MathTransformSelectBool&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformSelectBool&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformRotateVector, opAssign, (const FRigVMFunction_MathTransformRotateVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformRotateVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformTransformVector, opAssign, (const FRigVMFunction_MathTransformTransformVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformTransformVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformFromSRT, opAssign, (const FRigVMFunction_MathTransformFromSRT&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformFromSRT&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformArrayToSRT, opAssign, (const FRigVMFunction_MathTransformArrayToSRT&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformArrayToSRT&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformClampSpatially, opAssign, (const FRigVMFunction_MathTransformClampSpatially&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformClampSpatially&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathTransformMirrorTransform, opAssign, (const FRigVMFunction_MathTransformMirrorTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathTransformMirrorTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorUnaryOp, opAssign, (const FRigVMFunction_MathVectorUnaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorUnaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorBinaryOp, opAssign, (const FRigVMFunction_MathVectorBinaryOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorBinaryOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorBinaryAggregateOp, opAssign, (const FRigVMFunction_MathVectorBinaryAggregateOp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorBinaryAggregateOp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMake, opAssign, (const FRigVMFunction_MathVectorMake&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMake&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorFromFloat, opAssign, (const FRigVMFunction_MathVectorFromFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorFromFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorFromDouble, opAssign, (const FRigVMFunction_MathVectorFromDouble&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorFromDouble&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorAdd, opAssign, (const FRigVMFunction_MathVectorAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorSub, opAssign, (const FRigVMFunction_MathVectorSub&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorSub&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMul, opAssign, (const FRigVMFunction_MathVectorMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorScale, opAssign, (const FRigVMFunction_MathVectorScale&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorScale&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorDiv, opAssign, (const FRigVMFunction_MathVectorDiv&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorDiv&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMod, opAssign, (const FRigVMFunction_MathVectorMod&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMod&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMin, opAssign, (const FRigVMFunction_MathVectorMin&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMax, opAssign, (const FRigVMFunction_MathVectorMax&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMax&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorNegate, opAssign, (const FRigVMFunction_MathVectorNegate&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorNegate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorAbs, opAssign, (const FRigVMFunction_MathVectorAbs&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorAbs&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorFloor, opAssign, (const FRigVMFunction_MathVectorFloor&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorFloor&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorCeil, opAssign, (const FRigVMFunction_MathVectorCeil&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorCeil&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorRound, opAssign, (const FRigVMFunction_MathVectorRound&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorRound&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorSign, opAssign, (const FRigVMFunction_MathVectorSign&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorSign&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorClamp, opAssign, (const FRigVMFunction_MathVectorClamp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorClamp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorLerp, opAssign, (const FRigVMFunction_MathVectorLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorRemap, opAssign, (const FRigVMFunction_MathVectorRemap&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorRemap&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorEquals, opAssign, (const FRigVMFunction_MathVectorEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorNotEquals, opAssign, (const FRigVMFunction_MathVectorNotEquals&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorNotEquals&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorIsNearlyZero, opAssign, (const FRigVMFunction_MathVectorIsNearlyZero&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorIsNearlyZero&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorIsNearlyEqual, opAssign, (const FRigVMFunction_MathVectorIsNearlyEqual&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorIsNearlyEqual&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorSelectBool, opAssign, (const FRigVMFunction_MathVectorSelectBool&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorSelectBool&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorDeg, opAssign, (const FRigVMFunction_MathVectorDeg&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorDeg&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorRad, opAssign, (const FRigVMFunction_MathVectorRad&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorRad&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorLengthSquared, opAssign, (const FRigVMFunction_MathVectorLengthSquared&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorLengthSquared&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorLength, opAssign, (const FRigVMFunction_MathVectorLength&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorLength&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorDistance, opAssign, (const FRigVMFunction_MathVectorDistance&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorDistance&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorCross, opAssign, (const FRigVMFunction_MathVectorCross&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorCross&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorDot, opAssign, (const FRigVMFunction_MathVectorDot&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorDot&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorUnit, opAssign, (const FRigVMFunction_MathVectorUnit&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorUnit&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorSetLength, opAssign, (const FRigVMFunction_MathVectorSetLength&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorSetLength&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorClampLength, opAssign, (const FRigVMFunction_MathVectorClampLength&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorClampLength&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMirror, opAssign, (const FRigVMFunction_MathVectorMirror&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMirror&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorAngle, opAssign, (const FRigVMFunction_MathVectorAngle&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorAngle&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorParallel, opAssign, (const FRigVMFunction_MathVectorParallel&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorParallel&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorOrthogonal, opAssign, (const FRigVMFunction_MathVectorOrthogonal&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorOrthogonal&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorBezierFourPoint, opAssign, (const FRigVMFunction_MathVectorBezierFourPoint&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorBezierFourPoint&)) },


{ ERASE_METHOD_PTR(FRigVMFourPointBezier, opAssign, (const FRigVMFourPointBezier&), ERASE_ARGUMENT_PACK(FRigVMFourPointBezier&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMakeBezierFourPoint, opAssign, (const FRigVMFunction_MathVectorMakeBezierFourPoint&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMakeBezierFourPoint&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorClampSpatially, opAssign, (const FRigVMFunction_MathVectorClampSpatially&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorClampSpatially&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathIntersectPlane, opAssign, (const FRigVMFunction_MathIntersectPlane&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathIntersectPlane&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathDistanceToPlane, opAssign, (const FRigVMFunction_MathDistanceToPlane&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathDistanceToPlane&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMakeRelative, opAssign, (const FRigVMFunction_MathVectorMakeRelative&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMakeRelative&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMakeAbsolute, opAssign, (const FRigVMFunction_MathVectorMakeAbsolute&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMakeAbsolute&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorMirrorTransform, opAssign, (const FRigVMFunction_MathVectorMirrorTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorMirrorTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorArraySum, opAssign, (const FRigVMFunction_MathVectorArraySum&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorArraySum&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_MathVectorArrayAverage, opAssign, (const FRigVMFunction_MathVectorArrayAverage&), ERASE_ARGUMENT_PACK(FRigVMFunction_MathVectorArrayAverage&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NoiseFloat, opAssign, (const FRigVMFunction_NoiseFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_NoiseFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NoiseDouble, opAssign, (const FRigVMFunction_NoiseDouble&), ERASE_ARGUMENT_PACK(FRigVMFunction_NoiseDouble&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NoiseVector, opAssign, (const FRigVMFunction_NoiseVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_NoiseVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NoiseVector2, opAssign, (const FRigVMFunction_NoiseVector2&), ERASE_ARGUMENT_PACK(FRigVMFunction_NoiseVector2&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_RandomFloat, opAssign, (const FRigVMFunction_RandomFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_RandomFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_RandomVector, opAssign, (const FRigVMFunction_RandomVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_RandomVector&)) },


{ ERASE_METHOD_PTR(FRigVMMirrorSettings, opAssign, (const FRigVMMirrorSettings&), ERASE_ARGUMENT_PACK(FRigVMMirrorSettings&)) },


{ ERASE_METHOD_PTR(FRigVMSimPoint, opAssign, (const FRigVMSimPoint&), ERASE_ARGUMENT_PACK(FRigVMSimPoint&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_ControlFlowBranch, opAssign, (const FRigVMFunction_ControlFlowBranch&), ERASE_ARGUMENT_PACK(FRigVMFunction_ControlFlowBranch&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NameConcat, opAssign, (const FRigVMFunction_NameConcat&), ERASE_ARGUMENT_PACK(FRigVMFunction_NameConcat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NameTruncate, opAssign, (const FRigVMFunction_NameTruncate&), ERASE_ARGUMENT_PACK(FRigVMFunction_NameTruncate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_NameReplace, opAssign, (const FRigVMFunction_NameReplace&), ERASE_ARGUMENT_PACK(FRigVMFunction_NameReplace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_EndsWith, opAssign, (const FRigVMFunction_EndsWith&), ERASE_ARGUMENT_PACK(FRigVMFunction_EndsWith&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StartsWith, opAssign, (const FRigVMFunction_StartsWith&), ERASE_ARGUMENT_PACK(FRigVMFunction_StartsWith&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_Contains, opAssign, (const FRigVMFunction_Contains&), ERASE_ARGUMENT_PACK(FRigVMFunction_Contains&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringConcat, opAssign, (const FRigVMFunction_StringConcat&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringConcat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringTruncate, opAssign, (const FRigVMFunction_StringTruncate&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringTruncate&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringReplace, opAssign, (const FRigVMFunction_StringReplace&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringReplace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringEndsWith, opAssign, (const FRigVMFunction_StringEndsWith&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringEndsWith&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringStartsWith, opAssign, (const FRigVMFunction_StringStartsWith&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringStartsWith&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringContains, opAssign, (const FRigVMFunction_StringContains&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringContains&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringLength, opAssign, (const FRigVMFunction_StringLength&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringLength&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringTrimWhitespace, opAssign, (const FRigVMFunction_StringTrimWhitespace&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringTrimWhitespace&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringToUppercase, opAssign, (const FRigVMFunction_StringToUppercase&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringToUppercase&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringToLowercase, opAssign, (const FRigVMFunction_StringToLowercase&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringToLowercase&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringReverse, opAssign, (const FRigVMFunction_StringReverse&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringReverse&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringLeft, opAssign, (const FRigVMFunction_StringLeft&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringLeft&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringRight, opAssign, (const FRigVMFunction_StringRight&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringRight&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringMiddle, opAssign, (const FRigVMFunction_StringMiddle&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringMiddle&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringFind, opAssign, (const FRigVMFunction_StringFind&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringFind&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringSplit, opAssign, (const FRigVMFunction_StringSplit&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringSplit&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringJoin, opAssign, (const FRigVMFunction_StringJoin&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringJoin&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_StringPadInteger, opAssign, (const FRigVMFunction_StringPadInteger&), ERASE_ARGUMENT_PACK(FRigVMFunction_StringPadInteger&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateFloatAdd, opAssign, (const FRigVMFunction_AccumulateFloatAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateFloatAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateVectorAdd, opAssign, (const FRigVMFunction_AccumulateVectorAdd&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateVectorAdd&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateFloatMul, opAssign, (const FRigVMFunction_AccumulateFloatMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateFloatMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateVectorMul, opAssign, (const FRigVMFunction_AccumulateVectorMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateVectorMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateQuatMul, opAssign, (const FRigVMFunction_AccumulateQuatMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateQuatMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateTransformMul, opAssign, (const FRigVMFunction_AccumulateTransformMul&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateTransformMul&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateFloatLerp, opAssign, (const FRigVMFunction_AccumulateFloatLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateFloatLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateVectorLerp, opAssign, (const FRigVMFunction_AccumulateVectorLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateVectorLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateQuatLerp, opAssign, (const FRigVMFunction_AccumulateQuatLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateQuatLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateTransformLerp, opAssign, (const FRigVMFunction_AccumulateTransformLerp&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateTransformLerp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateFloatRange, opAssign, (const FRigVMFunction_AccumulateFloatRange&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateFloatRange&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AccumulateVectorRange, opAssign, (const FRigVMFunction_AccumulateVectorRange&), ERASE_ARGUMENT_PACK(FRigVMFunction_AccumulateVectorRange&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AlphaInterp, opAssign, (const FRigVMFunction_AlphaInterp&), ERASE_ARGUMENT_PACK(FRigVMFunction_AlphaInterp&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AlphaInterpVector, opAssign, (const FRigVMFunction_AlphaInterpVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_AlphaInterpVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_AlphaInterpQuat, opAssign, (const FRigVMFunction_AlphaInterpQuat&), ERASE_ARGUMENT_PACK(FRigVMFunction_AlphaInterpQuat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DeltaFromPreviousFloat, opAssign, (const FRigVMFunction_DeltaFromPreviousFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_DeltaFromPreviousFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DeltaFromPreviousVector, opAssign, (const FRigVMFunction_DeltaFromPreviousVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_DeltaFromPreviousVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DeltaFromPreviousQuat, opAssign, (const FRigVMFunction_DeltaFromPreviousQuat&), ERASE_ARGUMENT_PACK(FRigVMFunction_DeltaFromPreviousQuat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_DeltaFromPreviousTransform, opAssign, (const FRigVMFunction_DeltaFromPreviousTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_DeltaFromPreviousTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_KalmanFloat, opAssign, (const FRigVMFunction_KalmanFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_KalmanFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_KalmanVector, opAssign, (const FRigVMFunction_KalmanVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_KalmanVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_KalmanTransform, opAssign, (const FRigVMFunction_KalmanTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_KalmanTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_Timeline, opAssign, (const FRigVMFunction_Timeline&), ERASE_ARGUMENT_PACK(FRigVMFunction_Timeline&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_TimeLoop, opAssign, (const FRigVMFunction_TimeLoop&), ERASE_ARGUMENT_PACK(FRigVMFunction_TimeLoop&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_TimeOffsetFloat, opAssign, (const FRigVMFunction_TimeOffsetFloat&), ERASE_ARGUMENT_PACK(FRigVMFunction_TimeOffsetFloat&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_TimeOffsetVector, opAssign, (const FRigVMFunction_TimeOffsetVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_TimeOffsetVector&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_TimeOffsetTransform, opAssign, (const FRigVMFunction_TimeOffsetTransform&), ERASE_ARGUMENT_PACK(FRigVMFunction_TimeOffsetTransform&)) },


{ ERASE_METHOD_PTR(FRigVMFunction_VerletIntegrateVector, opAssign, (const FRigVMFunction_VerletIntegrateVector&), ERASE_ARGUMENT_PACK(FRigVMFunction_VerletIntegrateVector&)) },


{ ERASE_METHOD_PTR(FRigVMGraphVariableDescription, opAssign, (const FRigVMGraphVariableDescription&), ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription&)) },


{ ERASE_METHOD_PTR(FRigVMEdGraphDisplaySettings, opAssign, (const FRigVMEdGraphDisplaySettings&), ERASE_ARGUMENT_PACK(FRigVMEdGraphDisplaySettings&)) },


{ ERASE_METHOD_PTR(FRigVMParserASTSettings, opAssign, (const FRigVMParserASTSettings&), ERASE_ARGUMENT_PACK(FRigVMParserASTSettings&)) },


{ ERASE_METHOD_PTR(FRigVMCompileSettings, opAssign, (const FRigVMCompileSettings&), ERASE_ARGUMENT_PACK(FRigVMCompileSettings&)) },


{ ERASE_METHOD_PTR(FRigVMGraphParameterDescription, opAssign, (const FRigVMGraphParameterDescription&), ERASE_ARGUMENT_PACK(FRigVMGraphParameterDescription&)) },


{ ERASE_METHOD_PTR(FRigVMFunctionReferenceArray, opAssign, (const FRigVMFunctionReferenceArray&), ERASE_ARGUMENT_PACK(FRigVMFunctionReferenceArray&)) },


{ ERASE_METHOD_PTR(FRigStructScope, opAssign, (const FRigStructScope&), ERASE_ARGUMENT_PACK(FRigStructScope&)) },


{ ERASE_METHOD_PTR(FRigVMController_CommonTypePerTemplate, opAssign, (const FRigVMController_CommonTypePerTemplate&), ERASE_ARGUMENT_PACK(FRigVMController_CommonTypePerTemplate&)) },


{ ERASE_METHOD_PTR(FRigModuleInstance, opAssign, (const FRigModuleInstance&), ERASE_ARGUMENT_PACK(FRigModuleInstance&)) },


{ ERASE_METHOD_PTR(FRigModuleExecutionElement, opAssign, (const FRigModuleExecutionElement&), ERASE_ARGUMENT_PACK(FRigModuleExecutionElement&)) },


{ ERASE_METHOD_PTR(FRigSingleParentElement, opAssign, (const FRigSingleParentElement&), ERASE_ARGUMENT_PACK(FRigSingleParentElement&)) },


{ ERASE_METHOD_PTR(FRigElementWeight, opAssign, (const FRigElementWeight&), ERASE_ARGUMENT_PACK(FRigElementWeight&)) },


{ ERASE_METHOD_PTR(FRigBoneElement, opAssign, (const FRigBoneElement&), ERASE_ARGUMENT_PACK(FRigBoneElement&)) },


{ ERASE_METHOD_PTR(FRigNullElement, opAssign, (const FRigNullElement&), ERASE_ARGUMENT_PACK(FRigNullElement&)) },


{ ERASE_METHOD_PTR(FRigCurveElement, opAssign, (const FRigCurveElement&), ERASE_ARGUMENT_PACK(FRigCurveElement&)) },


{ ERASE_METHOD_PTR(FRigRigidBodySettings, opAssign, (const FRigRigidBodySettings&), ERASE_ARGUMENT_PACK(FRigRigidBodySettings&)) },


{ ERASE_METHOD_PTR(FRigRigidBodyElement, opAssign, (const FRigRigidBodyElement&), ERASE_ARGUMENT_PACK(FRigRigidBodyElement&)) },


{ ERASE_METHOD_PTR(FRigReferenceElement, opAssign, (const FRigReferenceElement&), ERASE_ARGUMENT_PACK(FRigReferenceElement&)) },


{ ERASE_METHOD_PTR(FRigConnectorState, opAssign, (const FRigConnectorState&), ERASE_ARGUMENT_PACK(FRigConnectorState&)) },


{ ERASE_METHOD_PTR(FRigConnectorElement, opAssign, (const FRigConnectorElement&), ERASE_ARGUMENT_PACK(FRigConnectorElement&)) },


{ ERASE_METHOD_PTR(FRigSocketState, opAssign, (const FRigSocketState&), ERASE_ARGUMENT_PACK(FRigSocketState&)) },


{ ERASE_METHOD_PTR(FRigSocketElement, opAssign, (const FRigSocketElement&), ERASE_ARGUMENT_PACK(FRigSocketElement&)) },


{ ERASE_METHOD_PTR(FRigUnit, opAssign, (const FRigUnit&), ERASE_ARGUMENT_PACK(FRigUnit&)) },


{ ERASE_METHOD_PTR(FRigUnitMutable, opAssign, (const FRigUnitMutable&), ERASE_ARGUMENT_PACK(FRigUnitMutable&)) },


{ ERASE_METHOD_PTR(FControlRigExecuteContext, opAssign, (const FControlRigExecuteContext&), ERASE_ARGUMENT_PACK(FControlRigExecuteContext&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugBaseMutable, opAssign, (const FRigUnit_DebugBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_DebugBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_HighlevelBaseMutable, opAssign, (const FRigUnit_HighlevelBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_HighlevelBaseMutable&)) },


{ ERASE_METHOD_PTR(FAnimNode_ControlRigBase, opAssign, (const FAnimNode_ControlRigBase&), ERASE_ARGUMENT_PACK(FAnimNode_ControlRigBase&)) },


{ ERASE_METHOD_PTR(FControlRigAnimNodeEventName, opAssign, (const FControlRigAnimNodeEventName&), ERASE_ARGUMENT_PACK(FControlRigAnimNodeEventName&)) },


{ ERASE_METHOD_PTR(FAnimNode_ControlRig, opAssign, (const FAnimNode_ControlRig&), ERASE_ARGUMENT_PACK(FAnimNode_ControlRig&)) },
{ ERASE_METHOD_PTR(FAnimNode_ControlRig, SetbAlphaBoolEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_ControlRig, SetbSetRefPoseFromSkeleton, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_ControlRig_ExternalSource, opAssign, (const FAnimNode_ControlRig_ExternalSource&), ERASE_ARGUMENT_PACK(FAnimNode_ControlRig_ExternalSource&)) },


{ ERASE_METHOD_PTR(FControlRigReference, opAssign, (const FControlRigReference&), ERASE_ARGUMENT_PACK(FControlRigReference&)) },


{ ERASE_METHOD_PTR(FControlRigComponentMappedElement, opAssign, (const FControlRigComponentMappedElement&), ERASE_ARGUMENT_PACK(FControlRigComponentMappedElement&)) },


{ ERASE_METHOD_PTR(FControlRigComponentMappedComponent, opAssign, (const FControlRigComponentMappedComponent&), ERASE_ARGUMENT_PACK(FControlRigComponentMappedComponent&)) },


{ ERASE_METHOD_PTR(FControlRigComponentMappedBone, opAssign, (const FControlRigComponentMappedBone&), ERASE_ARGUMENT_PACK(FControlRigComponentMappedBone&)) },


{ ERASE_METHOD_PTR(FControlRigComponentMappedCurve, opAssign, (const FControlRigComponentMappedCurve&), ERASE_ARGUMENT_PACK(FControlRigComponentMappedCurve&)) },


{ ERASE_METHOD_PTR(FControlRigShapeDefinition, opAssign, (const FControlRigShapeDefinition&), ERASE_ARGUMENT_PACK(FControlRigShapeDefinition&)) },


{ ERASE_METHOD_PTR(FControlRigTestDataVariable, opAssign, (const FControlRigTestDataVariable&), ERASE_ARGUMENT_PACK(FControlRigTestDataVariable&)) },


{ ERASE_METHOD_PTR(FControlRigTestDataFrame, opAssign, (const FControlRigTestDataFrame&), ERASE_ARGUMENT_PACK(FControlRigTestDataFrame&)) },


{ ERASE_METHOD_PTR(FRigPose, opAssign, (const FRigPose&), ERASE_ARGUMENT_PACK(FRigPose&)) },


{ ERASE_METHOD_PTR(FRigPoseElement, opAssign, (const FRigPoseElement&), ERASE_ARGUMENT_PACK(FRigPoseElement&)) },


{ ERASE_METHOD_PTR(FCachedRigElement, opAssign, (const FCachedRigElement&), ERASE_ARGUMENT_PACK(FCachedRigElement&)) },


{ ERASE_METHOD_PTR(FCRSimLinearSpring, opAssign, (const FCRSimLinearSpring&), ERASE_ARGUMENT_PACK(FCRSimLinearSpring&)) },


{ ERASE_METHOD_PTR(FCRSimSoftCollision, opAssign, (const FCRSimSoftCollision&), ERASE_ARGUMENT_PACK(FCRSimSoftCollision&)) },


{ ERASE_METHOD_PTR(FCRSimPointForce, opAssign, (const FCRSimPointForce&), ERASE_ARGUMENT_PACK(FCRSimPointForce&)) },


{ ERASE_METHOD_PTR(FRigModuleReference, opAssign, (const FRigModuleReference&), ERASE_ARGUMENT_PACK(FRigModuleReference&)) },


{ ERASE_METHOD_PTR(FModularRigSingleConnection, opAssign, (const FModularRigSingleConnection&), ERASE_ARGUMENT_PACK(FModularRigSingleConnection&)) },


{ ERASE_METHOD_PTR(FModularRigConnections, opAssign, (const FModularRigConnections&), ERASE_ARGUMENT_PACK(FModularRigConnections&)) },


{ ERASE_METHOD_PTR(FModularRigModel, opAssign, (const FModularRigModel&), ERASE_ARGUMENT_PACK(FModularRigModel&)) },


{ ERASE_METHOD_PTR(FRigElement, opAssign, (const FRigElement&), ERASE_ARGUMENT_PACK(FRigElement&)) },


{ ERASE_METHOD_PTR(FRigBone, opAssign, (const FRigBone&), ERASE_ARGUMENT_PACK(FRigBone&)) },


{ ERASE_METHOD_PTR(FRigBoneHierarchy, opAssign, (const FRigBoneHierarchy&), ERASE_ARGUMENT_PACK(FRigBoneHierarchy&)) },


{ ERASE_METHOD_PTR(FRigAndConnectionRule, opAssign, (const FRigAndConnectionRule&), ERASE_ARGUMENT_PACK(FRigAndConnectionRule&)) },


{ ERASE_METHOD_PTR(FRigOrConnectionRule, opAssign, (const FRigOrConnectionRule&), ERASE_ARGUMENT_PACK(FRigOrConnectionRule&)) },


{ ERASE_METHOD_PTR(FRigTypeConnectionRule, opAssign, (const FRigTypeConnectionRule&), ERASE_ARGUMENT_PACK(FRigTypeConnectionRule&)) },


{ ERASE_METHOD_PTR(FRigTagConnectionRule, opAssign, (const FRigTagConnectionRule&), ERASE_ARGUMENT_PACK(FRigTagConnectionRule&)) },


{ ERASE_METHOD_PTR(FRigChildOfPrimaryConnectionRule, opAssign, (const FRigChildOfPrimaryConnectionRule&), ERASE_ARGUMENT_PACK(FRigChildOfPrimaryConnectionRule&)) },


{ ERASE_METHOD_PTR(FRigControl, opAssign, (const FRigControl&), ERASE_ARGUMENT_PACK(FRigControl&)) },


{ ERASE_METHOD_PTR(FRigControlHierarchy, opAssign, (const FRigControlHierarchy&), ERASE_ARGUMENT_PACK(FRigControlHierarchy&)) },


{ ERASE_METHOD_PTR(FRigCurve, opAssign, (const FRigCurve&), ERASE_ARGUMENT_PACK(FRigCurve&)) },


{ ERASE_METHOD_PTR(FRigCurveContainer, opAssign, (const FRigCurveContainer&), ERASE_ARGUMENT_PACK(FRigCurveContainer&)) },


{ ERASE_METHOD_PTR(FRigSpaceHierarchy, opAssign, (const FRigSpaceHierarchy&), ERASE_ARGUMENT_PACK(FRigSpaceHierarchy&)) },


{ ERASE_METHOD_PTR(FRigSpace, opAssign, (const FRigSpace&), ERASE_ARGUMENT_PACK(FRigSpace&)) },


{ ERASE_METHOD_PTR(FRigControlModifiedContext, opAssign, (const FRigControlModifiedContext&), ERASE_ARGUMENT_PACK(FRigControlModifiedContext&)) },


{ ERASE_METHOD_PTR(FRigElementKeyCollection, opAssign, (const FRigElementKeyCollection&), ERASE_ARGUMENT_PACK(FRigElementKeyCollection&)) },


{ ERASE_METHOD_PTR(FRigEventContext, opAssign, (const FRigEventContext&), ERASE_ARGUMENT_PACK(FRigEventContext&)) },


{ ERASE_METHOD_PTR(FRigElementResolveResult, opAssign, (const FRigElementResolveResult&), ERASE_ARGUMENT_PACK(FRigElementResolveResult&)) },


{ ERASE_METHOD_PTR(FModularRigResolveResult, opAssign, (const FModularRigResolveResult&), ERASE_ARGUMENT_PACK(FModularRigResolveResult&)) },


{ ERASE_METHOD_PTR(FRigInfluenceEntryModifier, opAssign, (const FRigInfluenceEntryModifier&), ERASE_ARGUMENT_PACK(FRigInfluenceEntryModifier&)) },


{ ERASE_METHOD_PTR(FModularRigSettings, opAssign, (const FModularRigSettings&), ERASE_ARGUMENT_PACK(FModularRigSettings&)) },


{ ERASE_METHOD_PTR(FRigModuleDescription, opAssign, (const FRigModuleDescription&), ERASE_ARGUMENT_PACK(FRigModuleDescription&)) },


{ ERASE_METHOD_PTR(FMovieSceneControlRigSpaceBaseKey, opAssign, (const FMovieSceneControlRigSpaceBaseKey&), ERASE_ARGUMENT_PACK(FMovieSceneControlRigSpaceBaseKey&)) },


{ ERASE_METHOD_PTR(FControlRigSettingsPerPinBool, opAssign, (const FControlRigSettingsPerPinBool&), ERASE_ARGUMENT_PACK(FControlRigSettingsPerPinBool&)) },


{ ERASE_METHOD_PTR(FRigControlCopy, opAssign, (const FRigControlCopy&), ERASE_ARGUMENT_PACK(FRigControlCopy&)) },


{ ERASE_METHOD_PTR(FControlRigControlPose, opAssign, (const FControlRigControlPose&), ERASE_ARGUMENT_PACK(FControlRigControlPose&)) },


{ ERASE_METHOD_PTR(FRigDispatchFactory, opAssign, (const FRigDispatchFactory&), ERASE_ARGUMENT_PACK(FRigDispatchFactory&)) },


{ ERASE_METHOD_PTR(FRigUnit_SphereTraceWorld, opAssign, (const FRigUnit_SphereTraceWorld&), ERASE_ARGUMENT_PACK(FRigUnit_SphereTraceWorld&)) },


{ ERASE_METHOD_PTR(FRigUnit_SphereTraceByTraceChannel, opAssign, (const FRigUnit_SphereTraceByTraceChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SphereTraceByTraceChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SphereTraceByObjectTypes, opAssign, (const FRigUnit_SphereTraceByObjectTypes&), ERASE_ARGUMENT_PACK(FRigUnit_SphereTraceByObjectTypes&)) },


{ ERASE_METHOD_PTR(FRigUnit_Control, opAssign, (const FRigUnit_Control&), ERASE_ARGUMENT_PACK(FRigUnit_Control&)) },


{ ERASE_METHOD_PTR(FRigUnit_Control_StaticMesh, opAssign, (const FRigUnit_Control_StaticMesh&), ERASE_ARGUMENT_PACK(FRigUnit_Control_StaticMesh&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetupShapeLibraryFromUserData, opAssign, (const FRigUnit_SetupShapeLibraryFromUserData&), ERASE_ARGUMENT_PACK(FRigUnit_SetupShapeLibraryFromUserData&)) },


{ ERASE_METHOD_PTR(FRigUnit_ShapeExists, opAssign, (const FRigUnit_ShapeExists&), ERASE_ARGUMENT_PACK(FRigUnit_ShapeExists&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugBezier, opAssign, (const FRigUnit_DebugBezier&), ERASE_ARGUMENT_PACK(FRigUnit_DebugBezier&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugBezierItemSpace, opAssign, (const FRigUnit_DebugBezierItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugBezierItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugHierarchy, opAssign, (const FRigUnit_DebugHierarchy&), ERASE_ARGUMENT_PACK(FRigUnit_DebugHierarchy&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugPose, opAssign, (const FRigUnit_DebugPose&), ERASE_ARGUMENT_PACK(FRigUnit_DebugPose&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugLine, opAssign, (const FRigUnit_DebugLine&), ERASE_ARGUMENT_PACK(FRigUnit_DebugLine&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugLineItemSpace, opAssign, (const FRigUnit_DebugLineItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugLineItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugLineStrip, opAssign, (const FRigUnit_DebugLineStrip&), ERASE_ARGUMENT_PACK(FRigUnit_DebugLineStrip&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugLineStripItemSpace, opAssign, (const FRigUnit_DebugLineStripItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugLineStripItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugRectangle, opAssign, (const FRigUnit_DebugRectangle&), ERASE_ARGUMENT_PACK(FRigUnit_DebugRectangle&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugRectangleItemSpace, opAssign, (const FRigUnit_DebugRectangleItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugRectangleItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugArc, opAssign, (const FRigUnit_DebugArc&), ERASE_ARGUMENT_PACK(FRigUnit_DebugArc&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugArcItemSpace, opAssign, (const FRigUnit_DebugArcItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugArcItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugTransform, opAssign, (const FRigUnit_DebugTransform&), ERASE_ARGUMENT_PACK(FRigUnit_DebugTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugTransformMutable, opAssign, (const FRigUnit_DebugTransformMutable&), ERASE_ARGUMENT_PACK(FRigUnit_DebugTransformMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugTransformMutableItemSpace, opAssign, (const FRigUnit_DebugTransformMutableItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugTransformMutableItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugTransformArrayMutable, opAssign, (const FRigUnit_DebugTransformArrayMutable&), ERASE_ARGUMENT_PACK(FRigUnit_DebugTransformArrayMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_DebugTransformArrayMutableItemSpace, opAssign, (const FRigUnit_DebugTransformArrayMutableItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_DebugTransformArrayMutableItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_StartProfilingTimer, opAssign, (const FRigUnit_StartProfilingTimer&), ERASE_ARGUMENT_PACK(FRigUnit_StartProfilingTimer&)) },


{ ERASE_METHOD_PTR(FRigUnit_EndProfilingTimer, opAssign, (const FRigUnit_EndProfilingTimer&), ERASE_ARGUMENT_PACK(FRigUnit_EndProfilingTimer&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugVector, opAssign, (const FRigUnit_VisualDebugVector&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugVectorItemSpace, opAssign, (const FRigUnit_VisualDebugVectorItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugVectorItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugQuat, opAssign, (const FRigUnit_VisualDebugQuat&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugQuat&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugQuatItemSpace, opAssign, (const FRigUnit_VisualDebugQuatItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugQuatItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugTransform, opAssign, (const FRigUnit_VisualDebugTransform&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_VisualDebugTransformItemSpace, opAssign, (const FRigUnit_VisualDebugTransformItemSpace&), ERASE_ARGUMENT_PACK(FRigUnit_VisualDebugTransformItemSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertTransform, opAssign, (const FRigUnit_ConvertTransform&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertEulerTransform, opAssign, (const FRigUnit_ConvertEulerTransform&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertEulerTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertRotation, opAssign, (const FRigUnit_ConvertRotation&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertVectorRotation, opAssign, (const FRigUnit_ConvertVectorRotation&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertVectorRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertQuaternion, opAssign, (const FRigUnit_ConvertQuaternion&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertQuaternion&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertVectorToRotation, opAssign, (const FRigUnit_ConvertVectorToRotation&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertVectorToRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertVectorToQuaternion, opAssign, (const FRigUnit_ConvertVectorToQuaternion&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertVectorToQuaternion&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertRotationToVector, opAssign, (const FRigUnit_ConvertRotationToVector&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertRotationToVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConvertQuaternionToVector, opAssign, (const FRigUnit_ConvertQuaternionToVector&), ERASE_ARGUMENT_PACK(FRigUnit_ConvertQuaternionToVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToSwingAndTwist, opAssign, (const FRigUnit_ToSwingAndTwist&), ERASE_ARGUMENT_PACK(FRigUnit_ToSwingAndTwist&)) },


{ ERASE_METHOD_PTR(FRigUnit_BinaryFloatOp, opAssign, (const FRigUnit_BinaryFloatOp&), ERASE_ARGUMENT_PACK(FRigUnit_BinaryFloatOp&)) },


{ ERASE_METHOD_PTR(FRigUnit_Multiply_FloatFloat, opAssign, (const FRigUnit_Multiply_FloatFloat&), ERASE_ARGUMENT_PACK(FRigUnit_Multiply_FloatFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_Add_FloatFloat, opAssign, (const FRigUnit_Add_FloatFloat&), ERASE_ARGUMENT_PACK(FRigUnit_Add_FloatFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_Subtract_FloatFloat, opAssign, (const FRigUnit_Subtract_FloatFloat&), ERASE_ARGUMENT_PACK(FRigUnit_Subtract_FloatFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_Divide_FloatFloat, opAssign, (const FRigUnit_Divide_FloatFloat&), ERASE_ARGUMENT_PACK(FRigUnit_Divide_FloatFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_Clamp_Float, opAssign, (const FRigUnit_Clamp_Float&), ERASE_ARGUMENT_PACK(FRigUnit_Clamp_Float&)) },


{ ERASE_METHOD_PTR(FRigUnit_MapRange_Float, opAssign, (const FRigUnit_MapRange_Float&), ERASE_ARGUMENT_PACK(FRigUnit_MapRange_Float&)) },


{ ERASE_METHOD_PTR(FRigUnit_BinaryQuaternionOp, opAssign, (const FRigUnit_BinaryQuaternionOp&), ERASE_ARGUMENT_PACK(FRigUnit_BinaryQuaternionOp&)) },


{ ERASE_METHOD_PTR(FRigUnit_MultiplyQuaternion, opAssign, (const FRigUnit_MultiplyQuaternion&), ERASE_ARGUMENT_PACK(FRigUnit_MultiplyQuaternion&)) },


{ ERASE_METHOD_PTR(FRigUnit_UnaryQuaternionOp, opAssign, (const FRigUnit_UnaryQuaternionOp&), ERASE_ARGUMENT_PACK(FRigUnit_UnaryQuaternionOp&)) },


{ ERASE_METHOD_PTR(FRigUnit_InverseQuaterion, opAssign, (const FRigUnit_InverseQuaterion&), ERASE_ARGUMENT_PACK(FRigUnit_InverseQuaterion&)) },


{ ERASE_METHOD_PTR(FRigUnit_QuaternionToAxisAndAngle, opAssign, (const FRigUnit_QuaternionToAxisAndAngle&), ERASE_ARGUMENT_PACK(FRigUnit_QuaternionToAxisAndAngle&)) },


{ ERASE_METHOD_PTR(FRigUnit_QuaternionFromAxisAndAngle, opAssign, (const FRigUnit_QuaternionFromAxisAndAngle&), ERASE_ARGUMENT_PACK(FRigUnit_QuaternionFromAxisAndAngle&)) },


{ ERASE_METHOD_PTR(FRigUnit_QuaternionToAngle, opAssign, (const FRigUnit_QuaternionToAngle&), ERASE_ARGUMENT_PACK(FRigUnit_QuaternionToAngle&)) },


{ ERASE_METHOD_PTR(FRigUnit_BinaryTransformOp, opAssign, (const FRigUnit_BinaryTransformOp&), ERASE_ARGUMENT_PACK(FRigUnit_BinaryTransformOp&)) },


{ ERASE_METHOD_PTR(FRigUnit_MultiplyTransform, opAssign, (const FRigUnit_MultiplyTransform&), ERASE_ARGUMENT_PACK(FRigUnit_MultiplyTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetRelativeTransform, opAssign, (const FRigUnit_GetRelativeTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetRelativeTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_BinaryVectorOp, opAssign, (const FRigUnit_BinaryVectorOp&), ERASE_ARGUMENT_PACK(FRigUnit_BinaryVectorOp&)) },


{ ERASE_METHOD_PTR(FRigUnit_Multiply_VectorVector, opAssign, (const FRigUnit_Multiply_VectorVector&), ERASE_ARGUMENT_PACK(FRigUnit_Multiply_VectorVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_Add_VectorVector, opAssign, (const FRigUnit_Add_VectorVector&), ERASE_ARGUMENT_PACK(FRigUnit_Add_VectorVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_Subtract_VectorVector, opAssign, (const FRigUnit_Subtract_VectorVector&), ERASE_ARGUMENT_PACK(FRigUnit_Subtract_VectorVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_Divide_VectorVector, opAssign, (const FRigUnit_Divide_VectorVector&), ERASE_ARGUMENT_PACK(FRigUnit_Divide_VectorVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_Distance_VectorVector, opAssign, (const FRigUnit_Distance_VectorVector&), ERASE_ARGUMENT_PACK(FRigUnit_Distance_VectorVector&)) },


{ ERASE_METHOD_PTR(FAimTarget, opAssign, (const FAimTarget&), ERASE_ARGUMENT_PACK(FAimTarget&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimConstraint, opAssign, (const FRigUnit_AimConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_AimConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_ApplyFK, opAssign, (const FRigUnit_ApplyFK&), ERASE_ARGUMENT_PACK(FRigUnit_ApplyFK&)) },


{ ERASE_METHOD_PTR(FBlendTarget, opAssign, (const FBlendTarget&), ERASE_ARGUMENT_PACK(FBlendTarget&)) },


{ ERASE_METHOD_PTR(FRigUnit_BlendTransform, opAssign, (const FRigUnit_BlendTransform&), ERASE_ARGUMENT_PACK(FRigUnit_BlendTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetJointTransform, opAssign, (const FRigUnit_GetJointTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetJointTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKFK, opAssign, (const FRigUnit_TwoBoneIKFK&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKFK&)) },


{ ERASE_METHOD_PTR(FRigUnit_DrawContainerGetInstruction, opAssign, (const FRigUnit_DrawContainerGetInstruction&), ERASE_ARGUMENT_PACK(FRigUnit_DrawContainerGetInstruction&)) },


{ ERASE_METHOD_PTR(FRigUnit_DrawContainerSetColor, opAssign, (const FRigUnit_DrawContainerSetColor&), ERASE_ARGUMENT_PACK(FRigUnit_DrawContainerSetColor&)) },


{ ERASE_METHOD_PTR(FRigUnit_DrawContainerSetThickness, opAssign, (const FRigUnit_DrawContainerSetThickness&), ERASE_ARGUMENT_PACK(FRigUnit_DrawContainerSetThickness&)) },


{ ERASE_METHOD_PTR(FRigUnit_DrawContainerSetTransform, opAssign, (const FRigUnit_DrawContainerSetTransform&), ERASE_ARGUMENT_PACK(FRigUnit_DrawContainerSetTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_BeginExecution, opAssign, (const FRigUnit_BeginExecution&), ERASE_ARGUMENT_PACK(FRigUnit_BeginExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_PreBeginExecution, opAssign, (const FRigUnit_PreBeginExecution&), ERASE_ARGUMENT_PACK(FRigUnit_PreBeginExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_PostBeginExecution, opAssign, (const FRigUnit_PostBeginExecution&), ERASE_ARGUMENT_PACK(FRigUnit_PostBeginExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionBaseMutable, opAssign, (const FRigUnit_CollectionBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionChain, opAssign, (const FRigUnit_CollectionChain&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionChain&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionChainArray, opAssign, (const FRigUnit_CollectionChainArray&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionChainArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionNameSearch, opAssign, (const FRigUnit_CollectionNameSearch&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionNameSearch&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionNameSearchArray, opAssign, (const FRigUnit_CollectionNameSearchArray&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionNameSearchArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionChildren, opAssign, (const FRigUnit_CollectionChildren&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionChildren&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionChildrenArray, opAssign, (const FRigUnit_CollectionChildrenArray&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionChildrenArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionGetAll, opAssign, (const FRigUnit_CollectionGetAll&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionGetAll&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionReplaceItems, opAssign, (const FRigUnit_CollectionReplaceItems&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionReplaceItems&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionReplaceItemsArray, opAssign, (const FRigUnit_CollectionReplaceItemsArray&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionReplaceItemsArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionItems, opAssign, (const FRigUnit_CollectionItems&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionItems&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionGetItems, opAssign, (const FRigUnit_CollectionGetItems&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionGetItems&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionGetParentIndices, opAssign, (const FRigUnit_CollectionGetParentIndices&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionGetParentIndices&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionGetParentIndicesItemArray, opAssign, (const FRigUnit_CollectionGetParentIndicesItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionGetParentIndicesItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionUnion, opAssign, (const FRigUnit_CollectionUnion&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionUnion&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionIntersection, opAssign, (const FRigUnit_CollectionIntersection&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionIntersection&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionDifference, opAssign, (const FRigUnit_CollectionDifference&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionDifference&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionReverse, opAssign, (const FRigUnit_CollectionReverse&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionReverse&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionCount, opAssign, (const FRigUnit_CollectionCount&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionCount&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionItemAtIndex, opAssign, (const FRigUnit_CollectionItemAtIndex&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionItemAtIndex&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionLoop, opAssign, (const FRigUnit_CollectionLoop&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionLoop&)) },


{ ERASE_METHOD_PTR(FRigUnit_CollectionAddItem, opAssign, (const FRigUnit_CollectionAddItem&), ERASE_ARGUMENT_PACK(FRigUnit_CollectionAddItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_DynamicHierarchyBaseMutable, opAssign, (const FRigUnit_DynamicHierarchyBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_DynamicHierarchyBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_AddParent, opAssign, (const FRigUnit_AddParent&), ERASE_ARGUMENT_PACK(FRigUnit_AddParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetDefaultParent, opAssign, (const FRigUnit_SetDefaultParent&), ERASE_ARGUMENT_PACK(FRigUnit_SetDefaultParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_SwitchParent, opAssign, (const FRigUnit_SwitchParent&), ERASE_ARGUMENT_PACK(FRigUnit_SwitchParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetParentWeights, opAssign, (const FRigUnit_HierarchyGetParentWeights&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetParentWeights&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetParentWeightsArray, opAssign, (const FRigUnit_HierarchyGetParentWeightsArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetParentWeightsArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchySetParentWeights, opAssign, (const FRigUnit_HierarchySetParentWeights&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchySetParentWeights&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyReset, opAssign, (const FRigUnit_HierarchyReset&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyReset&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyImportFromSkeleton, opAssign, (const FRigUnit_HierarchyImportFromSkeleton&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyImportFromSkeleton&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyRemoveElement, opAssign, (const FRigUnit_HierarchyRemoveElement&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyRemoveElement&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddElement, opAssign, (const FRigUnit_HierarchyAddElement&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddElement&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddBone, opAssign, (const FRigUnit_HierarchyAddBone&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddBone&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddNull, opAssign, (const FRigUnit_HierarchyAddNull&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddNull&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControl_Settings, opAssign, (const FRigUnit_HierarchyAddControl_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControl_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControl_ShapeSettings, opAssign, (const FRigUnit_HierarchyAddControl_ShapeSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControl_ShapeSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControl_ProxySettings, opAssign, (const FRigUnit_HierarchyAddControl_ProxySettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControl_ProxySettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlFloat_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlFloat_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlFloat_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlFloat_Settings, opAssign, (const FRigUnit_HierarchyAddControlFloat_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlFloat_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlElement, opAssign, (const FRigUnit_HierarchyAddControlElement&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlElement&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlFloat, opAssign, (const FRigUnit_HierarchyAddControlFloat&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlInteger_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlInteger_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlInteger_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlInteger_Settings, opAssign, (const FRigUnit_HierarchyAddControlInteger_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlInteger_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlInteger, opAssign, (const FRigUnit_HierarchyAddControlInteger&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlInteger&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector2D_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlVector2D_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector2D_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector2D_Settings, opAssign, (const FRigUnit_HierarchyAddControlVector2D_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector2D_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector2D, opAssign, (const FRigUnit_HierarchyAddControlVector2D&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector2D&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlVector_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector_Settings, opAssign, (const FRigUnit_HierarchyAddControlVector_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlVector, opAssign, (const FRigUnit_HierarchyAddControlVector&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlRotator_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlRotator_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlRotator_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlRotator_Settings, opAssign, (const FRigUnit_HierarchyAddControlRotator_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlRotator_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlRotator, opAssign, (const FRigUnit_HierarchyAddControlRotator&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlRotator&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlTransform_LimitSettings, opAssign, (const FRigUnit_HierarchyAddControlTransform_LimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlTransform_LimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlTransform_Settings, opAssign, (const FRigUnit_HierarchyAddControlTransform_Settings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlTransform_Settings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddControlTransform, opAssign, (const FRigUnit_HierarchyAddControlTransform&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddControlTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings, opAssign, (const FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelBool, opAssign, (const FRigUnit_HierarchyAddAnimationChannelBool&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelBool&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings, opAssign, (const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelFloat, opAssign, (const FRigUnit_HierarchyAddAnimationChannelFloat&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelScaleFloat, opAssign, (const FRigUnit_HierarchyAddAnimationChannelScaleFloat&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelScaleFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelInteger, opAssign, (const FRigUnit_HierarchyAddAnimationChannelInteger&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelInteger&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannel2DLimitSettings, opAssign, (const FRigUnit_HierarchyAddAnimationChannel2DLimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannel2DLimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelVector2D, opAssign, (const FRigUnit_HierarchyAddAnimationChannelVector2D&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelVector2D&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings, opAssign, (const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelVector, opAssign, (const FRigUnit_HierarchyAddAnimationChannelVector&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelScaleVector, opAssign, (const FRigUnit_HierarchyAddAnimationChannelScaleVector&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelScaleVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings, opAssign, (const FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddAnimationChannelRotator, opAssign, (const FRigUnit_HierarchyAddAnimationChannelRotator&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddAnimationChannelRotator&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetShapeSettings, opAssign, (const FRigUnit_HierarchyGetShapeSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetShapeSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchySetShapeSettings, opAssign, (const FRigUnit_HierarchySetShapeSettings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchySetShapeSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyAddSocket, opAssign, (const FRigUnit_HierarchyAddSocket&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyAddSocket&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyBaseMutable, opAssign, (const FRigUnit_HierarchyBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetParent, opAssign, (const FRigUnit_HierarchyGetParent&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetParents, opAssign, (const FRigUnit_HierarchyGetParents&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetParents&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetParentsItemArray, opAssign, (const FRigUnit_HierarchyGetParentsItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetParentsItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetChildren, opAssign, (const FRigUnit_HierarchyGetChildren&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetChildren&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetSiblings, opAssign, (const FRigUnit_HierarchyGetSiblings&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetSiblings&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetSiblingsItemArray, opAssign, (const FRigUnit_HierarchyGetSiblingsItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetSiblingsItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetChainItemArray, opAssign, (const FRigUnit_HierarchyGetChainItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetChainItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetPose, opAssign, (const FRigUnit_HierarchyGetPose&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetPose&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchyGetPoseItemArray, opAssign, (const FRigUnit_HierarchyGetPoseItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchyGetPoseItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchySetPose, opAssign, (const FRigUnit_HierarchySetPose&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchySetPose&)) },


{ ERASE_METHOD_PTR(FRigUnit_HierarchySetPoseItemArray, opAssign, (const FRigUnit_HierarchySetPoseItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_HierarchySetPoseItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseIsEmpty, opAssign, (const FRigUnit_PoseIsEmpty&), ERASE_ARGUMENT_PACK(FRigUnit_PoseIsEmpty&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetItems, opAssign, (const FRigUnit_PoseGetItems&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetItems&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetItemsItemArray, opAssign, (const FRigUnit_PoseGetItemsItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetItemsItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetDelta, opAssign, (const FRigUnit_PoseGetDelta&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetDelta&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetTransform, opAssign, (const FRigUnit_PoseGetTransform&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetTransformArray, opAssign, (const FRigUnit_PoseGetTransformArray&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetTransformArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseGetCurve, opAssign, (const FRigUnit_PoseGetCurve&), ERASE_ARGUMENT_PACK(FRigUnit_PoseGetCurve&)) },


{ ERASE_METHOD_PTR(FRigUnit_PoseLoop, opAssign, (const FRigUnit_PoseLoop&), ERASE_ARGUMENT_PACK(FRigUnit_PoseLoop&)) },


{ ERASE_METHOD_PTR(FRigUnit_InteractionExecution, opAssign, (const FRigUnit_InteractionExecution&), ERASE_ARGUMENT_PACK(FRigUnit_InteractionExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_InverseExecution, opAssign, (const FRigUnit_InverseExecution&), ERASE_ARGUMENT_PACK(FRigUnit_InverseExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_IsInteracting, opAssign, (const FRigUnit_IsInteracting&), ERASE_ARGUMENT_PACK(FRigUnit_IsInteracting&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemBaseMutable, opAssign, (const FRigUnit_ItemBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_ItemBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemExists, opAssign, (const FRigUnit_ItemExists&), ERASE_ARGUMENT_PACK(FRigUnit_ItemExists&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemReplace, opAssign, (const FRigUnit_ItemReplace&), ERASE_ARGUMENT_PACK(FRigUnit_ItemReplace&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemEquals, opAssign, (const FRigUnit_ItemEquals&), ERASE_ARGUMENT_PACK(FRigUnit_ItemEquals&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemNotEquals, opAssign, (const FRigUnit_ItemNotEquals&), ERASE_ARGUMENT_PACK(FRigUnit_ItemNotEquals&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemTypeEquals, opAssign, (const FRigUnit_ItemTypeEquals&), ERASE_ARGUMENT_PACK(FRigUnit_ItemTypeEquals&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemTypeNotEquals, opAssign, (const FRigUnit_ItemTypeNotEquals&), ERASE_ARGUMENT_PACK(FRigUnit_ItemTypeNotEquals&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemToName, opAssign, (const FRigUnit_ItemToName&), ERASE_ARGUMENT_PACK(FRigUnit_ItemToName&)) },


{ ERASE_METHOD_PTR(FRigUnit_PrepareForExecution, opAssign, (const FRigUnit_PrepareForExecution&), ERASE_ARGUMENT_PACK(FRigUnit_PrepareForExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_RigModulesBaseMutable, opAssign, (const FRigUnit_RigModulesBaseMutable&), ERASE_ARGUMENT_PACK(FRigUnit_RigModulesBaseMutable&)) },


{ ERASE_METHOD_PTR(FRigUnit_ResolveConnector, opAssign, (const FRigUnit_ResolveConnector&), ERASE_ARGUMENT_PACK(FRigUnit_ResolveConnector&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetCurrentNameSpace, opAssign, (const FRigUnit_GetCurrentNameSpace&), ERASE_ARGUMENT_PACK(FRigUnit_GetCurrentNameSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetItemShortName, opAssign, (const FRigUnit_GetItemShortName&), ERASE_ARGUMENT_PACK(FRigUnit_GetItemShortName&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetItemNameSpace, opAssign, (const FRigUnit_GetItemNameSpace&), ERASE_ARGUMENT_PACK(FRigUnit_GetItemNameSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_IsItemInCurrentNameSpace, opAssign, (const FRigUnit_IsItemInCurrentNameSpace&), ERASE_ARGUMENT_PACK(FRigUnit_IsItemInCurrentNameSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetItemsInNameSpace, opAssign, (const FRigUnit_GetItemsInNameSpace&), ERASE_ARGUMENT_PACK(FRigUnit_GetItemsInNameSpace&)) },


{ ERASE_METHOD_PTR(FRigUnit_SequenceExecution, opAssign, (const FRigUnit_SequenceExecution&), ERASE_ARGUMENT_PACK(FRigUnit_SequenceExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_AddBoneTransform, opAssign, (const FRigUnit_AddBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_AddBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_Item, opAssign, (const FRigUnit_Item&), ERASE_ARGUMENT_PACK(FRigUnit_Item&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemArray, opAssign, (const FRigUnit_ItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_ItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_BoneName, opAssign, (const FRigUnit_BoneName&), ERASE_ARGUMENT_PACK(FRigUnit_BoneName&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpaceName, opAssign, (const FRigUnit_SpaceName&), ERASE_ARGUMENT_PACK(FRigUnit_SpaceName&)) },


{ ERASE_METHOD_PTR(FRigUnit_ControlName, opAssign, (const FRigUnit_ControlName&), ERASE_ARGUMENT_PACK(FRigUnit_ControlName&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetAnimationChannelBase, opAssign, (const FRigUnit_GetAnimationChannelBase&), ERASE_ARGUMENT_PACK(FRigUnit_GetAnimationChannelBase&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetBoolAnimationChannel, opAssign, (const FRigUnit_GetBoolAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetBoolAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetFloatAnimationChannel, opAssign, (const FRigUnit_GetFloatAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetFloatAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetIntAnimationChannel, opAssign, (const FRigUnit_GetIntAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetIntAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetVector2DAnimationChannel, opAssign, (const FRigUnit_GetVector2DAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetVector2DAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetVectorAnimationChannel, opAssign, (const FRigUnit_GetVectorAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetVectorAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetRotatorAnimationChannel, opAssign, (const FRigUnit_GetRotatorAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetRotatorAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetTransformAnimationChannel, opAssign, (const FRigUnit_GetTransformAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_GetTransformAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetAnimationChannelBase, opAssign, (const FRigUnit_SetAnimationChannelBase&), ERASE_ARGUMENT_PACK(FRigUnit_SetAnimationChannelBase&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetBoolAnimationChannel, opAssign, (const FRigUnit_SetBoolAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetBoolAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetFloatAnimationChannel, opAssign, (const FRigUnit_SetFloatAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetFloatAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetIntAnimationChannel, opAssign, (const FRigUnit_SetIntAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetIntAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetVector2DAnimationChannel, opAssign, (const FRigUnit_SetVector2DAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetVector2DAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetVectorAnimationChannel, opAssign, (const FRigUnit_SetVectorAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetVectorAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRotatorAnimationChannel, opAssign, (const FRigUnit_SetRotatorAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetRotatorAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetTransformAnimationChannel, opAssign, (const FRigUnit_SetTransformAnimationChannel&), ERASE_ARGUMENT_PACK(FRigUnit_SetTransformAnimationChannel&)) },


{ ERASE_METHOD_PTR(FRigUnit_CurveExists, opAssign, (const FRigUnit_CurveExists&), ERASE_ARGUMENT_PACK(FRigUnit_CurveExists&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetBoneTransform, opAssign, (const FRigUnit_GetBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlInitialTransform, opAssign, (const FRigUnit_GetControlInitialTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlInitialTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlBool, opAssign, (const FRigUnit_GetControlBool&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlBool&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlFloat, opAssign, (const FRigUnit_GetControlFloat&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlInteger, opAssign, (const FRigUnit_GetControlInteger&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlInteger&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlVector2D, opAssign, (const FRigUnit_GetControlVector2D&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlVector2D&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlVector, opAssign, (const FRigUnit_GetControlVector&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlRotator, opAssign, (const FRigUnit_GetControlRotator&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlRotator&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlTransform, opAssign, (const FRigUnit_GetControlTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetCurveValue, opAssign, (const FRigUnit_GetCurveValue&), ERASE_ARGUMENT_PACK(FRigUnit_GetCurveValue&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetInitialBoneTransform, opAssign, (const FRigUnit_GetInitialBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetInitialBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetRelativeBoneTransform, opAssign, (const FRigUnit_GetRelativeBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetRelativeBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetRelativeTransformForItem, opAssign, (const FRigUnit_GetRelativeTransformForItem&), ERASE_ARGUMENT_PACK(FRigUnit_GetRelativeTransformForItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetSpaceTransform, opAssign, (const FRigUnit_GetSpaceTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetSpaceTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetTransform, opAssign, (const FRigUnit_GetTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetTransformArray, opAssign, (const FRigUnit_GetTransformArray&), ERASE_ARGUMENT_PACK(FRigUnit_GetTransformArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetTransformItemArray, opAssign, (const FRigUnit_GetTransformItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_GetTransformItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_RemoveMetadata, opAssign, (const FRigUnit_RemoveMetadata&), ERASE_ARGUMENT_PACK(FRigUnit_RemoveMetadata&)) },


{ ERASE_METHOD_PTR(FRigUnit_RemoveAllMetadata, opAssign, (const FRigUnit_RemoveAllMetadata&), ERASE_ARGUMENT_PACK(FRigUnit_RemoveAllMetadata&)) },


{ ERASE_METHOD_PTR(FRigUnit_HasMetadata, opAssign, (const FRigUnit_HasMetadata&), ERASE_ARGUMENT_PACK(FRigUnit_HasMetadata&)) },


{ ERASE_METHOD_PTR(FRigUnit_FindItemsWithMetadata, opAssign, (const FRigUnit_FindItemsWithMetadata&), ERASE_ARGUMENT_PACK(FRigUnit_FindItemsWithMetadata&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetMetadataTags, opAssign, (const FRigUnit_GetMetadataTags&), ERASE_ARGUMENT_PACK(FRigUnit_GetMetadataTags&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMetadataTag, opAssign, (const FRigUnit_SetMetadataTag&), ERASE_ARGUMENT_PACK(FRigUnit_SetMetadataTag&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMetadataTagArray, opAssign, (const FRigUnit_SetMetadataTagArray&), ERASE_ARGUMENT_PACK(FRigUnit_SetMetadataTagArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_RemoveMetadataTag, opAssign, (const FRigUnit_RemoveMetadataTag&), ERASE_ARGUMENT_PACK(FRigUnit_RemoveMetadataTag&)) },


{ ERASE_METHOD_PTR(FRigUnit_HasMetadataTag, opAssign, (const FRigUnit_HasMetadataTag&), ERASE_ARGUMENT_PACK(FRigUnit_HasMetadataTag&)) },


{ ERASE_METHOD_PTR(FRigUnit_HasMetadataTagArray, opAssign, (const FRigUnit_HasMetadataTagArray&), ERASE_ARGUMENT_PACK(FRigUnit_HasMetadataTagArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_FindItemsWithMetadataTag, opAssign, (const FRigUnit_FindItemsWithMetadataTag&), ERASE_ARGUMENT_PACK(FRigUnit_FindItemsWithMetadataTag&)) },


{ ERASE_METHOD_PTR(FRigUnit_FindItemsWithMetadataTagArray, opAssign, (const FRigUnit_FindItemsWithMetadataTagArray&), ERASE_ARGUMENT_PACK(FRigUnit_FindItemsWithMetadataTagArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_FilterItemsByMetadataTags, opAssign, (const FRigUnit_FilterItemsByMetadataTags&), ERASE_ARGUMENT_PACK(FRigUnit_FilterItemsByMetadataTags&)) },


{ ERASE_METHOD_PTR(FRigUnit_OffsetTransformForItem, opAssign, (const FRigUnit_OffsetTransformForItem&), ERASE_ARGUMENT_PACK(FRigUnit_OffsetTransformForItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentSwitchConstraint, opAssign, (const FRigUnit_ParentSwitchConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_ParentSwitchConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentSwitchConstraintArray, opAssign, (const FRigUnit_ParentSwitchConstraintArray&), ERASE_ARGUMENT_PACK(FRigUnit_ParentSwitchConstraintArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_ProjectTransformToNewParent, opAssign, (const FRigUnit_ProjectTransformToNewParent&), ERASE_ARGUMENT_PACK(FRigUnit_ProjectTransformToNewParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_PropagateTransform, opAssign, (const FRigUnit_PropagateTransform&), ERASE_ARGUMENT_PACK(FRigUnit_PropagateTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SendEvent, opAssign, (const FRigUnit_SendEvent&), ERASE_ARGUMENT_PACK(FRigUnit_SendEvent&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetBoneInitialTransform, opAssign, (const FRigUnit_SetBoneInitialTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetBoneInitialTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetBoneRotation, opAssign, (const FRigUnit_SetBoneRotation&), ERASE_ARGUMENT_PACK(FRigUnit_SetBoneRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetBoneTransform, opAssign, (const FRigUnit_SetBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetBoneTranslation, opAssign, (const FRigUnit_SetBoneTranslation&), ERASE_ARGUMENT_PACK(FRigUnit_SetBoneTranslation&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlColor, opAssign, (const FRigUnit_GetControlColor&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlColor&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlColor, opAssign, (const FRigUnit_SetControlColor&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlColor&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlDrivenList, opAssign, (const FRigUnit_GetControlDrivenList&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlDrivenList&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlDrivenList, opAssign, (const FRigUnit_SetControlDrivenList&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlDrivenList&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlOffset, opAssign, (const FRigUnit_SetControlOffset&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlOffset&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetShapeTransform, opAssign, (const FRigUnit_GetShapeTransform&), ERASE_ARGUMENT_PACK(FRigUnit_GetShapeTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetShapeTransform, opAssign, (const FRigUnit_SetShapeTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetShapeTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlBool, opAssign, (const FRigUnit_SetControlBool&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlBool&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlBool_Entry, opAssign, (const FRigUnit_SetMultiControlBool_Entry&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlBool_Entry&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlBool, opAssign, (const FRigUnit_SetMultiControlBool&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlBool&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlFloat, opAssign, (const FRigUnit_SetControlFloat&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlFloat_Entry, opAssign, (const FRigUnit_SetMultiControlFloat_Entry&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlFloat_Entry&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlFloat, opAssign, (const FRigUnit_SetMultiControlFloat&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlFloat&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlInteger, opAssign, (const FRigUnit_SetControlInteger&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlInteger&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlInteger_Entry, opAssign, (const FRigUnit_SetMultiControlInteger_Entry&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlInteger_Entry&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlInteger, opAssign, (const FRigUnit_SetMultiControlInteger&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlInteger&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlVector2D, opAssign, (const FRigUnit_SetControlVector2D&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlVector2D&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlVector2D_Entry, opAssign, (const FRigUnit_SetMultiControlVector2D_Entry&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlVector2D_Entry&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlVector2D, opAssign, (const FRigUnit_SetMultiControlVector2D&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlVector2D&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlVector, opAssign, (const FRigUnit_SetControlVector&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlRotator, opAssign, (const FRigUnit_SetControlRotator&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlRotator&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlRotator_Entry, opAssign, (const FRigUnit_SetMultiControlRotator_Entry&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlRotator_Entry&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetMultiControlRotator, opAssign, (const FRigUnit_SetMultiControlRotator&), ERASE_ARGUMENT_PACK(FRigUnit_SetMultiControlRotator&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlTransform, opAssign, (const FRigUnit_SetControlTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetControlVisibility, opAssign, (const FRigUnit_GetControlVisibility&), ERASE_ARGUMENT_PACK(FRigUnit_GetControlVisibility&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetControlVisibility, opAssign, (const FRigUnit_SetControlVisibility&), ERASE_ARGUMENT_PACK(FRigUnit_SetControlVisibility&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetCurveValue, opAssign, (const FRigUnit_SetCurveValue&), ERASE_ARGUMENT_PACK(FRigUnit_SetCurveValue&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRelativeBoneTransform, opAssign, (const FRigUnit_SetRelativeBoneTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetRelativeBoneTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRelativeTransformForItem, opAssign, (const FRigUnit_SetRelativeTransformForItem&), ERASE_ARGUMENT_PACK(FRigUnit_SetRelativeTransformForItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRelativeTranslationForItem, opAssign, (const FRigUnit_SetRelativeTranslationForItem&), ERASE_ARGUMENT_PACK(FRigUnit_SetRelativeTranslationForItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRelativeRotationForItem, opAssign, (const FRigUnit_SetRelativeRotationForItem&), ERASE_ARGUMENT_PACK(FRigUnit_SetRelativeRotationForItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetSpaceInitialTransform, opAssign, (const FRigUnit_SetSpaceInitialTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetSpaceInitialTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetSpaceTransform, opAssign, (const FRigUnit_SetSpaceTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetSpaceTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetTransform, opAssign, (const FRigUnit_SetTransform&), ERASE_ARGUMENT_PACK(FRigUnit_SetTransform&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetTranslation, opAssign, (const FRigUnit_SetTranslation&), ERASE_ARGUMENT_PACK(FRigUnit_SetTranslation&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetRotation, opAssign, (const FRigUnit_SetRotation&), ERASE_ARGUMENT_PACK(FRigUnit_SetRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetScale, opAssign, (const FRigUnit_SetScale&), ERASE_ARGUMENT_PACK(FRigUnit_SetScale&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetTransformArray, opAssign, (const FRigUnit_SetTransformArray&), ERASE_ARGUMENT_PACK(FRigUnit_SetTransformArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetTransformItemArray, opAssign, (const FRigUnit_SetTransformItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_SetTransformItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_UnsetCurveValue, opAssign, (const FRigUnit_UnsetCurveValue&), ERASE_ARGUMENT_PACK(FRigUnit_UnsetCurveValue&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToWorldSpace_Transform, opAssign, (const FRigUnit_ToWorldSpace_Transform&), ERASE_ARGUMENT_PACK(FRigUnit_ToWorldSpace_Transform&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToRigSpace_Transform, opAssign, (const FRigUnit_ToRigSpace_Transform&), ERASE_ARGUMENT_PACK(FRigUnit_ToRigSpace_Transform&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToWorldSpace_Location, opAssign, (const FRigUnit_ToWorldSpace_Location&), ERASE_ARGUMENT_PACK(FRigUnit_ToWorldSpace_Location&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToRigSpace_Location, opAssign, (const FRigUnit_ToRigSpace_Location&), ERASE_ARGUMENT_PACK(FRigUnit_ToRigSpace_Location&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToWorldSpace_Rotation, opAssign, (const FRigUnit_ToWorldSpace_Rotation&), ERASE_ARGUMENT_PACK(FRigUnit_ToWorldSpace_Rotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_ToRigSpace_Rotation, opAssign, (const FRigUnit_ToRigSpace_Rotation&), ERASE_ARGUMENT_PACK(FRigUnit_ToRigSpace_Rotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_BoneHarmonics_BoneTarget, opAssign, (const FRigUnit_BoneHarmonics_BoneTarget&), ERASE_ARGUMENT_PACK(FRigUnit_BoneHarmonics_BoneTarget&)) },


{ ERASE_METHOD_PTR(FRigUnit_Harmonics_TargetItem, opAssign, (const FRigUnit_Harmonics_TargetItem&), ERASE_ARGUMENT_PACK(FRigUnit_Harmonics_TargetItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_BoneHarmonics, opAssign, (const FRigUnit_BoneHarmonics&), ERASE_ARGUMENT_PACK(FRigUnit_BoneHarmonics&)) },


{ ERASE_METHOD_PTR(FRigUnit_ItemHarmonics, opAssign, (const FRigUnit_ItemHarmonics&), ERASE_ARGUMENT_PACK(FRigUnit_ItemHarmonics&)) },


{ ERASE_METHOD_PTR(FRigUnit_ChainHarmonics_Reach, opAssign, (const FRigUnit_ChainHarmonics_Reach&), ERASE_ARGUMENT_PACK(FRigUnit_ChainHarmonics_Reach&)) },


{ ERASE_METHOD_PTR(FRigUnit_ChainHarmonics_Wave, opAssign, (const FRigUnit_ChainHarmonics_Wave&), ERASE_ARGUMENT_PACK(FRigUnit_ChainHarmonics_Wave&)) },


{ ERASE_METHOD_PTR(FRigUnit_ChainHarmonics_Pendulum, opAssign, (const FRigUnit_ChainHarmonics_Pendulum&), ERASE_ARGUMENT_PACK(FRigUnit_ChainHarmonics_Pendulum&)) },


{ ERASE_METHOD_PTR(FRigUnit_ChainHarmonics, opAssign, (const FRigUnit_ChainHarmonics&), ERASE_ARGUMENT_PACK(FRigUnit_ChainHarmonics&)) },


{ ERASE_METHOD_PTR(FRigUnit_ChainHarmonicsPerItem, opAssign, (const FRigUnit_ChainHarmonicsPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_ChainHarmonicsPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimBone_Target, opAssign, (const FRigUnit_AimBone_Target&), ERASE_ARGUMENT_PACK(FRigUnit_AimBone_Target&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimItem_Target, opAssign, (const FRigUnit_AimItem_Target&), ERASE_ARGUMENT_PACK(FRigUnit_AimItem_Target&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimBone_DebugSettings, opAssign, (const FRigUnit_AimBone_DebugSettings&), ERASE_ARGUMENT_PACK(FRigUnit_AimBone_DebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimBoneMath, opAssign, (const FRigUnit_AimBoneMath&), ERASE_ARGUMENT_PACK(FRigUnit_AimBoneMath&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimBone, opAssign, (const FRigUnit_AimBone&), ERASE_ARGUMENT_PACK(FRigUnit_AimBone&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimItem, opAssign, (const FRigUnit_AimItem&), ERASE_ARGUMENT_PACK(FRigUnit_AimItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimConstraint_WorldUp, opAssign, (const FRigUnit_AimConstraint_WorldUp&), ERASE_ARGUMENT_PACK(FRigUnit_AimConstraint_WorldUp&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimConstraint_AdvancedSettings, opAssign, (const FRigUnit_AimConstraint_AdvancedSettings&), ERASE_ARGUMENT_PACK(FRigUnit_AimConstraint_AdvancedSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_AimConstraintLocalSpaceOffset, opAssign, (const FRigUnit_AimConstraintLocalSpaceOffset&), ERASE_ARGUMENT_PACK(FRigUnit_AimConstraintLocalSpaceOffset&)) },


{ ERASE_METHOD_PTR(FConstraintParent, opAssign, (const FConstraintParent&), ERASE_ARGUMENT_PACK(FConstraintParent&)) },


{ ERASE_METHOD_PTR(FRigUnit_CCDIK_RotationLimit, opAssign, (const FRigUnit_CCDIK_RotationLimit&), ERASE_ARGUMENT_PACK(FRigUnit_CCDIK_RotationLimit&)) },


{ ERASE_METHOD_PTR(FRigUnit_CCDIK_RotationLimitPerItem, opAssign, (const FRigUnit_CCDIK_RotationLimitPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_CCDIK_RotationLimitPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_CCDIK, opAssign, (const FRigUnit_CCDIK&), ERASE_ARGUMENT_PACK(FRigUnit_CCDIK&)) },


{ ERASE_METHOD_PTR(FRigUnit_CCDIKPerItem, opAssign, (const FRigUnit_CCDIKPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_CCDIKPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_CCDIKItemArray, opAssign, (const FRigUnit_CCDIKItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_CCDIKItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_DistributeRotation_Rotation, opAssign, (const FRigUnit_DistributeRotation_Rotation&), ERASE_ARGUMENT_PACK(FRigUnit_DistributeRotation_Rotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_DistributeRotation, opAssign, (const FRigUnit_DistributeRotation&), ERASE_ARGUMENT_PACK(FRigUnit_DistributeRotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_DistributeRotationForCollection, opAssign, (const FRigUnit_DistributeRotationForCollection&), ERASE_ARGUMENT_PACK(FRigUnit_DistributeRotationForCollection&)) },


{ ERASE_METHOD_PTR(FRigUnit_DistributeRotationForItemArray, opAssign, (const FRigUnit_DistributeRotationForItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_DistributeRotationForItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_FABRIK, opAssign, (const FRigUnit_FABRIK&), ERASE_ARGUMENT_PACK(FRigUnit_FABRIK&)) },


{ ERASE_METHOD_PTR(FRigUnit_FABRIKPerItem, opAssign, (const FRigUnit_FABRIKPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_FABRIKPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_FABRIKItemArray, opAssign, (const FRigUnit_FABRIKItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_FABRIKItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToCurve_Rotation, opAssign, (const FRigUnit_FitChainToCurve_Rotation&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToCurve_Rotation&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToCurve_DebugSettings, opAssign, (const FRigUnit_FitChainToCurve_DebugSettings&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToCurve_DebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToCurve, opAssign, (const FRigUnit_FitChainToCurve&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToCurve&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToCurvePerItem, opAssign, (const FRigUnit_FitChainToCurvePerItem&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToCurvePerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToCurveItemArray, opAssign, (const FRigUnit_FitChainToCurveItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToCurveItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_ModifyBoneTransforms_PerBone, opAssign, (const FRigUnit_ModifyBoneTransforms_PerBone&), ERASE_ARGUMENT_PACK(FRigUnit_ModifyBoneTransforms_PerBone&)) },


{ ERASE_METHOD_PTR(FRigUnit_ModifyBoneTransforms, opAssign, (const FRigUnit_ModifyBoneTransforms&), ERASE_ARGUMENT_PACK(FRigUnit_ModifyBoneTransforms&)) },


{ ERASE_METHOD_PTR(FRigUnit_ModifyTransforms_PerItem, opAssign, (const FRigUnit_ModifyTransforms_PerItem&), ERASE_ARGUMENT_PACK(FRigUnit_ModifyTransforms_PerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_ModifyTransforms, opAssign, (const FRigUnit_ModifyTransforms&), ERASE_ARGUMENT_PACK(FRigUnit_ModifyTransforms&)) },


{ ERASE_METHOD_PTR(FRigUnit_MultiFABRIK_EndEffector, opAssign, (const FRigUnit_MultiFABRIK_EndEffector&), ERASE_ARGUMENT_PACK(FRigUnit_MultiFABRIK_EndEffector&)) },


{ ERASE_METHOD_PTR(FRigUnit_MultiFABRIK, opAssign, (const FRigUnit_MultiFABRIK&), ERASE_ARGUMENT_PACK(FRigUnit_MultiFABRIK&)) },


{ ERASE_METHOD_PTR(FRigUnit_SlideChain, opAssign, (const FRigUnit_SlideChain&), ERASE_ARGUMENT_PACK(FRigUnit_SlideChain&)) },


{ ERASE_METHOD_PTR(FRigUnit_SlideChainPerItem, opAssign, (const FRigUnit_SlideChainPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_SlideChainPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_SlideChainItemArray, opAssign, (const FRigUnit_SlideChainItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_SlideChainItemArray&)) },


{ ERASE_METHOD_PTR(FRegionScaleFactors, opAssign, (const FRegionScaleFactors&), ERASE_ARGUMENT_PACK(FRegionScaleFactors&)) },


{ ERASE_METHOD_PTR(FSphericalPoseReaderDebugSettings, opAssign, (const FSphericalPoseReaderDebugSettings&), ERASE_ARGUMENT_PACK(FSphericalPoseReaderDebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_SphericalPoseReader, opAssign, (const FRigUnit_SphericalPoseReader&), ERASE_ARGUMENT_PACK(FRigUnit_SphericalPoseReader&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringIK_DebugSettings, opAssign, (const FRigUnit_SpringIK_DebugSettings&), ERASE_ARGUMENT_PACK(FRigUnit_SpringIK_DebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringIK, opAssign, (const FRigUnit_SpringIK&), ERASE_ARGUMENT_PACK(FRigUnit_SpringIK&)) },


{ ERASE_METHOD_PTR(FConstraintTarget, opAssign, (const FConstraintTarget&), ERASE_ARGUMENT_PACK(FConstraintTarget&)) },


{ ERASE_METHOD_PTR(FRigUnit_TransformConstraint, opAssign, (const FRigUnit_TransformConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_TransformConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_TransformConstraintPerItem, opAssign, (const FRigUnit_TransformConstraintPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_TransformConstraintPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentConstraint_AdvancedSettings, opAssign, (const FRigUnit_ParentConstraint_AdvancedSettings&), ERASE_ARGUMENT_PACK(FRigUnit_ParentConstraint_AdvancedSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentConstraint, opAssign, (const FRigUnit_ParentConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_ParentConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentConstraintMath_AdvancedSettings, opAssign, (const FRigUnit_ParentConstraintMath_AdvancedSettings&), ERASE_ARGUMENT_PACK(FRigUnit_ParentConstraintMath_AdvancedSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParentConstraintMath, opAssign, (const FRigUnit_ParentConstraintMath&), ERASE_ARGUMENT_PACK(FRigUnit_ParentConstraintMath&)) },


{ ERASE_METHOD_PTR(FRigUnit_PositionConstraint, opAssign, (const FRigUnit_PositionConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_PositionConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_PositionConstraintLocalSpaceOffset, opAssign, (const FRigUnit_PositionConstraintLocalSpaceOffset&), ERASE_ARGUMENT_PACK(FRigUnit_PositionConstraintLocalSpaceOffset&)) },


{ ERASE_METHOD_PTR(FRigUnit_RotationConstraint_AdvancedSettings, opAssign, (const FRigUnit_RotationConstraint_AdvancedSettings&), ERASE_ARGUMENT_PACK(FRigUnit_RotationConstraint_AdvancedSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_RotationConstraint, opAssign, (const FRigUnit_RotationConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_RotationConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_RotationConstraintLocalSpaceOffset, opAssign, (const FRigUnit_RotationConstraintLocalSpaceOffset&), ERASE_ARGUMENT_PACK(FRigUnit_RotationConstraintLocalSpaceOffset&)) },


{ ERASE_METHOD_PTR(FRigUnit_ScaleConstraint, opAssign, (const FRigUnit_ScaleConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_ScaleConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_ScaleConstraintLocalSpaceOffset, opAssign, (const FRigUnit_ScaleConstraintLocalSpaceOffset&), ERASE_ARGUMENT_PACK(FRigUnit_ScaleConstraintLocalSpaceOffset&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwistBones, opAssign, (const FRigUnit_TwistBones&), ERASE_ARGUMENT_PACK(FRigUnit_TwistBones&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwistBonesPerItem, opAssign, (const FRigUnit_TwistBonesPerItem&), ERASE_ARGUMENT_PACK(FRigUnit_TwistBonesPerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKSimple_DebugSettings, opAssign, (const FRigUnit_TwoBoneIKSimple_DebugSettings&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKSimple_DebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKSimple, opAssign, (const FRigUnit_TwoBoneIKSimple&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKSimple&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKSimplePerItem, opAssign, (const FRigUnit_TwoBoneIKSimplePerItem&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKSimplePerItem&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKSimpleVectors, opAssign, (const FRigUnit_TwoBoneIKSimpleVectors&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKSimpleVectors&)) },


{ ERASE_METHOD_PTR(FRigUnit_TwoBoneIKSimpleTransforms, opAssign, (const FRigUnit_TwoBoneIKSimpleTransforms&), ERASE_ARGUMENT_PACK(FRigUnit_TwoBoneIKSimpleTransforms&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetCandidates, opAssign, (const FRigUnit_GetCandidates&), ERASE_ARGUMENT_PACK(FRigUnit_GetCandidates&)) },


{ ERASE_METHOD_PTR(FRigUnit_DiscardMatches, opAssign, (const FRigUnit_DiscardMatches&), ERASE_ARGUMENT_PACK(FRigUnit_DiscardMatches&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetDefaultMatch, opAssign, (const FRigUnit_SetDefaultMatch&), ERASE_ARGUMENT_PACK(FRigUnit_SetDefaultMatch&)) },


{ ERASE_METHOD_PTR(FRigUnit_ConnectorExecution, opAssign, (const FRigUnit_ConnectorExecution&), ERASE_ARGUMENT_PACK(FRigUnit_ConnectorExecution&)) },


{ ERASE_METHOD_PTR(FRigUnit_PointSimulation_DebugSettings, opAssign, (const FRigUnit_PointSimulation_DebugSettings&), ERASE_ARGUMENT_PACK(FRigUnit_PointSimulation_DebugSettings&)) },


{ ERASE_METHOD_PTR(FRigUnit_PointSimulation_BoneTarget, opAssign, (const FRigUnit_PointSimulation_BoneTarget&), ERASE_ARGUMENT_PACK(FRigUnit_PointSimulation_BoneTarget&)) },


{ ERASE_METHOD_PTR(FRigUnit_PointSimulation, opAssign, (const FRigUnit_PointSimulation&), ERASE_ARGUMENT_PACK(FRigUnit_PointSimulation&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringInterp, opAssign, (const FRigUnit_SpringInterp&), ERASE_ARGUMENT_PACK(FRigUnit_SpringInterp&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringInterpVector, opAssign, (const FRigUnit_SpringInterpVector&), ERASE_ARGUMENT_PACK(FRigUnit_SpringInterpVector&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringInterpV2, opAssign, (const FRigUnit_SpringInterpV2&), ERASE_ARGUMENT_PACK(FRigUnit_SpringInterpV2&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringInterpVectorV2, opAssign, (const FRigUnit_SpringInterpVectorV2&), ERASE_ARGUMENT_PACK(FRigUnit_SpringInterpVectorV2&)) },


{ ERASE_METHOD_PTR(FRigUnit_SpringInterpQuaternionV2, opAssign, (const FRigUnit_SpringInterpQuaternionV2&), ERASE_ARGUMENT_PACK(FRigUnit_SpringInterpQuaternionV2&)) },


{ ERASE_METHOD_PTR(FFBIKBoneLimit, opAssign, (const FFBIKBoneLimit&), ERASE_ARGUMENT_PACK(FFBIKBoneLimit&)) },


{ ERASE_METHOD_PTR(FFBIKConstraintOption, opAssign, (const FFBIKConstraintOption&), ERASE_ARGUMENT_PACK(FFBIKConstraintOption&)) },


{ ERASE_METHOD_PTR(FMotionProcessInput, opAssign, (const FMotionProcessInput&), ERASE_ARGUMENT_PACK(FMotionProcessInput&)) },


{ ERASE_METHOD_PTR(FFBIKDebugOption, opAssign, (const FFBIKDebugOption&), ERASE_ARGUMENT_PACK(FFBIKDebugOption&)) },


{ ERASE_METHOD_PTR(FSolverInput, opAssign, (const FSolverInput&), ERASE_ARGUMENT_PACK(FSolverInput&)) },


{ ERASE_METHOD_PTR(FFBIKEndEffector, opAssign, (const FFBIKEndEffector&), ERASE_ARGUMENT_PACK(FFBIKEndEffector&)) },


{ ERASE_METHOD_PTR(FRigUnit_FullbodyIK, opAssign, (const FRigUnit_FullbodyIK&), ERASE_ARGUMENT_PACK(FRigUnit_FullbodyIK&)) },


{ ERASE_METHOD_PTR(FPBIKBoneSetting, opAssign, (const FPBIKBoneSetting&), ERASE_ARGUMENT_PACK(FPBIKBoneSetting&)) },


{ ERASE_METHOD_PTR(FRootPrePullSettings, opAssign, (const FRootPrePullSettings&), ERASE_ARGUMENT_PACK(FRootPrePullSettings&)) },


{ ERASE_METHOD_PTR(FPBIKSolverSettings, opAssign, (const FPBIKSolverSettings&), ERASE_ARGUMENT_PACK(FPBIKSolverSettings&)) },


{ ERASE_METHOD_PTR(FPBIKDebug, opAssign, (const FPBIKDebug&), ERASE_ARGUMENT_PACK(FPBIKDebug&)) },


{ ERASE_METHOD_PTR(FPBIKEffector, opAssign, (const FPBIKEffector&), ERASE_ARGUMENT_PACK(FPBIKEffector&)) },


{ ERASE_METHOD_PTR(FRigUnit_PBIK, opAssign, (const FRigUnit_PBIK&), ERASE_ARGUMENT_PACK(FRigUnit_PBIK&)) },


{ ERASE_METHOD_PTR(FPyTestStruct, opAssign, (const FPyTestStruct&), ERASE_ARGUMENT_PACK(FPyTestStruct&)) },


{ ERASE_METHOD_PTR(FPythonLogOutputEntry, opAssign, (const FPythonLogOutputEntry&), ERASE_ARGUMENT_PACK(FPythonLogOutputEntry&)) },


{ ERASE_METHOD_PTR(FPyTestChildStruct, opAssign, (const FPyTestChildStruct&), ERASE_ARGUMENT_PACK(FPyTestChildStruct&)) },


{ ERASE_METHOD_PTR(FPyTestClassSparseData, opAssign, (const FPyTestClassSparseData&), ERASE_ARGUMENT_PACK(FPyTestClassSparseData&)) },


{ ERASE_METHOD_PTR(FAnimationSetup, opAssign, (const FAnimationSetup&), ERASE_ARGUMENT_PACK(FAnimationSetup&)) },


{ ERASE_METHOD_PTR(FAnimationStateEntry, opAssign, (const FAnimationStateEntry&), ERASE_ARGUMENT_PACK(FAnimationStateEntry&)) },


{ ERASE_METHOD_PTR(FPerSkeletonAnimationSharingSetup, opAssign, (const FPerSkeletonAnimationSharingSetup&), ERASE_ARGUMENT_PACK(FPerSkeletonAnimationSharingSetup&)) },


{ ERASE_METHOD_PTR(FAnimationSharingScalability, opAssign, (const FAnimationSharingScalability&), ERASE_ARGUMENT_PACK(FAnimationSharingScalability&)) },


{ ERASE_METHOD_PTR(FTickAnimationSharingFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTickAnimationSharingFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTickAnimationSharingFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, opAssign, (const FNiagaraSimCacheCaptureParameters&), ERASE_ARGUMENT_PACK(FNiagaraSimCacheCaptureParameters&)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, GetbAppendToSimCache, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, SetbAppendToSimCache, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, GetbCaptureFixedNumberOfFrames, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, SetbCaptureFixedNumberOfFrames, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, GetbUseTimeout, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, SetbUseTimeout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, GetbCaptureAllFramesImmediatly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCaptureParameters, SetbCaptureAllFramesImmediatly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, opAssign, (const FNiagaraSimCacheCreateParameters&), ERASE_ARGUMENT_PACK(FNiagaraSimCacheCreateParameters&)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, GetbAllowRebasing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, SetbAllowRebasing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, GetbAllowDataInterfaceCaching, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, SetbAllowDataInterfaceCaching, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, GetbAllowInterpolation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, SetbAllowInterpolation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, GetbAllowVelocityExtrapolation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, SetbAllowVelocityExtrapolation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, GetbAllowSerializeLargeCache, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraSimCacheCreateParameters, SetbAllowSerializeLargeCache, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraAssetTagDefinition, opAssign, (const FNiagaraAssetTagDefinition&), ERASE_ARGUMENT_PACK(FNiagaraAssetTagDefinition&)) },


{ ERASE_METHOD_PTR(FNiagaraAssetTagDefinitionReference, opAssign, (const FNiagaraAssetTagDefinitionReference&), ERASE_ARGUMENT_PACK(FNiagaraAssetTagDefinitionReference&)) },


{ ERASE_METHOD_PTR(FNiagaraDataSetID, opAssign, (const FNiagaraDataSetID&), ERASE_ARGUMENT_PACK(FNiagaraDataSetID&)) },


{ ERASE_METHOD_PTR(FNiagaraDataSetProperties, opAssign, (const FNiagaraDataSetProperties&), ERASE_ARGUMENT_PACK(FNiagaraDataSetProperties&)) },


{ ERASE_METHOD_PTR(FNiagaraVariableBase, opAssign, (const FNiagaraVariableBase&), ERASE_ARGUMENT_PACK(FNiagaraVariableBase&)) },


{ ERASE_METHOD_PTR(FNiagaraTypeDefinition, opAssign, (const FNiagaraTypeDefinition&), ERASE_ARGUMENT_PACK(FNiagaraTypeDefinition&)) },


{ ERASE_METHOD_PTR(FNiagaraFunctionSignature, opAssign, (const FNiagaraFunctionSignature&), ERASE_ARGUMENT_PACK(FNiagaraFunctionSignature&)) },


{ ERASE_METHOD_PTR(FNiagaraVariable, opAssign, (const FNiagaraVariable&), ERASE_ARGUMENT_PACK(FNiagaraVariable&)) },


{ ERASE_METHOD_PTR(FNiagaraMaterialAttributeBinding, opAssign, (const FNiagaraMaterialAttributeBinding&), ERASE_ARGUMENT_PACK(FNiagaraMaterialAttributeBinding&)) },


{ ERASE_METHOD_PTR(FNiagaraScriptVariableBinding, opAssign, (const FNiagaraScriptVariableBinding&), ERASE_ARGUMENT_PACK(FNiagaraScriptVariableBinding&)) },


{ ERASE_METHOD_PTR(FNiagaraUserParameterBinding, opAssign, (const FNiagaraUserParameterBinding&), ERASE_ARGUMENT_PACK(FNiagaraUserParameterBinding&)) },


{ ERASE_METHOD_PTR(FNiagaraDataChannelVariable, opAssign, (const FNiagaraDataChannelVariable&), ERASE_ARGUMENT_PACK(FNiagaraDataChannelVariable&)) },


{ ERASE_METHOD_PTR(FNiagaraDataChannelSearchParameters, opAssign, (const FNiagaraDataChannelSearchParameters&), ERASE_ARGUMENT_PACK(FNiagaraDataChannelSearchParameters&)) },
{ ERASE_METHOD_PTR(FNiagaraDataChannelSearchParameters, GetbOverrideLocation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNiagaraDataChannelSearchParameters, SetbOverrideLocation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNDCIslandDebugDrawSettings, opAssign, (const FNDCIslandDebugDrawSettings&), ERASE_ARGUMENT_PACK(FNDCIslandDebugDrawSettings&)) },
{ ERASE_METHOD_PTR(FNDCIslandDebugDrawSettings, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNDCIslandDebugDrawSettings, SetbShowIslandBounds, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraParameterBinding, opAssign, (const FNiagaraParameterBinding&), ERASE_ARGUMENT_PACK(FNiagaraParameterBinding&)) },


{ ERASE_METHOD_PTR(FNiagaraParameterBindingWithValue, opAssign, (const FNiagaraParameterBindingWithValue&), ERASE_ARGUMENT_PACK(FNiagaraParameterBindingWithValue&)) },


{ ERASE_METHOD_PTR(FNiagaraScalabilityState, opAssign, (const FNiagaraScalabilityState&), ERASE_ARGUMENT_PACK(FNiagaraScalabilityState&)) },


{ ERASE_METHOD_PTR(FNiagaraSimStageExecutionLoopEditorData, opAssign, (const FNiagaraSimStageExecutionLoopEditorData&), ERASE_ARGUMENT_PACK(FNiagaraSimStageExecutionLoopEditorData&)) },


{ ERASE_METHOD_PTR(FNiagaraSimStageExecutionLoopData, opAssign, (const FNiagaraSimStageExecutionLoopData&), ERASE_ARGUMENT_PACK(FNiagaraSimStageExecutionLoopData&)) },


{ ERASE_METHOD_PTR(FNiagaraStackSection, opAssign, (const FNiagaraStackSection&), ERASE_ARGUMENT_PACK(FNiagaraStackSection&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionBase, opAssign, (const FNiagaraDistributionBase&), ERASE_ARGUMENT_PACK(FNiagaraDistributionBase&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionRangeInt, opAssign, (const FNiagaraDistributionRangeInt&), ERASE_ARGUMENT_PACK(FNiagaraDistributionRangeInt&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionRangeFloat, opAssign, (const FNiagaraDistributionRangeFloat&), ERASE_ARGUMENT_PACK(FNiagaraDistributionRangeFloat&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionRangeVector2, opAssign, (const FNiagaraDistributionRangeVector2&), ERASE_ARGUMENT_PACK(FNiagaraDistributionRangeVector2&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionRangeVector3, opAssign, (const FNiagaraDistributionRangeVector3&), ERASE_ARGUMENT_PACK(FNiagaraDistributionRangeVector3&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionRangeColor, opAssign, (const FNiagaraDistributionRangeColor&), ERASE_ARGUMENT_PACK(FNiagaraDistributionRangeColor&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionFloat, opAssign, (const FNiagaraDistributionFloat&), ERASE_ARGUMENT_PACK(FNiagaraDistributionFloat&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionVector2, opAssign, (const FNiagaraDistributionVector2&), ERASE_ARGUMENT_PACK(FNiagaraDistributionVector2&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionVector3, opAssign, (const FNiagaraDistributionVector3&), ERASE_ARGUMENT_PACK(FNiagaraDistributionVector3&)) },


{ ERASE_METHOD_PTR(FNiagaraDistributionColor, opAssign, (const FNiagaraDistributionColor&), ERASE_ARGUMENT_PACK(FNiagaraDistributionColor&)) },


{ ERASE_METHOD_PTR(FNiagaraStatelessSpawnInfo, opAssign, (const FNiagaraStatelessSpawnInfo&), ERASE_ARGUMENT_PACK(FNiagaraStatelessSpawnInfo&)) },


{ ERASE_METHOD_PTR(FNiagaraSystemStateData, opAssign, (const FNiagaraSystemStateData&), ERASE_ARGUMENT_PACK(FNiagaraSystemStateData&)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterStateData, opAssign, (const FNiagaraEmitterStateData&), ERASE_ARGUMENT_PACK(FNiagaraEmitterStateData&)) },


{ ERASE_METHOD_PTR(FNiagaraInputConditionMetadata, opAssign, (const FNiagaraInputConditionMetadata&), ERASE_ARGUMENT_PACK(FNiagaraInputConditionMetadata&)) },


{ ERASE_METHOD_PTR(FNiagaraEnumParameterMetaData, opAssign, (const FNiagaraEnumParameterMetaData&), ERASE_ARGUMENT_PACK(FNiagaraEnumParameterMetaData&)) },


{ ERASE_METHOD_PTR(FWidgetNamedInputValue, opAssign, (const FWidgetNamedInputValue&), ERASE_ARGUMENT_PACK(FWidgetNamedInputValue&)) },


{ ERASE_METHOD_PTR(FWidgetSegmentValueOverride, opAssign, (const FWidgetSegmentValueOverride&), ERASE_ARGUMENT_PACK(FWidgetSegmentValueOverride&)) },


{ ERASE_METHOD_PTR(FNiagaraWidgetNamedIntegerInputValue, opAssign, (const FNiagaraWidgetNamedIntegerInputValue&), ERASE_ARGUMENT_PACK(FNiagaraWidgetNamedIntegerInputValue&)) },


{ ERASE_METHOD_PTR(FNiagaraInputParameterCustomization, opAssign, (const FNiagaraInputParameterCustomization&), ERASE_ARGUMENT_PACK(FNiagaraInputParameterCustomization&)) },


{ ERASE_METHOD_PTR(FNiagaraBoolParameterMetaData, opAssign, (const FNiagaraBoolParameterMetaData&), ERASE_ARGUMENT_PACK(FNiagaraBoolParameterMetaData&)) },


{ ERASE_METHOD_PTR(FNiagaraVariableMetaData, opAssign, (const FNiagaraVariableMetaData&), ERASE_ARGUMENT_PACK(FNiagaraVariableMetaData&)) },


*/