#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "Animations/CameraAnimationCameraModifier.h"
void FASRuntimeBind_80Module::Bind_CameraAnimationCameraModifier()
{
			FAngelscriptBinds::AddFunctionEntry(UCameraAnimationCameraModifier::StaticClass(), "IsCameraAnimationActive", { ERASE_METHOD_PTR(UCameraAnimationCameraModifier, IsCameraAnimationActive, (const FCameraAnimationHandle&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraAnimationCameraModifier::StaticClass(), "PlayCameraAnimation", { ERASE_METHOD_PTR(UCameraAnimationCameraModifier, PlayCameraAnimation, (UCameraAnimationSequence*,  FCameraAnimationParams), ERASE_ARGUMENT_PACK(FCameraAnimationHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraAnimationCameraModifier::StaticClass(), "StopAllCameraAnimations", { ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopAllCameraAnimations, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraAnimationCameraModifier::StaticClass(), "StopAllCameraAnimationsOf", { ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopAllCameraAnimationsOf, (UCameraAnimationSequence*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraAnimationCameraModifier::StaticClass(), "StopCameraAnimation", { ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopCameraAnimation, (const FCameraAnimationHandle&,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
