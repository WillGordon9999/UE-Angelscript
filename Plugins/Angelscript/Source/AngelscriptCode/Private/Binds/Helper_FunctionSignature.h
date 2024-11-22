#pragma once

#include "CoreMinimal.h"
#include "UObject/UnrealType.h"

#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptDocs.h"
#include "AngelscriptBindDatabase.h"

#include "StartAngelscriptHeaders.h"
//#include "as_scriptfunction.h"
#include "source/as_scriptfunction.h"
#include "EndAngelscriptHeaders.h"

static const FName NAME_Signature_ScriptName("ScriptName");
static const FName NAME_Signature_WorldContext("WorldContext");
static const FName NAME_Signature_DeterminesOutputType("DeterminesOutputType");
static const FName NAME_Signature_ScriptGlobalScope("ScriptGlobalScope");
static const FName NAME_Signature_ToolTip("ToolTip");
static const FName NAME_Signature_Category("Category");
static const FName NAME_Signature_ScriptMixin("ScriptMixin");
static const FName NAME_Signature_ScriptTrivial("ScriptTrivial");
static const FName NAME_Signature_NotAngelscriptProperty("NotAngelscriptProperty");
static const FName NAME_AS_Tooltip("ScriptTooltip");
static const FName NAME_AS_BlueprintProtected("BlueprintProtected");
static const FName NAME_Function_DeprecatedFunction("DeprecatedFunction");
static const FName NAME_Function_DeprecationMessage("DeprecationMessage");
static const FName NAME_OptionalWorldContext("OptionalWorldContext");
static const FName NAME_ScriptNoDiscard("ScriptNoDiscard");
static const FName NAME_ScriptAllowDiscard("ScriptAllowDiscard");

struct FAngelscriptFunctionSignature
{
	TArray<FAngelscriptTypeUsage> ArgumentTypes;
	FAngelscriptTypeUsage ReturnType;

	TArray<FString> ArgumentNames;
	TArray<FString> ArgumentDefaults;

	bool bAllTypesValid = true;
	int8 WorldContextArgument = -1;
	int8 DeterminesOutputTypeArgument = -1;

	FString Declaration;
	FString ClassName;

	bool bStaticInScript = false;
	bool bStaticInUnreal = false;

	bool bGlobalScope = false;
	bool bNotAngelscriptProperty = false;
	bool bTrivial = false;
	bool bBlueprintProtected = false;
	FString ScriptName;

#if WITH_EDITOR
	bool bDeprecated = false;
	FString DeprecationMessage;
#endif

	UFunction* Function;

	FAngelscriptFunctionSignature()
	{
	}

#if WITH_EDITOR
	FAngelscriptFunctionSignature(TSharedRef<FAngelscriptType> InType, UFunction* InFunction, const TCHAR* OverrideName = nullptr)
	{
		InitFromFunction(InType, InFunction, OverrideName);
	}

	static FString GetScriptNameForFunction(UFunction* InFunction)
	{
		// Determine the actual name of the function to bind
		FString OutScriptName = InFunction->GetName();

		if (InFunction->HasMetaData(NAME_Signature_ScriptName))
		{
			OutScriptName = InFunction->GetMetaData(NAME_Signature_ScriptName);
		}
		else
		{
			bool bChangedName = false;
			bChangedName |= OutScriptName.RemoveFromStart(TEXT("K2_"));
			bChangedName |= OutScriptName.RemoveFromStart(TEXT("BP_"));
			bChangedName |= OutScriptName.RemoveFromStart(TEXT("AS_"));

			if (InFunction->HasAnyFunctionFlags(FUNC_BlueprintEvent))
			{
				bChangedName |= OutScriptName.RemoveFromStart(TEXT("Received_"));
				bChangedName |= OutScriptName.RemoveFromStart(TEXT("Receive"));
			}

			if (bChangedName)
			{
				// If another function already exists with this name, don't bind it without the prefix
				UClass* OwningClass = CastChecked<UClass>(InFunction->GetOuter());
				if (UFunction* ExistingFunction = OwningClass->FindFunctionByName(*OutScriptName))
				{
					if (ExistingFunction != InFunction && ExistingFunction->HasAnyFunctionFlags(FUNC_BlueprintCallable | FUNC_BlueprintPure | FUNC_BlueprintEvent))
					{
						OutScriptName = InFunction->GetName();
					}
				}
			}
		}
		return OutScriptName;
	}
	
