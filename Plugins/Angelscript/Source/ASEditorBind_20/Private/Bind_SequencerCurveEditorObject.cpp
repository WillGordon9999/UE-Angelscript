#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "SequencerCurveEditorObject.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_20Module::Bind_SequencerCurveEditorObject()
{
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "CloseCurveEditor", { ERASE_METHOD_PTR(USequencerCurveEditorObject, CloseCurveEditor, (), ERASE_ARGUMENT_PACK(
	void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "DeleteColorForChannels", { ERASE_METHOD_PTR(USequencerCurveEditorObject, DeleteColorForChannels, (UClass*,  FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "EmptySelection", { ERASE_METHOD_PTR(USequencerCurveEditorObject, EmptySelection, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "GetChannelsWithSelectedKeys", { ERASE_METHOD_PTR(USequencerCurveEditorObject, GetChannelsWithSelectedKeys, (), ERASE_ARGUMENT_PACK(TArray<FSequencerChannelProxy> )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "GetCustomColorForChannel", { ERASE_METHOD_PTR(USequencerCurveEditorObject, GetCustomColorForChannel, (UClass*,  const FString&), ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "GetSelectedKeys", { ERASE_METHOD_PTR(USequencerCurveEditorObject, GetSelectedKeys, (const FSequencerChannelProxy&), ERASE_ARGUMENT_PACK(TArray<int32> )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "HasCustomColorForChannel", { ERASE_METHOD_PTR(USequencerCurveEditorObject, HasCustomColorForChannel, (UClass*,  const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "IsCurveEditorOpen", { ERASE_METHOD_PTR(USequencerCurveEditorObject, IsCurveEditorOpen, (), ERASE_ARGUMENT_PACK(
	bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "OpenCurveEditor", { ERASE_METHOD_PTR(USequencerCurveEditorObject, OpenCurveEditor, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "SelectKeys", { ERASE_METHOD_PTR(USequencerCurveEditorObject, SelectKeys, (const FSequencerChannelProxy&,  const TArray<int32>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "SetCustomColorForChannel", { ERASE_METHOD_PTR(USequencerCurveEditorObject, SetCustomColorForChannel, (UClass*,  const FString&,  const FLinearColor&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "SetCustomColorForChannels", { ERASE_METHOD_PTR(USequencerCurveEditorObject, SetCustomColorForChannels, (UClass*,  const TArray<FString>&,  const TArray<FLinearColor>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USequencerCurveEditorObject::StaticClass(), "SetRandomColorForChannels", { ERASE_METHOD_PTR(USequencerCurveEditorObject, SetRandomColorForChannels, (UClass*,  const TArray<FString>&), ERASE_ARGUMENT_PACK(void )) } );
}
