#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMLibraryNode.h"
#include "RigVMModel/RigVMGraph.h"
#include "RigVMModel/RigVMFunctionLibrary.h"
void FASRuntimeBind_50Module::Bind_RigVMLibraryNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMLibraryNode::StaticClass(), "GetContainedGraph", { ERASE_METHOD_PTR(URigVMLibraryNode, GetContainedGraph, () const, ERASE_ARGUMENT_PACK( URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLibraryNode::StaticClass(), "GetLibrary", { ERASE_METHOD_PTR(URigVMLibraryNode, GetLibrary, () const, ERASE_ARGUMENT_PACK( URigVMFunctionLibrary* )) } );
}
