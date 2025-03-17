#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMVariableNode.h"
#include "UObject/NoExportTypes.h"
#include "RigVMModel/RigVMVariableDescription.h"
void FASRuntimeBind_50Module::Bind_RigVMVariableNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "GetCPPType", { ERASE_METHOD_PTR(URigVMVariableNode, GetCPPType, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "GetCPPTypeObject", { ERASE_METHOD_PTR(URigVMVariableNode, GetCPPTypeObject, () const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "GetDefaultValue", { ERASE_METHOD_PTR(URigVMVariableNode, GetDefaultValue, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "GetVariableDescription", { ERASE_METHOD_PTR(URigVMVariableNode, GetVariableDescription, () const, ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "GetVariableName", { ERASE_METHOD_PTR(URigVMVariableNode, GetVariableName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "IsExternalVariable", { ERASE_METHOD_PTR(URigVMVariableNode, IsExternalVariable, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "IsGetter", { ERASE_METHOD_PTR(URigVMVariableNode, IsGetter, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "IsInputArgument", { ERASE_METHOD_PTR(URigVMVariableNode, IsInputArgument, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMVariableNode::StaticClass(), "IsLocalVariable", { ERASE_METHOD_PTR(URigVMVariableNode, IsLocalVariable, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
