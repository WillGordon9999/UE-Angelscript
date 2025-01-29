#include "ASRuntimeBind_110Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeImportTestPlan.h"
void FASRuntimeBind_110Module::Bind_InterchangeImportTestPlan()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeImportTestPlan::StaticClass(), "RunThisTest", { ERASE_METHOD_PTR(UInterchangeImportTestPlan, RunThisTest, (), ERASE_ARGUMENT_PACK(void )) } );
}
