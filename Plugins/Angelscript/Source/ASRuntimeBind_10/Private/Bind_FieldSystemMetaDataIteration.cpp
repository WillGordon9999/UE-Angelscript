#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_FieldSystemMetaDataIteration()
{
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemMetaDataIteration::StaticClass(), "SetMetaDataIteration", { ERASE_METHOD_PTR(UFieldSystemMetaDataIteration, SetMetaDataIteration, ( int), ERASE_ARGUMENT_PACK( UFieldSystemMetaDataIteration* )) } );
}
