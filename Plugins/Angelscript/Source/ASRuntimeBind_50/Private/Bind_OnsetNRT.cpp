#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "OnsetNRT.h"
void FASRuntimeBind_50Module::Bind_OnsetNRT()
{
			FAngelscriptBinds::AddFunctionEntry(UOnsetNRT::StaticClass(), "GetChannelOnsetsBetweenTimes", { ERASE_METHOD_PTR(UOnsetNRT, GetChannelOnsetsBetweenTimes, (const float,  const float,  const int32,  TArray<float>&,  TArray<float>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UOnsetNRT::StaticClass(), "GetNormalizedChannelOnsetsBetweenTimes", { ERASE_METHOD_PTR(UOnsetNRT, GetNormalizedChannelOnsetsBetweenTimes, (const float,  const float,  const int32,  TArray<float>&,  TArray<float>&) const, ERASE_ARGUMENT_PACK(void )) } );
}
