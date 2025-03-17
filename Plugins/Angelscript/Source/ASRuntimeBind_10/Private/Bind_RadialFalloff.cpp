#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_RadialFalloff()
{
			FAngelscriptBinds::AddFunctionEntry(URadialFalloff::StaticClass(), "SetRadialFalloff", { ERASE_METHOD_PTR(URadialFalloff, SetRadialFalloff, ( float,  float,  float,  float,  float,  FVector,  EFieldFalloffType), ERASE_ARGUMENT_PACK( URadialFalloff* )) } );
}
