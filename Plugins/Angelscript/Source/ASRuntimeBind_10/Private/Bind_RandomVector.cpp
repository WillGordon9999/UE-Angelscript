#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_RandomVector()
{
			FAngelscriptBinds::AddFunctionEntry(URandomVector::StaticClass(), "SetRandomVector", { ERASE_METHOD_PTR(URandomVector, SetRandomVector, ( float), ERASE_ARGUMENT_PACK( URandomVector* )) } );
}
