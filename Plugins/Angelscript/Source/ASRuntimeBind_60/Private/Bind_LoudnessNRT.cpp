#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "LoudnessNRT.h"
void FASRuntimeBind_60Module::Bind_LoudnessNRT()
{
			FAngelscriptBinds::AddFunctionEntry(ULoudnessNRT::StaticClass(), "GetChannelLoudnessAtTime", { ERASE_METHOD_PTR(ULoudnessNRT, GetChannelLoudnessAtTime, (const float,  const int32,  float&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULoudnessNRT::StaticClass(), "GetLoudnessAtTime", { ERASE_METHOD_PTR(ULoudnessNRT, GetLoudnessAtTime, (const float,  float&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULoudnessNRT::StaticClass(), "GetNormalizedChannelLoudnessAtTime", { ERASE_METHOD_PTR(ULoudnessNRT, GetNormalizedChannelLoudnessAtTime, (const float,  const int32,  float&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULoudnessNRT::StaticClass(), "GetNormalizedLoudnessAtTime", { ERASE_METHOD_PTR(ULoudnessNRT, GetNormalizedLoudnessAtTime, (const float,  float&) const, ERASE_ARGUMENT_PACK(void )) } );
}
