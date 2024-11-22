#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeAnimationTrackSetNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeTransformAnimationTrackNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTransformAnimationTrackNode::StaticClass(), "GetCustomUsedChannels", { ERASE_METHOD_PTR(UInterchangeTransformAnimationTrackNode, GetCustomUsedChannels, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTransformAnimationTrackNode::StaticClass(), "SetCustomUsedChannels", { ERASE_METHOD_PTR(UInterchangeTransformAnimationTrackNode, SetCustomUsedChannels, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
}
