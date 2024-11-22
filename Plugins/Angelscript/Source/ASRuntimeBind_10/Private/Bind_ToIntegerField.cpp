#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_ToIntegerField()
{
			FAngelscriptBinds::AddFunctionEntry(UToIntegerField::StaticClass(), "SetToIntegerField", { ERASE_METHOD_PTR(UToIntegerField, SetToIntegerField, ( const UFieldNodeFloat*), ERASE_ARGUMENT_PACK( UToIntegerField* )) } );
}
