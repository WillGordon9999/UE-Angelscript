#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMLink.h"
#include "RigVMModel/RigVMGraph.h"
#include "RigVMModel/RigVMPin.h"
#include "RigVMModel/RigVMNode.h"
void FASRuntimeBind_50Module::Bind_RigVMLink()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetGraph", { ERASE_METHOD_PTR(URigVMLink, GetGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetGraphDepth", { ERASE_METHOD_PTR(URigVMLink, GetGraphDepth, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetLinkIndex", { ERASE_METHOD_PTR(URigVMLink, GetLinkIndex, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetOppositePin", { ERASE_METHOD_PTR(URigVMLink, GetOppositePin, (const URigVMPin*) const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetPinPathRepresentation", { ERASE_METHOD_PTR(URigVMLink, GetPinPathRepresentation, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetSourceNode", { ERASE_METHOD_PTR(URigVMLink, GetSourceNode, () const, ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetSourcePin", { ERASE_METHOD_PTR(URigVMLink, GetSourcePin, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetTargetNode", { ERASE_METHOD_PTR(URigVMLink, GetTargetNode, () const, ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMLink::StaticClass(), "GetTargetPin", { ERASE_METHOD_PTR(URigVMLink, GetTargetPin, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
}
