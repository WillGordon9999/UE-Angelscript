#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_0Module::Bind_InterchangeFactoryBaseNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "AddFactoryDependencyUid", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, AddFactoryDependencyUid, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetCustomReferenceObject", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetCustomReferenceObject, (FSoftObjectPath&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetCustomSubPath", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetCustomSubPath, (FString&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetFactoryDependencies", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependencies, (TArray<FString>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetFactoryDependenciesCount", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependenciesCount, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetFactoryDependency", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependency, (const int32,  FString&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "GetReimportStrategyFlags", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetReimportStrategyFlags, () const, ERASE_ARGUMENT_PACK( EReimportStrategyFlags )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "RemoveFactoryDependencyUid", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, RemoveFactoryDependencyUid, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "SetCustomReferenceObject", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetCustomReferenceObject, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "SetCustomSubPath", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetCustomSubPath, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "SetForceNodeReimport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetForceNodeReimport, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "SetReimportStrategyFlags", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetReimportStrategyFlags, (const EReimportStrategyFlags&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "SetSkipNodeImport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetSkipNodeImport, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "ShouldForceNodeReimport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, ShouldForceNodeReimport, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "ShouldSkipNodeImport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, ShouldSkipNodeImport, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "UnsetForceNodeReimport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, UnsetForceNodeReimport, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFactoryBaseNode::StaticClass(), "UnsetSkipNodeImport", { ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, UnsetSkipNodeImport, (), ERASE_ARGUMENT_PACK( bool )) } );
}
