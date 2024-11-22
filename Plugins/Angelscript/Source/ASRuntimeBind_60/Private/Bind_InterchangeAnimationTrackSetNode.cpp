#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeAnimationTrackSetNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeAnimationTrackSetNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "AddCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, AddCustomAnimationTrackUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "GetCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "GetCustomAnimationTrackUidCount", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUidCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "GetCustomAnimationTrackUids", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "GetCustomFrameRate", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomFrameRate, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "RemoveCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, RemoveCustomAnimationTrackUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackSetNode::StaticClass(), "SetCustomFrameRate", { ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, SetCustomFrameRate, (const float&), ERASE_ARGUMENT_PACK(bool )) } );
}
