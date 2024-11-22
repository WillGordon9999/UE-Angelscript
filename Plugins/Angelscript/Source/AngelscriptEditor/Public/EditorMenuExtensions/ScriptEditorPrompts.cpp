#include "ScriptEditorPrompts.h"
#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "IStructureDetailsView.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"
#include "Editor.h"

class SScriptEditorPromptDialog : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SScriptEditorPromptDialog) {}

	/** Text to display on the "OK" button */
	SLATE_ARGUMENT(FText, OkButtonText)

	/** Tooltip text for the "OK" button */
	SLATE_ARGUMENT(FText, OkButtonTooltipText)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, TWeakPtr<SWindow> InParentWindow, TSharedRef<FStructOnScope> InStructOnScope, FScriptEditorPromptOptions PromptOptions)
	{
		bOKPressed = false;

		// Initialize details view
		FDetailsViewArgs DetailsViewArgs;
		{
			DetailsViewArgs.bAllowSearch = false;
			DetailsViewArgs.bHideSelectionTip = true;
			DetailsViewArgs.bLockable = false;
			DetailsViewArgs.bSearchInitialKeyFocus = true;
			DetailsViewArgs.bUpdatesFromSelection = false;
			DetailsViewArgs.bShowOptions = false;
			DetailsViewArgs.bShowModifiedPropertiesOption = false;
			DetailsViewArgs.bShowObjectLabel = false;
			DetailsViewArgs.bForceHiddenPropertyVisibility = true;
			DetailsViewArgs.bShowScrollBar = false;
		}
	
		FStructureDetailsViewArgs StructureViewArgs;
		{
			StructureViewArgs.bShowObjects = true;
			StructureViewArgs.bShowAssets = true;
			StructureViewArgs.bShowClasses = true;
			StructureViewArgs.bShowInterfaces = true;
		}

		FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		TSharedRef<IStructureDetailsView> StructureDetailsView = PropertyEditorModule.CreateStructureDetailView(DetailsViewArgs, StructureViewArgs, InStructOnScope);

		// Hide any property that has been marked as such
		StructureDetailsView->GetDetailsView()->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateLambda([PromptOptions](const FPropertyAndParent& InPropertyAndParent)
		{
			if (PromptOptions.HiddenProperties.Contains(InPropertyAndParent.Property.GetFName()))
			{
				return false;
			}

			if (PromptOptions.bShowOnlyParameters)
			{
				if (InPropertyAndParent.Property.HasAnyPropertyFlags(CPF_Parm))
				{
					return true;
				}

				for (const FProperty* Parent : InPropertyAndParent.ParentProperties)
				{
					if (Parent->HasAnyPropertyFlags(CPF_Parm))
					{
						return true;
					}
				}

				return false;
			}
			else
			{
				return true;;
			}
		}));

		StructureDetailsView->GetDetailsView()->ForceRefresh();

		ChildSlot
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.FillHeight(1.0f)
			[
				SNew(SScrollBox)
				+SScrollBox::Slot()
				[
					StructureDetailsView->GetWidget().ToSharedRef()
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SBorder)
				.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Right)
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.Padding(2.0f)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FAppStyle::Get(), "FlatButton.Success")
						.ForegroundColor(FLinearColor::White)
						.ContentPadding(FMargin(6, 2))
						.OnClicked_Lambda([this, InParentWindow, InArgs]()
						{
							if(InParentWindow.IsValid())
							{
								InParentWindow.Pin()->RequestDestroyWindow();
							}
							bOKPressed = true;
							return FReply::Handled(); 
						})
						.ToolTipText(InArgs._OkButtonTooltipText)
						[
							SNew(STextBlock)
							.TextStyle(FAppStyle::Get(), "ContentBrowser.TopBar.Font")
							.Text(InArgs._OkButtonText)
						]
					]
					+SHorizontalBox::Slot()
					.Padding(2.0f)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FAppStyle::Get(), "FlatButton")
						.ForegroundColor(FLinearColor::White)
						.ContentPadding(FMargin(6, 2))
						.OnClicked_Lambda([InParentWindow]()
						{ 
							if(InParentWindow.IsValid())
							{
								InParentWindow.Pin()->RequestDestroyWindow();
							}
							return FReply::Handled(); 
						})
						[
							SNew(STextBlock)
							.TextStyle(FAppStyle::Get(), "ContentBrowser.TopBar.Font")
							.Text(NSLOCTEXT("ScriptEditorPrompt", "Cancel", "Cancel"))
						]
					]
				]
			]
		];
	}

	bool bOKPressed;
};

