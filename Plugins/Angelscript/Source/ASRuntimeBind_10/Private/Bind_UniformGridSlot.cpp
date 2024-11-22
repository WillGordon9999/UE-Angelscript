#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/UniformGridSlot.h"
void FASRuntimeBind_10Module::Bind_UniformGridSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UUniformGridSlot::StaticClass(), "SetColumn", { ERASE_METHOD_PTR(UUniformGridSlot, SetColumn, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UUniformGridSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridSlot::StaticClass(), "SetRow", { ERASE_METHOD_PTR(UUniformGridSlot, SetRow, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UUniformGridSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
