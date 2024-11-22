#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/InvalidationBox.h"
void FASRuntimeBind_10Module::Bind_InvalidationBox()
{
			FAngelscriptBinds::AddFunctionEntry(UInvalidationBox::StaticClass(), "GetCanCache", { ERASE_METHOD_PTR(UInvalidationBox, GetCanCache, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInvalidationBox::StaticClass(), "SetCanCache", { ERASE_METHOD_PTR(UInvalidationBox, SetCanCache, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
