#include "ClassGenerator/ASStruct.h"

#include "Misc/SecureHash.h"

#include "AngelscriptManager.h"
#include "AngelscriptInclude.h"

#include "StartAngelscriptHeaders.h"
//#include "as_config.h"
//#include "as_scriptengine.h"
//#include "as_scriptobject.h"
//#include "as_objecttype.h"
//#include "as_context.h"

#include "source/as_config.h"
#include "source/as_scriptengine.h"
#include "source/as_scriptobject.h"
#include "source/as_objecttype.h"
#include "source/as_context.h"
#include "EndAngelscriptHeaders.h"

struct FASStructOps : UASStruct::ICppStructOps
{
	UASStruct* Struct;
	asCObjectType* ScriptType;

	asIScriptFunction* EqualsFunction;
	asIScriptFunction* ConstructFunction;

	FASStructOps(UASStruct* InStruct, int32 InSize, int32 InAlignment)
		: UASStruct::ICppStructOps(InSize, InAlignment)
		, Struct(InStruct)
		, ScriptType((asCObjectType*)InStruct->ScriptType)
	{
		SetFromStruct(InStruct);
	}

	virtual FCapabilities GetCapabilities() const
	{
		FCapabilities Capabilities;
		FMemory::Memzero(Capabilities);
		Capabilities.HasDestructor = true;
		Capabilities.HasCopy = true;
		Capabilities.HasIdentical = (EqualsFunction != nullptr);

		return Capabilities;
	}

	void SetFromStruct(UASStruct* InStruct)
	{
		check(InStruct == Struct);
		ScriptType = (asCObjectType*)InStruct->ScriptType;

		if (ScriptType != nullptr)
		{
			auto& Manager = FAngelscriptManager::Get();
			if (ScriptType->beh.construct != 0)
				ConstructFunction = Manager.Engine->GetFunctionById(ScriptType->beh.construct);
			else
				ConstructFunction = nullptr;

			if (ScriptType->GetFirstMethod("opEquals") != nullptr)
			{
				FString StructName = ANSI_TO_TCHAR(ScriptType->GetName());
				FString EqualsDecl = FString::Printf(TEXT("bool opEquals(const %s& Other) const"), *StructName);
				EqualsFunction = ScriptType->GetMethodByDecl(TCHAR_TO_ANSI(*EqualsDecl));
			}
			else
			{
				EqualsFunction = nullptr;
			}
		}
		else
		{
			EqualsFunction = nullptr;
			ConstructFunction = nullptr;
		}
	}

	void Construct(void *Dest) override
	{
		if (ScriptType == nullptr)
		{
			FMemory::Memzero(Dest, GetSize());
			return;
		}

		new(Dest) asCScriptObject(ScriptType);

		if (ConstructFunction != nullptr)
		{
			// Call the angelscript constructor of the scriptobject
			FAngelscriptContext Context;
			Context->Prepare(ConstructFunction);
			Context->SetObject((asIScriptObject*)Dest);
			Context->Execute();
		}
		else
		{
			FMemory::Memzero(Dest, GetSize());
		}
	}

	void ConstructForTests(void* Dest) override
	{
		Construct(Dest);
	}

	void Destruct(void *Dest) override
	{
		if (ScriptType == nullptr)
		{
			FMemory::Memzero(Dest, GetSize());
			return;
		}

		auto* ScriptObject = (asCScriptObject*)(Dest);
		ScriptObject->CallDestructor(ScriptType);
	}

	bool Copy(void* Dest, void const* Src, int32 ArrayDim) override
	{
		if (ScriptType == nullptr)
			return true;

		auto* DestObject = (asCScriptObject*)(Dest);
		auto* SourceObject = (asCScriptObject*)(Src);
		DestObject->PerformCopy(SourceObject, ScriptType, ScriptType);
		return true;
	}

