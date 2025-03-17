#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Viewport.h"
#include "UObject/NoExportTypes.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_10Module::Bind_Viewport()
{
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "GetViewLocation", { ERASE_METHOD_PTR(UViewport, GetViewLocation, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "GetViewportWorld", { ERASE_METHOD_PTR(UViewport, GetViewportWorld, () const, ERASE_ARGUMENT_PACK( UWorld* )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "GetViewRotation", { ERASE_METHOD_PTR(UViewport, GetViewRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetEnableAdvancedFeatures", { ERASE_METHOD_PTR(UViewport, SetEnableAdvancedFeatures, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetLightIntensity", { ERASE_METHOD_PTR(UViewport, SetLightIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetShowFlag", { ERASE_METHOD_PTR(UViewport, SetShowFlag, (FString,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetSkyIntensity", { ERASE_METHOD_PTR(UViewport, SetSkyIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetViewLocation", { ERASE_METHOD_PTR(UViewport, SetViewLocation, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "SetViewRotation", { ERASE_METHOD_PTR(UViewport, SetViewRotation, (FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewport::StaticClass(), "Spawn", { ERASE_METHOD_PTR(UViewport, Spawn, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK( AActor* )) } );
}