bool FScriptEditorPrompts::ShowPromptForStruct(TSharedRef<FStructOnScope> Struct, FScriptEditorPromptOptions Options)
{
	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(Options.WindowTitle)
		.ClientSize(Options.WindowSize)
		.SupportsMinimize(false)
		.SupportsMaximize(false);

	TSharedPtr<SScriptEditorPromptDialog> Dialog;
	Window->SetContent(
		SAssignNew(Dialog, SScriptEditorPromptDialog, Window, Struct, Options)
			.OkButtonText(Options.OKButtonText)
			.OkButtonTooltipText(Options.OKButtonTooltip));

	GEditor->EditorAddModalWindow(Window);
	return Dialog->bOKPressed;
}

bool FScriptEditorPrompts::ShowPromptToCallFunction(const UObject* Object, FName FunctionName, FScriptEditorPromptOptions Options, TArray<UObject*> FirstParameterObjects)
{
	if (Object == nullptr)
		return false;

	UFunction* Function = Object->GetClass()->FindFunctionByName(FunctionName);
	if (Function == nullptr)
		return false;

	// Create a parameter struct and fill in defaults
	TSharedRef<FStructOnScope> FuncParams = MakeShared<FStructOnScope>(Function);

	FObjectProperty* FirstParamProperty = nullptr;

	bool bHasParametersToFill = false;

	int32 ParameterIndex = 0;
	for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
	{
		FString Defaults;
		if (UEdGraphSchema_K2::FindFunctionParameterDefaultValue(Function, *It, Defaults))
		{
			It->ImportText_Direct(*Defaults, It->ContainerPtrToValuePtr<uint8>(FuncParams->GetStructMemory()), nullptr, PPF_None);
		}

		// Check to see if the first parameter matches the selection object type, in that case we can directly forward the selection to it
		if (ParameterIndex == 0 && FirstParameterObjects.Num() != 0)
		{
			auto* ObjectField = CastField<FObjectProperty>(*It);
			if (ObjectField != nullptr)
			{
				FirstParamProperty = ObjectField;
				Options.HiddenProperties.Add(ObjectField->GetFName());
			}
			else
			{
				if (!Options.HiddenProperties.Contains(It->GetFName()))
					bHasParametersToFill = true;
			}
		}
		else
		{
			if (!Options.HiddenProperties.Contains(It->GetFName()))
				bHasParametersToFill = true;
		}

		++ParameterIndex;
	}

	Options.bShowOnlyParameters = true;

	if (bHasParametersToFill)
	{
		if (Options.WindowTitle.IsEmpty())
			Options.WindowTitle = Function->GetDisplayNameText();

		bool bProceed = ShowPromptForStruct(FuncParams, Options);
		if (!bProceed)
			return false;
	}

	FEditorScriptExecutionGuard ScriptGuard;
	if (FirstParameterObjects.Num() != 0 && FirstParamProperty != nullptr)
	{
		for (UObject* ParamObject : FirstParameterObjects)
		{
			if (ParamObject != nullptr)
			{
				if (!ParamObject->GetClass()->IsChildOf(FirstParamProperty->PropertyClass))
					continue;
			}

			FirstParamProperty->SetObjectPropertyValue_InContainer(FuncParams->GetStructMemory(), ParamObject);
			((UObject*)Object)->ProcessEvent(Function, FuncParams->GetStructMemory());
		}
	}
	else
	{
		((UObject*)Object)->ProcessEvent(Function, FuncParams->GetStructMemory());
	}

	return true;
}

