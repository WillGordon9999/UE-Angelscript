#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Factories/ReimportFbxSceneFactory.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_ReimportFbxSceneFactory()
{
			FAngelscriptBinds::AddFunctionEntry(UReimportFbxSceneFactory::StaticClass(), "ScriptReimportHelper", { ERASE_METHOD_PTR(UReimportFbxSceneFactory, ScriptReimportHelper, (UObject*), ERASE_ARGUMENT_PACK(void )) } );
}
