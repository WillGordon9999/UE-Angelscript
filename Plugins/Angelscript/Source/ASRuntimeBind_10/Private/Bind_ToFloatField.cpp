#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_ToFloatField()
{
			FAngelscriptBinds::AddFunctionEntry(UToFloatField::StaticClass(), "SetToFloatField", { ERASE_METHOD_PTR(UToFloatField, SetToFloatField, ( const UFieldNodeInt*), ERASE_ARGUMENT_PACK( UToFloatField* )) } );
}
