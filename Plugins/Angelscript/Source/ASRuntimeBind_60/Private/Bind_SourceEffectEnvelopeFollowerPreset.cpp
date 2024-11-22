#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectEnvelopeFollower.h"
void FASRuntimeBind_60Module::Bind_SourceEffectEnvelopeFollowerPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectEnvelopeFollowerPreset::StaticClass(), "RegisterEnvelopeFollowerListener", { ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, RegisterEnvelopeFollowerListener, (UEnvelopeFollowerListener*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectEnvelopeFollowerPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, SetSettings, (const FSourceEffectEnvelopeFollowerSettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectEnvelopeFollowerPreset::StaticClass(), "UnregisterEnvelopeFollowerListener", { ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, UnregisterEnvelopeFollowerListener, (UEnvelopeFollowerListener*), ERASE_ARGUMENT_PACK(void )) } );
}
