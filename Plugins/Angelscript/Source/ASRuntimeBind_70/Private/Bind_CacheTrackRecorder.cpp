#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Recorder/CacheTrackRecorder.h"
void FASRuntimeBind_70Module::Bind_CacheTrackRecorder()
{
			FAngelscriptBinds::AddFunctionEntry(UCacheTrackRecorder::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(UCacheTrackRecorder, GetSequence, () const, ERASE_ARGUMENT_PACK(ULevelSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCacheTrackRecorder::StaticClass(), "GetState", { ERASE_METHOD_PTR(UCacheTrackRecorder, GetState, () const, ERASE_ARGUMENT_PACK(ECacheTrackRecorderState )) } );
}
