#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_FieldSystemMetaDataFilter()
{
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemMetaDataFilter::StaticClass(), "SetMetaDataFilterType", { ERASE_METHOD_PTR(UFieldSystemMetaDataFilter, SetMetaDataFilterType, ( EFieldFilterType,  EFieldObjectType,  EFieldPositionType), ERASE_ARGUMENT_PACK( UFieldSystemMetaDataFilter* )) } );
}
