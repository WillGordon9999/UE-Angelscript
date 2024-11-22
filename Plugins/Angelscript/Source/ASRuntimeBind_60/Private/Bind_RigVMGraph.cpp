#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMGraph.h"
void FASRuntimeBind_60Module::Bind_RigVMGraph()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "ContainsLink", { ERASE_METHOD_PTR(URigVMGraph, ContainsLink, (const FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "FindLink", { ERASE_METHOD_PTR(URigVMGraph, FindLink, (const FString&) const, ERASE_ARGUMENT_PACK(URigVMLink* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "FindNode", { ERASE_METHOD_PTR(URigVMGraph, FindNode, (const FString&) const, ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "FindNodeByName", { ERASE_METHOD_PTR(URigVMGraph, FindNodeByName, (const FName&) const, ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "FindPin", { ERASE_METHOD_PTR(URigVMGraph, FindPin, (const FString&) const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetContainedGraphs", { ERASE_METHOD_PTR(URigVMGraph, GetContainedGraphs, (bool) const, ERASE_ARGUMENT_PACK(TArray<URigVMGraph*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetDefaultFunctionLibrary", { ERASE_METHOD_PTR(URigVMGraph, GetDefaultFunctionLibrary, () const, ERASE_ARGUMENT_PACK( URigVMFunctionLibrary* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetEntryNode", { ERASE_METHOD_PTR(URigVMGraph, GetEntryNode, () const, ERASE_ARGUMENT_PACK(URigVMFunctionEntryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetEventNames", { ERASE_METHOD_PTR(URigVMGraph, GetEventNames, () const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetGraphDepth", { ERASE_METHOD_PTR(URigVMGraph, GetGraphDepth, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetGraphName", { ERASE_METHOD_PTR(URigVMGraph, GetGraphName, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetInputArguments", { ERASE_METHOD_PTR(URigVMGraph, GetInputArguments, () const, ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetLinks", { ERASE_METHOD_PTR(URigVMGraph, GetLinks, () const, ERASE_ARGUMENT_PACK(const TArray<URigVMLink*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetLocalVariables", { ERASE_METHOD_PTR(URigVMGraph, GetLocalVariables, (bool) const, ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetNodePath", { ERASE_METHOD_PTR(URigVMGraph, GetNodePath, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetNodes", { ERASE_METHOD_PTR(URigVMGraph, GetNodes, () const, ERASE_ARGUMENT_PACK(const TArray<URigVMNode*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetOutputArguments", { ERASE_METHOD_PTR(URigVMGraph, GetOutputArguments, () const, ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetParentGraph", { ERASE_METHOD_PTR(URigVMGraph, GetParentGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetReturnNode", { ERASE_METHOD_PTR(URigVMGraph, GetReturnNode, () const, ERASE_ARGUMENT_PACK(URigVMFunctionReturnNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetRootGraph", { ERASE_METHOD_PTR(URigVMGraph, GetRootGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetSelectNodes", { ERASE_METHOD_PTR(URigVMGraph, GetSelectNodes, () const, ERASE_ARGUMENT_PACK(const TArray<FName>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "GetVariableDescriptions", { ERASE_METHOD_PTR(URigVMGraph, GetVariableDescriptions, () const, ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "IsNodeSelected", { ERASE_METHOD_PTR(URigVMGraph, IsNodeSelected, (const FName&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "IsRootGraph", { ERASE_METHOD_PTR(URigVMGraph, IsRootGraph, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "IsTopLevelGraph", { ERASE_METHOD_PTR(URigVMGraph, IsTopLevelGraph, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMGraph::StaticClass(), "SetDefaultFunctionLibrary", { ERASE_METHOD_PTR(URigVMGraph, SetDefaultFunctionLibrary, (URigVMFunctionLibrary*), ERASE_ARGUMENT_PACK(void )) } );
}
