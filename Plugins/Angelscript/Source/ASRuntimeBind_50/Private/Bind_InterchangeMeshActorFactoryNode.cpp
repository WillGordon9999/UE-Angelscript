#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMeshActorFactoryNode.h"
void FASRuntimeBind_50Module::Bind_InterchangeMeshActorFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "GetCustomAnimationAssetUidToPlay", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetCustomAnimationAssetUidToPlay, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "GetCustomGeometricTransform", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetCustomGeometricTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "GetSlotMaterialDependencies", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetSlotMaterialDependencies, (TMap<FString, FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "GetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetSlotMaterialDependencyUid, (const FString&,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "RemoveSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, RemoveSlotMaterialDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "SetCustomAnimationAssetUidToPlay", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetCustomAnimationAssetUidToPlay, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "SetCustomGeometricTransform", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetCustomGeometricTransform, (const FTransform&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshActorFactoryNode::StaticClass(), "SetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetSlotMaterialDependencyUid, (const FString&,  const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
