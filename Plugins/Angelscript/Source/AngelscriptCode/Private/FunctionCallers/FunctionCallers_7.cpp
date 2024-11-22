#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, Execute, (FInputActionValue, float32, float32, const UInputAction), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputActionHandlerDynamicSignature, ExecuteIfBound, (FInputActionValue, float32, float32, const UInputAction), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, opAssign, (const FInputDebugKeyHandlerDynamicSignature&), ERASE_ARGUMENT_PACK(FInputDebugKeyHandlerDynamicSignature&)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, Execute, (FKey, FInputActionValue), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputDebugKeyHandlerDynamicSignature, ExecuteIfBound, (FKey, FInputActionValue), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, opAssign, (const FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem&), ERASE_ARGUMENT_PACK(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem&)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlMappingsRebuilt__EnhancedInputLocalPlayerSubsystem, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, opAssign, (const FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings&), ERASE_ARGUMENT_PACK(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings&)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsApplied__EnhancedInputUserSettings, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, opAssign, (const FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings&), ERASE_ARGUMENT_PACK(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings&)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEnhancedInputUserSettingsChanged__EnhancedInputUserSettings, Broadcast, (UEnhancedInputUserSettings), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, opAssign, (const FMappableKeyProfileChanged__EnhancedInputUserSettings&), ERASE_ARGUMENT_PACK(FMappableKeyProfileChanged__EnhancedInputUserSettings&)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappableKeyProfileChanged__EnhancedInputUserSettings, Broadcast, (const UEnhancedPlayerMappableKeyProfile), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, opAssign, (const FMappingContextRegisteredWithSettings__EnhancedInputUserSettings&), ERASE_ARGUMENT_PACK(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings&)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMappingContextRegisteredWithSettings__EnhancedInputUserSettings, Broadcast, (const UInputMappingContext), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, opAssign, (const FOnTakeRecorderCancelled&), ERASE_ARGUMENT_PACK(FOnTakeRecorderCancelled&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderCancelled, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, opAssign, (const FOnTakeRecorderFinished&), ERASE_ARGUMENT_PACK(FOnTakeRecorderFinished&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, Execute, (ULevelSequence), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderFinished, ExecuteIfBound, (ULevelSequence), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, opAssign, (const FOnTakeRecorderMarkedFrameAdded&), ERASE_ARGUMENT_PACK(FOnTakeRecorderMarkedFrameAdded&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, Execute, (const FMovieSceneMarkedFrame&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderMarkedFrameAdded, ExecuteIfBound, (const FMovieSceneMarkedFrame&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, opAssign, (const FOnTakeRecorderPanelChanged&), ERASE_ARGUMENT_PACK(FOnTakeRecorderPanelChanged&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPanelChanged, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, opAssign, (const FOnTakeRecorderPreInitialize&), ERASE_ARGUMENT_PACK(FOnTakeRecorderPreInitialize&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderPreInitialize, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, opAssign, (const FOnTakeRecorderStarted&), ERASE_ARGUMENT_PACK(FOnTakeRecorderStarted&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStarted, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, opAssign, (const FOnTakeRecorderStopped&), ERASE_ARGUMENT_PACK(FOnTakeRecorderStopped&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderStopped, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderCancelled, opAssign, (const FTakeRecorderCancelled&), ERASE_ARGUMENT_PACK(FTakeRecorderCancelled&)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderCancelled, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderFinished, opAssign, (const FTakeRecorderFinished&), ERASE_ARGUMENT_PACK(FTakeRecorderFinished&)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderFinished, Broadcast, (ULevelSequence), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, opAssign, (const FTakeRecorderMarkedFrameAdded&), ERASE_ARGUMENT_PACK(FTakeRecorderMarkedFrameAdded&)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderMarkedFrameAdded, Broadcast, (const FMovieSceneMarkedFrame&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, opAssign, (const FTakeRecorderPreInitialize&), ERASE_ARGUMENT_PACK(FTakeRecorderPreInitialize&)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderPreInitialize, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderStarted, opAssign, (const FTakeRecorderStarted&), ERASE_ARGUMENT_PACK(FTakeRecorderStarted&)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStarted, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRecorderStopped, opAssign, (const FTakeRecorderStopped&), ERASE_ARGUMENT_PACK(FTakeRecorderStopped&)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRecorderStopped, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, opAssign, (const FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary&), ERASE_ARGUMENT_PACK(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, Execute, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderSlateChanged__TakesCoreBlueprintLibrary, ExecuteIfBound, (const FString&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, opAssign, (const FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary&), ERASE_ARGUMENT_PACK(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary&)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, Execute, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTakeRecorderTakeNumberChanged__TakesCoreBlueprintLibrary, ExecuteIfBound, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, opAssign, (const FRigVMPeformUserWorkflowDynamicDelegate&), ERASE_ARGUMENT_PACK(FRigVMPeformUserWorkflowDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, Execute, (const URigVMUserWorkflowOptions, UObject), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMPeformUserWorkflowDynamicDelegate, ExecuteIfBound, (const URigVMUserWorkflowOptions, UObject), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, opAssign, (const FRigVMGraphModifiedDynamicEvent&), ERASE_ARGUMENT_PACK(FRigVMGraphModifiedDynamicEvent&)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMGraphModifiedDynamicEvent, Broadcast, (ERigVMGraphNotifType, URigVMGraph, UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, opAssign, (const FRigVMUserWorkflowProvider&), ERASE_ARGUMENT_PACK(FRigVMUserWorkflowProvider&)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, Execute, (const UObject), ERASE_ARGUMENT_PACK(TArray<FRigVMUserWorkflow>)) },
{ ERASE_METHOD_PTR(FRigVMUserWorkflowProvider, ExecuteIfBound, (const UObject), ERASE_ARGUMENT_PACK(TArray<FRigVMUserWorkflow>)) },