bool FScriptEditorPrompts::ShowPromptToCallFunction(const UObject* Object, FName FunctionName, FScriptEditorPromptOptions Options, TArray<TSharedPtr<FStructOnScope>> FirstParameterStructs)
{
	if (Object == nullptr)
		return false;

	UFunction* Function = Object->GetClass()->FindFunctionByName(FunctionName);
	if (Function == nullptr)
		return false;

	// Create a parameter struct and fill in defaults
	TSharedRef<FStructOnScope> FuncParams = MakeShared<FStructOnScope>(Function);

	FStructProperty* FirstParamProperty = nullptr;

	bool bHasParametersToFill = false;

	int32 ParameterIndex = 0;
	for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
	{
		FString Defaults;
		if (UEdGraphSchema_K2::FindFunctionParameterDefaultValue(Function, *It, Defaults))
		{
			It->ImportText_Direct(*Defaults, It->ContainerPtrToValuePtr<uint8>(FuncParams->GetStructMemory()), nullptr, PPF_None);
		}

		// Check to see if the first parameter matches the selection object type, in that case we can directly forward the selection to it
		if (ParameterIndex == 0 && FirstParameterStructs.Num() != 0)
		{
			auto* StructField = CastField<FStructProperty>(*It);
			if (StructField != nullptr)
			{
				FirstParamProperty = StructField;
				Options.HiddenProperties.Add(StructField->GetFName());
			}
			else
			{
				if (!Options.HiddenProperties.Contains(It->GetFName()))
					bHasParametersToFill = true;
			}
		}
		else
		{
			if (!Options.HiddenProperties.Contains(It->GetFName()))
				bHasParametersToFill = true;
		}

		++ParameterIndex;
	}

	Options.bShowOnlyParameters = true;

	if (bHasParametersToFill)
	{
		if (Options.WindowTitle.IsEmpty())
			Options.WindowTitle = Function->GetDisplayNameText();

		bool bProceed = ShowPromptForStruct(FuncParams, Options);
		if (!bProceed)
			return false;
	}

	FEditorScriptExecutionGuard ScriptGuard;
	if (FirstParameterStructs.Num() != 0 && FirstParamProperty != nullptr)
	{
		for (TSharedPtr<FStructOnScope> ParamStruct : FirstParameterStructs)
		{
			if (ParamStruct->GetStruct() != FirstParamProperty->Struct)
				continue;

			FirstParamProperty->CopyCompleteValue(
				FirstParamProperty->ContainerPtrToValuePtr<void>(FuncParams->GetStructMemory()),
				ParamStruct->GetStructMemory()
			);

			((UObject*)Object)->ProcessEvent(Function, FuncParams->GetStructMemory());
		}
	}
	else
	{
		((UObject*)Object)->ProcessEvent(Function, FuncParams->GetStructMemory());
	}

	return true;
}

