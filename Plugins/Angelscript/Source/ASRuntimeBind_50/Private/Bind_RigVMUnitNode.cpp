#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMUnitNode.h"
void FASRuntimeBind_50Module::Bind_RigVMUnitNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMUnitNode::StaticClass(), "GetMethodName", { ERASE_METHOD_PTR(URigVMUnitNode, GetMethodName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUnitNode::StaticClass(), "GetStructDefaultValue", { ERASE_METHOD_PTR(URigVMUnitNode, GetStructDefaultValue, () const, ERASE_ARGUMENT_PACK(FString )) } );
}
