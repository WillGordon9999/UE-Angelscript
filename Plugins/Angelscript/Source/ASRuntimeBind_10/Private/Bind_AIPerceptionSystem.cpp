#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Perception/AIPerceptionSystem.h"
void FASRuntimeBind_10Module::Bind_AIPerceptionSystem()
{
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionSystem::StaticClass(), "ReportEvent", { ERASE_METHOD_PTR(UAIPerceptionSystem, ReportEvent, (UAISenseEvent*), ERASE_ARGUMENT_PACK( void )) } );
}
