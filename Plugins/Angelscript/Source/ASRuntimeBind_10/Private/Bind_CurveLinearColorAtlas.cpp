#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Curves/CurveLinearColorAtlas.h"
void FASRuntimeBind_10Module::Bind_CurveLinearColorAtlas()
{
			FAngelscriptBinds::AddFunctionEntry(UCurveLinearColorAtlas::StaticClass(), "GetCurvePosition", { ERASE_METHOD_PTR(UCurveLinearColorAtlas, GetCurvePosition, (UCurveLinearColor*,  float&), ERASE_ARGUMENT_PACK( bool )) } );
}
