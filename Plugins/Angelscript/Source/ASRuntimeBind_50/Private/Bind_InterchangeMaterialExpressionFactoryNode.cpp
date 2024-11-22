#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMaterialFactoryNode.h"
void FASRuntimeBind_50Module::Bind_InterchangeMaterialExpressionFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialExpressionFactoryNode::StaticClass(), "GetCustomExpressionClassName", { ERASE_METHOD_PTR(UInterchangeMaterialExpressionFactoryNode, GetCustomExpressionClassName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialExpressionFactoryNode::StaticClass(), "SetCustomExpressionClassName", { ERASE_METHOD_PTR(UInterchangeMaterialExpressionFactoryNode, SetCustomExpressionClassName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
