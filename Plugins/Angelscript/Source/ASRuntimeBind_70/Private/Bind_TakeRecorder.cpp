#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Recorder/TakeRecorder.h"
void FASRuntimeBind_70Module::Bind_TakeRecorder()
{
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetCountdownSeconds", { ERASE_METHOD_PTR(UTakeRecorder, GetCountdownSeconds, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(UTakeRecorder, GetSequence, () const, ERASE_ARGUMENT_PACK(ULevelSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorder::StaticClass(), "GetState", { ERASE_METHOD_PTR(UTakeRecorder, GetState, () const, ERASE_ARGUMENT_PACK(ETakeRecorderState )) } );
}
