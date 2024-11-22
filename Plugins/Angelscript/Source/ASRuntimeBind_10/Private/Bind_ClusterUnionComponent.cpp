#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/ClusterUnionComponent.h"
void FASRuntimeBind_10Module::Bind_ClusterUnionComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "AddComponentToCluster", { ERASE_METHOD_PTR(UClusterUnionComponent, AddComponentToCluster, (UPrimitiveComponent*,  const TArray<int32>&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "GetActors", { ERASE_METHOD_PTR(UClusterUnionComponent, GetActors, (), ERASE_ARGUMENT_PACK( TArray<AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "GetPrimitiveComponents", { ERASE_METHOD_PTR(UClusterUnionComponent, GetPrimitiveComponents, (), ERASE_ARGUMENT_PACK( TArray<UPrimitiveComponent*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "RemoveComponentBonesFromCluster", { ERASE_METHOD_PTR(UClusterUnionComponent, RemoveComponentBonesFromCluster, (UPrimitiveComponent*,  const TArray<int32>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "RemoveComponentFromCluster", { ERASE_METHOD_PTR(UClusterUnionComponent, RemoveComponentFromCluster, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "SetEnableDamageFromCollision", { ERASE_METHOD_PTR(UClusterUnionComponent, SetEnableDamageFromCollision, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UClusterUnionComponent::StaticClass(), "SetIsAnchored", { ERASE_METHOD_PTR(UClusterUnionComponent, SetIsAnchored, (bool), ERASE_ARGUMENT_PACK(  void )) } );
}
