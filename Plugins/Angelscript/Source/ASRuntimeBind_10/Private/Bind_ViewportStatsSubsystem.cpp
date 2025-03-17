#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/ViewportStatsSubsystem.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_ViewportStatsSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UViewportStatsSubsystem::StaticClass(), "AddDisplayDelegate", { ERASE_METHOD_PTR(UViewportStatsSubsystem, AddDisplayDelegate, (FViewportDisplayCallback const&), ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportStatsSubsystem::StaticClass(), "AddTimedDisplay", { ERASE_METHOD_PTR(UViewportStatsSubsystem, AddTimedDisplay, (FText,  FLinearColor,  float,  const FVector2D&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportStatsSubsystem::StaticClass(), "RemoveDisplayDelegate", { ERASE_METHOD_PTR(UViewportStatsSubsystem, RemoveDisplayDelegate, (const int32), ERASE_ARGUMENT_PACK( void )) } );
}
