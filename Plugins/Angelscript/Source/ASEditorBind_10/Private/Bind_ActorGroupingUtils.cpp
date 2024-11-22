#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "ActorGroupingUtils.h"
void FASEditorBind_10Module::Bind_ActorGroupingUtils()
{
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "AddSelectedToGroup", { ERASE_METHOD_PTR(UActorGroupingUtils, AddSelectedToGroup, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "CanGroupActors", { ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupActors, (const TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "CanGroupSelectedActors", { ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupSelectedActors, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "GroupActors", { ERASE_METHOD_PTR(UActorGroupingUtils, GroupActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(  AGroupActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "GroupSelected", { ERASE_METHOD_PTR(UActorGroupingUtils, GroupSelected, (), ERASE_ARGUMENT_PACK(  AGroupActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "LockSelectedGroups", { ERASE_METHOD_PTR(UActorGroupingUtils, LockSelectedGroups, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "RemoveSelectedFromGroup", { ERASE_METHOD_PTR(UActorGroupingUtils, RemoveSelectedFromGroup, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "UngroupActors", { ERASE_METHOD_PTR(UActorGroupingUtils, UngroupActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "UngroupSelected", { ERASE_METHOD_PTR(UActorGroupingUtils, UngroupSelected, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UActorGroupingUtils::StaticClass(), "UnlockSelectedGroups", { ERASE_METHOD_PTR(UActorGroupingUtils, UnlockSelectedGroups, (), ERASE_ARGUMENT_PACK(  void )) } );
}
