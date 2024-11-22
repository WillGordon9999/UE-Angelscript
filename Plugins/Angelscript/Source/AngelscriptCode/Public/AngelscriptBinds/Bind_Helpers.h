#pragma once
#include "CoreMinimal.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
//#include "as_scriptfunction.h"
//#include "as_objecttype.h"
#include "source/as_context.h"
#include "source/as_scriptfunction.h"
#include "source/as_objecttype.h"
#include "EndAngelscriptHeaders.h"

struct TASAnyReference
{
	TASAnyReference(void* InPtr)
		: Ptr(InPtr)
	{
	}

	template<typename T>
	TASAnyReference(const T& InReference)
		: Ptr((void*)&InReference)
	{
	}

	void* GetPointer() const
	{
		return Ptr;
	}

private:
	void* Ptr;
};

struct ANGELSCRIPTCODE_API FAngelscriptBindHelpers
{
	static UObject* GetObjectFromProperty(void* Container, asCScriptFunction* Function)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		return *(UObject**)((SIZE_T)Container + Offset);
	}

	static UObject* GetUnresolvedObjectFromProperty(void* Container, asCScriptFunction* Function)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		return ((FObjectPtr*)((SIZE_T)Container + Offset))->Get();
	}

	static void* GetValueFromProperty(void* Container, asCScriptFunction* Function)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		return (void*)((SIZE_T)Container + Offset);
	}

	static void SetObjectFromProperty(void* Container, asCScriptFunction* Function, UObject* NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		*(UObject**)((SIZE_T)Container + Offset) = NewValue;
	}

	static void SetValueFromProperty(void* Container, asCScriptFunction* Function, void* NewValue)
	{
		auto* Prop = (FProperty*)Function->userData;
		Prop->CopySingleValue(Prop->ContainerPtrToValuePtr<void>(Container), NewValue);
	}

	static void SetValueFromProperty_Native(void* Container, asCScriptFunction* Function, TASAnyReference NewValue)
	{
		FProperty* Prop = (FProperty*)Function->userData;
		Prop->CopySingleValue(Prop->ContainerPtrToValuePtr<void>(Container), NewValue.GetPointer());
	}

	static void SetValueFromProperty_Byte(void* Container, asCScriptFunction* Function, void* NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue, 1);
	}

	static void SetValueFromProperty_NativeByte(void* Container, asCScriptFunction* Function, TASAnyReference NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue.GetPointer(), 1);
	}

	static void SetValueFromProperty_DWord(void* Container, asCScriptFunction* Function, void* NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue, 4);
	}

	static void SetValueFromProperty_NativeDWord(void* Container, asCScriptFunction* Function, TASAnyReference NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue.GetPointer(), 4);
	}

	static void SetValueFromProperty_QWord(void* Container, asCScriptFunction* Function, void* NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue, 8);
	}

	static void SetValueFromProperty_NativeQWord(void* Container, asCScriptFunction* Function, TASAnyReference NewValue)
	{
		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), NewValue.GetPointer(), 8);
	}

	static void SetValueFromProperty_ByteExtendToDWord(void* Container, asCScriptFunction* Function, void* NewValue)
	{
		uint32 ExtendedValue = 0;
		FMemory::Memcpy(&ExtendedValue, NewValue, 1);

		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), &ExtendedValue, 4);
	}

	static void SetValueFromProperty_NativeByteExtendToDWord(void* Container, asCScriptFunction* Function, TASAnyReference NewValue)
	{
		uint32 ExtendedValue = 0;
		FMemory::Memcpy(&ExtendedValue, NewValue.GetPointer(), 1);

		SIZE_T Offset = (SIZE_T)Function->userData;
		FMemory::Memcpy((void*)((SIZE_T)Container + Offset), &ExtendedValue, 4);
	}

	static UClass* GetStaticClassFromClass(asCScriptFunction* Function)
	{
		return (UClass*)Function->userData;
	}

	static bool GetBoolFromProperty(void* Container, asCScriptFunction* Function)
	{
		FBoolProperty* Prop = (FBoolProperty*)Function->userData;
		return Prop->GetPropertyValue_InContainer(Container);
	}

	static void SetBoolFromProperty(void* Container, asCScriptFunction* Function, bool Value)
	{
		FBoolProperty* Prop = (FBoolProperty*)Function->userData;
		return Prop->SetPropertyValue_InContainer(Container, Value);
	}
};