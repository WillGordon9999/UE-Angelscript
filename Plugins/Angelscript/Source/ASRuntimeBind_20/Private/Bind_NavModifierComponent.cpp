#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavModifierComponent.h"
void FASRuntimeBind_20Module::Bind_NavModifierComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UNavModifierComponent::StaticClass(), "SetAreaClass", { ERASE_METHOD_PTR(UNavModifierComponent, SetAreaClass, (TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK( void )) } );
}
