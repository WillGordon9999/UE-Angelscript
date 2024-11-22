#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ScaleBox.h"
void FASRuntimeBind_10Module::Bind_ScaleBox()
{
			FAngelscriptBinds::AddFunctionEntry(UScaleBox::StaticClass(), "SetIgnoreInheritedScale", { ERASE_METHOD_PTR(UScaleBox, SetIgnoreInheritedScale, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScaleBox::StaticClass(), "SetStretch", { ERASE_METHOD_PTR(UScaleBox, SetStretch, (EStretch::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScaleBox::StaticClass(), "SetStretchDirection", { ERASE_METHOD_PTR(UScaleBox, SetStretchDirection, (EStretchDirection::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScaleBox::StaticClass(), "SetUserSpecifiedScale", { ERASE_METHOD_PTR(UScaleBox, SetUserSpecifiedScale, (float), ERASE_ARGUMENT_PACK( void )) } );
}
