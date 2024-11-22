#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/VectorFieldComponent.h"
void FASRuntimeBind_10Module::Bind_VectorFieldComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UVectorFieldComponent::StaticClass(), "SetIntensity", { ERASE_METHOD_PTR(UVectorFieldComponent, SetIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
}
