#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Blueprint/GameViewportSubsystem.h"
#include "Components/Widget.h"
#include "Engine/LocalPlayer.h"
void FASRuntimeBind_10Module::Bind_GameViewportSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "AddWidget", { ERASE_METHOD_PTR(UGameViewportSubsystem, AddWidget, (UWidget*,  FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "AddWidgetForPlayer", { ERASE_METHOD_PTR(UGameViewportSubsystem, AddWidgetForPlayer, (UWidget*,  ULocalPlayer*,  FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "GetWidgetSlot", { ERASE_METHOD_PTR(UGameViewportSubsystem, GetWidgetSlot, (const UWidget*) const, ERASE_ARGUMENT_PACK( FGameViewportWidgetSlot )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "IsWidgetAdded", { ERASE_METHOD_PTR(UGameViewportSubsystem, IsWidgetAdded, (const UWidget*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "RemoveWidget", { ERASE_METHOD_PTR(UGameViewportSubsystem, RemoveWidget, (UWidget*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameViewportSubsystem::StaticClass(), "SetWidgetSlot", { ERASE_METHOD_PTR(UGameViewportSubsystem, SetWidgetSlot, (UWidget*,  FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK( void )) } );
}
