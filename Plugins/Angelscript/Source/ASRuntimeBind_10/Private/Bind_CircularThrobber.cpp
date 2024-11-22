#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/CircularThrobber.h"
void FASRuntimeBind_10Module::Bind_CircularThrobber()
{
			FAngelscriptBinds::AddFunctionEntry(UCircularThrobber::StaticClass(), "SetNumberOfPieces", { ERASE_METHOD_PTR(UCircularThrobber, SetNumberOfPieces, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCircularThrobber::StaticClass(), "SetPeriod", { ERASE_METHOD_PTR(UCircularThrobber, SetPeriod, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCircularThrobber::StaticClass(), "SetRadius", { ERASE_METHOD_PTR(UCircularThrobber, SetRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
}
