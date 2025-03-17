#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "ClothingSimulationInteractorNv.h"
void FASRuntimeBind_40Module::Bind_ClothingSimulationInteractorNv()
{
			FAngelscriptBinds::AddFunctionEntry(UClothingSimulationInteractorNv::StaticClass(), "SetAnimDriveDamperStiffness", { ERASE_METHOD_PTR(UClothingSimulationInteractorNv, SetAnimDriveDamperStiffness, (float), ERASE_ARGUMENT_PACK( void )) } );
}
