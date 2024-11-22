#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "ProceduralFoliageSpawner.h"
void FASRuntimeBind_30Module::Bind_ProceduralFoliageSpawner()
{
			FAngelscriptBinds::AddFunctionEntry(UProceduralFoliageSpawner::StaticClass(), "Simulate", { ERASE_METHOD_PTR(UProceduralFoliageSpawner, Simulate, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
