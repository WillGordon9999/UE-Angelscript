#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "InterchangePhysicsAssetFactoryNode.h"
void FASRuntimeBind_50Module::Bind_InterchangePhysicsAssetFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicsAssetFactoryNode::StaticClass(), "GetCustomSkeletalMeshUid", { ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, GetCustomSkeletalMeshUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicsAssetFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK( class UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicsAssetFactoryNode::StaticClass(), "InitializePhysicsAssetNode", { ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, InitializePhysicsAssetNode, (const FString&,  const FString&,  const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicsAssetFactoryNode::StaticClass(), "SetCustomSkeletalMeshUid", { ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, SetCustomSkeletalMeshUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
