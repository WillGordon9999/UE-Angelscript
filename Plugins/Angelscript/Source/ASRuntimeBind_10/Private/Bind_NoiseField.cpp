#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_NoiseField()
{
			FAngelscriptBinds::AddFunctionEntry(UNoiseField::StaticClass(), "SetNoiseField", { ERASE_METHOD_PTR(UNoiseField, SetNoiseField, ( float,  float,   FTransform), ERASE_ARGUMENT_PACK( UNoiseField* )) } );
}
