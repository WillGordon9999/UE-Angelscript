#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/PlatformEventsComponent.h"
void FASRuntimeBind_10Module::Bind_PlatformEventsComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPlatformEventsComponent::StaticClass(), "IsInLaptopMode", { ERASE_METHOD_PTR(UPlatformEventsComponent, IsInLaptopMode, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPlatformEventsComponent::StaticClass(), "IsInTabletMode", { ERASE_METHOD_PTR(UPlatformEventsComponent, IsInTabletMode, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPlatformEventsComponent::StaticClass(), "SupportsConvertibleLaptops", { ERASE_METHOD_PTR(UPlatformEventsComponent, SupportsConvertibleLaptops, (), ERASE_ARGUMENT_PACK( bool )) } );
}
