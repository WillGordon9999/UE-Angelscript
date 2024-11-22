#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "MRMeshComponent.h"
void FASRuntimeBind_40Module::Bind_MRMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "Clear", { ERASE_METHOD_PTR(UMRMeshComponent, Clear, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "ForceNavMeshUpdate", { ERASE_METHOD_PTR(UMRMeshComponent, ForceNavMeshUpdate, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "GetEnableMeshOcclusion", { ERASE_METHOD_PTR(UMRMeshComponent, GetEnableMeshOcclusion, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "GetUseWireframe", { ERASE_METHOD_PTR(UMRMeshComponent, GetUseWireframe, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "GetWireframeColor", { ERASE_METHOD_PTR(UMRMeshComponent, GetWireframeColor, () const, ERASE_ARGUMENT_PACK(const FLinearColor& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "IsConnected", { ERASE_METHOD_PTR(UMRMeshComponent, IsConnected, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "RequestNavMeshUpdate", { ERASE_METHOD_PTR(UMRMeshComponent, RequestNavMeshUpdate, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "SetEnableMeshOcclusion", { ERASE_METHOD_PTR(UMRMeshComponent, SetEnableMeshOcclusion, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "SetUseWireframe", { ERASE_METHOD_PTR(UMRMeshComponent, SetUseWireframe, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "SetWireframeColor", { ERASE_METHOD_PTR(UMRMeshComponent, SetWireframeColor, (const FLinearColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMRMeshComponent::StaticClass(), "SetWireframeMaterial", { ERASE_METHOD_PTR(UMRMeshComponent, SetWireframeMaterial, (class UMaterialInterface*), ERASE_ARGUMENT_PACK(  void )) } );
}
