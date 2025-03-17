#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeVariantSetNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeSceneVariantSetsNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsNode::StaticClass(), "AddCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, AddCustomVariantSetUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsNode::StaticClass(), "GetCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsNode::StaticClass(), "GetCustomVariantSetUidCount", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUidCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsNode::StaticClass(), "GetCustomVariantSetUids", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsNode::StaticClass(), "RemoveCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, RemoveCustomVariantSetUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