bool FScriptEditorPrompts::ShowPromptToCallFunctionOnObjects(UFunction* Function, TArray<UObject*> Objects, FScriptEditorPromptOptions Options)
{
	if (Function == nullptr)
		return false;

	// Create a parameter struct and fill in defaults
	TSharedRef<FStructOnScope> FuncParams = MakeShared<FStructOnScope>(Function);

	bool bHasParametersToFill = false;
	for (TFieldIterator<FProperty> It(Function); It && It->HasAnyPropertyFlags(CPF_Parm); ++It)
	{
		FString Defaults;
		if (UEdGraphSchema_K2::FindFunctionParameterDefaultValue(Function, *It, Defaults))
		{
			It->ImportText_Direct(*Defaults, It->ContainerPtrToValuePtr<uint8>(FuncParams->GetStructMemory()), nullptr, PPF_None);
		}

		if (!Options.HiddenProperties.Contains(It->GetFName()))
			bHasParametersToFill = true;
	}

	Options.bShowOnlyParameters = true;

	if (bHasParametersToFill)
	{
		if (Options.WindowTitle.IsEmpty())
			Options.WindowTitle = Function->GetDisplayNameText();

		bool bProceed = ShowPromptForStruct(FuncParams, Options);
		if (!bProceed)
			return false;
	}

	FEditorScriptExecutionGuard ScriptGuard;
	for (UObject* Object : Objects)
	{
		if (Object == nullptr)
			continue;
		if (!Object->IsA(Function->GetOuterUClass()))
			continue;

		Object->ProcessEvent(Function, FuncParams->GetStructMemory());
	}

	return true;
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ScriptEditorPrompts(FAngelscriptBinds::EOrder::Late, []()
{
	FAngelscriptBinds::FNamespace Namespace("EditorPrompt");

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptForStruct(?& Struct)",
		[](void* StructAddr, int TypeId) -> bool
		{
			const FAngelscriptTypeUsage Usage = FAngelscriptTypeUsage::FromTypeId(TypeId);
			const UStruct* StructDef = Usage.GetUnrealStruct();
			if (StructDef == nullptr)
			{
				FAngelscriptManager::Throw("ShowPromptForStruct: not a valid USTRUCT");
				return false;
			}

			TSharedRef<FStructOnScope> Struct = MakeShared<FStructOnScope>(StructDef, (uint8*)StructAddr);
			return FScriptEditorPrompts::ShowPromptForStruct(Struct, FScriptEditorPromptOptions());
		}
	);

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptForStruct(?& Struct, const FScriptEditorPromptOptions& Options)",
		[](void* StructAddr, int TypeId, const FScriptEditorPromptOptions& Options) -> bool
		{
			const FAngelscriptTypeUsage Usage = FAngelscriptTypeUsage::FromTypeId(TypeId);
			const UStruct* StructDef = Usage.GetUnrealStruct();
			if (StructDef == nullptr)
			{
				FAngelscriptManager::Throw("ShowPromptForStruct: not a valid USTRUCT");
				return false;
			}

			TSharedRef<FStructOnScope> Struct = MakeShared<FStructOnScope>(StructDef, (uint8*)StructAddr);
			return FScriptEditorPrompts::ShowPromptForStruct(Struct, Options);
		}
	);

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptToCallFunction(UObject Object, FName FunctionName)",
		[](UObject* Object, FName FunctionName) -> bool
		{
			return FScriptEditorPrompts::ShowPromptToCallFunction(Object, FunctionName, FScriptEditorPromptOptions(), TArray<UObject*>());
		}
	);

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptToCallFunction(UObject Object, FName FunctionName, const FScriptEditorPromptOptions& Options)",
		[](UObject* Object, FName FunctionName, const FScriptEditorPromptOptions& Options) -> bool
		{
			return FScriptEditorPrompts::ShowPromptToCallFunction(Object, FunctionName, Options, TArray<UObject*>());
		}
	);

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptToCallFunction(UObject Object, FName FunctionName, const FScriptEditorPromptOptions& Options, TArray<UObject> FirstParameterObjects)",
		[](UObject* Object, FName FunctionName, const FScriptEditorPromptOptions& Options, TArray<UObject*> FirstParameterObjects) -> bool
		{
			return FScriptEditorPrompts::ShowPromptToCallFunction(Object, FunctionName, Options, FirstParameterObjects);
		}
	);

	FAngelscriptBinds::BindGlobalFunction(
		"bool ShowPromptToCallFunctionOnObjects(TArray<UObject> Objects, FName FunctionName, const FScriptEditorPromptOptions& Options)",
		[](TArray<UObject*> Objects, FName FunctionName, const FScriptEditorPromptOptions& Options) -> bool
		{
			UFunction* FoundFunction = nullptr;
			for (UObject* Object : Objects)
			{
				if (Object == nullptr)
					continue;
				FoundFunction = Object->GetClass()->FindFunctionByName(FunctionName);
				if (FoundFunction != nullptr)
					break;
			}
			if (FoundFunction == nullptr)
				return false;
			return FScriptEditorPrompts::ShowPromptToCallFunctionOnObjects(FoundFunction, Objects, Options);
		}
	);
});
