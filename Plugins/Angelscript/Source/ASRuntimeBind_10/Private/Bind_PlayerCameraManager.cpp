#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraModifier.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraShakeBase.h"
#include "Camera/CameraTypes.h"
#include "Camera/CameraShakeSourceComponent.h"
void FASRuntimeBind_10Module::Bind_PlayerCameraManager()
{
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "AddGenericCameraLensEffect", { ERASE_METHOD_PTR(APlayerCameraManager, AddGenericCameraLensEffect, ( TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(  TScriptInterface<class ICameraLensEffectInterface> )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "AddNewCameraModifier", { ERASE_METHOD_PTR(APlayerCameraManager, AddNewCameraModifier, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(  UCameraModifier* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "ClearCameraLensEffects", { ERASE_METHOD_PTR(APlayerCameraManager, ClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "FindCameraModifierByClass", { ERASE_METHOD_PTR(APlayerCameraManager, FindCameraModifierByClass, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(  UCameraModifier* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "GetCameraLocation", { ERASE_METHOD_PTR(APlayerCameraManager, GetCameraLocation, () const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "GetCameraRotation", { ERASE_METHOD_PTR(APlayerCameraManager, GetCameraRotation, () const, ERASE_ARGUMENT_PACK(  FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "GetFOVAngle", { ERASE_METHOD_PTR(APlayerCameraManager, GetFOVAngle, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "GetOwningPlayerController", { ERASE_METHOD_PTR(APlayerCameraManager, GetOwningPlayerController, () const, ERASE_ARGUMENT_PACK(  APlayerController* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "RemoveCameraModifier", { ERASE_METHOD_PTR(APlayerCameraManager, RemoveCameraModifier, (UCameraModifier*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "RemoveGenericCameraLensEffect", { ERASE_METHOD_PTR(APlayerCameraManager, RemoveGenericCameraLensEffect, (TScriptInterface<class ICameraLensEffectInterface>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "SetGameCameraCutThisFrame", { ERASE_METHOD_PTR(APlayerCameraManager, SetGameCameraCutThisFrame, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "SetManualCameraFade", { ERASE_METHOD_PTR(APlayerCameraManager, SetManualCameraFade, (float,  FLinearColor,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StartCameraFade", { ERASE_METHOD_PTR(APlayerCameraManager, StartCameraFade, (float,  float,  float,  FLinearColor,  bool,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StartCameraShake", { ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShake, (TSubclassOf<UCameraShakeBase>,  float,  ECameraShakePlaySpace,  FRotator), ERASE_ARGUMENT_PACK(  UCameraShakeBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StartCameraShakeFromSource", { ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>,  UCameraShakeSourceComponent*,  float,  ECameraShakePlaySpace,  FRotator), ERASE_ARGUMENT_PACK(  UCameraShakeBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopAllCameraShakes", { ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakes, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopAllCameraShakesFromSource", { ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakesFromSource, (UCameraShakeSourceComponent*,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopAllInstancesOfCameraShake", { ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShake, (TSubclassOf<UCameraShakeBase>,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopAllInstancesOfCameraShakeFromSource", { ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>,  UCameraShakeSourceComponent*,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopCameraFade", { ERASE_METHOD_PTR(APlayerCameraManager, StopCameraFade, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerCameraManager::StaticClass(), "StopCameraShake", { ERASE_METHOD_PTR(APlayerCameraManager, StopCameraShake, (UCameraShakeBase*,  bool), ERASE_ARGUMENT_PACK(  void )) } );
}
