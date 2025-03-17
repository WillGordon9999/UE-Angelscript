#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "BlueprintEditorContext.h"
#include "Engine/Blueprint.h"
void FASEditorBind_10Module::Bind_BlueprintEditorToolMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(UBlueprintEditorToolMenuContext::StaticClass(), "GetBlueprintObj", { ERASE_METHOD_PTR(UBlueprintEditorToolMenuContext, GetBlueprintObj, () const, ERASE_ARGUMENT_PACK(UBlueprint* )) } );
}
