#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMEnumNode.h"
void FASRuntimeBind_50Module::Bind_RigVMEnumNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMEnumNode::StaticClass(), "GetCPPType", { ERASE_METHOD_PTR(URigVMEnumNode, GetCPPType, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMEnumNode::StaticClass(), "GetCPPTypeObject", { ERASE_METHOD_PTR(URigVMEnumNode, GetCPPTypeObject, () const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMEnumNode::StaticClass(), "GetEnum", { ERASE_METHOD_PTR(URigVMEnumNode, GetEnum, () const, ERASE_ARGUMENT_PACK(UEnum* )) } );
}
