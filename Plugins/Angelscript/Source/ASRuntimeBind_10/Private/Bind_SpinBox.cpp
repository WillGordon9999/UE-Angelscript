#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SpinBox.h"
void FASRuntimeBind_10Module::Bind_SpinBox()
{
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "ClearMaxSliderValue", { ERASE_METHOD_PTR(USpinBox, ClearMaxSliderValue, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "ClearMaxValue", { ERASE_METHOD_PTR(USpinBox, ClearMaxValue, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "ClearMinSliderValue", { ERASE_METHOD_PTR(USpinBox, ClearMinSliderValue, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "ClearMinValue", { ERASE_METHOD_PTR(USpinBox, ClearMinValue, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "GetMaxSliderValue", { ERASE_METHOD_PTR(USpinBox, GetMaxSliderValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "GetMaxValue", { ERASE_METHOD_PTR(USpinBox, GetMaxValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "GetMinSliderValue", { ERASE_METHOD_PTR(USpinBox, GetMinSliderValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "GetMinValue", { ERASE_METHOD_PTR(USpinBox, GetMinValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "GetValue", { ERASE_METHOD_PTR(USpinBox, GetValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetForegroundColor", { ERASE_METHOD_PTR(USpinBox, SetForegroundColor, (FSlateColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetMaxSliderValue", { ERASE_METHOD_PTR(USpinBox, SetMaxSliderValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetMaxValue", { ERASE_METHOD_PTR(USpinBox, SetMaxValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetMinSliderValue", { ERASE_METHOD_PTR(USpinBox, SetMinSliderValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetMinValue", { ERASE_METHOD_PTR(USpinBox, SetMinValue, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpinBox::StaticClass(), "SetValue", { ERASE_METHOD_PTR(USpinBox, SetValue, (float), ERASE_ARGUMENT_PACK( void )) } );
}
