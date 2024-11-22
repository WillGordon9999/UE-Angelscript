#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ScrollBar.h"
void FASRuntimeBind_10Module::Bind_ScrollBar()
{
			FAngelscriptBinds::AddFunctionEntry(UScrollBar::StaticClass(), "SetState", { ERASE_METHOD_PTR(UScrollBar, SetState, (float,  float), ERASE_ARGUMENT_PACK( void )) } );
}
