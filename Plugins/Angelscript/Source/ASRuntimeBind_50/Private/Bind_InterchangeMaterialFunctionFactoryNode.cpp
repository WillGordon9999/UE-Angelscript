#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMaterialFactoryNode.h"
void FASRuntimeBind_50Module::Bind_InterchangeMaterialFunctionFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionFactoryNode::StaticClass(), "GetInputConnection", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionFactoryNode, GetInputConnection, (const FString&,  FString&,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK( class UClass* )) } );
}
