#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/DefaultPawn.h"
void FASRuntimeBind_10Module::Bind_DefaultPawn()
{
			FAngelscriptBinds::AddFunctionEntry(ADefaultPawn::StaticClass(), "LookUpAtRate", { ERASE_METHOD_PTR(ADefaultPawn, LookUpAtRate, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADefaultPawn::StaticClass(), "MoveForward", { ERASE_METHOD_PTR(ADefaultPawn, MoveForward, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADefaultPawn::StaticClass(), "MoveRight", { ERASE_METHOD_PTR(ADefaultPawn, MoveRight, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADefaultPawn::StaticClass(), "MoveUp_World", { ERASE_METHOD_PTR(ADefaultPawn, MoveUp_World, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADefaultPawn::StaticClass(), "TurnAtRate", { ERASE_METHOD_PTR(ADefaultPawn, TurnAtRate, (float), ERASE_ARGUMENT_PACK(  void )) } );
}
