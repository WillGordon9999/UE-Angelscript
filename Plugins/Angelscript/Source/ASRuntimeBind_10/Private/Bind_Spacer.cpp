#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Spacer.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_Spacer()
{
			FAngelscriptBinds::AddFunctionEntry(USpacer::StaticClass(), "SetSize", { ERASE_METHOD_PTR(USpacer, SetSize, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
}
