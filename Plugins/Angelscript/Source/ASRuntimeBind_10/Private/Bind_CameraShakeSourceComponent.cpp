#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Camera/CameraShakeSourceComponent.h"
void FASRuntimeBind_10Module::Bind_CameraShakeSourceComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCameraShakeSourceComponent::StaticClass(), "GetAttenuationFactor", { ERASE_METHOD_PTR(UCameraShakeSourceComponent, GetAttenuationFactor, (const FVector&) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraShakeSourceComponent::StaticClass(), "Start", { ERASE_METHOD_PTR(UCameraShakeSourceComponent, Start, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraShakeSourceComponent::StaticClass(), "StartCameraShake", { ERASE_METHOD_PTR(UCameraShakeSourceComponent, StartCameraShake, (TSubclassOf<UCameraShakeBase>,  float,  ECameraShakePlaySpace,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraShakeSourceComponent::StaticClass(), "StopAllCameraShakes", { ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakes, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraShakeSourceComponent::StaticClass(), "StopAllCameraShakesOfType", { ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakesOfType, (TSubclassOf<UCameraShakeBase>,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
