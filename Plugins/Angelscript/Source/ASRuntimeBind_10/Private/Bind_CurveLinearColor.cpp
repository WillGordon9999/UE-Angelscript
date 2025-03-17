#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Curves/CurveLinearColor.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_CurveLinearColor()
{
			FAngelscriptBinds::AddFunctionEntry(UCurveLinearColor::StaticClass(), "GetClampedLinearColorValue", { ERASE_METHOD_PTR(UCurveLinearColor, GetClampedLinearColorValue, (float) const, ERASE_ARGUMENT_PACK(  FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UCurveLinearColor::StaticClass(), "GetLinearColorValue", { ERASE_METHOD_PTR(UCurveLinearColor, GetLinearColorValue, (float) const, ERASE_ARGUMENT_PACK(  FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UCurveLinearColor::StaticClass(), "GetUnadjustedLinearColorValue", { ERASE_METHOD_PTR(UCurveLinearColor, GetUnadjustedLinearColorValue, (float) const, ERASE_ARGUMENT_PACK( FLinearColor )) } );
}
