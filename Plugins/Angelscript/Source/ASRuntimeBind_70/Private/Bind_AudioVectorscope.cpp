#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "AudioVectorscopeUMG.h"
void FASRuntimeBind_70Module::Bind_AudioVectorscope()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioVectorscope::StaticClass(), "StartProcessing", { ERASE_METHOD_PTR(UAudioVectorscope, StartProcessing, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioVectorscope::StaticClass(), "StopProcessing", { ERASE_METHOD_PTR(UAudioVectorscope, StopProcessing, (), ERASE_ARGUMENT_PACK(void )) } );
}