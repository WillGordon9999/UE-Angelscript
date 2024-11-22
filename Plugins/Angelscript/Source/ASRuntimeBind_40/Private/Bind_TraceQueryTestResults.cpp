#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "TraceQueryTestResults.h"
void FASRuntimeBind_40Module::Bind_TraceQueryTestResults()
{
			FAngelscriptBinds::AddFunctionEntry(UTraceQueryTestResults::StaticClass(), "ToString", { ERASE_METHOD_PTR(UTraceQueryTestResults, ToString, (), ERASE_ARGUMENT_PACK(FString )) } );
}
