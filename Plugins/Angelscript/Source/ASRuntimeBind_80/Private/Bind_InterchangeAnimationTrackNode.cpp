#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeAnimationTrackSetNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeAnimationTrackNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "GetCustomActorDependencyUid", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomActorDependencyUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "GetCustomAnimationPayloadKey", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomAnimationPayloadKey, (FInterchangeAnimationPayLoadKey&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "GetCustomFrameCount", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomFrameCount, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "GetCustomPropertyTrack", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomPropertyTrack, (FName&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "SetCustomActorDependencyUid", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomActorDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "SetCustomAnimationPayloadKey", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomAnimationPayloadKey, (const FString&,  const EInterchangeAnimationPayLoadType&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "SetCustomFrameCount", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomFrameCount, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAnimationTrackNode::StaticClass(), "SetCustomPropertyTrack", { ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomPropertyTrack, (const FName&), ERASE_ARGUMENT_PACK(bool )) } );
}
