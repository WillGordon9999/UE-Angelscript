#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "VREditorInteractor.h"
void FASEditorBind_0Module::Bind_VREditorInteractor()
{
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetControllerHandSide", { ERASE_METHOD_PTR(UVREditorInteractor, GetControllerHandSide, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetControllerSide", { ERASE_METHOD_PTR(UVREditorInteractor, GetControllerSide, () const, ERASE_ARGUMENT_PACK(EControllerHand )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetControllerType", { ERASE_METHOD_PTR(UVREditorInteractor, GetControllerType, () const, ERASE_ARGUMENT_PACK(EControllerType )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetHMDDeviceType", { ERASE_METHOD_PTR(UVREditorInteractor, GetHMDDeviceType, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetLaserEnd", { ERASE_METHOD_PTR(UVREditorInteractor, GetLaserEnd, () const, ERASE_ARGUMENT_PACK(const FVector& )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetLaserStart", { ERASE_METHOD_PTR(UVREditorInteractor, GetLaserStart, () const, ERASE_ARGUMENT_PACK(const FVector& )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetLastTrackpadPosition", { ERASE_METHOD_PTR(UVREditorInteractor, GetLastTrackpadPosition, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetMotionControllerComponent", { ERASE_METHOD_PTR(UVREditorInteractor, GetMotionControllerComponent, () const, ERASE_ARGUMENT_PACK(class UMotionControllerComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetSelectAndMoveTriggerValue", { ERASE_METHOD_PTR(UVREditorInteractor, GetSelectAndMoveTriggerValue, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetTeleportActor", { ERASE_METHOD_PTR(UVREditorInteractor, GetTeleportActor, (), ERASE_ARGUMENT_PACK(AVREditorTeleporter* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "GetTrackpadPosition", { ERASE_METHOD_PTR(UVREditorInteractor, GetTrackpadPosition, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "IsClickingOnUI", { ERASE_METHOD_PTR(UVREditorInteractor, IsClickingOnUI, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "IsHoveringOverUI", { ERASE_METHOD_PTR(UVREditorInteractor, IsHoveringOverUI, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "IsTouchingTrackpad", { ERASE_METHOD_PTR(UVREditorInteractor, IsTouchingTrackpad, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "ReplaceHandMeshComponent", { ERASE_METHOD_PTR(UVREditorInteractor, ReplaceHandMeshComponent, (UStaticMesh*,  FVector), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "SetControllerHandSide", { ERASE_METHOD_PTR(UVREditorInteractor, SetControllerHandSide, ( const FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "SetControllerType", { ERASE_METHOD_PTR(UVREditorInteractor, SetControllerType, ( const EControllerType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "SetForceLaserColor", { ERASE_METHOD_PTR(UVREditorInteractor, SetForceLaserColor, ( const FLinearColor&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "SetForceShowLaser", { ERASE_METHOD_PTR(UVREditorInteractor, SetForceShowLaser, ( const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVREditorInteractor::StaticClass(), "TryOverrideControllerType", { ERASE_METHOD_PTR(UVREditorInteractor, TryOverrideControllerType, ( const EControllerType), ERASE_ARGUMENT_PACK(bool )) } );
}
