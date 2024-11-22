#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_FieldSystemMetaDataProcessingResolution()
{
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemMetaDataProcessingResolution::StaticClass(), "SetMetaDataaProcessingResolutionType", { ERASE_METHOD_PTR(UFieldSystemMetaDataProcessingResolution, SetMetaDataaProcessingResolutionType, (EFieldResolutionType), ERASE_ARGUMENT_PACK( UFieldSystemMetaDataProcessingResolution* )) } );
}