	static FString GetScriptNamespaceForClass(TSharedRef<FAngelscriptType> InType, UFunction* InFunction)
	{
		FString Namespace;

		bool bIsScriptName = false;
		if(FAngelscriptManager::bUseScriptNameForBlueprintLibraryNamespaces && InFunction->GetOuterUClass()->HasMetaData(NAME_Signature_ScriptName))
		{
			// Use the ScriptName meta data instead of the type name if available
			// We assume that the ScriptName does not start with U
			Namespace = InFunction->GetOuterUClass()->GetMetaData(NAME_Signature_ScriptName);
			bIsScriptName = true;
		}
		else
		{
			Namespace = InType->GetAngelscriptTypeName();
		}

		// Remove the first prefix that matches the start of the namespace
		// The prefixes are sorted by length, so that the longest found prefix is removed
		bool bFoundPrefix = false;
		for(const auto& Prefix : FAngelscriptManager::BlueprintLibraryNamespacePrefixesToStrip)
		{
			if(Namespace.RemoveFromStart(Prefix))
			{
				bFoundPrefix = true;
				break;
			}
		}

		// Remove the first suffix that matches the end of the namespace
		// The suffixes are sorted by length, so that the longest found suffix is removed
		bool bFoundSuffix = false;
		for(const auto& Suffix : FAngelscriptManager::BlueprintLibraryNamespaceSuffixesToStrip)
		{
			if(Namespace.RemoveFromEnd(Suffix))
			{
				bFoundSuffix = true;
				break;
			}
		}

		if(!bIsScriptName && !bFoundPrefix && bFoundSuffix)
		{
#if WITH_ANGELSCRIPT_HAZE
			Namespace.RemoveFromStart("UHaze");
#endif

			// Make sure that anything with a stripped suffix that hasn't already had the prefix removed has U stripped from the front
			// Does not apply to ScriptName namespaces, since we assume those have already simplified the name
			Namespace.RemoveFromStart("U");
		}

		return Namespace;
	}

	void InitFromFunction(TSharedRef<FAngelscriptType> InType, UFunction* InFunction, const TCHAR* OverrideName = nullptr)
	{
		Function = InFunction;

		// Map all properties in the UFunction to FAngelscriptTypes
		for( TFieldIterator<FProperty> It(Function); It && (It->PropertyFlags & CPF_Parm); ++It )
		{
			FProperty* Property = *It;
			FAngelscriptTypeUsage Type = FAngelscriptTypeUsage::FromProperty(Property);

			if (!Type.IsValid())
			{
				bAllTypesValid = false;
				break;
			}

			if( Property->PropertyFlags & CPF_ReturnParm )
			{
				ensure(!ReturnType.IsValid());
				ReturnType = Type;
			}
			else
			{
				ArgumentTypes.Add(Type);
				ArgumentNames.Add(Property->GetName());

				FString DefaultMeta = TEXT("CPP_Default_");
				DefaultMeta += Property->GetName();

				FName MetaName = *DefaultMeta;
				if (Function->HasMetaData(MetaName))
				{
					FString MetaStr = Function->GetMetaData(MetaName);
					if (MetaStr == TEXT("None"))
						MetaStr = TEXT("");
					ArgumentDefaults.Add(MetaStr);
				}
				else
				{
					ArgumentDefaults.Add(TEXT("-"));
				}
			}
		}

		// If the function has a world context pin, we should default it
		const FString& WorldContextParam = Function->GetMetaData(NAME_Signature_WorldContext);
		if (WorldContextParam.Len() != 0)
		{
			for (int32 ArgIndex = 0, ArgCount = ArgumentTypes.Num(); ArgIndex < ArgCount; ++ArgIndex)
			{
				if (ArgumentNames[ArgIndex] == WorldContextParam)
				{
					ArgumentDefaults[ArgIndex] = TEXT("__WorldContext");
					WorldContextArgument = ArgIndex;
					break;
				}
			}
		}

		// Check if we're using the DeterminesOutputType functionality to change the return type dynamically
		const FString& DeterminesOutputTypeParam = Function->GetMetaData(NAME_Signature_DeterminesOutputType);
		if (DeterminesOutputTypeParam.Len() != 0)
		{
			for (int32 ArgIndex = 0, ArgCount = ArgumentTypes.Num(); ArgIndex < ArgCount; ++ArgIndex)
			{
				if (ArgumentNames[ArgIndex] == DeterminesOutputTypeParam)
				{
					DeterminesOutputTypeArgument = ArgIndex;
					break;
				}
			}
		}

		if (OverrideName)
			ScriptName = OverrideName;
		else
			ScriptName = GetScriptNameForFunction(Function);

		// Functions with - as their script name are excluded from being bound
		if (ScriptName == TEXT("-"))
			return;

		bNotAngelscriptProperty = Function->HasMetaData(NAME_Signature_NotAngelscriptProperty);
		bTrivial = Function->HasMetaData(NAME_Signature_ScriptTrivial);
		bBlueprintProtected = Function->GetBoolMetaData(NAME_AS_BlueprintProtected);

		bDeprecated = Function->HasMetaData(NAME_Function_DeprecatedFunction);
		if (bDeprecated)
			DeprecationMessage = Function->GetMetaData(NAME_Function_DeprecationMessage);

		// Figure out the namespace for static functions
		bool bForceConst = false;
		bStaticInUnreal = Function->HasAnyFunctionFlags(FUNC_Static);
		if (bStaticInUnreal)
		{
			FString Namespace = GetScriptNamespaceForClass(InType, Function);
			bGlobalScope = Function->HasMetaData(NAME_Signature_ScriptGlobalScope);

			// If our class is marked as a 'script mixin', and our argument matches, bind it as a member
			bool bFoundMixin = false;
			const FString& MixinClasses = Function->GetOuterUClass()->GetMetaData(NAME_Signature_ScriptMixin);
			if (MixinClasses.Len() != 0 && ArgumentTypes.Num() > 0
				&& (ArgumentTypes[0].IsObjectPointer() || ArgumentTypes[0].bIsReference))
			{
				TArray<FString> MixinList;
				MixinClasses.ParseIntoArray(MixinList, TEXT(" "));

				FString FirstParamType = ArgumentTypes[0].Type->GetAngelscriptTypeName();
				for (const FString& Mixin : MixinList)
				{
					if (FirstParamType == Mixin)
					{
						if (ArgumentTypes[0].bIsConst)
							bForceConst = true;

						ArgumentTypes.RemoveAt(0);
						ArgumentNames.RemoveAt(0);
						ArgumentDefaults.RemoveAt(0);
						ClassName = Mixin;

						bStaticInScript = false;
						bFoundMixin = true;

						if (WorldContextArgument >= 0)
							WorldContextArgument -= 1;
						if (DeterminesOutputTypeArgument >= 0)
							DeterminesOutputTypeArgument -= 1;
						break;
					}
				}
			}

			if (!bFoundMixin)
			{
				ClassName = Namespace;
				bStaticInScript = true;
			}
		}
		else
		{
			ClassName = InType->GetAngelscriptTypeName();
		}

		// Build the declaration for the function
		Declaration = FAngelscriptType::BuildFunctionDeclaration(ReturnType, ScriptName, ArgumentTypes, ArgumentNames, ArgumentDefaults,
			(Function->HasAnyFunctionFlags(FUNC_Const) && !bStaticInScript) || bForceConst);

		// Add no-discard modifier if we want to
		if (ReturnType.IsValid())
		{
			if (Function->HasMetaData(NAME_ScriptNoDiscard))
				Declaration += TEXT(" no_discard");
			else if (Function->HasMetaData(NAME_ScriptAllowDiscard))
				Declaration += TEXT(" allow_discard");
		}
	}
#endif

