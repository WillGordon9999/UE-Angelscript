#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Scripting/SequencerModuleScriptingLayer.h"
void FASEditorBind_0Module::Bind_SequencerModuleScriptingLayer()
{
			FAngelscriptBinds::AddFunctionEntry(USequencerModuleScriptingLayer::StaticClass(), "GetOutliner", { ERASE_METHOD_PTR(USequencerModuleScriptingLayer, GetOutliner, (), ERASE_ARGUMENT_PACK(USequencerModuleOutlinerScriptingObject* )) } );
}
