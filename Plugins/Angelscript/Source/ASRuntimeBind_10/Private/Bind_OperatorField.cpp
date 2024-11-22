#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_OperatorField()
{
			FAngelscriptBinds::AddFunctionEntry(UOperatorField::StaticClass(), "SetOperatorField", { ERASE_METHOD_PTR(UOperatorField, SetOperatorField, ( float,  const UFieldNodeBase*,  const UFieldNodeBase*,  EFieldOperationType), ERASE_ARGUMENT_PACK( UOperatorField* )) } );
}