	void InitFromDB(TSharedRef<FAngelscriptType> InType, UFunction* InFunction, const FAngelscriptMethodBind& DBBind, bool bInitTypes)
	{
		Function = InFunction;
		Declaration = DBBind.Declaration;
		WorldContextArgument = DBBind.WorldContextArgument;
		DeterminesOutputTypeArgument = DBBind.DeterminesOutputTypeArgument;
		bStaticInUnreal = DBBind.bStaticInUnreal;
		bStaticInScript = DBBind.bStaticInScript;
		bGlobalScope = DBBind.bGlobalScope;
		bNotAngelscriptProperty = DBBind.bNotAngelscriptProperty;
		bTrivial = DBBind.bTrivial;
		ClassName = DBBind.ClassName.Len() != 0 ? DBBind.ClassName : InType->GetAngelscriptTypeName();
		bAllTypesValid = bInitTypes;
		ScriptName = DBBind.ScriptName.Len() != 0 ? DBBind.ScriptName : InFunction->GetName();

		// Map all properties in the UFunction to FAngelscriptTypes
		if (bInitTypes)
		{
			for (TFieldIterator<FProperty> It(Function); It && (It->PropertyFlags & CPF_Parm); ++It)
			{
				FProperty* Property = *It;
				FAngelscriptTypeUsage Type = FAngelscriptTypeUsage::FromProperty(Property);

				if (!Type.IsValid())
				{
					bAllTypesValid = false;
					break;
				}

				if (Property->PropertyFlags & CPF_ReturnParm)
				{
					ensure(!ReturnType.IsValid());
					ReturnType = Type;
				}
				else
				{
					ArgumentTypes.Add(Type);
					ArgumentNames.Add(Property->GetName());
				}
			}
		}
	}

