#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_UniformVector()
{
			FAngelscriptBinds::AddFunctionEntry(UUniformVector::StaticClass(), "SetUniformVector", { ERASE_METHOD_PTR(UUniformVector, SetUniformVector, ( float,  FVector), ERASE_ARGUMENT_PACK( UUniformVector* )) } );
}
