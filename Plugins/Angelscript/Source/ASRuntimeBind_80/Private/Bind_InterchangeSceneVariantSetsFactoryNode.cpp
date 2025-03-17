#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeSceneVariantSetsFactoryNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeSceneVariantSetsFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "AddCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, AddCustomVariantSetUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "GetCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "GetCustomVariantSetUidCount", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUidCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "GetCustomVariantSetUids", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK( class UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneVariantSetsFactoryNode::StaticClass(), "RemoveCustomVariantSetUid", { ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, RemoveCustomVariantSetUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
