#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "UI/Synth2DSlider.h"
void FASRuntimeBind_60Module::Bind_Synth2DSlider()
{
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "GetValue", { ERASE_METHOD_PTR(USynth2DSlider, GetValue, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "SetIndentHandle", { ERASE_METHOD_PTR(USynth2DSlider, SetIndentHandle, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "SetLocked", { ERASE_METHOD_PTR(USynth2DSlider, SetLocked, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "SetSliderHandleColor", { ERASE_METHOD_PTR(USynth2DSlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "SetStepSize", { ERASE_METHOD_PTR(USynth2DSlider, SetStepSize, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynth2DSlider::StaticClass(), "SetValue", { ERASE_METHOD_PTR(USynth2DSlider, SetValue, (FVector2D), ERASE_ARGUMENT_PACK(void )) } );
}
