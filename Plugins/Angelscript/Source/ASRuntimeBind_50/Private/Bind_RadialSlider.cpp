#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "Components/RadialSlider.h"
void FASRuntimeBind_50Module::Bind_RadialSlider()
{
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "GetCustomDefaultValue", { ERASE_METHOD_PTR(URadialSlider, GetCustomDefaultValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "GetNormalizedSliderHandlePosition", { ERASE_METHOD_PTR(URadialSlider, GetNormalizedSliderHandlePosition, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "GetValue", { ERASE_METHOD_PTR(URadialSlider, GetValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetAngularOffset", { ERASE_METHOD_PTR(URadialSlider, SetAngularOffset, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetCenterBackgroundColor", { ERASE_METHOD_PTR(URadialSlider, SetCenterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetCustomDefaultValue", { ERASE_METHOD_PTR(URadialSlider, SetCustomDefaultValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetHandStartEndRatio", { ERASE_METHOD_PTR(URadialSlider, SetHandStartEndRatio, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetLocked", { ERASE_METHOD_PTR(URadialSlider, SetLocked, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetShowSliderHand", { ERASE_METHOD_PTR(URadialSlider, SetShowSliderHand, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetShowSliderHandle", { ERASE_METHOD_PTR(URadialSlider, SetShowSliderHandle, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderBarColor", { ERASE_METHOD_PTR(URadialSlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderHandleColor", { ERASE_METHOD_PTR(URadialSlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderHandleEndAngle", { ERASE_METHOD_PTR(URadialSlider, SetSliderHandleEndAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderHandleStartAngle", { ERASE_METHOD_PTR(URadialSlider, SetSliderHandleStartAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderProgressColor", { ERASE_METHOD_PTR(URadialSlider, SetSliderProgressColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetSliderRange", { ERASE_METHOD_PTR(URadialSlider, SetSliderRange, (const FRuntimeFloatCurve&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetStepSize", { ERASE_METHOD_PTR(URadialSlider, SetStepSize, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetUseVerticalDrag", { ERASE_METHOD_PTR(URadialSlider, SetUseVerticalDrag, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetValue", { ERASE_METHOD_PTR(URadialSlider, SetValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialSlider::StaticClass(), "SetValueTags", { ERASE_METHOD_PTR(URadialSlider, SetValueTags, (const TArray<float>&), ERASE_ARGUMENT_PACK( void )) } );
}
