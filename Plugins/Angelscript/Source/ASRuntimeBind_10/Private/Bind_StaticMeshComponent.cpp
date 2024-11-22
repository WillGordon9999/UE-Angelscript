#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/StaticMeshComponent.h"
void FASRuntimeBind_10Module::Bind_StaticMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "GetInitialEvaluateWorldPositionOffset", { ERASE_METHOD_PTR(UStaticMeshComponent, GetInitialEvaluateWorldPositionOffset, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "GetLocalBounds", { ERASE_METHOD_PTR(UStaticMeshComponent, GetLocalBounds, (FVector&,  FVector&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetDistanceFieldSelfShadowBias", { ERASE_METHOD_PTR(UStaticMeshComponent, SetDistanceFieldSelfShadowBias, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetEvaluateWorldPositionOffset", { ERASE_METHOD_PTR(UStaticMeshComponent, SetEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetEvaluateWorldPositionOffsetInRayTracing", { ERASE_METHOD_PTR(UStaticMeshComponent, SetEvaluateWorldPositionOffsetInRayTracing, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetForceDisableNanite", { ERASE_METHOD_PTR(UStaticMeshComponent, SetForceDisableNanite, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetForcedLodModel", { ERASE_METHOD_PTR(UStaticMeshComponent, SetForcedLodModel, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetReverseCulling", { ERASE_METHOD_PTR(UStaticMeshComponent, SetReverseCulling, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetStaticMesh", { ERASE_METHOD_PTR(UStaticMeshComponent, SetStaticMesh, (class UStaticMesh*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "SetWorldPositionOffsetDisableDistance", { ERASE_METHOD_PTR(UStaticMeshComponent, SetWorldPositionOffsetDisableDistance, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshComponent::StaticClass(), "UpdateInitialEvaluateWorldPositionOffset", { ERASE_METHOD_PTR(UStaticMeshComponent, UpdateInitialEvaluateWorldPositionOffset, (), ERASE_ARGUMENT_PACK(void )) } );
}
