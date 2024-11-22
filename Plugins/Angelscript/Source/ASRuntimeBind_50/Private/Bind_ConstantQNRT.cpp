#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "ConstantQNRT.h"
void FASRuntimeBind_50Module::Bind_ConstantQNRT()
{
			FAngelscriptBinds::AddFunctionEntry(UConstantQNRT::StaticClass(), "GetChannelConstantQAtTime", { ERASE_METHOD_PTR(UConstantQNRT, GetChannelConstantQAtTime, (const float,  const int32,  TArray<float>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UConstantQNRT::StaticClass(), "GetNormalizedChannelConstantQAtTime", { ERASE_METHOD_PTR(UConstantQNRT, GetNormalizedChannelConstantQAtTime, (const float,  const int32,  TArray<float>&) const, ERASE_ARGUMENT_PACK(void )) } );
}