	void WriteToDB(FAngelscriptMethodBind& DBBind)
	{
		DBBind.Declaration = Declaration;
		DBBind.UnrealPath = Function->GetName();
		if (bStaticInUnreal)
			DBBind.ClassName = ClassName;
		DBBind.WorldContextArgument = WorldContextArgument;
		DBBind.DeterminesOutputTypeArgument = DeterminesOutputTypeArgument;
		DBBind.bStaticInUnreal = bStaticInUnreal;
		DBBind.bStaticInScript = bStaticInScript;
		DBBind.bGlobalScope = bGlobalScope;
		DBBind.bNotAngelscriptProperty = bNotAngelscriptProperty;
		DBBind.bTrivial = bTrivial;
		if (Function->HasAnyFunctionFlags(FUNC_BlueprintEvent))
			DBBind.ScriptName = ScriptName;
	}

#if WITH_EDITOR
	bool IsFunctionEditorOnly() const
	{
		if (Function->HasAnyFunctionFlags(FUNC_EditorOnly))
			return true;

		if (Function->HasAnyFunctionFlags(FUNC_Static))
		{
			extern ANGELSCRIPTCODE_API bool IsEditorOnlyClass(UClass* Class);
			UClass* Class = Function->GetOuterUClass();
			if (Class != nullptr && IsEditorOnlyClass(Class))
				return true;
		}

		return false;
	}
#endif

	void ModifyScriptFunction(int FunctionId)
	{
#if !WITH_EDITOR
		if (WorldContextArgument != -1 || bNotAngelscriptProperty || bBlueprintProtected || DeterminesOutputTypeArgument != -1)
#endif
		{
			auto* ScriptFunction = (asCScriptFunction*)FAngelscriptManager::Get().GetScriptEngine()->GetFunctionById(FunctionId);
			if (ScriptFunction != nullptr)
			{
				if (WorldContextArgument != -1)
				{
					ScriptFunction->hiddenArgumentIndex = WorldContextArgument;
					ScriptFunction->hiddenArgumentDefault = "__WorldContext";
#if WITH_EDITOR
					if (!Function->HasMetaData(NAME_OptionalWorldContext))
						ScriptFunction->traits.SetTrait(asTRAIT_USES_WORLDCONTEXT, true);
#endif
				}
				
				if (DeterminesOutputTypeArgument != -1)
				{
					ScriptFunction->determinesOutputTypeArgumentIndex = DeterminesOutputTypeArgument;
				}

				if (bNotAngelscriptProperty)
				{
					ScriptFunction->SetProperty(false);
				}

				if (bBlueprintProtected)
				{
					ScriptFunction->SetProtected(true);
				}

#if WITH_EDITOR
				if (bDeprecated)
				{
					ScriptFunction->traits.SetTrait(asTRAIT_DEPRECATED, true);
					ScriptFunction->deprecationMessage = TCHAR_TO_UTF8(*DeprecationMessage);
				}

				if (IsFunctionEditorOnly())
				{
					ScriptFunction->traits.SetTrait(asTRAIT_EDITOR_ONLY, true);
				}
#endif
			}
		}

#if WITH_EDITOR
		FAngelscriptDocs::AddUnrealDocumentation(
			FunctionId,
			Function->GetMetaData(NAME_Signature_ToolTip),
			Function->GetMetaData(NAME_Signature_Category),
			Function);

		FString ScriptTooltip;
		/*if (ArgumentTypes.Num() > 0)
		{
			for (int32 i = 0, Count = ArgumentTypes.Num(); i < Count; ++i)
			{
				ScriptTooltip += FString::Printf(TEXT("%s %s;\n"),
					*ArgumentTypes[i].GetAngelscriptDeclaration(),
					*ArgumentNames[i]);
			}
			ScriptTooltip += TEXT("\n");
		}*/

		if (!bStaticInScript)
			ScriptTooltip += FString::Printf(TEXT("%s Target;\n"), *ClassName);
		if (ReturnType.IsValid())
		{
			ScriptTooltip += ReturnType.GetAngelscriptDeclaration();
			ScriptTooltip += TEXT(" ReturnValue = ");
		}

		if (bStaticInScript)
		{
			ScriptTooltip += ClassName;
			ScriptTooltip += TEXT("::");
		}
		else
		{
			ScriptTooltip += TEXT("Target.");
		}

		ScriptTooltip += ScriptName;
		ScriptTooltip += TEXT("(");
		for (int32 i = 0, Count = ArgumentTypes.Num(); i < Count; ++i)
		{
			if (i != 0)
				ScriptTooltip += TEXT(", ");
			ScriptTooltip += ArgumentNames[i];
		}
		ScriptTooltip += TEXT(");");

		Function->SetMetaData(NAME_AS_Tooltip, *ScriptTooltip);
#endif
	}
};
