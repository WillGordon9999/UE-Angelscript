#pragma once
#include "CoreMinimal.h"
#include "angelscript.h"

#define WITH_PEROBJECT_DEBUGVALUES (!UE_BUILD_TEST && !UE_BUILD_SHIPPING)
#define WITH_AS_DEBUGVALUES WITH_PEROBJECT_DEBUGVALUES && UE_BUILD_DEBUG


struct FASDebugValue
{
	FName Name;

	virtual void Instantiate(void* ForObject) {}
};

template<typename NativeType>
struct TDebug : FASDebugValue
{
	NativeType* Value;

	TDebug(SIZE_T Offset)
		: Value((NativeType*)(void*)Offset)
	{
	}

	void Instantiate(void* ForObject) override
	{
		Value = (NativeType*)((SIZE_T)Value + (SIZE_T)ForObject);
	}
};

struct FDebugValueHandle
{
	int32 Offset;

	template<typename T>
	T* Get(uint8* Memory)
	{
		return (T*)(Memory + Offset);
	}
};

//#if WITH_AS_DEBUGVALUES
//struct FDebugValues : FDebugValue
//{
//	FASDebugValue** Values;
//	int32 ValueCount;
//	void* FreePtr;
//};
//
//struct FDebugValuePrototype
//{
//	TArray<uint8> Memory;
//	TArray<FDebugValueHandle> BaseValues;
//
//	void Reset()
//	{
//		Memory.Reset();
//		BaseValues.Reset();
//	}
//
//	template<typename T, typename... ArgsType>
//	T* Create(ArgsType... Arguments)
//	{
//		FDebugValueHandle Handle;
//		Handle.Offset = Memory.Num();
//
//		Memory.AddUninitialized(sizeof(T));
//
//		T* Ptr = Handle.Get<T>(Memory.GetData());
//		new(Ptr) T(Forward<ArgsType>(Arguments)...);
//
//		BaseValues.Add(Handle);
//
//		return Ptr;
//	}
//
//	FDebugValue* Instantiate(void* Address)
//	{
//		// Memory for inner values
//		int32 DebugSize = Memory.Num();
//
//		// Array of pointers to inner values
//		int32 ValueArrayOffset = DebugSize;
//		DebugSize += sizeof(void*) * BaseValues.Num();
//
//		// FDebugValues struct
//		int32 DebugValuesOffset = DebugSize;
//		DebugSize += sizeof(FDebugValues);
//
//		uint8* InstancedMemory = (uint8*)FMemory::Malloc(DebugSize);
//		FASDebugValue** ValueArray = (FASDebugValue**)(InstancedMemory + ValueArrayOffset);
//		FDebugValues* ValueStruct = (FDebugValues*)(InstancedMemory + DebugValuesOffset);
//
//		// Copy data from base values
//		FMemory::Memcpy(InstancedMemory, Memory.GetData(), Memory.Num());
//
//		// Instantiate all values with the given address
//		int32 ValueIndex = 0;
//		for (auto& ValueHandle : BaseValues)
//		{
//			FASDebugValue* Value = ValueHandle.Get<FASDebugValue>(InstancedMemory);
//			Value->Instantiate(Address);
//			ValueArray[ValueIndex++] = Value;
//		}
//
//		// Prepare the struct
//		new(ValueStruct) FDebugValues();
//
//		/*struct NiceArray
//		{
//			void* Ptr;
//			int32 ArrayNum;
//			int32 ArrayMax;
//		};
//
//		NiceArray* Arr = (NiceArray*)&ValueStruct->Values;
//		Arr->Ptr = ValueArray;
//		Arr->ArrayNum = BaseValues.Num();
//		Arr->ArrayMax = BaseValues.Num();*/
//
//		ValueStruct->Values = ValueArray;
//		ValueStruct->ValueCount = BaseValues.Num();
//		ValueStruct->FreePtr = InstancedMemory;
//		return ValueStruct;
//	}
//
//	void Free(FDebugValue* Value)
//	{
//		FDebugValues* ValueStruct = (FDebugValues*)Value;
//		FMemory::Free(ValueStruct->FreePtr);
//	}
//};
//#else

struct FDebugValuePrototype
{
	template<typename T, typename... ArgsType>
	T* Create(ArgsType... Arguments)
	{
		return nullptr;
	}

	void Reset()
	{}
};

//#endif