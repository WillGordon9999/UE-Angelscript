#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "SubobjectEditorMenuContext.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_SubobjectEditorMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(USubobjectEditorMenuContext::StaticClass(), "GetSelectedObjects", { ERASE_METHOD_PTR(USubobjectEditorMenuContext, GetSelectedObjects, () const, ERASE_ARGUMENT_PACK(TArray<UObject*> )) } );
}
