#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SynthComponents/SynthComponentToneGenerator.h"
void FASRuntimeBind_70Module::Bind_SynthComponentToneGenerator()
{
			FAngelscriptBinds::AddFunctionEntry(USynthComponentToneGenerator::StaticClass(), "SetFrequency", { ERASE_METHOD_PTR(USynthComponentToneGenerator, SetFrequency, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthComponentToneGenerator::StaticClass(), "SetVolume", { ERASE_METHOD_PTR(USynthComponentToneGenerator, SetVolume, (float), ERASE_ARGUMENT_PACK(void )) } );
}