{ ERASE_METHOD_PTR(FControlRigComponentDelegate, opAssign, (const FControlRigComponentDelegate&), ERASE_ARGUMENT_PACK(FControlRigComponentDelegate&)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FControlRigComponentDelegate, Broadcast, (UControlRigComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, opAssign, (const FRigHierarchyModifiedDynamicEvent&), ERASE_ARGUMENT_PACK(FRigHierarchyModifiedDynamicEvent&)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigHierarchyModifiedDynamicEvent, Broadcast, (ERigHierarchyNotification, URigHierarchy, FRigElementKey), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPyTestDelegate, opAssign, (const FPyTestDelegate&), ERASE_ARGUMENT_PACK(FPyTestDelegate&)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, Execute, (int), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FPyTestDelegate, ExecuteIfBound, (int), ERASE_ARGUMENT_PACK(int)) },


{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, opAssign, (const FPyTestMulticastDelegate&), ERASE_ARGUMENT_PACK(FPyTestMulticastDelegate&)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestMulticastDelegate, Broadcast, (FString), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, opAssign, (const FPyTestSlateTickDelegate&), ERASE_ARGUMENT_PACK(FPyTestSlateTickDelegate&)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, Execute, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPyTestSlateTickDelegate, ExecuteIfBound, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, opAssign, (const FOnNameCollisionDelegate__PyTestStructDelegate&), ERASE_ARGUMENT_PACK(FOnNameCollisionDelegate__PyTestStructDelegate&)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestStructDelegate, Broadcast, (const FPyTestStruct&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, opAssign, (const FOnNameCollisionDelegate__PyTestVectorDelegate&), ERASE_ARGUMENT_PACK(FOnNameCollisionDelegate__PyTestVectorDelegate&)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNameCollisionDelegate__PyTestVectorDelegate, Broadcast, (const FVector2D&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, opAssign, (const FOnNiagaraSystemFinished&), ERASE_ARGUMENT_PACK(FOnNiagaraSystemFinished&)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnNiagaraSystemFinished, Broadcast, (UNiagaraComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, opAssign, (const FOnCaptureComplete__AsyncNiagaraCaptureSimCache&), ERASE_ARGUMENT_PACK(FOnCaptureComplete__AsyncNiagaraCaptureSimCache&)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCaptureComplete__AsyncNiagaraCaptureSimCache, Broadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, opAssign, (const FOnPastedFunctionCallNode__NiagaraClipboardFunction&), ERASE_ARGUMENT_PACK(FOnPastedFunctionCallNode__NiagaraClipboardFunction&)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, Execute, (UNiagaraNodeFunctionCall), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPastedFunctionCallNode__NiagaraClipboardFunction, ExecuteIfBound, (UNiagaraNodeFunctionCall), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, opAssign, (const FRigVMAssetDataFilterDynamic&), ERASE_ARGUMENT_PACK(FRigVMAssetDataFilterDynamic&)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, Execute, (FAssetData), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMAssetDataFilterDynamic, ExecuteIfBound, (FAssetData), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, opAssign, (const FRigVMBlueprintFilterDynamic&), ERASE_ARGUMENT_PACK(FRigVMBlueprintFilterDynamic&)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, Execute, (const URigVMBlueprint, TArray<FRigVMBlueprintLoadLogEntry>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMBlueprintFilterDynamic, ExecuteIfBound, (const URigVMBlueprint, TArray<FRigVMBlueprintLoadLogEntry>), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, opAssign, (const FRigVMNodeFilterDynamic&), ERASE_ARGUMENT_PACK(FRigVMNodeFilterDynamic&)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, Execute, (const URigVMBlueprint, const URigVMNode), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRigVMNodeFilterDynamic, ExecuteIfBound, (const URigVMBlueprint, const URigVMNode), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FAsyncDelayComplete, opAssign, (const FAsyncDelayComplete&), ERASE_ARGUMENT_PACK(FAsyncDelayComplete&)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncDelayComplete, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, opAssign, (const FAsyncEditorWaitForGameWorldEvent&), ERASE_ARGUMENT_PACK(FAsyncEditorWaitForGameWorldEvent&)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncEditorWaitForGameWorldEvent, Broadcast, (UWorld), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, opAssign, (const FForEachActorIteratorSignature&), ERASE_ARGUMENT_PACK(FForEachActorIteratorSignature&)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachActorIteratorSignature, Broadcast, (AActor, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, opAssign, (const FForEachAssetIteratorSignature&), ERASE_ARGUMENT_PACK(FForEachAssetIteratorSignature&)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForEachAssetIteratorSignature, Broadcast, (UObject, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, opAssign, (const FOnAsyncCaptureSceneComplete&), ERASE_ARGUMENT_PACK(FOnAsyncCaptureSceneComplete&)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAsyncCaptureSceneComplete, Broadcast, (UTextureRenderTarget2D), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, opAssign, (const FOnEditorUtilityPIEEvent&), ERASE_ARGUMENT_PACK(FOnEditorUtilityPIEEvent&)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityPIEEvent, Broadcast, (const bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, opAssign, (const FOnEditorUtilityTaskDynamicDelegate&), ERASE_ARGUMENT_PACK(FOnEditorUtilityTaskDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEditorUtilityTaskDynamicDelegate, Broadcast, (UEditorUtilityTask), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, opAssign, (const FOnExportImageAsyncComplete&), ERASE_ARGUMENT_PACK(FOnExportImageAsyncComplete&)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnExportImageAsyncComplete, Broadcast, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstantQResults, opAssign, (const FOnConstantQResults&), ERASE_ARGUMENT_PACK(FOnConstantQResults&)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstantQResults, Broadcast, (int, const TArray<FConstantQResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestConstantQResults, opAssign, (const FOnLatestConstantQResults&), ERASE_ARGUMENT_PACK(FOnLatestConstantQResults&)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestConstantQResults, Broadcast, (int, const FConstantQResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, opAssign, (const FOnLatestOverallLoudnessResults&), ERASE_ARGUMENT_PACK(FOnLatestOverallLoudnessResults&)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallLoudnessResults, Broadcast, (const FLoudnessResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, opAssign, (const FOnLatestOverallMeterResults&), ERASE_ARGUMENT_PACK(FOnLatestOverallMeterResults&)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestOverallMeterResults, Broadcast, (const FMeterResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, opAssign, (const FOnLatestPerChannelLoudnessResults&), ERASE_ARGUMENT_PACK(FOnLatestPerChannelLoudnessResults&)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelLoudnessResults, Broadcast, (int, const FLoudnessResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, opAssign, (const FOnLatestPerChannelMeterResults&), ERASE_ARGUMENT_PACK(FOnLatestPerChannelMeterResults&)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestPerChannelMeterResults, Broadcast, (int, const FMeterResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, opAssign, (const FOnLatestSpectrumResults&), ERASE_ARGUMENT_PACK(FOnLatestSpectrumResults&)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnLatestSpectrumResults, Broadcast, (int, const FSynesthesiaSpectrumResults&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, opAssign, (const FOnOverallLoudnessResults&), ERASE_ARGUMENT_PACK(FOnOverallLoudnessResults&)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallLoudnessResults, Broadcast, (const TArray<FLoudnessResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnOverallMeterResults, opAssign, (const FOnOverallMeterResults&), ERASE_ARGUMENT_PACK(FOnOverallMeterResults&)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnOverallMeterResults, Broadcast, (const TArray<FMeterResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, opAssign, (const FOnPerChannelLoudnessResults&), ERASE_ARGUMENT_PACK(FOnPerChannelLoudnessResults&)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelLoudnessResults, Broadcast, (int, const TArray<FLoudnessResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, opAssign, (const FOnPerChannelMeterResults&), ERASE_ARGUMENT_PACK(FOnPerChannelMeterResults&)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnPerChannelMeterResults, Broadcast, (int, const TArray<FMeterResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSpectrumResults, opAssign, (const FOnSpectrumResults&), ERASE_ARGUMENT_PACK(FOnSpectrumResults&)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSpectrumResults, Broadcast, (int, const TArray<FSynesthesiaSpectrumResults>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, opAssign, (const FLocationServicesData_OnLocationChanged&), ERASE_ARGUMENT_PACK(FLocationServicesData_OnLocationChanged&)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLocationServicesData_OnLocationChanged, Broadcast, (FLocationServicesData), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, opAssign, (const FOnCreateAuditionGeneratorHandleDelegate&), ERASE_ARGUMENT_PACK(FOnCreateAuditionGeneratorHandleDelegate&)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, Execute, (UMetasoundGeneratorHandle), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnCreateAuditionGeneratorHandleDelegate, ExecuteIfBound, (UMetasoundGeneratorHandle), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, opAssign, (const FOnMetasoundOutputValueChanged&), ERASE_ARGUMENT_PACK(FOnMetasoundOutputValueChanged&)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, Execute, (FName, const FMetaSoundOutput&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChanged, ExecuteIfBound, (FName, const FMetaSoundOutput&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, opAssign, (const FOnMetasoundOutputValueChangedMulticast&), ERASE_ARGUMENT_PACK(FOnMetasoundOutputValueChangedMulticast&)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMetasoundOutputValueChangedMulticast, Broadcast, (FName, const FMetaSoundOutput&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, opAssign, (const FOnAudioRadialSliderValueChangedEvent&), ERASE_ARGUMENT_PACK(FOnAudioRadialSliderValueChangedEvent&)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioRadialSliderValueChangedEvent, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, opAssign, (const FGetMeterChannelInfo__AudioMeter&), ERASE_ARGUMENT_PACK(FGetMeterChannelInfo__AudioMeter&)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, Execute, (), ERASE_ARGUMENT_PACK(TArray<FMeterChannelInfo>)) },
{ ERASE_METHOD_PTR(FGetMeterChannelInfo__AudioMeter, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(TArray<FMeterChannelInfo>)) },


{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, opAssign, (const FGetOscilloscopeAudioSamples__AudioOscilloscope&), ERASE_ARGUMENT_PACK(FGetOscilloscopeAudioSamples__AudioOscilloscope&)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, Execute, (), ERASE_ARGUMENT_PACK(TArray<float>)) },
{ ERASE_METHOD_PTR(FGetOscilloscopeAudioSamples__AudioOscilloscope, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(TArray<float>)) },


{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, opAssign, (const FGetVectorscopeAudioSamples__AudioVectorscope&), ERASE_ARGUMENT_PACK(FGetVectorscopeAudioSamples__AudioVectorscope&)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, Execute, (), ERASE_ARGUMENT_PACK(TArray<float>)) },
{ ERASE_METHOD_PTR(FGetVectorscopeAudioSamples__AudioVectorscope, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(TArray<float>)) },


{ ERASE_METHOD_PTR(FNumTablesChanged, opAssign, (const FNumTablesChanged&), ERASE_ARGUMENT_PACK(FNumTablesChanged&)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNumTablesChanged, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, opAssign, (const FOnControllerCaptureBeginEventSynth2D&), ERASE_ARGUMENT_PACK(FOnControllerCaptureBeginEventSynth2D&)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureBeginEventSynth2D, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, opAssign, (const FOnControllerCaptureEndEventSynth2D&), ERASE_ARGUMENT_PACK(FOnControllerCaptureEndEventSynth2D&)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControllerCaptureEndEventSynth2D, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, opAssign, (const FOnEnvelopeFollowerUpdate&), ERASE_ARGUMENT_PACK(FOnEnvelopeFollowerUpdate&)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnEnvelopeFollowerUpdate, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, opAssign, (const FOnFloatValueChangedEventSynth2D&), ERASE_ARGUMENT_PACK(FOnFloatValueChangedEventSynth2D&)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnFloatValueChangedEventSynth2D, Broadcast, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, opAssign, (const FOnMouseCaptureBeginEventSynth2D&), ERASE_ARGUMENT_PACK(FOnMouseCaptureBeginEventSynth2D&)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureBeginEventSynth2D, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, opAssign, (const FOnMouseCaptureEndEventSynth2D&), ERASE_ARGUMENT_PACK(FOnMouseCaptureEndEventSynth2D&)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnMouseCaptureEndEventSynth2D, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSampleLoaded, opAssign, (const FOnSampleLoaded&), ERASE_ARGUMENT_PACK(FOnSampleLoaded&)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSampleLoaded, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, opAssign, (const FOnSamplePlaybackProgress&), ERASE_ARGUMENT_PACK(FOnSamplePlaybackProgress&)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSamplePlaybackProgress, Broadcast, (float32, float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnTableAltered, opAssign, (const FOnTableAltered&), ERASE_ARGUMENT_PACK(FOnTableAltered&)) },
{ ERASE_METHOD_PTR(FOnTableAltered, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnTableAltered, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTableAltered, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTableAltered, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTableAltered, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnTableAltered, Broadcast, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, opAssign, (const FFlipbookFinishedPlaySignature&), ERASE_ARGUMENT_PACK(FFlipbookFinishedPlaySignature&)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFlipbookFinishedPlaySignature, Broadcast, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, opAssign, (const FAsyncLoadGameFromSlotDynamicDelegate&), ERASE_ARGUMENT_PACK(FAsyncLoadGameFromSlotDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, Execute, (const FString&, const int, USaveGame), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncLoadGameFromSlotDynamicDelegate, ExecuteIfBound, (const FString&, const int, USaveGame), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, opAssign, (const FAsyncSaveGameToSlotDynamicDelegate&), ERASE_ARGUMENT_PACK(FAsyncSaveGameToSlotDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, Execute, (const FString&, const int, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAsyncSaveGameToSlotDynamicDelegate, ExecuteIfBound, (const FString&, const int, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSoftClassLoaded, opAssign, (const FOnSoftClassLoaded&), ERASE_ARGUMENT_PACK(FOnSoftClassLoaded&)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, Execute, (UClass), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftClassLoaded, ExecuteIfBound, (UClass), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, opAssign, (const FOnSoftObjectLoaded&), ERASE_ARGUMENT_PACK(FOnSoftObjectLoaded&)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, Execute, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnSoftObjectLoaded, ExecuteIfBound, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FScriptOverlapDelegate, opAssign, (const FScriptOverlapDelegate&), ERASE_ARGUMENT_PACK(FScriptOverlapDelegate&)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, Execute, (uint64, const TArray<FOverlapResult>&, uint), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptOverlapDelegate, ExecuteIfBound, (uint64, const TArray<FOverlapResult>&, uint), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FScriptTraceDelegate, opAssign, (const FScriptTraceDelegate&), ERASE_ARGUMENT_PACK(FScriptTraceDelegate&)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, Execute, (uint64, const TArray<FHitResult>&, uint), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FScriptTraceDelegate, ExecuteIfBound, (uint64, const TArray<FHitResult>&, uint), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, opAssign, (const FOnDynamicMeshModifiedBP&), ERASE_ARGUMENT_PACK(FOnDynamicMeshModifiedBP&)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnDynamicMeshModifiedBP, Broadcast, (UDynamicMesh), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnRenderMovieStopped, opAssign, (const FOnRenderMovieStopped&), ERASE_ARGUMENT_PACK(FOnRenderMovieStopped&)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, Execute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRenderMovieStopped, ExecuteIfBound, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, opAssign, (const FAndroidPermissionDynamicDelegate&), ERASE_ARGUMENT_PACK(FAndroidPermissionDynamicDelegate&)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAndroidPermissionDynamicDelegate, Broadcast, (const TArray<FString>&, const TArray<bool>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, opAssign, (const FAppleImageConversionDelegate&), ERASE_ARGUMENT_PACK(FAppleImageConversionDelegate&)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, AddUFunction, (const UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAppleImageConversionDelegate, Broadcast, (const FAppleImageUtilsImageConversionResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, opAssign, (const FOnAudioInputDevicesObtained&), ERASE_ARGUMENT_PACK(FOnAudioInputDevicesObtained&)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, Execute, (const TArray<FAudioInputDeviceInfo>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnAudioInputDevicesObtained, ExecuteIfBound, (const TArray<FAudioInputDeviceInfo>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnContentInstallFailed, opAssign, (const FOnContentInstallFailed&), ERASE_ARGUMENT_PACK(FOnContentInstallFailed&)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, Execute, (FText, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallFailed, ExecuteIfBound, (FText, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, opAssign, (const FOnContentInstallSucceeded&), ERASE_ARGUMENT_PACK(FOnContentInstallSucceeded&)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, Execute, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnContentInstallSucceeded, ExecuteIfBound, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnRequestContentFailed, opAssign, (const FOnRequestContentFailed&), ERASE_ARGUMENT_PACK(FOnRequestContentFailed&)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, Execute, (FText, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentFailed, ExecuteIfBound, (FText, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, opAssign, (const FOnRequestContentSucceeded&), ERASE_ARGUMENT_PACK(FOnRequestContentSucceeded&)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, BindUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, Execute, (UMobilePendingContent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnRequestContentSucceeded, ExecuteIfBound, (UMobilePendingContent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentDeactivateSignature, Broadcast, (UActorComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorComponentActivatedSignature, Broadcast, (UActorComponent, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginCursorOverSignature, Broadcast, (AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginOverlapSignature, Broadcast, (AActor, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorBeginTouchOverSignature, Broadcast, (ETouchIndex, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorDestroyedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorDestroyedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorDestroyedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorDestroyedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorDestroyedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorDestroyedSignature, Broadcast, (AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndCursorOverSignature, Broadcast, (AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorEndOverlapSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorEndOverlapSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndOverlapSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndOverlapSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndOverlapSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndOverlapSignature, Broadcast, (AActor, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorEndPlaySignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorEndPlaySignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndPlaySignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndPlaySignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndPlaySignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndPlaySignature, Broadcast, (AActor, EEndPlayReason), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorEndTouchOverSignature, Broadcast, (ETouchIndex, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorHitSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorHitSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorHitSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorHitSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorHitSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorHitSignature, Broadcast, (AActor, AActor, FVector, const FHitResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorOnClickedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorOnClickedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnClickedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnClickedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnClickedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnClickedSignature, Broadcast, (AActor, FKey), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchBeginSignature, Broadcast, (ETouchIndex, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnInputTouchEndSignature, Broadcast, (ETouchIndex, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorOnReleasedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActorOnReleasedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnReleasedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnReleasedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnReleasedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorOnReleasedSignature, Broadcast, (AActor, FKey), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginCursorOverSignature, Broadcast, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginOverlapSignature, Broadcast, (UPrimitiveComponent, AActor, UPrimitiveComponent, int, bool, const FHitResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentBeginTouchOverSignature, Broadcast, (ETouchIndex, UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentCollisionSettingsChangedSignature, Broadcast, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndCursorOverSignature, Broadcast, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndOverlapSignature, Broadcast, (UPrimitiveComponent, AActor, UPrimitiveComponent, int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentEndTouchOverSignature, Broadcast, (ETouchIndex, UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentHitSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentHitSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentHitSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentHitSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentHitSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentHitSignature, Broadcast, (UPrimitiveComponent, AActor, UPrimitiveComponent, FVector, const FHitResult&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentOnClickedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentOnClickedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnClickedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnClickedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnClickedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnClickedSignature, Broadcast, (UPrimitiveComponent, FKey), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchBeginSignature, Broadcast, (ETouchIndex, UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnInputTouchEndSignature, Broadcast, (ETouchIndex, UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentOnReleasedSignature, Broadcast, (UPrimitiveComponent, FKey), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentPhysicsStateChanged, Broadcast, (UPrimitiveComponent, EComponentPhysicsStateChange), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentSleepSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentSleepSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentSleepSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentSleepSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentSleepSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentSleepSignature, Broadcast, (UPrimitiveComponent, FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentWakeSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FComponentWakeSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentWakeSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentWakeSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentWakeSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentWakeSignature, Broadcast, (UPrimitiveComponent, FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FIsRootComponentChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FIsRootComponentChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIsRootComponentChanged, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIsRootComponentChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIsRootComponentChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIsRootComponentChanged, Broadcast, (USceneComponent, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnControllerChangedSignature, Broadcast, (APawn, AController, AController), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPawnRestartedSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPawnRestartedSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnRestartedSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnRestartedSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnRestartedSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPawnRestartedSignature, Broadcast, (APawn), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FPhysicsVolumeChanged, Broadcast, (APhysicsVolume), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeAnyDamageSignature, Broadcast, (AActor, float32, const UDamageType, AController, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakePointDamageSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakePointDamageSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakePointDamageSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakePointDamageSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakePointDamageSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakePointDamageSignature, Broadcast, (AActor, float32, AController, FVector, UPrimitiveComponent, FName, FVector, const UDamageType, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTakeRadialDamageSignature, Broadcast, (AActor, float32, const UDamageType, FVector, const FHitResult&, AController, AActor), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAdded__ConstraintsManager, Broadcast, (UConstraintsManager, UTickableConstraint), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemoved__ConstraintsManager, Broadcast, (UConstraintsManager, UTickableConstraint, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintAddedToSystem__ConstraintSubsystem, Broadcast, (UConstraintSubsystem, UTickableConstraint), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnConstraintRemovedFromSystem__ConstraintSubsystem, Broadcast, (UConstraintSubsystem, UTickableConstraint, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, AddUFunction, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOnControlSelectedBP__ControlRig, Broadcast, (UControlRig, const FRigControlElement&, bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(_FScriptDelegate, opAssign, (const _FScriptDelegate&), ERASE_ARGUMENT_PACK(_FScriptDelegate&)) },
{ ERASE_METHOD_PTR(_FScriptDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(_FScriptDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(_FScriptDelegate, BindUFunction, (UObject, const FName&, UDelegateFunction), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(_FScriptDelegate, GetUObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(_FScriptDelegate, GetFunctionName, (), ERASE_ARGUMENT_PACK(FName)) },


{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, opAssign, (const _FMulticastScriptDelegate&), ERASE_ARGUMENT_PACK(_FMulticastScriptDelegate&)) },
{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, IsBound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, AddUFunction, (const UObject, const FName&, UDelegateFunction), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, Unbind, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(_FMulticastScriptDelegate, UnbindObject, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FIntVector4, opAssign, (const FIntVector4&), ERASE_ARGUMENT_PACK(FIntVector4&)) },
{ ERASE_METHOD_PTR(FIntVector4, opAdd, (const FIntVector4&), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opSub, (const FIntVector4&), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opNeg, (), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opMul, (int), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opDiv, (int), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opMulAssign, (int), ERASE_ARGUMENT_PACK(FIntVector4&)) },
{ ERASE_METHOD_PTR(FIntVector4, opDivAssign, (int), ERASE_ARGUMENT_PACK(FIntVector4&)) },
{ ERASE_METHOD_PTR(FIntVector4, opAddAssign, (const FIntVector4&), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opSubAssign, (const FIntVector4&), ERASE_ARGUMENT_PACK(FIntVector4)) },
{ ERASE_METHOD_PTR(FIntVector4, opIndex, (int), ERASE_ARGUMENT_PACK(const int&)) },
{ ERASE_METHOD_PTR(FIntVector4, opEquals, (const FIntVector4&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FIntVector4, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FRotator, opAssign, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator&)) },
{ ERASE_METHOD_PTR(FRotator, opAdd, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opAddAssign, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opSub, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opSubAssign, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opMul, (float), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opMulAssign, (float), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, opEquals, (const FRotator&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, IsNearlyZero, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, Equals, (const FRotator&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, GetInverse, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, Clamp, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, GetNormalized, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, GetDenormalized, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, GetWindingAndRemainder, (FRotator&, FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRotator, GetManhattanDistance, (const FRotator&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FRotator, Normalize, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRotator, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, ToColorString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FRotator, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator, Vector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, Quaternion, (), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(FRotator, Euler, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, RotateVector, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, UnrotateVector, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FRotator, AngularDistance, (const FRotator&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FRotator, Compose, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FRotator, GetForwardVector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, GetRightVector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FRotator, GetUpVector, (), ERASE_ARGUMENT_PACK(FVector)) },


{ ERASE_METHOD_PTR(FIntVector, opAssign, (const FIntVector&), ERASE_ARGUMENT_PACK(FIntVector&)) },
{ ERASE_METHOD_PTR(FIntVector, opAdd, (const FIntVector&), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opSub, (const FIntVector&), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opNeg, (), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opMul, (int), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opDiv, (int), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opMulAssign, (int), ERASE_ARGUMENT_PACK(FIntVector&)) },
{ ERASE_METHOD_PTR(FIntVector, opDivAssign, (int), ERASE_ARGUMENT_PACK(FIntVector&)) },
{ ERASE_METHOD_PTR(FIntVector, opAddAssign, (const FIntVector&), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opSubAssign, (const FIntVector&), ERASE_ARGUMENT_PACK(FIntVector)) },
{ ERASE_METHOD_PTR(FIntVector, opIndex, (int), ERASE_ARGUMENT_PACK(const int&)) },
{ ERASE_METHOD_PTR(FIntVector, opEquals, (const FIntVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FIntVector, GetMax, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FIntVector, GetMin, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FIntVector, Size, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FIntVector, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FIntVector, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FBox3f, opAdd, (const FBox3f&), ERASE_ARGUMENT_PACK(FBox3f)) },
{ ERASE_METHOD_PTR(FBox3f, opAddAssign, (const FBox3f&), ERASE_ARGUMENT_PACK(FBox3f&)) },
{ ERASE_METHOD_PTR(FBox3f, opEquals, (const FBox3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox3f, Intersect, (const FBox3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox3f, opAdd, (const FVector3f&), ERASE_ARGUMENT_PACK(FBox3f)) },
{ ERASE_METHOD_PTR(FBox3f, opAddAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FBox3f&)) },
{ ERASE_METHOD_PTR(FBox3f, opIndex, (int), ERASE_ARGUMENT_PACK(FVector3f&)) },
{ ERASE_METHOD_PTR(FBox3f, GetCenter, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FBox3f, GetExtent, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FBox3f, GetCenterAndExtents, (FVector3f&, FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBox3f, GetClosestPointTo, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FBox3f, InverseTransformBy, (const FTransform&), ERASE_ARGUMENT_PACK(FBox3f)) },
{ ERASE_METHOD_PTR(FBox3f, TransformBy, (const FTransform3f&), ERASE_ARGUMENT_PACK(FBox3f)) },
{ ERASE_METHOD_PTR(FBox3f, IsInside, (const FVector3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox3f, IsInsideOrOn, (const FVector3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox3f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FBoxSphereBounds3f, opAdd, (const FBoxSphereBounds3f&), ERASE_ARGUMENT_PACK(FBoxSphereBounds3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, opEquals, (const FBoxSphereBounds3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, ComputeSquaredDistanceFromBoxToPoint, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, GetBox, (), ERASE_ARGUMENT_PACK(FBox3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, GetBoxExtrema, (uint), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, GetSphere, (), ERASE_ARGUMENT_PACK(FSphere3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, ExpandBy, (float32), ERASE_ARGUMENT_PACK(FBoxSphereBounds3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, TransformBy, (const FTransform3f&), ERASE_ARGUMENT_PACK(FBoxSphereBounds3f)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds3f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FRotator3f, opAssign, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f&)) },
{ ERASE_METHOD_PTR(FRotator3f, opAdd, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opAddAssign, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opSub, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opSubAssign, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opMul, (float32), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opMulAssign, (float32), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, opEquals, (const FRotator3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, IsNearlyZero, (float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, Equals, (const FRotator3f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, GetInverse, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, Clamp, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetNormalized, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetDenormalized, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetWindingAndRemainder, (FRotator3f&, FRotator3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRotator3f, GetManhattanDistance, (const FRotator3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FRotator3f, Normalize, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FRotator3f, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, Vector, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, Quaternion, (), ERASE_ARGUMENT_PACK(FQuat4f)) },
{ ERASE_METHOD_PTR(FRotator3f, Euler, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, RotateVector, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, UnrotateVector, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, ToColorString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FRotator3f, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FRotator3f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FRotator3f, AngularDistance, (const FRotator3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FRotator3f, Compose, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetForwardVector, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetRightVector, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FRotator3f, GetUpVector, (), ERASE_ARGUMENT_PACK(FVector3f)) },


{ ERASE_METHOD_PTR(FBox, opAdd, (const FBox&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, opAddAssign, (const FBox&), ERASE_ARGUMENT_PACK(FBox&)) },
{ ERASE_METHOD_PTR(FBox, opEquals, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, opAdd, (const FVector&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, opAddAssign, (const FVector&), ERASE_ARGUMENT_PACK(FBox&)) },
{ ERASE_METHOD_PTR(FBox, opIndex, (int), ERASE_ARGUMENT_PACK(FVector&)) },
{ ERASE_METHOD_PTR(FBox, GetCenter, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FBox, GetExtent, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FBox, GetVolume, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FBox, GetCenterAndExtents, (FVector&, FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBox, GetClosestPointTo, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FBox, InverseTransformBy, (const FTransform&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, TransformBy, (const FTransform&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, Equals, (const FBox&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, Intersect, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IntersectXY, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, Overlap, (const FBox&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, ExpandBy, (float), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, ExpandBy, (const FVector&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, ShiftBy, (const FVector&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, MoveTo, (const FVector&), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBox, IsInside, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IsInsideOrOn, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IsInside, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IsInsideXY, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IsInsideOrOnXY, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, IsInsideXY, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBox, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FTraceHandle, opEquals, (const FTraceHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTraceHandle, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FLinearColor, opAssign, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor&)) },
{ ERASE_METHOD_PTR(FLinearColor, opAdd, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opAddAssign, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opSub, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opSubAssign, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opMul, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opMulAssign, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opMul, (float32), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opMulAssign, (float32), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opDiv, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opDivAssign, (const FLinearColor&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opDiv, (float32), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opDivAssign, (float32), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, opEquals, (const FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLinearColor, GetClamped, (float32 = 0.f, float32 = 1.f), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, Equals, (const FLinearColor&, float32 = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLinearColor, IsAlmostBlack, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLinearColor, GetMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FLinearColor, GetMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FLinearColor, GetLuminance, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FLinearColor, LinearRGBToHSV, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, HSVToLinearRGB, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FLinearColor, ToFColor, (bool), ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(FLinearColor, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FVector4f, opAssign, (const FVector4f&), ERASE_ARGUMENT_PACK(FVector4f&)) },
{ ERASE_METHOD_PTR(FVector4f, opAdd, (const FVector4f&), ERASE_ARGUMENT_PACK(FVector4f)) },
{ ERASE_METHOD_PTR(FVector4f, opSub, (const FVector4f&), ERASE_ARGUMENT_PACK(FVector4f)) },
{ ERASE_METHOD_PTR(FVector4f, opMul, (float32), ERASE_ARGUMENT_PACK(FVector4f)) },
{ ERASE_METHOD_PTR(FVector4f, opDiv, (float32), ERASE_ARGUMENT_PACK(FVector4f)) },
{ ERASE_METHOD_PTR(FVector4f, opMulAssign, (float32), ERASE_ARGUMENT_PACK(FVector4f)) },
{ ERASE_METHOD_PTR(FVector4f, opIndex, (int), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(FVector4f, opEquals, (const FVector4f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector4f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FBoxSphereBounds, opAdd, (const FBoxSphereBounds&), ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, opEquals, (const FBoxSphereBounds&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, ComputeSquaredDistanceFromBoxToPoint, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, GetBox, (), ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, GetBoxExtrema, (uint), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, GetSphere, (), ERASE_ARGUMENT_PACK(FSphere)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, ExpandBy, (float), ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, TransformBy, (const FTransform&), ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(FBoxSphereBounds, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FCollisionShape, IsLine, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionShape, IsBox, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionShape, IsCapsule, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionShape, IsSphere, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionShape, SetBox, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCollisionShape, SetSphere, (const float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCollisionShape, SetCapsule, (const float32, const float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCollisionShape, SetCapsule, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCollisionShape, IsNearlyZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetExtent, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetCapsuleAxisHalfLength, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetBox, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetSphereRadius, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetCapsuleRadius, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FCollisionShape, GetCapsuleHalfHeight, (), ERASE_ARGUMENT_PACK(float)) },


{ ERASE_METHOD_PTR(FVector4, opAssign, (const FVector4&), ERASE_ARGUMENT_PACK(FVector4&)) },
{ ERASE_METHOD_PTR(FVector4, opAdd, (const FVector4&), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(FVector4, opSub, (const FVector4&), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(FVector4, opMul, (float), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(FVector4, opDiv, (float), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(FVector4, opMulAssign, (float), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(FVector4, opIndex, (int), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(FVector4, opEquals, (const FVector4&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector4, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FVector3f, opAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f&)) },
{ ERASE_METHOD_PTR(FVector3f, opAdd, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opSub, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opMul, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opDiv, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opMul, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opDiv, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opNeg, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opMulAssign, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opDivAssign, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opMulAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opDivAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opAddAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opSubAssign, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, opIndex, (int), ERASE_ARGUMENT_PACK(float&)) },
{ ERASE_METHOD_PTR(FVector3f, opIndex, (int), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, opEquals, (const FVector3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Equals, (const FVector3f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, CrossProduct, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, DotProduct, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, AllComponentsEqual, (float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Parallel, (const FVector3f&, float32 = __THRESH_NORMALS_ARE_PARALLEL_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Coincident, (const FVector3f&, float32 = __THRESH_NORMALS_ARE_PARALLEL_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Orthogonal, (const FVector3f&, float32 = __THRESH_NORMALS_ARE_ORTHOGONAL_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, GetMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, GetAbsMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, GetMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, GetAbsMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, ComponentMin, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, ComponentMax, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, ComponentClamp, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetAbs, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, Size, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, SizeSquared, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, Size2D, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, SizeSquared2D, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, IsNearlyZero, (float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Normalize, (float32 = __SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, IsNormalized, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, ToDirectionAndLength, (FVector3f&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector3f, GetSignVector, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, Projection, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetUnsafeNormal, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GridSnap, (const float32&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, BoundToCube, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, BoundToBox, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetClampedToSize, (float32, float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetClampedToSize2D, (float32, float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetClampedToMaxSize, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetClampedToMaxSize2D, (float32), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, AddBounded, (const FVector3f&, float32 = MAX_int16), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector3f, Reciprocal, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, IsUniform, (float32 = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, MirrorByVector, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, VectorPlaneProject, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, RotateAngleAxis, (float32, const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetSafeNormal, (float32 = __SMALL_NUMBER_flt, const FVector3f& = FVector3f :: ZeroVector), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, GetSafeNormal2D, (float32 = __SMALL_NUMBER_flt, const FVector3f& = FVector3f :: ZeroVector), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, CosineAngle2D, (FVector3f), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, ProjectOnTo, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, ProjectOnToNormal, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, FindBestAxisVectors, (FVector3f&, FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector3f, UnwindEuler, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector3f, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, IsUnit, (float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, HeadingAngle, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, PointsAreSame, (const FVector3f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, PointsAreNear, (const FVector3f&, float32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, Distance, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, DistSquared, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, Dist2D, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, DistXY, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, DistSquaredXY, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, DistSquared2D, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, ToOrientationRotator, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FVector3f, ToOrientationQuat, (), ERASE_ARGUMENT_PACK(FQuat4f)) },
{ ERASE_METHOD_PTR(FVector3f, Rotation, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FVector3f, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector3f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FVector3f, AngularDistance, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, AngularDistanceForNormals, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, ConstrainToDirection, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, ConstrainToPlane, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, Dist2D, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, DistSquared2D, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, PointPlaneProject, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FVector3f, Size2D, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, SizeSquared2D, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector3f, ToColorString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FVector2f, opAssign, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f&)) },
{ ERASE_METHOD_PTR(FVector2f, opAdd, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opSub, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opMul, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opDiv, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opMul, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opDiv, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opAdd, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opSub, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opNeg, (), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opMulAssign, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opDivAssign, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opMulAssign, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opDivAssign, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opAddAssign, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opSubAssign, (const FVector2f&), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, opIndex, (int), ERASE_ARGUMENT_PACK(float&)) },
{ ERASE_METHOD_PTR(FVector2f, opIndex, (int), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, opEquals, (const FVector2f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, Equals, (const FVector2f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, CrossProduct, (const FVector2f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, DotProduct, (const FVector2f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, GetMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, GetAbsMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, GetMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, GetAbs, (), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, Size, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, SizeSquared, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, IsNearlyZero, (float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, Normalize, (float32 = __SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector2f, GetSafeNormal, (float32 = __SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, GetSignVector, (), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, Distance, (const FVector2f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, DistSquared, (const FVector2f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2f, GetClampedToMaxSize, (float32), ERASE_ARGUMENT_PACK(FVector2f)) },
{ ERASE_METHOD_PTR(FVector2f, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FVector2D, opAssign, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D&)) },
{ ERASE_METHOD_PTR(FVector2D, opAdd, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opSub, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opMul, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opDiv, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opMul, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opDiv, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opAdd, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opSub, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opNeg, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opMulAssign, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opDivAssign, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opMulAssign, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opDivAssign, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opAddAssign, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opSubAssign, (const FVector2D&), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, opIndex, (int), ERASE_ARGUMENT_PACK(float&)) },
{ ERASE_METHOD_PTR(FVector2D, opIndex, (int), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, opEquals, (const FVector2D&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, Equals, (const FVector2D&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, CrossProduct, (const FVector2D&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, DotProduct, (const FVector2D&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, GetMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, GetAbsMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, GetMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, GetAbs, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, Size, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, SizeSquared, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, IsNearlyZero, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, Normalize, (float = SMALL_NUMBER), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector2D, GetSafeNormal, (float = SMALL_NUMBER), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, GetSignVector, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, Distance, (const FVector2D&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, DistSquared, (const FVector2D&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector2D, GetClampedToMaxSize, (float), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(FVector2D, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector2D, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FVector, opAssign, (const FVector&), ERASE_ARGUMENT_PACK(FVector&)) },
{ ERASE_METHOD_PTR(FVector, opAdd, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opSub, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opMul, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opDiv, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opMul, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opDiv, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opNeg, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opMulAssign, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opDivAssign, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opMulAssign, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opDivAssign, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opAddAssign, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opSubAssign, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, opIndex, (int), ERASE_ARGUMENT_PACK(float&)) },
{ ERASE_METHOD_PTR(FVector, opIndex, (int), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, opEquals, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Equals, (const FVector&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, CrossProduct, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, DotProduct, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, AllComponentsEqual, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Parallel, (const FVector&, float = THRESH_NORMALS_ARE_PARALLEL), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Coincident, (const FVector&, float = THRESH_NORMALS_ARE_PARALLEL), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Orthogonal, (const FVector&, float = THRESH_NORMALS_ARE_ORTHOGONAL), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, GetMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, GetAbsMax, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, GetMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, GetAbsMin, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, ComponentMin, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, ComponentMax, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, ComponentClamp, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetAbs, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, Size, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, SizeSquared, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, Size2D, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, SizeSquared2D, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, IsNearlyZero, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Normalize, (float = SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, IsNormalized, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, ToDirectionAndLength, (FVector&, float&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector, ToDirectionAndLength, (FVector&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector, GetSignVector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, Projection, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetUnsafeNormal, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GridSnap, (const float&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, BoundToCube, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, BoundToBox, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetClampedToSize, (float, float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetClampedToSize2D, (float, float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetClampedToMaxSize, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetClampedToMaxSize2D, (float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, AddBounded, (const FVector&, float = MAX_int16), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector, Reciprocal, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, IsUniform, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, MirrorByVector, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, VectorPlaneProject, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, RotateAngleAxis, (float, const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetSafeNormal, (float = SMALL_NUMBER, const FVector& = FVector :: ZeroVector), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, GetSafeNormal2D, (float = SMALL_NUMBER, const FVector& = FVector :: ZeroVector), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, CosineAngle2D, (FVector), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, ProjectOnTo, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, ProjectOnToNormal, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, FindBestAxisVectors, (FVector&, FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector, UnwindEuler, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVector, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, IsUnit, (float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, HeadingAngle, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, PointsAreSame, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, PointsAreNear, (const FVector&, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, Distance, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, DistSquared, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, Dist2D, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, DistXY, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, DistSquaredXY, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, DistSquared2D, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, ToOrientationRotator, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FVector, ToOrientationQuat, (), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(FVector, Rotation, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FVector, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVector, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FVector, AngularDistance, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, AngularDistanceForNormals, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, ConstrainToDirection, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, ConstrainToPlane, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, Dist2D, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, DistSquared2D, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, MoveTowards, (const FVector&, float), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, PointPlaneProject, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FVector, Size2D, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, SizeSquared2D, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FVector, ToColorString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FTransform3f, opAssign, (const FTransform3f&), ERASE_ARGUMENT_PACK(FTransform3f&)) },
{ ERASE_METHOD_PTR(FTransform3f, Inverse, (), ERASE_ARGUMENT_PACK(FTransform3f)) },
{ ERASE_METHOD_PTR(FTransform3f, Blend, (const FTransform3f&, const FTransform3f&, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, BlendWith, (const FTransform3f&, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, opMul, (const FTransform3f&), ERASE_ARGUMENT_PACK(FTransform3f)) },
{ ERASE_METHOD_PTR(FTransform3f, opMul, (const FQuat4f&), ERASE_ARGUMENT_PACK(FTransform3f)) },
{ ERASE_METHOD_PTR(FTransform3f, opMulAssign, (const FTransform3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, opMulAssign, (const FQuat4f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, ScaleTranslation, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, ScaleTranslation, (const float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, RemoveScaling, (float32 = __SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, SetToRelativeTransform, (const FTransform3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, Accumulate, (const FTransform3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, GetMaximumAxisScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform3f, GetMinimumAxisScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform3f, GetRelativeTransform, (const FTransform3f&), ERASE_ARGUMENT_PACK(FTransform3f)) },
{ ERASE_METHOD_PTR(FTransform3f, GetRelativeTransformReverse, (const FTransform3f&), ERASE_ARGUMENT_PACK(FTransform3f)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformPosition, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformPositionNoScale, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformPosition, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformPositionNoScale, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformVector, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformVectorNoScale, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformVector, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformVectorNoScale, (const FVector3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformRotation, (const FQuat4f&), ERASE_ARGUMENT_PACK(FQuat4f)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformRotation, (const FQuat4f&), ERASE_ARGUMENT_PACK(FQuat4f)) },
{ ERASE_METHOD_PTR(FTransform3f, SubtractTranslations, (const FTransform3f&), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, NormalizeRotation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, IsRotationNormalized, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, TranslationEquals, (const FTransform3f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, EqualsNoScale, (const FTransform3f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, Equals, (const FTransform3f&, float32 = __KINDA_SMALL_NUMBER_flt), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, GetLocation, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, GetDeterminant, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform3f, Rotator, (), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FTransform3f, GetTranslation, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, GetScale3D, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FTransform3f, GetRotation, (), ERASE_ARGUMENT_PACK(FQuat4f)) },
{ ERASE_METHOD_PTR(FTransform3f, SetLocation, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, SetTranslation, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, AddToTranslation, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, ConcatenateRotation, (const FQuat4f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, SetRotation, (const FQuat4f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, SetScale3D, (const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, SetTranslationAndScale3D, (const FVector3f&, const FVector3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform3f, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FTransform3f, InverseTransformRotation, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },
{ ERASE_METHOD_PTR(FTransform3f, SetRotation, (const FRotator3f&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform3f, TransformRotation, (const FRotator3f&), ERASE_ARGUMENT_PACK(FRotator3f)) },


{ ERASE_METHOD_PTR(FTransform, opAssign, (const FTransform&), ERASE_ARGUMENT_PACK(FTransform&)) },
{ ERASE_METHOD_PTR(FTransform, Inverse, (), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(FTransform, Blend, (const FTransform&, const FTransform&, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, BlendWith, (const FTransform&, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, opMul, (const FTransform&), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(FTransform, opMul, (const FQuat&), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(FTransform, opMulAssign, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, opMulAssign, (const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, ScaleTranslation, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, ScaleTranslation, (const float&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, RemoveScaling, (float = SMALL_NUMBER), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, SetToRelativeTransform, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, Accumulate, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, GetMaximumAxisScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform, GetMinimumAxisScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform, GetRelativeTransform, (const FTransform&), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(FTransform, GetRelativeTransformReverse, (const FTransform&), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(FTransform, TransformPosition, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, TransformPositionNoScale, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformPosition, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformPositionNoScale, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, TransformVector, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, TransformVectorNoScale, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformVector, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformVectorNoScale, (const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, TransformRotation, (const FQuat&), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformRotation, (const FQuat&), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(FTransform, SubtractTranslations, (const FTransform&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, NormalizeRotation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, IsRotationNormalized, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, TranslationEquals, (const FTransform&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, EqualsNoScale, (const FTransform&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, Equals, (const FTransform&, float = KINDA_SMALL_NUMBER), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, GetLocation, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, ContainsNaN, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, GetDeterminant, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTransform, Rotator, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FTransform, GetTranslation, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, GetScale3D, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FTransform, GetRotation, (), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(FTransform, ToMatrixWithScale, (), ERASE_ARGUMENT_PACK(FMatrix)) },
{ ERASE_METHOD_PTR(FTransform, ToMatrixNoScale, (), ERASE_ARGUMENT_PACK(FMatrix)) },
{ ERASE_METHOD_PTR(FTransform, ToInverseMatrixWithScale, (), ERASE_ARGUMENT_PACK(FMatrix)) },
{ ERASE_METHOD_PTR(FTransform, SetLocation, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, SetTranslation, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, AddToTranslation, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, ConcatenateRotation, (const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, SetRotation, (const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, SetScale3D, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, SetTranslationAndScale3D, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTransform, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FTransform, Blend, (const FTransform&, const FTransform&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, BlendWith, (const FTransform&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, InverseTransformRotation, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(FTransform, SetRotation, (const FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTransform, TransformRotation, (const FRotator&), ERASE_ARGUMENT_PACK(FRotator)) },


{ ERASE_METHOD_PTR(FText, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IsEmptyOrWhitespace, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IsTransient, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IsCultureInvariant, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IsInitializedFromString, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IsFromStringTable, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, IdenticalTo, (const FText&, const ETextIdenticalModeFlags = ETextIdenticalModeFlags :: None), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FText, opAssign, (const FText&), ERASE_ARGUMENT_PACK(FText&)) },
{ ERASE_METHOD_PTR(FText, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FName, opAssign, (const FName&), ERASE_ARGUMENT_PACK(FName&)) },
{ ERASE_METHOD_PTR(FName, opEquals, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FName, Compare, (const FName&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FName, IsNone, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FName, GetNumber, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FName, SetNumber, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FName, GetPlainNameString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FName, IsEqual, (const FName&, bool = true, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FName, GetHash, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FName, opEquals, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FName, opImplConv, (), ERASE_ARGUMENT_PACK(FKey)) },
{ ERASE_METHOD_PTR(FName, ToString, (), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FARFilter, opAssign, (const FARFilter&), ERASE_ARGUMENT_PACK(FARFilter&)) },


{ ERASE_METHOD_PTR(FTopLevelAssetPath, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, opEquals, (const FTopLevelAssetPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, opAssign, (const FString&), ERASE_ARGUMENT_PACK(FTopLevelAssetPath&)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FTopLevelAssetPath, opAssign, (const FTopLevelAssetPath&), ERASE_ARGUMENT_PACK(FTopLevelAssetPath&)) },


{ ERASE_METHOD_PTR(FSoftObjectPath, GetLongPackageName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, GetAssetName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, GetAssetPath, (), ERASE_ARGUMENT_PACK(FTopLevelAssetPath)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, IsAsset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, IsSubobject, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, opEquals, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, TryLoad, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, ResolveObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftObjectPath, opAssign, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(FSoftObjectPath&)) },


{ ERASE_METHOD_PTR(FAssetData, GetSoftObjectPath, (), ERASE_ARGUMENT_PACK(FSoftObjectPath)) },
{ ERASE_METHOD_PTR(FAssetData, GetObjectPathString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FAssetData, IsInstanceOf, (const UClass, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAssetData, opAssign, (const FAssetData&), ERASE_ARGUMENT_PACK(FAssetData&)) },


{ ERASE_METHOD_PTR(FGuid, opEquals, (const FGuid&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGuid, opCmp, (const FGuid&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FGuid, opIndex, (int), ERASE_ARGUMENT_PACK(uint32&)) },
{ ERASE_METHOD_PTR(FGuid, opIndex, (int), ERASE_ARGUMENT_PACK(const uint32&)) },
{ ERASE_METHOD_PTR(FGuid, Invalidate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FGuid, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FGuid, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FGuid, ToString, (EGuidFormats), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FGuid, GetTypeHash, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FGuid, opAssign, (const FGuid&), ERASE_ARGUMENT_PACK(FGuid&)) },


{ ERASE_METHOD_PTR(FDateTime, opEquals, (const FDateTime&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDateTime, GetDate, (), ERASE_ARGUMENT_PACK(FDateTime)) },
{ ERASE_METHOD_PTR(FDateTime, GetDate, (int&, int&, int&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDateTime, GetDay, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetDayOfYear, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetHour, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetHour12, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetMillisecond, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetMinute, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetMonth, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetSecond, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, GetYear, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, IsAfternoon, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDateTime, IsMorning, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDateTime, ToUnixTimestamp, (), ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(FDateTime, ToHttpDate, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FDateTime, ToIso8601, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FDateTime, ToString, (const FString&), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FDateTime, GetTicks, (), ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(FDateTime, opCmp, (const FDateTime&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FDateTime, opAdd, (const FTimespan&), ERASE_ARGUMENT_PACK(FDateTime)) },
{ ERASE_METHOD_PTR(FDateTime, opAddAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FDateTime&)) },
{ ERASE_METHOD_PTR(FDateTime, opSub, (const FDateTime&), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FDateTime, opSub, (const FTimespan&), ERASE_ARGUMENT_PACK(FDateTime)) },
{ ERASE_METHOD_PTR(FDateTime, opSubAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FDateTime&)) },
{ ERASE_METHOD_PTR(FDateTime, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FDateTime, opAssign, (const FDateTime&), ERASE_ARGUMENT_PACK(FDateTime&)) },


{ ERASE_METHOD_PTR(FBox2D, opAssign, (const FBox2D&), ERASE_ARGUMENT_PACK(FBox2D&)) },


{ ERASE_METHOD_PTR(FBox2f, opAssign, (const FBox2f&), ERASE_ARGUMENT_PACK(FBox2f&)) },


{ ERASE_METHOD_PTR(FBox3d, opAssign, (const FBox3d&), ERASE_ARGUMENT_PACK(FBox3d&)) },


{ ERASE_METHOD_PTR(FVector3d, opAssign, (const FVector3d&), ERASE_ARGUMENT_PACK(FVector3d&)) },


{ ERASE_METHOD_PTR(FBoxSphereBounds3d, opAssign, (const FBoxSphereBounds3d&), ERASE_ARGUMENT_PACK(FBoxSphereBounds3d&)) },


{ ERASE_METHOD_PTR(FColor, opEquals, (const FColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FColor, opAddAssign, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FColor, ToHex, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FColor, InitFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FColor, FromRGBE, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FColor, ReinterpretAsLinear, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(FColor, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FColor, opAssign, (const FColor&), ERASE_ARGUMENT_PACK(FColor&)) },


{ ERASE_METHOD_PTR(FDirectoryPath, opAssign, (const FDirectoryPath&), ERASE_ARGUMENT_PACK(FDirectoryPath&)) },


{ ERASE_METHOD_PTR(FDoubleRange, opAssign, (const FDoubleRange&), ERASE_ARGUMENT_PACK(FDoubleRange&)) },


{ ERASE_METHOD_PTR(FDoubleRangeBound, opAssign, (const FDoubleRangeBound&), ERASE_ARGUMENT_PACK(FDoubleRangeBound&)) },


{ ERASE_METHOD_PTR(FFilePath, opAssign, (const FFilePath&), ERASE_ARGUMENT_PACK(FFilePath&)) },


{ ERASE_METHOD_PTR(FFloatInterval, opAssign, (const FFloatInterval&), ERASE_ARGUMENT_PACK(FFloatInterval&)) },


{ ERASE_METHOD_PTR(FFloatRange, opAssign, (const FFloatRange&), ERASE_ARGUMENT_PACK(FFloatRange&)) },


{ ERASE_METHOD_PTR(FFloatRangeBound, opAssign, (const FFloatRangeBound&), ERASE_ARGUMENT_PACK(FFloatRangeBound&)) },


{ ERASE_METHOD_PTR(FFrameNumber, opAssign, (const FFrameNumber&), ERASE_ARGUMENT_PACK(FFrameNumber&)) },


{ ERASE_METHOD_PTR(FFrameNumberRange, opAssign, (const FFrameNumberRange&), ERASE_ARGUMENT_PACK(FFrameNumberRange&)) },


{ ERASE_METHOD_PTR(FFrameNumberRangeBound, opAssign, (const FFrameNumberRangeBound&), ERASE_ARGUMENT_PACK(FFrameNumberRangeBound&)) },


{ ERASE_METHOD_PTR(FFrameRate, opAssign, (const FFrameRate&), ERASE_ARGUMENT_PACK(FFrameRate&)) },


{ ERASE_METHOD_PTR(FFrameTime, opAssign, (const FFrameTime&), ERASE_ARGUMENT_PACK(FFrameTime&)) },


{ ERASE_METHOD_PTR(FInputDeviceId, opAssign, (const FInputDeviceId&), ERASE_ARGUMENT_PACK(FInputDeviceId&)) },


{ ERASE_METHOD_PTR(FInt32Interval, opAssign, (const FInt32Interval&), ERASE_ARGUMENT_PACK(FInt32Interval&)) },


{ ERASE_METHOD_PTR(FInt32Point, opAssign, (const FInt32Point&), ERASE_ARGUMENT_PACK(FInt32Point&)) },


{ ERASE_METHOD_PTR(FInt32Range, opAssign, (const FInt32Range&), ERASE_ARGUMENT_PACK(FInt32Range&)) },


{ ERASE_METHOD_PTR(FInt32RangeBound, opAssign, (const FInt32RangeBound&), ERASE_ARGUMENT_PACK(FInt32RangeBound&)) },


{ ERASE_METHOD_PTR(FInt32Vector, opAssign, (const FInt32Vector&), ERASE_ARGUMENT_PACK(FInt32Vector&)) },


{ ERASE_METHOD_PTR(FInt32Vector2, opAssign, (const FInt32Vector2&), ERASE_ARGUMENT_PACK(FInt32Vector2&)) },


{ ERASE_METHOD_PTR(FInt32Vector4, opAssign, (const FInt32Vector4&), ERASE_ARGUMENT_PACK(FInt32Vector4&)) },


{ ERASE_METHOD_PTR(FInt64Point, opAssign, (const FInt64Point&), ERASE_ARGUMENT_PACK(FInt64Point&)) },


{ ERASE_METHOD_PTR(FInt64Vector, opAssign, (const FInt64Vector&), ERASE_ARGUMENT_PACK(FInt64Vector&)) },


{ ERASE_METHOD_PTR(FInt64Vector2, opAssign, (const FInt64Vector2&), ERASE_ARGUMENT_PACK(FInt64Vector2&)) },


{ ERASE_METHOD_PTR(FInt64Vector4, opAssign, (const FInt64Vector4&), ERASE_ARGUMENT_PACK(FInt64Vector4&)) },


{ ERASE_METHOD_PTR(FInterpCurveFloat, opAssign, (const FInterpCurveFloat&), ERASE_ARGUMENT_PACK(FInterpCurveFloat&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointFloat, opAssign, (const FInterpCurvePointFloat&), ERASE_ARGUMENT_PACK(FInterpCurvePointFloat&)) },


{ ERASE_METHOD_PTR(FInterpCurveLinearColor, opAssign, (const FInterpCurveLinearColor&), ERASE_ARGUMENT_PACK(FInterpCurveLinearColor&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointLinearColor, opAssign, (const FInterpCurvePointLinearColor&), ERASE_ARGUMENT_PACK(FInterpCurvePointLinearColor&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointQuat, opAssign, (const FInterpCurvePointQuat&), ERASE_ARGUMENT_PACK(FInterpCurvePointQuat&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointTwoVectors, opAssign, (const FInterpCurvePointTwoVectors&), ERASE_ARGUMENT_PACK(FInterpCurvePointTwoVectors&)) },


{ ERASE_METHOD_PTR(FTwoVectors, opAssign, (const FTwoVectors&), ERASE_ARGUMENT_PACK(FTwoVectors&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointVector, opAssign, (const FInterpCurvePointVector&), ERASE_ARGUMENT_PACK(FInterpCurvePointVector&)) },


{ ERASE_METHOD_PTR(FInterpCurvePointVector2D, opAssign, (const FInterpCurvePointVector2D&), ERASE_ARGUMENT_PACK(FInterpCurvePointVector2D&)) },


{ ERASE_METHOD_PTR(FInterpCurveQuat, opAssign, (const FInterpCurveQuat&), ERASE_ARGUMENT_PACK(FInterpCurveQuat&)) },


{ ERASE_METHOD_PTR(FInterpCurveTwoVectors, opAssign, (const FInterpCurveTwoVectors&), ERASE_ARGUMENT_PACK(FInterpCurveTwoVectors&)) },


{ ERASE_METHOD_PTR(FInterpCurveVector, opAssign, (const FInterpCurveVector&), ERASE_ARGUMENT_PACK(FInterpCurveVector&)) },


{ ERASE_METHOD_PTR(FInterpCurveVector2D, opAssign, (const FInterpCurveVector2D&), ERASE_ARGUMENT_PACK(FInterpCurveVector2D&)) },


{ ERASE_METHOD_PTR(FIntPoint, opAssign, (const FIntPoint&), ERASE_ARGUMENT_PACK(FIntPoint&)) },


{ ERASE_METHOD_PTR(FMatrix, opAssign, (const FMatrix&), ERASE_ARGUMENT_PACK(FMatrix&)) },


{ ERASE_METHOD_PTR(FPlane, PlaneDot, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FPlane, GetOrigin, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FPlane, GetNormal, (), ERASE_ARGUMENT_PACK(const FVector&)) },
{ ERASE_METHOD_PTR(FPlane, RayPlaneIntersection, (const FVector&, const FVector&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(FPlane, SegmentPlaneIntersection, (const FVector&, const FVector&, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlane, opAssign, (const FPlane&), ERASE_ARGUMENT_PACK(FPlane&)) },


{ ERASE_METHOD_PTR(FMatrix44d, opAssign, (const FMatrix44d&), ERASE_ARGUMENT_PACK(FMatrix44d&)) },


{ ERASE_METHOD_PTR(FPlane4d, opAssign, (const FPlane4d&), ERASE_ARGUMENT_PACK(FPlane4d&)) },


{ ERASE_METHOD_PTR(FMatrix44f, opAssign, (const FMatrix44f&), ERASE_ARGUMENT_PACK(FMatrix44f&)) },


{ ERASE_METHOD_PTR(FPlane4f, PlaneDot, (const FVector3f&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FPlane4f, GetOrigin, (), ERASE_ARGUMENT_PACK(FVector3f)) },
{ ERASE_METHOD_PTR(FPlane4f, GetNormal, (), ERASE_ARGUMENT_PACK(const FVector3f&)) },
{ ERASE_METHOD_PTR(FPlane4f, opAssign, (const FPlane4f&), ERASE_ARGUMENT_PACK(FPlane4f&)) },


{ ERASE_METHOD_PTR(FOrientedBox, opAssign, (const FOrientedBox&), ERASE_ARGUMENT_PACK(FOrientedBox&)) },


{ ERASE_METHOD_PTR(FPackedNormal, opAssign, (const FPackedNormal&), ERASE_ARGUMENT_PACK(FPackedNormal&)) },


{ ERASE_METHOD_PTR(FPackedRGB10A2N, opAssign, (const FPackedRGB10A2N&), ERASE_ARGUMENT_PACK(FPackedRGB10A2N&)) },


{ ERASE_METHOD_PTR(FPackedRGBA16N, opAssign, (const FPackedRGBA16N&), ERASE_ARGUMENT_PACK(FPackedRGBA16N&)) },


{ ERASE_METHOD_PTR(FPlatformInputDeviceState, opAssign, (const FPlatformInputDeviceState&), ERASE_ARGUMENT_PACK(FPlatformInputDeviceState&)) },


{ ERASE_METHOD_PTR(FPlatformUserId, opAssign, (const FPlatformUserId&), ERASE_ARGUMENT_PACK(FPlatformUserId&)) },


{ ERASE_METHOD_PTR(FPolyglotTextData, opAssign, (const FPolyglotTextData&), ERASE_ARGUMENT_PACK(FPolyglotTextData&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetId, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPrimaryAssetId, opEquals, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPrimaryAssetId, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FPrimaryAssetId, opAssign, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(FPrimaryAssetId&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetType, GetName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(FPrimaryAssetType, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPrimaryAssetType, opEquals, (const FPrimaryAssetType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPrimaryAssetType, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FPrimaryAssetType, opAssign, (const FPrimaryAssetType&), ERASE_ARGUMENT_PACK(FPrimaryAssetType&)) },
{ ERASE_METHOD_PTR(FPrimaryAssetType, SetName, (const FName&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FQualifiedFrameTime, opAssign, (const FQualifiedFrameTime&), ERASE_ARGUMENT_PACK(FQualifiedFrameTime&)) },


{ ERASE_METHOD_PTR(FQuat4d, opAssign, (const FQuat4d&), ERASE_ARGUMENT_PACK(FQuat4d&)) },


{ ERASE_METHOD_PTR(FRay, opAssign, (const FRay&), ERASE_ARGUMENT_PACK(FRay&)) },


{ ERASE_METHOD_PTR(FRay3d, opAssign, (const FRay3d&), ERASE_ARGUMENT_PACK(FRay3d&)) },


{ ERASE_METHOD_PTR(FRay3f, opAssign, (const FRay3f&), ERASE_ARGUMENT_PACK(FRay3f&)) },


{ ERASE_METHOD_PTR(FRotator3d, opAssign, (const FRotator3d&), ERASE_ARGUMENT_PACK(FRotator3d&)) },


{ ERASE_METHOD_PTR(FSoftClassPath, GetLongPackageName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftClassPath, GetAssetName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftClassPath, GetAssetPath, (), ERASE_ARGUMENT_PACK(FTopLevelAssetPath)) },
{ ERASE_METHOD_PTR(FSoftClassPath, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftClassPath, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftClassPath, IsAsset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftClassPath, IsSubobject, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoftClassPath, ResolveClass, (), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(FSoftClassPath, TryLoadClass, (), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(FSoftClassPath, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FSoftClassPath, opAssign, (const FSoftClassPath&), ERASE_ARGUMENT_PACK(FSoftClassPath&)) },


{ ERASE_METHOD_PTR(FSphere3d, opAssign, (const FSphere3d&), ERASE_ARGUMENT_PACK(FSphere3d&)) },


{ ERASE_METHOD_PTR(FTemplateString, opAssign, (const FTemplateString&), ERASE_ARGUMENT_PACK(FTemplateString&)) },


{ ERASE_METHOD_PTR(FTimecode, opAssign, (const FTimecode&), ERASE_ARGUMENT_PACK(FTimecode&)) },


{ ERASE_METHOD_PTR(FTimespan, opAdd, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opAddAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan&)) },
{ ERASE_METHOD_PTR(FTimespan, opSub, (), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opSub, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opSubAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan&)) },
{ ERASE_METHOD_PTR(FTimespan, opMul, (float), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opMulAssign, (float), ERASE_ARGUMENT_PACK(FTimespan&)) },
{ ERASE_METHOD_PTR(FTimespan, opDiv, (float), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opDivAssign, (float), ERASE_ARGUMENT_PACK(FTimespan&)) },
{ ERASE_METHOD_PTR(FTimespan, opMod, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, opModAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan&)) },
{ ERASE_METHOD_PTR(FTimespan, opCmp, (const FTimespan&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, opEquals, (const FTimespan&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTimespan, GetDays, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetDuration, (), ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(FTimespan, GetFractionMicro, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetFractionMilli, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetFractionNano, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetFractionTicks, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetHours, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetMinutes, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetSeconds, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FTimespan, GetTicks, (), ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalDays, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalHours, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalMicroseconds, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalMilliseconds, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalMinutes, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, GetTotalSeconds, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FTimespan, IsZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FTimespan, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FTimespan, ToString, (const FString), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FTimespan, opAssign, (const FTimespan&), ERASE_ARGUMENT_PACK(FTimespan&)) },


{ ERASE_METHOD_PTR(FTransform3d, opAssign, (const FTransform3d&), ERASE_ARGUMENT_PACK(FTransform3d&)) },


{ ERASE_METHOD_PTR(FUint32Point, opAssign, (const FUint32Point&), ERASE_ARGUMENT_PACK(FUint32Point&)) },


{ ERASE_METHOD_PTR(FUint32Vector, opAssign, (const FUint32Vector&), ERASE_ARGUMENT_PACK(FUint32Vector&)) },


{ ERASE_METHOD_PTR(FUint32Vector2, opAssign, (const FUint32Vector2&), ERASE_ARGUMENT_PACK(FUint32Vector2&)) },


{ ERASE_METHOD_PTR(FUint32Vector4, opAssign, (const FUint32Vector4&), ERASE_ARGUMENT_PACK(FUint32Vector4&)) },


{ ERASE_METHOD_PTR(FUint64Point, opAssign, (const FUint64Point&), ERASE_ARGUMENT_PACK(FUint64Point&)) },


{ ERASE_METHOD_PTR(FUint64Vector, opAssign, (const FUint64Vector&), ERASE_ARGUMENT_PACK(FUint64Vector&)) },


{ ERASE_METHOD_PTR(FUint64Vector2, opAssign, (const FUint64Vector2&), ERASE_ARGUMENT_PACK(FUint64Vector2&)) },


{ ERASE_METHOD_PTR(FUint64Vector4, opAssign, (const FUint64Vector4&), ERASE_ARGUMENT_PACK(FUint64Vector4&)) },


{ ERASE_METHOD_PTR(FUintPoint, opAssign, (const FUintPoint&), ERASE_ARGUMENT_PACK(FUintPoint&)) },


{ ERASE_METHOD_PTR(FUintVector, opAssign, (const FUintVector&), ERASE_ARGUMENT_PACK(FUintVector&)) },


{ ERASE_METHOD_PTR(FUintVector2, opAssign, (const FUintVector2&), ERASE_ARGUMENT_PACK(FUintVector2&)) },


*/