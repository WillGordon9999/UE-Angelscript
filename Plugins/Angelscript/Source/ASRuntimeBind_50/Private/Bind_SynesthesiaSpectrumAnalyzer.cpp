#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "SynesthesiaSpectrumAnalysis.h"
void FASRuntimeBind_50Module::Bind_SynesthesiaSpectrumAnalyzer()
{
			FAngelscriptBinds::AddFunctionEntry(USynesthesiaSpectrumAnalyzer::StaticClass(), "GetCenterFrequencies", { ERASE_METHOD_PTR(USynesthesiaSpectrumAnalyzer, GetCenterFrequencies, ( const float,  TArray<float>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynesthesiaSpectrumAnalyzer::StaticClass(), "GetNumCenterFrequencies", { ERASE_METHOD_PTR(USynesthesiaSpectrumAnalyzer, GetNumCenterFrequencies, () const, ERASE_ARGUMENT_PACK( const int32 )) } );
}
