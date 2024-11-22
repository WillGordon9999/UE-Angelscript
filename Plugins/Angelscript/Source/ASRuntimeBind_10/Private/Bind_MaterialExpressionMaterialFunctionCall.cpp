#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
void FASRuntimeBind_10Module::Bind_MaterialExpressionMaterialFunctionCall()
{
			FAngelscriptBinds::AddFunctionEntry(UMaterialExpressionMaterialFunctionCall::StaticClass(), "SetMaterialFunction", { ERASE_METHOD_PTR(UMaterialExpressionMaterialFunctionCall, SetMaterialFunction, (UMaterialFunctionInterface*), ERASE_ARGUMENT_PACK( bool )) } );
}
