#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_BoxFalloff()
{
			FAngelscriptBinds::AddFunctionEntry(UBoxFalloff::StaticClass(), "SetBoxFalloff", { ERASE_METHOD_PTR(UBoxFalloff, SetBoxFalloff, (  float,   float,   float,   float,   FTransform,   EFieldFalloffType), ERASE_ARGUMENT_PACK( UBoxFalloff* )) } );
}
