#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMFunctionReferenceNode.h"
void FASRuntimeBind_60Module::Bind_RigVMFunctionReferenceNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionReferenceNode::StaticClass(), "GetReferencedFunctionHeader_ForBlueprint", { ERASE_METHOD_PTR(URigVMFunctionReferenceNode, GetReferencedFunctionHeader_ForBlueprint, () const, ERASE_ARGUMENT_PACK(FRigVMGraphFunctionHeader )) } );
}
