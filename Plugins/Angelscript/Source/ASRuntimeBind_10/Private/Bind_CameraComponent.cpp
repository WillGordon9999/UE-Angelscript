#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Camera/CameraComponent.h"
void FASRuntimeBind_10Module::Bind_CameraComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "AddOrUpdateBlendable", { ERASE_METHOD_PTR(UCameraComponent, AddOrUpdateBlendable, (TScriptInterface<IBlendableInterface>,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "GetCameraView", { ERASE_METHOD_PTR(UCameraComponent, GetCameraView, (float,  FMinimalViewInfo&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "RemoveBlendable", { ERASE_METHOD_PTR(UCameraComponent, RemoveBlendable, (TScriptInterface<IBlendableInterface>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetAspectRatio", { ERASE_METHOD_PTR(UCameraComponent, SetAspectRatio, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetAspectRatioAxisConstraint", { ERASE_METHOD_PTR(UCameraComponent, SetAspectRatioAxisConstraint, (EAspectRatioAxisConstraint), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetAutoCalculateOrthoPlanes", { ERASE_METHOD_PTR(UCameraComponent, SetAutoCalculateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetAutoPlaneShift", { ERASE_METHOD_PTR(UCameraComponent, SetAutoPlaneShift, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetConstraintAspectRatio", { ERASE_METHOD_PTR(UCameraComponent, SetConstraintAspectRatio, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetFieldOfView", { ERASE_METHOD_PTR(UCameraComponent, SetFieldOfView, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetOrthoFarClipPlane", { ERASE_METHOD_PTR(UCameraComponent, SetOrthoFarClipPlane, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetOrthoNearClipPlane", { ERASE_METHOD_PTR(UCameraComponent, SetOrthoNearClipPlane, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetOrthoWidth", { ERASE_METHOD_PTR(UCameraComponent, SetOrthoWidth, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetPostProcessBlendWeight", { ERASE_METHOD_PTR(UCameraComponent, SetPostProcessBlendWeight, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetProjectionMode", { ERASE_METHOD_PTR(UCameraComponent, SetProjectionMode, (ECameraProjectionMode::Type), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetUpdateOrthoPlanes", { ERASE_METHOD_PTR(UCameraComponent, SetUpdateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetUseCameraHeightAsViewTarget", { ERASE_METHOD_PTR(UCameraComponent, SetUseCameraHeightAsViewTarget, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraComponent::StaticClass(), "SetUseFieldOfViewForLOD", { ERASE_METHOD_PTR(UCameraComponent, SetUseFieldOfViewForLOD, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
