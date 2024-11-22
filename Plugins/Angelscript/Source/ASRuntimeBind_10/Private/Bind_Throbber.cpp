#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Throbber.h"
void FASRuntimeBind_10Module::Bind_Throbber()
{
			FAngelscriptBinds::AddFunctionEntry(UThrobber::StaticClass(), "SetAnimateHorizontally", { ERASE_METHOD_PTR(UThrobber, SetAnimateHorizontally, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UThrobber::StaticClass(), "SetAnimateOpacity", { ERASE_METHOD_PTR(UThrobber, SetAnimateOpacity, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UThrobber::StaticClass(), "SetAnimateVertically", { ERASE_METHOD_PTR(UThrobber, SetAnimateVertically, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UThrobber::StaticClass(), "SetNumberOfPieces", { ERASE_METHOD_PTR(UThrobber, SetNumberOfPieces, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
