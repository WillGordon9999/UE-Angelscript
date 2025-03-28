#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "SubobjectDataSubsystem.h"
#include "SubobjectDataHandle.h"
#include "Engine/Blueprint.h"
#include "UObject/NoExportTypes.h"
#include "SubobjectData.h"
#include "GameFramework/Actor.h"
void FASEditorBind_10Module::Bind_SubobjectDataSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "AddNewSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, AddNewSubobject, (const FAddNewSubobjectParams&,  FText&), ERASE_ARGUMENT_PACK(FSubobjectDataHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "AttachSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, AttachSubobject, (const FSubobjectDataHandle&,  const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "CanCopySubobjects", { ERASE_METHOD_PTR(USubobjectDataSubsystem, CanCopySubobjects, (const TArray<FSubobjectDataHandle>&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "CanPasteSubobjects", { ERASE_METHOD_PTR(USubobjectDataSubsystem, CanPasteSubobjects, (const FSubobjectDataHandle&,  UBlueprint*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "ChangeSubobjectClass", { ERASE_METHOD_PTR(USubobjectDataSubsystem, ChangeSubobjectClass, (const FSubobjectDataHandle&,  const UClass*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "CopySubobjects", { ERASE_METHOD_PTR(USubobjectDataSubsystem, CopySubobjects, (const TArray<FSubobjectDataHandle>&,  UBlueprint*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "DeleteSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, DeleteSubobject, (const FSubobjectDataHandle&,  const FSubobjectDataHandle&,  UBlueprint*), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "DeleteSubobjects", { ERASE_METHOD_PTR(USubobjectDataSubsystem, DeleteSubobjects, (const FSubobjectDataHandle&,  const TArray<FSubobjectDataHandle>&,  UBlueprint*), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "DetachSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, DetachSubobject, (const FSubobjectDataHandle&,  const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "FindHandleForObject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, FindHandleForObject, (const FSubobjectDataHandle&,  const UObject*,  UBlueprint*) const, ERASE_ARGUMENT_PACK(FSubobjectDataHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "IsValidRename", { ERASE_METHOD_PTR(USubobjectDataSubsystem, IsValidRename, (const FSubobjectDataHandle&,  const FText&,  FText&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "K2_DeleteSubobjectFromInstance", { ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_DeleteSubobjectFromInstance, (const FSubobjectDataHandle&,  const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "K2_DeleteSubobjectsFromInstance", { ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_DeleteSubobjectsFromInstance, (const FSubobjectDataHandle&,  const TArray<FSubobjectDataHandle>&), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "K2_FindSubobjectDataFromHandle", { ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_FindSubobjectDataFromHandle, (const FSubobjectDataHandle&,  FSubobjectData&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "K2_GatherSubobjectDataForBlueprint", { ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_GatherSubobjectDataForBlueprint, (UBlueprint*,  TArray<FSubobjectDataHandle>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "K2_GatherSubobjectDataForInstance", { ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_GatherSubobjectDataForInstance, (AActor*,  TArray<FSubobjectDataHandle>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "MakeNewSceneRoot", { ERASE_METHOD_PTR(USubobjectDataSubsystem, MakeNewSceneRoot, (const FSubobjectDataHandle&,  const FSubobjectDataHandle&,  UBlueprint*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "RenameSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, RenameSubobject, (const FSubobjectDataHandle&,  const FText&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "ReparentSubobject", { ERASE_METHOD_PTR(USubobjectDataSubsystem, ReparentSubobject, (const FReparentSubobjectParams&,  const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USubobjectDataSubsystem::StaticClass(), "ReparentSubobjects", { ERASE_METHOD_PTR(USubobjectDataSubsystem, ReparentSubobjects, (const FReparentSubobjectParams&,  const TArray<FSubobjectDataHandle>&), ERASE_ARGUMENT_PACK(bool )) } );
}
