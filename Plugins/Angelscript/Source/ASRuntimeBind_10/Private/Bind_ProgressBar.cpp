#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ProgressBar.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_ProgressBar()
{
			FAngelscriptBinds::AddFunctionEntry(UProgressBar::StaticClass(), "SetFillColorAndOpacity", { ERASE_METHOD_PTR(UProgressBar, SetFillColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProgressBar::StaticClass(), "SetIsMarquee", { ERASE_METHOD_PTR(UProgressBar, SetIsMarquee, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProgressBar::StaticClass(), "SetPercent", { ERASE_METHOD_PTR(UProgressBar, SetPercent, (float), ERASE_ARGUMENT_PACK( void )) } );
}
