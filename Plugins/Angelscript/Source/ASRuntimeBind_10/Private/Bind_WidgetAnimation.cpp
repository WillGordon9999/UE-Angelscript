#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/UserWidget.h"
void FASRuntimeBind_10Module::Bind_WidgetAnimation()
{
			FAngelscriptBinds::AddFunctionEntry(UWidgetAnimation::StaticClass(), "GetEndTime", { ERASE_METHOD_PTR(UWidgetAnimation, GetEndTime, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetAnimation::StaticClass(), "GetStartTime", { ERASE_METHOD_PTR(UWidgetAnimation, GetStartTime, () const, ERASE_ARGUMENT_PACK( float )) } );
}
