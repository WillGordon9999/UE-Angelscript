#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "VariantSet.h"
#include "LevelVariantSets.h"
#include "Engine/Texture2D.h"
#include "Variant.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_40Module::Bind_VariantSet()
{
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetDisplayText", { ERASE_METHOD_PTR(UVariantSet, GetDisplayText, () const, ERASE_ARGUMENT_PACK(FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetNumVariants", { ERASE_METHOD_PTR(UVariantSet, GetNumVariants, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetParent", { ERASE_METHOD_PTR(UVariantSet, GetParent, (), ERASE_ARGUMENT_PACK(class ULevelVariantSets* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetThumbnail", { ERASE_METHOD_PTR(UVariantSet, GetThumbnail, (), ERASE_ARGUMENT_PACK(UTexture2D* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetVariant", { ERASE_METHOD_PTR(UVariantSet, GetVariant, (int32), ERASE_ARGUMENT_PACK(UVariant* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "GetVariantByName", { ERASE_METHOD_PTR(UVariantSet, GetVariantByName, (FString), ERASE_ARGUMENT_PACK(UVariant* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "SetDisplayText", { ERASE_METHOD_PTR(UVariantSet, SetDisplayText, (const FText&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "SetThumbnailFromCamera", { ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromCamera, (UObject*,  const FTransform&,  float,  float,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "SetThumbnailFromEditorViewport", { ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromEditorViewport, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "SetThumbnailFromFile", { ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromFile, (FString), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariantSet::StaticClass(), "SetThumbnailFromTexture", { ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK(void )) } );
}
