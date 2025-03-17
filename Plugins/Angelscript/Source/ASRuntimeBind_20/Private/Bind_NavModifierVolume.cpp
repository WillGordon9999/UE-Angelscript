#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavModifierVolume.h"
#include "NavAreas/NavArea.h"
void FASRuntimeBind_20Module::Bind_NavModifierVolume()
{
			FAngelscriptBinds::AddFunctionEntry(ANavModifierVolume::StaticClass(), "SetAreaClass", { ERASE_METHOD_PTR(ANavModifierVolume, SetAreaClass, (TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK( void )) } );
}
