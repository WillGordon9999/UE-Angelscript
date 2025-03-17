#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "SubobjectDataBlueprintFunctionLibrary.h"
#include "Engine/Blueprint.h"
#include "SubobjectData.h"
void FASEditorBind_10Module::Bind_SubobjectDataBlueprintFunctionLibrary()
{
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataBlueprintFunctionLibrary::StaticClass(), "GetBlueprint", { ERASE_METHOD_PTR(USubobjectDataBlueprintFunctionLibrary, GetBlueprint, (const FSubobjectData&), ERASE_ARGUMENT_PACK(UBlueprint* )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataBlueprintFunctionLibrary::StaticClass(), "GetDisplayName", { ERASE_METHOD_PTR(USubobjectDataBlueprintFunctionLibrary, GetDisplayName, (const FSubobjectData&), ERASE_ARGUMENT_PACK(FText )) } );
}
