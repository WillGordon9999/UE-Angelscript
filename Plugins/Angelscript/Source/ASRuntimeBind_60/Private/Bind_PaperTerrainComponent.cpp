#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "PaperTerrainComponent.h"
void FASRuntimeBind_60Module::Bind_PaperTerrainComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperTerrainComponent::StaticClass(), "SetTerrainColor", { ERASE_METHOD_PTR(UPaperTerrainComponent, SetTerrainColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
