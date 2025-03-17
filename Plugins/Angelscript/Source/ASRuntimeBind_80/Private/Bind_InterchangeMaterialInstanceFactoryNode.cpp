#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMaterialFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeMaterialInstanceFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialInstanceFactoryNode::StaticClass(), "GetCustomInstanceClassName", { ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, GetCustomInstanceClassName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialInstanceFactoryNode::StaticClass(), "GetCustomParent", { ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, GetCustomParent, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialInstanceFactoryNode::StaticClass(), "SetCustomInstanceClassName", { ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, SetCustomInstanceClassName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialInstanceFactoryNode::StaticClass(), "SetCustomParent", { ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, SetCustomParent, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
