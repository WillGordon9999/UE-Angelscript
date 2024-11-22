#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Scripting/OutlinerScriptingObject.h"
void FASEditorBind_0Module::Bind_SequencerOutlinerScriptingObject()
{
			FAngelscriptBinds::AddFunctionEntry(USequencerOutlinerScriptingObject::StaticClass(), "GetChildren", { ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetChildren, (FSequencerViewModelScriptingStruct,  FName) const, ERASE_ARGUMENT_PACK(TArray<FSequencerViewModelScriptingStruct> )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerOutlinerScriptingObject::StaticClass(), "GetRootNode", { ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetRootNode, () const, ERASE_ARGUMENT_PACK(FSequencerViewModelScriptingStruct )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerOutlinerScriptingObject::StaticClass(), "GetSelection", { ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetSelection, () const, ERASE_ARGUMENT_PACK(TArray<FSequencerViewModelScriptingStruct> )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerOutlinerScriptingObject::StaticClass(), "SetSelection", { ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, SetSelection, (const TArray<FSequencerViewModelScriptingStruct>&), ERASE_ARGUMENT_PACK(void )) } );
}
