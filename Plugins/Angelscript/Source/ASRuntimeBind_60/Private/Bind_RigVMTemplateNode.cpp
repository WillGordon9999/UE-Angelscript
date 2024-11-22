#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMTemplateNode.h"
void FASRuntimeBind_60Module::Bind_RigVMTemplateNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMTemplateNode::StaticClass(), "GetNotation", { ERASE_METHOD_PTR(URigVMTemplateNode, GetNotation, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMTemplateNode::StaticClass(), "GetScriptStruct", { ERASE_METHOD_PTR(URigVMTemplateNode, GetScriptStruct, () const, ERASE_ARGUMENT_PACK( UScriptStruct* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMTemplateNode::StaticClass(), "IsFullyUnresolved", { ERASE_METHOD_PTR(URigVMTemplateNode, IsFullyUnresolved, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMTemplateNode::StaticClass(), "IsResolved", { ERASE_METHOD_PTR(URigVMTemplateNode, IsResolved, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMTemplateNode::StaticClass(), "IsSingleton", { ERASE_METHOD_PTR(URigVMTemplateNode, IsSingleton, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
