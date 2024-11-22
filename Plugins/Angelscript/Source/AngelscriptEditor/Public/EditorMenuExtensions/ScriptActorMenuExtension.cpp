#include "ScriptActorMenuExtension.h"
#include "ScriptEditorPrompts.h"

TArray<UFunction*> UScriptActorMenuExtension::GatherExtensionFunctions() const
{
	// Don't allow any functions if none of the actors are supported
	if (CurrentSelection.SelectedObjects.Num() != 0)
	{
		bool bAnyActorSupported = false;
		for (UObject* Object : CurrentSelection.SelectedObjects)
		{
			AActor* Actor = Cast<AActor>(Object);
			if (Actor == nullptr)
				continue;

			if (SupportedClasses.Num() != 0)
			{
				bool bIsSupportedClass = false;
				for (auto SupportedClass : SupportedClasses)
				{
					if (Actor->IsA(SupportedClass))
					{
						bIsSupportedClass = true;
					}
				}

				 if (!bIsSupportedClass)
					 continue;
			}

			if (SupportsActor(Actor))
			{
				bAnyActorSupported = true;
				break;
			}
		}

		if (!bAnyActorSupported)
			return TArray<UFunction*>();
	}

	TArray<UFunction*> Functions = Super::GatherExtensionFunctions();

	// Filter out functions that don't support any of the objects we have
	return Functions.FilterByPredicate([&](UFunction* Function)
	{
		FObjectProperty* FirstParamProperty = nullptr;
		for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
		{
			auto* ObjectField = CastField<FObjectProperty>(*It);
			if (ObjectField != nullptr)
				FirstParamProperty = ObjectField;
			break;
		}

		if (FirstParamProperty == nullptr)
			return true;

		bool bAnyActorSupported = false;
		for (UObject* Object : CurrentSelection.SelectedObjects)
		{
			AActor* Actor = Cast<AActor>(Object);
			if (Actor == nullptr)
				continue;

			if (Actor->IsA(FirstParamProperty->PropertyClass))
			{
				bAnyActorSupported = true;
				break;
			}
		}

		return bAnyActorSupported;
	});
}

void UScriptActorMenuExtension::CallFunctionOnSelection(UFunction* Function, FExtenderSelection Selection) const
{
	FObjectProperty* FirstParamProperty = nullptr;
	for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
	{
		auto* ObjectField = CastField<FObjectProperty>(*It);
		if (ObjectField != nullptr)
			FirstParamProperty = ObjectField;
		break;
	}

	TArray<UObject*> CallWithObjects;
	for (UObject* Object : Selection.SelectedObjects)
	{
		AActor* Actor = Cast<AActor>(Object);
		if (Actor == nullptr)
			continue;
		if (!SupportsActor(Actor))
			continue;

		if (SupportedClasses.Num() != 0)
		{
			bool bIsSupportedClass = false;
			for (auto SupportedClass : SupportedClasses)
			{
				if (Actor->IsA(SupportedClass))
				{
					bIsSupportedClass = true;
				}
			}

			 if (!bIsSupportedClass)
				 continue;
		}

		if (FirstParamProperty == nullptr || Actor->IsA(FirstParamProperty->PropertyClass))
			CallWithObjects.Add(Actor);
	}

	FScriptEditorPromptOptions Options;
	FScriptEditorPrompts::ShowPromptToCallFunction(
		this,
		Function->GetFName(),
		Options,
		CallWithObjects
	);
}