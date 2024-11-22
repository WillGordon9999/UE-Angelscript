#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "ConstantQ.h"
void FASRuntimeBind_60Module::Bind_ConstantQAnalyzer()
{
			FAngelscriptBinds::AddFunctionEntry(UConstantQAnalyzer::StaticClass(), "GetCenterFrequencies", { ERASE_METHOD_PTR(UConstantQAnalyzer, GetCenterFrequencies, ( TArray<float>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UConstantQAnalyzer::StaticClass(), "GetNumCenterFrequencies", { ERASE_METHOD_PTR(UConstantQAnalyzer, GetNumCenterFrequencies, () const, ERASE_ARGUMENT_PACK( const int32 )) } );
}
