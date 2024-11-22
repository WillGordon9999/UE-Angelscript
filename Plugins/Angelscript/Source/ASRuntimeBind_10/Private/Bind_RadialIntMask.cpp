#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_RadialIntMask()
{
			FAngelscriptBinds::AddFunctionEntry(URadialIntMask::StaticClass(), "SetRadialIntMask", { ERASE_METHOD_PTR(URadialIntMask, SetRadialIntMask, ( float,  FVector,  int32,  int32,  ESetMaskConditionType), ERASE_ARGUMENT_PACK( URadialIntMask* )) } );
}
