#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "UpgradeNiagaraScriptResults.h"
void FASEditorBind_20Module::Bind_NiagaraPythonScriptModuleInput()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsBool", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsBool, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsColor", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsColor, () const, ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsEnum", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsEnum, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsFloat", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsFloat, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsInt", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsInt, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsLinkedValue", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsLinkedValue, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsQuat", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsQuat, () const, ERASE_ARGUMENT_PACK(FQuat )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsVec2", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec2, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsVec3", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec3, () const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "AsVec4", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec4, () const, ERASE_ARGUMENT_PACK(FVector4 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "IsLinkedValue", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsLinkedValue, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "IsLocalValue", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsLocalValue, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonScriptModuleInput::StaticClass(), "IsSet", { ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsSet, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
