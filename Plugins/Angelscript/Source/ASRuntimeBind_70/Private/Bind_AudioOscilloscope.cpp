#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "AudioOscilloscopeUMG.h"
void FASRuntimeBind_70Module::Bind_AudioOscilloscope()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioOscilloscope::StaticClass(), "StartProcessing", { ERASE_METHOD_PTR(UAudioOscilloscope, StartProcessing, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioOscilloscope::StaticClass(), "StopProcessing", { ERASE_METHOD_PTR(UAudioOscilloscope, StopProcessing, (), ERASE_ARGUMENT_PACK(void )) } );
}
