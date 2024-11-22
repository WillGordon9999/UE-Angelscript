#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "Components/DynamicMeshComponent.h"
void FASRuntimeBind_80Module::Bind_DynamicMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "ConfigureMaterialSet", { ERASE_METHOD_PTR(UDynamicMeshComponent, ConfigureMaterialSet, (const TArray<UMaterialInterface*>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "EnableComplexAsSimpleCollision", { ERASE_METHOD_PTR(UDynamicMeshComponent, EnableComplexAsSimpleCollision, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "GetTangentsType", { ERASE_METHOD_PTR(UDynamicMeshComponent, GetTangentsType, () const, ERASE_ARGUMENT_PACK(EDynamicMeshComponentTangentsMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "NotifyMeshModified", { ERASE_METHOD_PTR(UDynamicMeshComponent, NotifyMeshModified, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "NotifyMeshVertexAttributesModified", { ERASE_METHOD_PTR(UDynamicMeshComponent, NotifyMeshVertexAttributesModified, (
		bool,  
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "SetComplexAsSimpleCollisionEnabled", { ERASE_METHOD_PTR(UDynamicMeshComponent, SetComplexAsSimpleCollisionEnabled, (bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "SetDeferredCollisionUpdatesEnabled", { ERASE_METHOD_PTR(UDynamicMeshComponent, SetDeferredCollisionUpdatesEnabled, (bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "SetDynamicMesh", { ERASE_METHOD_PTR(UDynamicMeshComponent, SetDynamicMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "SetTangentsType", { ERASE_METHOD_PTR(UDynamicMeshComponent, SetTangentsType, (EDynamicMeshComponentTangentsMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "UpdateCollision", { ERASE_METHOD_PTR(UDynamicMeshComponent, UpdateCollision, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshComponent::StaticClass(), "ValidateMaterialSlots", { ERASE_METHOD_PTR(UDynamicMeshComponent, ValidateMaterialSlots, (bool,  bool), ERASE_ARGUMENT_PACK( bool )) } );
}
