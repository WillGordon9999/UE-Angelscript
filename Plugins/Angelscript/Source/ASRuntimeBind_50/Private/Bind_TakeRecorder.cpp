#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "Recorder/TakeRecorder.h"
#include "LevelSequence.h"
void FASRuntimeBind_50Module::Bind_TakeRecorder()
{
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetCountdownSeconds", { ERASE_METHOD_PTR(UTakeRecorder, GetCountdownSeconds, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(UTakeRecorder, GetSequence, () const, ERASE_ARGUMENT_PACK(ULevelSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetState", { ERASE_METHOD_PTR(UTakeRecorder, GetState, () const, ERASE_ARGUMENT_PACK(ETakeRecorderState )) } );
}
