#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WindDirectionalSourceComponent.h"
void FASRuntimeBind_10Module::Bind_WindDirectionalSourceComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetMaximumGustAmount", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMaximumGustAmount, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetMinimumGustAmount", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMinimumGustAmount, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetRadius", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetSpeed", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetSpeed, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetStrength", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetStrength, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindDirectionalSourceComponent::StaticClass(), "SetWindType", { ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetWindType, (EWindSourceType), ERASE_ARGUMENT_PACK( void )) } );
}
