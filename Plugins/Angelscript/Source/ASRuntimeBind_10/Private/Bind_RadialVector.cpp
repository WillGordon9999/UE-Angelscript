#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_RadialVector()
{
			FAngelscriptBinds::AddFunctionEntry(URadialVector::StaticClass(), "SetRadialVector", { ERASE_METHOD_PTR(URadialVector, SetRadialVector, ( float,  FVector), ERASE_ARGUMENT_PACK( URadialVector* )) } );
}
