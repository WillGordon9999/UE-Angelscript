#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "AudioRadialSlider.h"
void FASRuntimeBind_80Module::Bind_AudioRadialSlider()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "GetOutputValue", { ERASE_METHOD_PTR(UAudioRadialSlider, GetOutputValue, (const float), ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "GetSliderValue", { ERASE_METHOD_PTR(UAudioRadialSlider, GetSliderValue, (const float), ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetCenterBackgroundColor", { ERASE_METHOD_PTR(UAudioRadialSlider, SetCenterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetHandStartEndRatio", { ERASE_METHOD_PTR(UAudioRadialSlider, SetHandStartEndRatio, (const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetOutputRange", { ERASE_METHOD_PTR(UAudioRadialSlider, SetOutputRange, (const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetShowLabelOnlyOnHover", { ERASE_METHOD_PTR(UAudioRadialSlider, SetShowLabelOnlyOnHover, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetShowUnitsText", { ERASE_METHOD_PTR(UAudioRadialSlider, SetShowUnitsText, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetSliderBarColor", { ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetSliderProgressColor", { ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderProgressColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetSliderThickness", { ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderThickness, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetTextLabelBackgroundColor", { ERASE_METHOD_PTR(UAudioRadialSlider, SetTextLabelBackgroundColor, (FSlateColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetUnitsText", { ERASE_METHOD_PTR(UAudioRadialSlider, SetUnitsText, (const FText), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetUnitsTextReadOnly", { ERASE_METHOD_PTR(UAudioRadialSlider, SetUnitsTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetValueTextReadOnly", { ERASE_METHOD_PTR(UAudioRadialSlider, SetValueTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioRadialSlider::StaticClass(), "SetWidgetLayout", { ERASE_METHOD_PTR(UAudioRadialSlider, SetWidgetLayout, (EAudioRadialSliderLayout), ERASE_ARGUMENT_PACK(void )) } );
}
