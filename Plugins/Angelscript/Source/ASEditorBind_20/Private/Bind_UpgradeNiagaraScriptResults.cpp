#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "UpgradeNiagaraScriptResults.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_20Module::Bind_UpgradeNiagaraScriptResults()
{
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "GetOldInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, GetOldInput, (const FString&), ERASE_ARGUMENT_PACK( UNiagaraPythonScriptModuleInput* )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "ResetToDefault", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, ResetToDefault, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetBoolInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetBoolInput, (const FString&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetColorInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetColorInput, (const FString&,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetEnumInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetEnumInput, (const FString&,  FString), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetFloatInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetFloatInput, (const FString&,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetIntInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetIntInput, (const FString&,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetLinkedInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetLinkedInput, (const FString&,  FString), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetNewInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetNewInput, (const FString&,  UNiagaraPythonScriptModuleInput*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetQuatInput", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetQuatInput, (const FString&,  FQuat), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetVec2Input", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec2Input, (const FString&,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetVec3Input", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec3Input, (const FString&,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUpgradeNiagaraScriptResults::StaticClass(), "SetVec4Input", { ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec4Input, (const FString&,  FVector4), ERASE_ARGUMENT_PACK( void )) } );
}
