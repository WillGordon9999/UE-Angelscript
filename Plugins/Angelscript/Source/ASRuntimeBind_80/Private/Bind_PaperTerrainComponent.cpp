#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "PaperTerrainComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_PaperTerrainComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperTerrainComponent::StaticClass(), "SetTerrainColor", { ERASE_METHOD_PTR(UPaperTerrainComponent, SetTerrainColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
