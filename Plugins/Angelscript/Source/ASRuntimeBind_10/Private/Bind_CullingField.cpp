#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_CullingField()
{
			FAngelscriptBinds::AddFunctionEntry(UCullingField::StaticClass(), "SetCullingField", { ERASE_METHOD_PTR(UCullingField, SetCullingField, ( const UFieldNodeBase*,  const UFieldNodeBase*,  EFieldCullingOperationType), ERASE_ARGUMENT_PACK( UCullingField* )) } );
}
