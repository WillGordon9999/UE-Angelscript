#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "UI/SynthKnob.h"
void FASRuntimeBind_80Module::Bind_SynthKnob()
{
			FAngelscriptBinds::AddFunctionEntry(USynthKnob::StaticClass(), "GetValue", { ERASE_METHOD_PTR(USynthKnob, GetValue, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthKnob::StaticClass(), "SetLocked", { ERASE_METHOD_PTR(USynthKnob, SetLocked, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthKnob::StaticClass(), "SetStepSize", { ERASE_METHOD_PTR(USynthKnob, SetStepSize, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthKnob::StaticClass(), "SetValue", { ERASE_METHOD_PTR(USynthKnob, SetValue, (float), ERASE_ARGUMENT_PACK(void )) } );
}
