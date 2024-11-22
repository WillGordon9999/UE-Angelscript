#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeSkeletalMeshLodDataNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeSkeletalMeshLodDataNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "AddMeshUid", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, AddMeshUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "GetCustomSkeletonUid", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetCustomSkeletonUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "GetMeshUids", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetMeshUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "GetMeshUidsCount", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetMeshUidsCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "RemoveAllMeshes", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, RemoveAllMeshes, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "RemoveMeshUid", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, RemoveMeshUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletalMeshLodDataNode::StaticClass(), "SetCustomSkeletonUid", { ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, SetCustomSkeletonUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
