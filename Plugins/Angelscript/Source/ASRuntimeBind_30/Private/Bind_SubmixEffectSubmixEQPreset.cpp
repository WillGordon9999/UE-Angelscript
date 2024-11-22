#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/AudioMixerSubmixEffectEQ.h"
void FASRuntimeBind_30Module::Bind_SubmixEffectSubmixEQPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectSubmixEQPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectSubmixEQPreset, SetSettings, (const FSubmixEffectSubmixEQSettings&), ERASE_ARGUMENT_PACK( void )) } );
}
