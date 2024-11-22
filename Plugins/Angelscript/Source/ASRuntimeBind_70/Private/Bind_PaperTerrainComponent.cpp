#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "../../../Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainComponent.h"
void FASRuntimeBind_70Module::Bind_PaperTerrainComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperTerrainComponent::StaticClass(), "SetTerrainColor", { ERASE_METHOD_PTR(UPaperTerrainComponent, SetTerrainColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
