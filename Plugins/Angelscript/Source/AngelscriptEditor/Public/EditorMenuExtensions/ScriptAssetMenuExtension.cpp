#include "ScriptAssetMenuExtension.h"
#include "ScriptEditorPrompts.h"

TArray<UFunction*> UScriptAssetMenuExtension::GatherExtensionFunctions() const
{
	// Don't allow any functions if none of the actors are supported
	if (CurrentSelection.SelectedAssets.Num() != 0)
	{
		bool bAnyAssetSupported = false;
		for (const FAssetData& Asset : CurrentSelection.SelectedAssets)
		{
			if (!SupportsAsset(Asset))
				continue;

			if (SupportedClasses.Num() != 0)
			{
				bool bIsSupportedClass = false;
				for (auto SupportedClass : SupportedClasses)
				{
					if (Asset.IsInstanceOf(SupportedClass.Get()))
					{
						bIsSupportedClass = true;
					}
				}

				 if (!bIsSupportedClass)
					 continue;
			}

			bAnyAssetSupported = true;
			break;
		}

		if (!bAnyAssetSupported)
			return TArray<UFunction*>();
	}

	return Super::GatherExtensionFunctions();
}

void UScriptAssetMenuExtension::CallFunctionOnSelection(UFunction* Function, FExtenderSelection Selection) const
{
	UStruct* AssetDataStruct = FindObject<UStruct>(nullptr, TEXT("/Script/CoreUObject.AssetData"));

	TArray<TSharedPtr<FStructOnScope>> CallWithStructs;
	TArray<UObject*> CallWithObjects;

	bool bFunctionTakesObject = false;
	for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
	{
		auto* ObjectField = CastField<FObjectProperty>(*It);
		if (ObjectField != nullptr)
		{
			bool bIsSupportedClass = false;
			for (auto SupportedClass : SupportedClasses)
			{
				if (ObjectField->PropertyClass == SupportedClass)
				{
					bIsSupportedClass = true;
				}
			}

			if (bIsSupportedClass)
			{
				bFunctionTakesObject = true;
			}
		}
		break;
	}

	for (const FAssetData& Asset : Selection.SelectedAssets)
	{
		if (!SupportsAsset(Asset))
			continue;

		if (SupportedClasses.Num() != 0)
		{
			bool bIsSupportedClass = false;
			for (auto SupportedClass : SupportedClasses)
			{
				if (Asset.IsInstanceOf(SupportedClass.Get()))
				{
					bIsSupportedClass = true;
				}
			}

			 if (!bIsSupportedClass)
				 continue;
		}

		if (bFunctionTakesObject)
			CallWithObjects.Add(Asset.GetAsset());
		else
			CallWithStructs.Add(MakeShared<FStructOnScope>(AssetDataStruct, (uint8*)&Asset));
	}

	FScriptEditorPromptOptions Options;
	if (CallWithStructs.Num() != 0)
	{
		FScriptEditorPrompts::ShowPromptToCallFunction(
			this,
			Function->GetFName(),
			Options,
			CallWithStructs
		);
	}
	else if (CallWithObjects.Num() != 0)
	{
		FScriptEditorPrompts::ShowPromptToCallFunction(
			this,
			Function->GetFName(),
			Options,
			CallWithObjects
		);
	}
}