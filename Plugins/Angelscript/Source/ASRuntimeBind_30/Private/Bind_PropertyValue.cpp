#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "PropertyValue.h"
void FASRuntimeBind_30Module::Bind_PropertyValue()
{
			FAngelscriptBinds::AddFunctionEntry(UPropertyValue::StaticClass(), "GetFullDisplayString", { ERASE_METHOD_PTR(UPropertyValue, GetFullDisplayString, () const, ERASE_ARGUMENT_PACK(const FString& )) } );
			FAngelscriptBinds::AddFunctionEntry(UPropertyValue::StaticClass(), "GetPropertyTooltip", { ERASE_METHOD_PTR(UPropertyValue, GetPropertyTooltip, () const, ERASE_ARGUMENT_PACK(FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UPropertyValue::StaticClass(), "HasRecordedData", { ERASE_METHOD_PTR(UPropertyValue, HasRecordedData, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
