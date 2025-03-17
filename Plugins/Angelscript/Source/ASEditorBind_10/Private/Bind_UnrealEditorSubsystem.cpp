#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Subsystems/UnrealEditorSubsystem.h"
#include "Engine/World.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_UnrealEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UUnrealEditorSubsystem::StaticClass(), "GetEditorWorld", { ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetEditorWorld, (), ERASE_ARGUMENT_PACK( UWorld* )) } );
			FAngelscriptBinds::AddFunctionEntry(UUnrealEditorSubsystem::StaticClass(), "GetGameWorld", { ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetGameWorld, (), ERASE_ARGUMENT_PACK( UWorld* )) } );
			FAngelscriptBinds::AddFunctionEntry(UUnrealEditorSubsystem::StaticClass(), "GetLevelViewportCameraInfo", { ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetLevelViewportCameraInfo, (FVector&,  FRotator&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UUnrealEditorSubsystem::StaticClass(), "SetLevelViewportCameraInfo", { ERASE_METHOD_PTR(UUnrealEditorSubsystem, SetLevelViewportCameraInfo, (FVector,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
}
