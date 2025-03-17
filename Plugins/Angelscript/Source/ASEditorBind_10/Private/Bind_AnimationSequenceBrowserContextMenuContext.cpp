#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AnimationSequenceBrowserMenuContexts.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_AnimationSequenceBrowserContextMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimationSequenceBrowserContextMenuContext::StaticClass(), "GetSelectedObjects", { ERASE_METHOD_PTR(UAnimationSequenceBrowserContextMenuContext, GetSelectedObjects, () const, ERASE_ARGUMENT_PACK(TArray<UObject*> )) } );
}
