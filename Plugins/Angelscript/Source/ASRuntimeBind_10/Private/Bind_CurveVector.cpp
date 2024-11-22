#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Curves/CurveVector.h"
void FASRuntimeBind_10Module::Bind_CurveVector()
{
			FAngelscriptBinds::AddFunctionEntry(UCurveVector::StaticClass(), "GetVectorValue", { ERASE_METHOD_PTR(UCurveVector, GetVectorValue, (float) const, ERASE_ARGUMENT_PACK( FVector )) } );
}
