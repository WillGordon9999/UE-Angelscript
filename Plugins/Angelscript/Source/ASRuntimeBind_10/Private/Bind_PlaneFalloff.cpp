#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_PlaneFalloff()
{
			FAngelscriptBinds::AddFunctionEntry(UPlaneFalloff::StaticClass(), "SetPlaneFalloff", { ERASE_METHOD_PTR(UPlaneFalloff, SetPlaneFalloff, ( float,  float,  float,  float,  float,  FVector,  FVector,  EFieldFalloffType), ERASE_ARGUMENT_PACK( UPlaneFalloff* )) } );
}
