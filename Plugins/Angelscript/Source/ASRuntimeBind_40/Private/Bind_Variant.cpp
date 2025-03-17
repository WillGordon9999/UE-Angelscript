#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "Variant.h"
#include "GameFramework/Actor.h"
#include "LevelVariantSets.h"
#include "VariantSet.h"
#include "Engine/Texture2D.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_40Module::Bind_Variant()
{
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetActor", { ERASE_METHOD_PTR(UVariant, GetActor, (int32), ERASE_ARGUMENT_PACK(AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetDependency", { ERASE_METHOD_PTR(UVariant, GetDependency, (int32), ERASE_ARGUMENT_PACK(FVariantDependency& )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetDependents", { ERASE_METHOD_PTR(UVariant, GetDependents, (ULevelVariantSets*,  bool), ERASE_ARGUMENT_PACK(TArray<UVariant*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetDisplayText", { ERASE_METHOD_PTR(UVariant, GetDisplayText, () const, ERASE_ARGUMENT_PACK(FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetNumActors", { ERASE_METHOD_PTR(UVariant, GetNumActors, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetNumDependencies", { ERASE_METHOD_PTR(UVariant, GetNumDependencies, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetParent", { ERASE_METHOD_PTR(UVariant, GetParent, (), ERASE_ARGUMENT_PACK(class UVariantSet* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "GetThumbnail", { ERASE_METHOD_PTR(UVariant, GetThumbnail, (), ERASE_ARGUMENT_PACK(UTexture2D* )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "IsActive", { ERASE_METHOD_PTR(UVariant, IsActive, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SetDisplayText", { ERASE_METHOD_PTR(UVariant, SetDisplayText, (const FText&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SetThumbnailFromCamera", { ERASE_METHOD_PTR(UVariant, SetThumbnailFromCamera, (UObject*,  const FTransform&,  float,  float,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SetThumbnailFromEditorViewport", { ERASE_METHOD_PTR(UVariant, SetThumbnailFromEditorViewport, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SetThumbnailFromFile", { ERASE_METHOD_PTR(UVariant, SetThumbnailFromFile, (FString), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SetThumbnailFromTexture", { ERASE_METHOD_PTR(UVariant, SetThumbnailFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVariant::StaticClass(), "SwitchOn", { ERASE_METHOD_PTR(UVariant, SwitchOn, (), ERASE_ARGUMENT_PACK(void )) } );
}
