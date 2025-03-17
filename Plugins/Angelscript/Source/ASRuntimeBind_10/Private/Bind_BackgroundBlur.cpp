#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BackgroundBlur.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_BackgroundBlur()
{
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetApplyAlphaToBlur", { ERASE_METHOD_PTR(UBackgroundBlur, SetApplyAlphaToBlur, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetBlurRadius", { ERASE_METHOD_PTR(UBackgroundBlur, SetBlurRadius, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetBlurStrength", { ERASE_METHOD_PTR(UBackgroundBlur, SetBlurStrength, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetCornerRadius", { ERASE_METHOD_PTR(UBackgroundBlur, SetCornerRadius, (FVector4), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UBackgroundBlur, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetLowQualityFallbackBrush", { ERASE_METHOD_PTR(UBackgroundBlur, SetLowQualityFallbackBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UBackgroundBlur, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlur::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UBackgroundBlur, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