	bool Identical(const void* A, const void* B, uint32 PortFlags, bool& bOutResult) override
	{
		if (ScriptType == nullptr)
			return false;
		if (EqualsFunction == nullptr)
			return false;

		// Call the angelscript compare function
		FAngelscriptContext Context;
		Context->Prepare(EqualsFunction);
		Context->SetObject((asIScriptObject*)A);
		Context->SetArgAddress(0, (void*)B);
		Context->Execute();
		bOutResult = (Context->GetReturnByte() != 0);
		return true;
	}

	virtual bool Serialize(FArchive& Ar, void *Data) { return false; }
	virtual bool Serialize(FStructuredArchive::FSlot Slot, void *Data) { return false; }
	virtual void PostSerialize(const FArchive& Ar, void *Data) {}

	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess, void *Data) { return false; }
	virtual bool NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms, void *Data) { return false; }
	virtual bool ExportTextItem(FString& ValueStr, const void* PropertyValue, const void* DefaultValue, class UObject* Parent, int32 PortFlags, class UObject* ExportRootScope) { return false; }
	virtual bool ImportTextItem(const TCHAR*& Buffer, void* Data, int32 PortFlags, class UObject* OwnerObject, FOutputDevice* ErrorText) { return false; }
	virtual bool SerializeFromMismatchedTag(struct FPropertyTag const& Tag, FArchive& Ar, void *Data) { return false; }
	virtual bool StructuredSerializeFromMismatchedTag(struct FPropertyTag const& Tag, FStructuredArchive::FSlot Slot, void *Data) { return false; }
	virtual bool FindInnerPropertyInstance(FName PropertyName, const void* Data, const FProperty*& OutProp, const void*& OutData) const { return false;} //override removed

	virtual void PostScriptConstruct(void *Data) {}
	virtual void GetPreloadDependencies(void* Data, TArray<UObject*>& OutDeps) {}

	virtual uint32 GetStructTypeHash(const void* Src) { return 0; }

	virtual TPointerToAddStructReferencedObjects AddStructReferencedObjects() { return nullptr; }

	void GetCppTraits(bool& OutHasConstructor, bool& OutHasDestructor, bool& OutHasAssignmentOperator, bool& OutHasCopyConstructor) const
	{
		OutHasConstructor        = true;
		OutHasDestructor         = true;
		OutHasAssignmentOperator = true;
		OutHasCopyConstructor    = true;
	}

#if WITH_EDITOR
	virtual bool CanEditChange(const FEditPropertyChain& PropertyChain, const void* Data) const { return true; }
#endif
};

UASStruct::UASStruct(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UASStruct::ICppStructOps* UASStruct::CreateCppStructOps()
{
	return new FASStructOps(this, GetPropertiesSize(), GetMinAlignment());
}

void UASStruct::PrepareCppStructOps()
{
	if (CppStructOps == nullptr)
		SetCppStructOps(CreateCppStructOps());
	Super::PrepareCppStructOps();
}

void UASStruct::UpdateScriptType()
{
	FASStructOps* Ops = ((FASStructOps*)GetCppStructOps());
	Ops->SetFromStruct(this);

	// Update struct flags that may have changed in the new script type
	if (Ops->EqualsFunction != nullptr)
		StructFlags = EStructFlags(StructFlags | STRUCT_IdenticalNative);
	else
		StructFlags = EStructFlags(StructFlags & ~STRUCT_IdenticalNative);
}

void UASStruct::SetGuid(FName FromName)
{
	FString HashString = TEXT("Script:");
	HashString += FromName.ToString();

	ensure(HashString.Len());

	const uint32 BufferLength = HashString.Len() * sizeof(HashString[0]);
	uint32 HashBuffer[5];
	FSHA1::HashBuffer(*HashString, BufferLength, reinterpret_cast<uint8*>(HashBuffer));
	Guid = FGuid(HashBuffer[1], HashBuffer[2], HashBuffer[3], HashBuffer[4]);
}