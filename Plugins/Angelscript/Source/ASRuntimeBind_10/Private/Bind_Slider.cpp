#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Slider.h"
void FASRuntimeBind_10Module::Bind_Slider()
{
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "GetNormalizedValue", { ERASE_METHOD_PTR(USlider, GetNormalizedValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "GetValue", { ERASE_METHOD_PTR(USlider, GetValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetIndentHandle", { ERASE_METHOD_PTR(USlider, SetIndentHandle, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetLocked", { ERASE_METHOD_PTR(USlider, SetLocked, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetMaxValue", { ERASE_METHOD_PTR(USlider, SetMaxValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetMinValue", { ERASE_METHOD_PTR(USlider, SetMinValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetSliderBarColor", { ERASE_METHOD_PTR(USlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetSliderHandleColor", { ERASE_METHOD_PTR(USlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetStepSize", { ERASE_METHOD_PTR(USlider, SetStepSize, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USlider::StaticClass(), "SetValue", { ERASE_METHOD_PTR(USlider, SetValue, (float), ERASE_ARGUMENT_PACK( void )) } );
}
