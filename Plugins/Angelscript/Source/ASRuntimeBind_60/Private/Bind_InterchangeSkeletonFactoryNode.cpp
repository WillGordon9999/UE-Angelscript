#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeSkeletonFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeSkeletonFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "GetCustomRootJointUid", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomRootJointUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "GetCustomSkeletalMeshFactoryNodeUid", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomSkeletalMeshFactoryNodeUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "GetCustomUseTimeZeroForBindPose", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomUseTimeZeroForBindPose, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK( class UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "InitializeSkeletonNode", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, InitializeSkeletonNode, (const FString&,  const FString&,  const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "SetCustomRootJointUid", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomRootJointUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "SetCustomSkeletalMeshFactoryNodeUid", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomSkeletalMeshFactoryNodeUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSkeletonFactoryNode::StaticClass(), "SetCustomUseTimeZeroForBindPose", { ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomUseTimeZeroForBindPose, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
}
