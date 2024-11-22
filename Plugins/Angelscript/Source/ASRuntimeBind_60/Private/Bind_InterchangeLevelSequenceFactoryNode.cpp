#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLevelSequenceFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeLevelSequenceFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "AddCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, AddCustomAnimationTrackUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "GetCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "GetCustomAnimationTrackUidCount", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUidCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "GetCustomAnimationTrackUids", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "GetCustomFrameRate", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomFrameRate, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK( class UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "RemoveCustomAnimationTrackUid", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, RemoveCustomAnimationTrackUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLevelSequenceFactoryNode::StaticClass(), "SetCustomFrameRate", { ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, SetCustomFrameRate, (const float&), ERASE_ARGUMENT_PACK(bool )) } );
}
