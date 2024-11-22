#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Components/AssetThumbnailWidget.h"
void FASEditorBind_20Module::Bind_AssetThumbnailWidget()
{
			FAngelscriptBinds::AddFunctionEntry(UAssetThumbnailWidget::StaticClass(), "GetResolution", { ERASE_METHOD_PTR(UAssetThumbnailWidget, GetResolution, () const, ERASE_ARGUMENT_PACK(FIntPoint )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetThumbnailWidget::StaticClass(), "SetAsset", { ERASE_METHOD_PTR(UAssetThumbnailWidget, SetAsset, (const FAssetData&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetThumbnailWidget::StaticClass(), "SetAssetByObject", { ERASE_METHOD_PTR(UAssetThumbnailWidget, SetAssetByObject, (UObject*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetThumbnailWidget::StaticClass(), "SetResolution", { ERASE_METHOD_PTR(UAssetThumbnailWidget, SetResolution, (const FIntPoint&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetThumbnailWidget::StaticClass(), "SetThumbnailSettings", { ERASE_METHOD_PTR(UAssetThumbnailWidget, SetThumbnailSettings, (const FAssetThumbnailWidgetSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
