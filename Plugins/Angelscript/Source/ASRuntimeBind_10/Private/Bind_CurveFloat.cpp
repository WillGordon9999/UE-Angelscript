#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Curves/CurveFloat.h"
void FASRuntimeBind_10Module::Bind_CurveFloat()
{
			FAngelscriptBinds::AddFunctionEntry(UCurveFloat::StaticClass(), "GetFloatValue", { ERASE_METHOD_PTR(UCurveFloat, GetFloatValue, (float) const, ERASE_ARGUMENT_PACK( float )) } );
}
