#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMInvokeEntryNode.h"
void FASRuntimeBind_60Module::Bind_RigVMInvokeEntryNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMInvokeEntryNode::StaticClass(), "GetEntryName", { ERASE_METHOD_PTR(URigVMInvokeEntryNode, GetEntryName, () const, ERASE_ARGUMENT_PACK(FName )) } );
}
