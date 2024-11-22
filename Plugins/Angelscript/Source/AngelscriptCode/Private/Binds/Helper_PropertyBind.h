#pragma once

#include "CoreMinimal.h"
#include "UObject/UnrealType.h"

#include "AngelscriptType.h"

#if WITH_EDITOR
inline FAngelscriptType::FBindParams GetPropertyBindParams(FProperty* Property)
{
	static const FName NAME_ScriptEditOnly("ScriptEditOnly");
	static const FName NAME_ScriptReadOnly("ScriptReadOnly");
	static const FName NAME_ScriptReadWrite("ScriptReadWrite");
	static const FName NAME_NotInAngelscript("NotInAngelscript");
	static const FName NAME_BlueprintProtected("BlueprintProtected");

	FAngelscriptType::FBindParams Params;

	// Can't bind static arrays. SAD!
	if (Property->ArrayDim != 1)
	{
		Params.bCanRead = false;
		Params.bCanWrite = false;
		return Params;
	}

	const bool bHasScriptEditOnly = Property->HasMetaData(NAME_ScriptEditOnly);
	const bool bHasScriptReadOnly = Property->HasMetaData(NAME_ScriptReadOnly);
	const bool bHasScriptReadWrite = Property->HasMetaData(NAME_ScriptReadWrite);
	const bool bHasNotInAngelscript = Property->HasMetaData(NAME_NotInAngelscript);

	if (bHasNotInAngelscript)
	{
		Params.bCanRead = false;
		Params.bCanWrite = false;
		Params.bCanEdit = false;
	}
	else
	{
		Params.bCanRead = false;
		Params.bCanWrite = false;
		Params.bCanEdit = false;
		Params.bProtected = Property->GetBoolMetaData(NAME_BlueprintProtected);

		// Since a lot of unreal components have visibility set only on components, but exposed sup params
		// We need to make the component editable and readwrite to be able to change the params as expected
		const bool bIsComponent = Property->HasAnyPropertyFlags(CPF_InstancedReference); 

		if (bHasScriptReadOnly)
		{
			Params.bCanRead = true;
		}
		else if (bHasScriptReadWrite)
		{
			Params.bCanRead = true;
			Params.bCanWrite = true;
			Params.bCanEdit = true;
		}
		else if(bHasScriptEditOnly)
		{
			Params.bCanRead = false;
			Params.bCanWrite = false;
			Params.bCanEdit = true;
		}
		else if (Property->HasAnyPropertyFlags(CPF_BlueprintVisible))
		{
			Params.bCanRead = true;

			if (bIsComponent)
				Params.bCanWrite = true;
			else if (!Property->HasAnyPropertyFlags(CPF_BlueprintReadOnly))
				Params.bCanWrite = true;
		}

		// This overrides everything to be able to handle delegates
		if (Property->HasAnyPropertyFlags(CPF_BlueprintAssignable))
		{
			Params.bCanRead = true;
			Params.bCanWrite = true;
			Params.bCanEdit = true;
		}
		// We can still edit even if its script read only
		else if (Property->HasAnyPropertyFlags(CPF_Edit))
		{
			if(bIsComponent)
				Params.bCanEdit = true;
			else if (!Property->HasAnyPropertyFlags(CPF_EditConst))
				Params.bCanEdit = true;
		}
	}

	return Params;
}
#endif