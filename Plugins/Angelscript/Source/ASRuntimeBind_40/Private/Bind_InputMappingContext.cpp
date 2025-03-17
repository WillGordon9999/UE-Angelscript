#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "InputMappingContext.h"
#include "EnhancedActionKeyMapping.h"
#include "InputAction.h"
#include "InputCoreTypes.h"
void FASRuntimeBind_40Module::Bind_InputMappingContext()
{
			FAngelscriptBinds::AddFunctionEntry(UInputMappingContext::StaticClass(), "MapKey", { ERASE_METHOD_PTR(UInputMappingContext, MapKey, (const UInputAction*,  FKey), ERASE_ARGUMENT_PACK(FEnhancedActionKeyMapping& )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputMappingContext::StaticClass(), "UnmapAll", { ERASE_METHOD_PTR(UInputMappingContext, UnmapAll, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputMappingContext::StaticClass(), "UnmapAllKeysFromAction", { ERASE_METHOD_PTR(UInputMappingContext, UnmapAllKeysFromAction, (const UInputAction*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputMappingContext::StaticClass(), "UnmapKey", { ERASE_METHOD_PTR(UInputMappingContext, UnmapKey, (const UInputAction*,  FKey), ERASE_ARGUMENT_PACK(void )) } );
}
