#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Camera/CameraModifier.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_10Module::Bind_CameraModifier()
{
			FAngelscriptBinds::AddFunctionEntry(UCameraModifier::StaticClass(), "DisableModifier", { ERASE_METHOD_PTR(UCameraModifier, DisableModifier, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraModifier::StaticClass(), "EnableModifier", { ERASE_METHOD_PTR(UCameraModifier, EnableModifier, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraModifier::StaticClass(), "GetViewTarget", { ERASE_METHOD_PTR(UCameraModifier, GetViewTarget, () const, ERASE_ARGUMENT_PACK(  AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraModifier::StaticClass(), "IsDisabled", { ERASE_METHOD_PTR(UCameraModifier, IsDisabled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCameraModifier::StaticClass(), "IsPendingDisable", { ERASE_METHOD_PTR(UCameraModifier, IsPendingDisable, () const, ERASE_ARGUMENT_PACK(  bool )) } );
}
