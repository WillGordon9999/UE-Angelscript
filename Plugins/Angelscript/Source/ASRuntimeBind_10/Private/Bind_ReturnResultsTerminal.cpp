#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
void FASRuntimeBind_10Module::Bind_ReturnResultsTerminal()
{
			FAngelscriptBinds::AddFunctionEntry(UReturnResultsTerminal::StaticClass(), "SetReturnResultsTerminal", { ERASE_METHOD_PTR(UReturnResultsTerminal, SetReturnResultsTerminal, (), ERASE_ARGUMENT_PACK( UReturnResultsTerminal* )) } );
}
