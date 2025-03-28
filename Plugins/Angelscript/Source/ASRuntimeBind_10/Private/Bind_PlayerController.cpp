#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/TouchInterface.h"
#include "GameFramework/HUD.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraShakeBase.h"
#include "Camera/CameraTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "Engine/HitResult.h"
#include "InputCoreTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/SpectatorPawn.h"
#include "WorldPartition/WorldPartitionStreamingSource.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "Components/SceneComponent.h"
#include "Blueprint/UserWidget.h"
void FASRuntimeBind_10Module::Bind_PlayerController()
{
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ActivateTouchInterface", { ERASE_METHOD_PTR(APlayerController, ActivateTouchInterface, (class UTouchInterface*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "AddPitchInput", { ERASE_METHOD_PTR(APlayerController, AddPitchInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "AddRollInput", { ERASE_METHOD_PTR(APlayerController, AddRollInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "AddYawInput", { ERASE_METHOD_PTR(APlayerController, AddYawInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "CanRestartPlayer", { ERASE_METHOD_PTR(APlayerController, CanRestartPlayer, (), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClearAudioListenerAttenuationOverride", { ERASE_METHOD_PTR(APlayerController, ClearAudioListenerAttenuationOverride, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClearAudioListenerOverride", { ERASE_METHOD_PTR(APlayerController, ClearAudioListenerOverride, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientClearCameraLensEffects", { ERASE_METHOD_PTR(APlayerController, ClientClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientSetHUD", { ERASE_METHOD_PTR(APlayerController, ClientSetHUD, (TSubclassOf<AHUD>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientSpawnGenericCameraLensEffect", { ERASE_METHOD_PTR(APlayerController, ClientSpawnGenericCameraLensEffect, ( TSubclassOf<class AActor> ), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientStartCameraShake", { ERASE_METHOD_PTR(APlayerController, ClientStartCameraShake, (TSubclassOf<class UCameraShakeBase>,  float,  ECameraShakePlaySpace,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientStartCameraShakeFromSource", { ERASE_METHOD_PTR(APlayerController, ClientStartCameraShakeFromSource, (TSubclassOf<class UCameraShakeBase>,  class UCameraShakeSourceComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientStopCameraShake", { ERASE_METHOD_PTR(APlayerController, ClientStopCameraShake, (TSubclassOf<class UCameraShakeBase>,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientStopCameraShakesFromSource", { ERASE_METHOD_PTR(APlayerController, ClientStopCameraShakesFromSource, (class UCameraShakeSourceComponent*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ClientStopForceFeedback", { ERASE_METHOD_PTR(APlayerController, ClientStopForceFeedback, (class UForceFeedbackEffect*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "DeprojectMousePositionToWorld", { ERASE_METHOD_PTR(APlayerController, DeprojectMousePositionToWorld, (FVector&,  FVector&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "DeprojectScreenPositionToWorld", { ERASE_METHOD_PTR(APlayerController, DeprojectScreenPositionToWorld, (float,  float,  FVector&,  FVector&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetFocalLocation", { ERASE_METHOD_PTR(APlayerController, GetFocalLocation, () const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetHitResultUnderCursorByChannel", { ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorByChannel, (ETraceTypeQuery,  bool,  FHitResult&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetHitResultUnderCursorForObjects", { ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorForObjects, (const TArray<TEnumAsByte<EObjectTypeQuery> > &,  bool,  FHitResult&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetHitResultUnderFingerByChannel", { ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerByChannel, (ETouchIndex::Type,  ETraceTypeQuery,  bool,  FHitResult&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetHitResultUnderFingerForObjects", { ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerForObjects, (ETouchIndex::Type,  const  TArray<TEnumAsByte<EObjectTypeQuery> > &,  bool,  FHitResult&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetHUD", { ERASE_METHOD_PTR(APlayerController, GetHUD, () const, ERASE_ARGUMENT_PACK( AHUD* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputAnalogKeyState", { ERASE_METHOD_PTR(APlayerController, GetInputAnalogKeyState, (FKey) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputAnalogStickState", { ERASE_METHOD_PTR(APlayerController, GetInputAnalogStickState, (EControllerAnalogStick::Type,  float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputKeyTimeDown", { ERASE_METHOD_PTR(APlayerController, GetInputKeyTimeDown, (FKey) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputMotionState", { ERASE_METHOD_PTR(APlayerController, GetInputMotionState, (FVector&,  FVector&,  FVector&,  FVector&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputMouseDelta", { ERASE_METHOD_PTR(APlayerController, GetInputMouseDelta, (float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputTouchState", { ERASE_METHOD_PTR(APlayerController, GetInputTouchState, (ETouchIndex::Type,  float&,  float&,  bool&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetInputVectorKeyState", { ERASE_METHOD_PTR(APlayerController, GetInputVectorKeyState, (FKey) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetMousePosition", { ERASE_METHOD_PTR(APlayerController, GetMousePosition, (float&,  float&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetOverridePlayerInputClass", { ERASE_METHOD_PTR(APlayerController, GetOverridePlayerInputClass, () const, ERASE_ARGUMENT_PACK( TSubclassOf<UPlayerInput> )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetPlatformUserId", { ERASE_METHOD_PTR(APlayerController, GetPlatformUserId, () const, ERASE_ARGUMENT_PACK( FPlatformUserId )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetSpectatorPawn", { ERASE_METHOD_PTR(APlayerController, GetSpectatorPawn, () const, ERASE_ARGUMENT_PACK(ASpectatorPawn* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetStreamingSourceLocationAndRotation", { ERASE_METHOD_PTR(APlayerController, GetStreamingSourceLocationAndRotation, (FVector&,  FRotator&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetStreamingSourcePriority", { ERASE_METHOD_PTR(APlayerController, GetStreamingSourcePriority, () const, ERASE_ARGUMENT_PACK( EStreamingSourcePriority )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetStreamingSourceShapes", { ERASE_METHOD_PTR(APlayerController, GetStreamingSourceShapes, (TArray<FStreamingSourceShape>&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "GetViewportSize", { ERASE_METHOD_PTR(APlayerController, GetViewportSize, (int32&,  int32&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "IsInputKeyDown", { ERASE_METHOD_PTR(APlayerController, IsInputKeyDown, (FKey) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "IsStreamingSourceEnabled", { ERASE_METHOD_PTR(APlayerController, IsStreamingSourceEnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "K2_ClientPlayForceFeedback", { ERASE_METHOD_PTR(APlayerController, K2_ClientPlayForceFeedback, (class UForceFeedbackEffect*,  FName,  bool,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "PlayHapticEffect", { ERASE_METHOD_PTR(APlayerController, PlayHapticEffect, (class UHapticFeedbackEffect_Base*,  EControllerHand,  float,   bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ProjectWorldLocationToScreen", { ERASE_METHOD_PTR(APlayerController, ProjectWorldLocationToScreen, (FVector,  FVector2D&,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "ResetControllerLightColor", { ERASE_METHOD_PTR(APlayerController, ResetControllerLightColor, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetAudioListenerAttenuationOverride", { ERASE_METHOD_PTR(APlayerController, SetAudioListenerAttenuationOverride, (USceneComponent*,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetAudioListenerOverride", { ERASE_METHOD_PTR(APlayerController, SetAudioListenerOverride, (USceneComponent*,  FVector,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetCinematicMode", { ERASE_METHOD_PTR(APlayerController, SetCinematicMode, (bool,  bool,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetControllerLightColor", { ERASE_METHOD_PTR(APlayerController, SetControllerLightColor, (FColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetDisableHaptics", { ERASE_METHOD_PTR(APlayerController, SetDisableHaptics, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetHapticsByValue", { ERASE_METHOD_PTR(APlayerController, SetHapticsByValue, (const float,  const float,  EControllerHand), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetMouseCursorWidget", { ERASE_METHOD_PTR(APlayerController, SetMouseCursorWidget, (EMouseCursor::Type,  class UUserWidget*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetMouseLocation", { ERASE_METHOD_PTR(APlayerController, SetMouseLocation, ( const int,  const int), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetViewTargetWithBlend", { ERASE_METHOD_PTR(APlayerController, SetViewTargetWithBlend, (class AActor*,  float,  enum EViewTargetBlendFunction,  float,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "SetVirtualJoystickVisibility", { ERASE_METHOD_PTR(APlayerController, SetVirtualJoystickVisibility, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "StopHapticEffect", { ERASE_METHOD_PTR(APlayerController, StopHapticEffect, (EControllerHand), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "StreamingSourceShouldActivate", { ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldActivate, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "StreamingSourceShouldBlockOnSlowStreaming", { ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldBlockOnSlowStreaming, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "WasInputKeyJustPressed", { ERASE_METHOD_PTR(APlayerController, WasInputKeyJustPressed, (FKey) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerController::StaticClass(), "WasInputKeyJustReleased", { ERASE_METHOD_PTR(APlayerController, WasInputKeyJustReleased, (FKey) const, ERASE_ARGUMENT_PACK( bool )) } );
}
