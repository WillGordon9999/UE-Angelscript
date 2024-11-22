#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeVariantSetNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeVariantSetNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "AddCustomDependencyUid", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, AddCustomDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "GetCustomDependencyUid", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "GetCustomDependencyUidCount", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUidCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "GetCustomDependencyUids", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "GetCustomDisplayText", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDisplayText, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "GetCustomVariantsPayloadKey", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomVariantsPayloadKey, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "RemoveCustomDependencyUid", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, RemoveCustomDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "SetCustomDisplayText", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, SetCustomDisplayText, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeVariantSetNode::StaticClass(), "SetCustomVariantsPayloadKey", { ERASE_METHOD_PTR(UInterchangeVariantSetNode, SetCustomVariantsPayloadKey, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
