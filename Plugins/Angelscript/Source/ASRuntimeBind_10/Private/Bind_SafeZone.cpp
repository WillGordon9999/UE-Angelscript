#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SafeZone.h"
void FASRuntimeBind_10Module::Bind_SafeZone()
{
			FAngelscriptBinds::AddFunctionEntry(USafeZone::StaticClass(), "SetSidesToPad", { ERASE_METHOD_PTR(USafeZone, SetSidesToPad, (bool,  bool,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
