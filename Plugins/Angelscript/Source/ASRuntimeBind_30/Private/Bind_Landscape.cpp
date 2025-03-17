#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "Landscape.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/TextureRenderTarget.h"
void FASRuntimeBind_30Module::Bind_Landscape()
{
			FAngelscriptBinds::AddFunctionEntry(ALandscape::StaticClass(), "ForceLayersFullUpdate", { ERASE_METHOD_PTR(ALandscape, ForceLayersFullUpdate, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALandscape::StaticClass(), "RenderHeightmap", { ERASE_METHOD_PTR(ALandscape, RenderHeightmap, (FTransform,  FBox2D,  UTextureRenderTarget2D*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ALandscape::StaticClass(), "RenderWeightmap", { ERASE_METHOD_PTR(ALandscape, RenderWeightmap, (FTransform,  FBox2D,  FName,  UTextureRenderTarget2D*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ALandscape::StaticClass(), "RenderWeightmaps", { ERASE_METHOD_PTR(ALandscape, RenderWeightmaps, (FTransform,  FBox2D,  const TArray<FName>&,  UTextureRenderTarget*), ERASE_ARGUMENT_PACK( bool )) } );
}
