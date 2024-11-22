#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Chaos/ChaosSolverActor.h"
void FASRuntimeBind_10Module::Bind_ChaosSolverActor()
{
			FAngelscriptBinds::AddFunctionEntry(AChaosSolverActor::StaticClass(), "SetAsCurrentWorldSolver", { ERASE_METHOD_PTR(AChaosSolverActor, SetAsCurrentWorldSolver, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AChaosSolverActor::StaticClass(), "SetSolverActive", { ERASE_METHOD_PTR(AChaosSolverActor, SetSolverActive, (bool), ERASE_ARGUMENT_PACK(  void )) } );
}
