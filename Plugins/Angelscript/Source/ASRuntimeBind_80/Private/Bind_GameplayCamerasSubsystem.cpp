#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "GameplayCamerasSubsystem.h"
#include "GameFramework/PlayerController.h"
#include "Animations/CameraAnimationCameraModifier.h"
#include "CameraAnimationSequence.h"
void FASRuntimeBind_80Module::Bind_GameplayCamerasSubsystem()
{
			//FAngelscriptBinds::AddFunctionEntry(UGameplayCamerasSubsystem::StaticClass(), "IsCameraAnimationActive", { ERASE_METHOD_PTR(UGameplayCamerasSubsystem, IsCameraAnimationActive, (APlayerController*,  const FCameraAnimationHandle&) const, ERASE_ARGUMENT_PACK(bool )) } );
			//FAngelscriptBinds::AddFunctionEntry(UGameplayCamerasSubsystem::StaticClass(), "PlayCameraAnimation", { ERASE_METHOD_PTR(UGameplayCamerasSubsystem, PlayCameraAnimation, (APlayerController*,  UCameraAnimationSequence*,  FCameraAnimationParams), ERASE_ARGUMENT_PACK(FCameraAnimationHandle )) } );
			//FAngelscriptBinds::AddFunctionEntry(UGameplayCamerasSubsystem::StaticClass(), "StopAllCameraAnimations", { ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopAllCameraAnimations, (APlayerController*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UGameplayCamerasSubsystem::StaticClass(), "StopAllCameraAnimationsOf", { ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopAllCameraAnimationsOf, (APlayerController*,  UCameraAnimationSequence*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UGameplayCamerasSubsystem::StaticClass(), "StopCameraAnimation", { ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopCameraAnimation, (APlayerController*,  const FCameraAnimationHandle&,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
