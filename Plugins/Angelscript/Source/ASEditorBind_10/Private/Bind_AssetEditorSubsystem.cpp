#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "AssetTypeActivationOpenedMethod.h"
void FASEditorBind_10Module::Bind_AssetEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UAssetEditorSubsystem::StaticClass(), "CloseAllEditorsForAsset", { ERASE_METHOD_PTR(UAssetEditorSubsystem, CloseAllEditorsForAsset, (UObject*), ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetEditorSubsystem::StaticClass(), "OpenEditorForAssets", { ERASE_METHOD_PTR(UAssetEditorSubsystem, OpenEditorForAssets, (const TArray<UObject*>&,  const EAssetTypeActivationOpenedMethod), ERASE_ARGUMENT_PACK( bool )) } );
}
