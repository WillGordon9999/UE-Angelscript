#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_UniformScalar()
{
			FAngelscriptBinds::AddFunctionEntry(UUniformScalar::StaticClass(), "SetUniformScalar", { ERASE_METHOD_PTR(UUniformScalar, SetUniformScalar, ( float), ERASE_ARGUMENT_PACK( UUniformScalar* )) } );
}
