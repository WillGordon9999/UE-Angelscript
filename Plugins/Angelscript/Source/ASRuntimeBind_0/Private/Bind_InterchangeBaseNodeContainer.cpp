#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
void FASRuntimeBind_0Module::Bind_InterchangeBaseNodeContainer()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "AddNode", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, AddNode, (UInterchangeBaseNode*), ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "ComputeChildrenCache", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ComputeChildrenCache, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetFactoryNode", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetFactoryNode, (const FString&) const, ERASE_ARGUMENT_PACK( UInterchangeFactoryBaseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetNode", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNode, (const FString&) const, ERASE_ARGUMENT_PACK( const UInterchangeBaseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetNodeChildren", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildren, (const FString&,  int32), ERASE_ARGUMENT_PACK( UInterchangeBaseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetNodeChildrenCount", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildrenCount, (const FString&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetNodeChildrenUids", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildrenUids, (const FString&) const, ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetNodes", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodes, (const UClass*,  TArray<FString>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "GetRoots", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetRoots, (TArray<FString>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "IsNodeUidValid", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, IsNodeUidValid, (const FString&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "LoadFromFile", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, LoadFromFile, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "ReplaceNode", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ReplaceNode, (const FString&,  UInterchangeFactoryBaseNode*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "Reset", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, Reset, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "ResetChildrenCache", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ResetChildrenCache, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "SaveToFile", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, SaveToFile, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNodeContainer::StaticClass(), "SetNodeParentUid", { ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, SetNodeParentUid, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
}
