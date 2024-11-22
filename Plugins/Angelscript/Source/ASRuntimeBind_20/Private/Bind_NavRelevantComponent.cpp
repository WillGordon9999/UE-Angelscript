#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavRelevantComponent.h"
void FASRuntimeBind_20Module::Bind_NavRelevantComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UNavRelevantComponent::StaticClass(), "SetNavigationRelevancy", { ERASE_METHOD_PTR(UNavRelevantComponent, SetNavigationRelevancy, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
