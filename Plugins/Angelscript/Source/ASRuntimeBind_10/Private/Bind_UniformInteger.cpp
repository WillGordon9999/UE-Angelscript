#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_UniformInteger()
{
			FAngelscriptBinds::AddFunctionEntry(UUniformInteger::StaticClass(), "SetUniformInteger", { ERASE_METHOD_PTR(UUniformInteger, SetUniformInteger, ( int32), ERASE_ARGUMENT_PACK( UUniformInteger* )) } );
}
