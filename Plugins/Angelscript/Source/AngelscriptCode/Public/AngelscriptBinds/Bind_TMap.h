#pragma once
#include "CoreMinimal.h"
#include "UObject/UnrealType.h"
#include "Containers/Map.h"
#include "Containers/Set.h"
#include "AngelscriptType.h"
#include "AngelscriptManager.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
//#include "as_scriptfunction.h"
//#include "as_objecttype.h"
#include "source/as_context.h"
#include "source/as_scriptfunction.h"
#include "source/as_objecttype.h"
#include "EndAngelscriptHeaders.h"

struct ANGELSCRIPTCODE_API FMapOperations
{
	bool bValid;

	FAngelscriptTypeUsage KeyType;
	FAngelscriptTypeUsage ValueType;

	FScriptMapLayout Layout;

	int32 KeySize;
	int32 KeyAlignment;

	int32 ValueSize;
	int32 ValueAlignment;

	bool bKeyNeedConstruct;
	bool bKeyNeedCopy;
	bool bKeyNeedDestruct;

	bool bValueNeedConstruct;
	bool bValueNeedCopy;
	bool bValueNeedDestruct;

	asIScriptFunction* HashFunction;

	static FORCEINLINE FMapOperations* GetMapOperations(asCObjectType* Meta)
	{
		return (FMapOperations*)Meta->plainUserData;
	}

#if AS_ITERATOR_DEBUGGING
	static void MarkMapBeingIterated(FScriptMap& Map);
	static void UnmarkMapBeingIterated(FScriptMap& Map);
#endif

	FMapOperations()
	{
		bValid = false;
		HashFunction = nullptr;
	}

	FMapOperations(const FAngelscriptTypeUsage& InKeyType, const FAngelscriptTypeUsage& InValueType)
	{
		KeyType = InKeyType;
		ValueType = InValueType;

		ValueSize = ValueType.GetValueSize();
		ValueAlignment = ValueType.GetValueAlignment();

		KeySize = KeyType.GetValueSize();
		KeyAlignment = KeyType.GetValueAlignment();

		bKeyNeedConstruct = KeyType.NeedConstruct();
		bKeyNeedCopy = KeyType.NeedCopy();
		bKeyNeedDestruct = KeyType.NeedDestruct();

		bValueNeedConstruct = ValueType.NeedConstruct();
		bValueNeedCopy = ValueType.NeedCopy();
		bValueNeedDestruct = ValueType.NeedDestruct();

		HashFunction = nullptr;

		Layout = FScriptMap::GetScriptLayout(KeySize, KeyAlignment, ValueSize, ValueAlignment);
	}

	FORCEINLINE void* GetPair(FScriptMap& Map, int32 Index)
	{
		return Map.GetData(Index, Layout);
	}

	FORCEINLINE void* GetValueFromPair(void* Pair)
	{
		return (void*)((SIZE_T)Pair + (SIZE_T)Layout.ValueOffset);
	}

	FORCEINLINE void* GetKey(FScriptMap& Map, int32 Index)
	{
		return (void*)((SIZE_T)Map.GetData(Index, Layout));
	}

	FORCEINLINE void* GetValue(FScriptMap& Map, int32 Index)
	{
		return (void*)((SIZE_T)Map.GetData(Index, Layout) + (SIZE_T)Layout.ValueOffset);
	}

	FORCEINLINE uint32 HashKey(const void* Ptr) const
	{
		if (this->HashFunction != nullptr)
		{
			return this->InvokeHashFunction(Ptr);
		}

		// If we don't have a hashing function, GetHash must be valid if this is being called.
		return this->KeyType.GetHash(Ptr);
	}

	uint32 InvokeHashFunction(const void* Object) const
	{
		ensure(HashFunction != nullptr);
		FAngelscriptContext Context;
		Context->Prepare(HashFunction);
		Context->SetObject(const_cast<void*>(Object));
		Context->Execute();
		return Context->GetReturnDWord();
	}

	FORCEINLINE_DEBUGGABLE int32 FindPairIndex(FScriptMap& Map, void* Key)
	{
		auto GetKeyHash = [this](const void* Ptr) -> uint32
		{
			return HashKey(Ptr);
		};

		auto CompareKeys = [this](const void* A, const void* B) -> bool
		{
			return KeyType.IsValueEqual((void*)A, (void*)B);
		};

		return Map.FindPairIndex(Key, Layout, GetKeyHash, CompareKeys);
	}

	FORCEINLINE_DEBUGGABLE int32 AddDefaulted(FScriptMap& Map, void* Key)
	{
		auto GetKeyHash = [this](const void* Ptr) -> uint32
		{
			return HashKey(Ptr);
		};

		int32 Index = Map.AddUninitialized(Layout);

		if (bKeyNeedConstruct)
			KeyType.ConstructValue(GetKey(Map, Index));
		if (bValueNeedConstruct)
			ValueType.ConstructValue(GetValue(Map, Index));

		Map.Rehash(Layout, GetKeyHash);

		return Index;
	}

	FORCEINLINE_DEBUGGABLE void Add(FScriptMap& Map, void* Key, void* Value)
	{
		auto GetKeyHash = [this](const void* Ptr) -> uint32
		{
			return HashKey(Ptr);
		};

		auto KeyEqualityFn = [this](const void* A, const void* B) -> bool
		{
			return KeyType.IsValueEqual((void*)A, (void*)B);
		};

		auto KeyConstructAndAssignFn = [this, Key](void* Ptr)
		{
			if (bKeyNeedConstruct)
				KeyType.ConstructValue(Ptr);

			if (bKeyNeedCopy)
				KeyType.CopyValue(Key, Ptr);
			else
				FMemory::Memcpy(Ptr, Key, KeySize);
		};

		auto ValueConstructAndAssignFn = [this, Value](void* Ptr)
		{
			if (bValueNeedConstruct)
				ValueType.ConstructValue(Ptr);

			if (bValueNeedCopy)
				ValueType.CopyValue(Value, Ptr);
			else
				FMemory::Memcpy(Ptr, Value, ValueSize);
		};

		auto ValueAssignFn = [this, Value](void* Ptr)
		{
			if (bValueNeedCopy)
				ValueType.CopyValue(Value, Ptr);
			else
				FMemory::Memcpy(Ptr, Value, ValueSize);
		};

		auto DestructKeyFn = [this](void* Ptr)
		{
			if (bKeyNeedDestruct)
				KeyType.DestructValue(Ptr);
		};

		auto DestructValueFn = [this](void* Ptr)
		{
			if (bValueNeedDestruct)
				ValueType.DestructValue(Ptr);
		};

		Map.Add(Key, Value, Layout,
			GetKeyHash,
			KeyEqualityFn,
			KeyConstructAndAssignFn,
			ValueConstructAndAssignFn,
			ValueAssignFn,
			DestructKeyFn,
			DestructValueFn);
	}

	FORCEINLINE_DEBUGGABLE void Empty(FScriptMap& Map, int32 Slack)
	{
		if (bKeyNeedDestruct)
		{
			int32 Count = Map.GetMaxIndex();
			for (int32 i = 0; i < Count; ++i)
			{
				if (Map.IsValidIndex(i))
					KeyType.DestructValue(GetKey(Map, i));
			}
		}

		if (bValueNeedDestruct)
		{
			int32 Count = Map.GetMaxIndex();
			for (int32 i = 0; i < Count; ++i)
			{
				if (Map.IsValidIndex(i))
					ValueType.DestructValue(GetValue(Map, i));
			}
		}

		Map.Empty(Slack, Layout);
	}

	FORCEINLINE_DEBUGGABLE void RemoveAt(FScriptMap& Map, int32 Index)
	{
		if (bKeyNeedDestruct)
			KeyType.DestructValue(GetKey(Map, Index));
		if (bValueNeedDestruct)
			ValueType.DestructValue(GetValue(Map, Index));
		Map.RemoveAt(Index, Layout);
	}

	FORCEINLINE_DEBUGGABLE int32 FindNextIndex(FScriptMap& Map, int32 Index)
	{
		int32 MaxIndex = Map.GetMaxIndex();
		for (int32 NextIndex = Index + 1; NextIndex < MaxIndex; ++NextIndex)
		{
			if (Map.IsValidIndex(NextIndex))
				return NextIndex;
		}
		return -1;
	}

	bool AnyEqual(FScriptMap& Map, int32 Index, int32 Num, void* PairToCompare)
	{
		for (; Num; --Num)
		{
			while (!Map.IsValidIndex(Index))
				++Index;

			if (KeyType.IsValueEqual(GetPair(Map, Index), PairToCompare)
				&& ValueType.IsValueEqual(GetValue(Map, Index), GetValueFromPair(PairToCompare)))
				return true;

			++Index;
		}

		return false;
	}

	bool RangesContainSameAmountsOfVal(FScriptMap& MapA, int32 IndexA, FScriptMap& MapB, int32 IndexB, int32 Num, void* PairToCompare)
	{
		int32 CountA = 0;
		int32 CountB = 0;
		for (;;)
		{
			if (Num == 0)
				return CountA == CountB;

			while (!MapA.IsValidIndex(IndexA))
				++IndexA;

			while (!MapB.IsValidIndex(IndexB))
				++IndexB;

			void* PairA = GetPair(MapA, IndexA);
			void* PairB = GetPair(MapB, IndexB);

			if (PairA == PairToCompare || (KeyType.IsValueEqual(PairA, PairToCompare)
					&& ValueType.IsValueEqual(GetValueFromPair(PairA), GetValueFromPair(PairToCompare))))
				++CountA;

			if (PairB == PairToCompare || (KeyType.IsValueEqual(PairB, PairToCompare)
					&& ValueType.IsValueEqual(GetValueFromPair(PairB), GetValueFromPair(PairToCompare))))
				++CountB;

			++IndexA;
			++IndexB;
			--Num;
		}
	}

	bool IsPermutation(FScriptMap& MapA, FScriptMap& MapB)
	{
		int32 Num = MapA.Num();
		if (Num != MapB.Num())
			return false;

		// Skip over common initial sequence
		int32 IndexA = 0;
		int32 IndexB = 0;
		for (;;)
		{
			if (Num == 0)
				return true;

			while (!MapA.IsValidIndex(IndexA))
				++IndexA;

			while (!MapB.IsValidIndex(IndexB))
				++IndexB;

			void* PairA = GetPair(MapA, IndexA);
			void* PairB = GetPair(MapB, IndexB);

			if (!KeyType.IsValueEqual(PairA, PairB))
				break;

			if (!ValueType.IsValueEqual(GetValueFromPair(PairA), GetValueFromPair(PairB)))
				break;

			++IndexA;
			++IndexB;
			--Num;
		}

		int32 FirstIndexA = IndexA;
		int32 FirstIndexB = IndexB;
		int32 FirstNum    = Num;
		for (;;)
		{
			void* PairA = GetPair(MapA, IndexA);
			if (!AnyEqual(MapA, FirstIndexA, FirstNum - Num, PairA) && !RangesContainSameAmountsOfVal(MapA, IndexA, MapB, IndexB, Num, PairA))
				return false;

			--Num;
			if (Num == 0)
				return true;

			while (!MapA.IsValidIndex(IndexA))
				++IndexA;

			while (!MapB.IsValidIndex(IndexB))
				++IndexB;
		}
	}
};

struct FMapIterator
{
	FScriptMap* Map;
	FMapOperations* Ops;

	int32 Index;
	int32 NextIndex;
	bool bCanProceed;

	FMapIterator() {}
	FMapIterator& operator=(const FMapIterator& Other) = default;

	static FMapIterator Create(FScriptMap& Map, asCObjectType* Meta)
	{
		auto* Ops = FMapOperations::GetMapOperations(Meta);

		FMapIterator It;
		It.Map = &Map;
		It.Ops = Ops;
		It.Index = -1;
		It.NextIndex = It.Ops->FindNextIndex(Map, -1);
		It.bCanProceed = It.NextIndex != -1;

#if AS_ITERATOR_DEBUGGING
		FMapOperations::MarkMapBeingIterated(Map);
#endif

		return It;
	}

	static void CopyConstruct(FMapIterator& Iterator, const FMapIterator& Other)
	{
		Iterator = Other;

#if AS_ITERATOR_DEBUGGING
		FMapOperations::MarkMapBeingIterated(*Iterator.Map);
#endif
	}

#if AS_ITERATOR_DEBUGGING
	static void Destruct(FMapIterator& Iterator)
	{
		if (Iterator.Map != nullptr)
			FMapOperations::UnmarkMapBeingIterated(*Iterator.Map);
	}
#endif

	FMapIterator& Assignment(const FMapIterator& Other)
	{
#if AS_ITERATOR_DEBUGGING
		if (Map != nullptr)
			FMapOperations::UnmarkMapBeingIterated(*Map);
		if (Other.Map != nullptr)
			FMapOperations::MarkMapBeingIterated(*Other.Map);
#endif

		*this = Other;
		return *this;
	}

	void RemoveCurrent()
	{
		if (!Map->IsValidIndex(Index))
		{
			FAngelscriptManager::Throw("Iterator out of bounds.");
			return;
		}

		Ops->RemoveAt(*Map, Index);
	}

	void* GetKey()
	{
		if (!Map->IsValidIndex(Index))
		{
			FAngelscriptManager::Throw("Iterator out of bounds.");
			return nullptr;
		}

		return Ops->GetKey(*Map, Index);
	}

	void* GetValue()
	{
		if (!Map->IsValidIndex(Index))
		{
			FAngelscriptManager::Throw("Iterator out of bounds.");
			return nullptr;
		}

		return Ops->GetValue(*Map, Index);
	}

	void SetValue(void* NewValue)
	{
		if (!Map->IsValidIndex(Index))
		{
			FAngelscriptManager::Throw("Iterator out of bounds.");
			return;
		}

		void* ValueInMap = Ops->GetValue(*Map, Index);
		if (Ops->bValueNeedCopy)
			Ops->ValueType.CopyValue(NewValue, ValueInMap);
		else
			FMemory::Memcpy(ValueInMap, NewValue, Ops->ValueSize);
	}

	FMapIterator& Proceed()
	{
		if (NextIndex == -1)
		{
			FAngelscriptManager::Throw("Iterator out of bounds.");
			return *this;
		}

		Index = NextIndex;
		NextIndex = Ops->FindNextIndex(*Map, Index);

		bCanProceed = NextIndex != -1;
		return *this;
	}
};

struct ANGELSCRIPTCODE_API FAngelscriptMapBinds
{
	static void Construct(FScriptMap* Address)
	{
		new(Address) FScriptMap();
	}

	static void Destruct(FScriptMap& Map, asCObjectType* Meta)
	{
		auto* Ops = FMapOperations::GetMapOperations(Meta);
		Ops->Empty(Map, 0);
		Map.~FScriptMap();
	}

	template<typename K, typename V>
	static void Destruct_Template(TMap<K, V>& Map)
	{
		Map.~TMap<K,V>();
	}

	static void* OpIndex(FScriptMap& Map, asCObjectType* Meta, void* Key)
	{
		auto* Ops = FMapOperations::GetMapOperations(Meta);

		int32 Index = Ops->FindPairIndex(Map, Key);
		if (!Map.IsValidIndex(Index))
		{
			FAngelscriptManager::Throw("Could not find key in map for index operator.");
			return nullptr;
		}

		return Ops->GetValue(Map, Index);
	}

	template<typename K, typename V>
	static void* OpIndex_Template(TMap<K, V>& Map, void* Key)
	{
		V* Value = Map.Find(*(K*)Key);
		if (Value == nullptr)
		{
			FAngelscriptManager::Throw("Could not find key in map for index operator.");
			return nullptr;
		}

		return Value;
	}

	static void Add(FScriptMap& Map, asCObjectType* Meta, void* Key, void* Value);

	template<typename K, typename V>
	static void Add_Template(TMap<K, V>& Map, void* Key, void* Value)
	{
		Map.Add(*(K*)Key, *(V*)Value);
	}

	static bool Contains(FScriptMap& Map, asCObjectType* Meta, void* Key);

	template<typename K, typename V>
	static bool Contains_Template(TMap<K, V>& Map, void* Key)
	{
		return Map.Contains(*(K*)Key);
	}

	static bool RemoveAndCopyValue(FScriptMap& Map, asCObjectType* Meta, void* Key, void* OutValue);

	template<typename K, typename V>
	static bool RemoveAndCopyValue_Template(TMap<K, V>& Map, void* Key, void* OutValue)
	{
		return Map.RemoveAndCopyValue(*(K*)Key, *(V*)OutValue);
	}

	static bool Remove(FScriptMap& Map, asCObjectType* Meta, void* Key);

	template<typename K, typename V>
	static bool Remove_Template(TMap<K, V>& Map, void* Key)
	{
		int32 NumRemoved = Map.Remove(*(K*)Key);
		return NumRemoved != 0;
	}

	static int32 Num(FScriptMap& Map)
	{
		return Map.Num();
	}

	static bool IsEmpty(FScriptMap& Map)
	{
		return Map.IsEmpty();
	}

	static void* FindOrAdd_Defaulted(FScriptMap& Map, asCObjectType* Meta, void* Key);
	static void* FindOrAdd(FScriptMap& Map, asCObjectType* Meta, void* Key, void* Value);

	template<typename K, typename V>
	static void* FindOrAdd_Template(TMap<K, V>& Map, void* Key, void* Value)
	{
		return (void*)&Map.FindOrAdd(*(K*)Key, *(V*)Value);
	}

	static bool Find(FScriptMap& Map, asCObjectType* Meta, void* Key, void* OutValue);

	template<typename K, typename V>
	static bool Find_Template(TMap<K, V>& Map, void* Key, void* OutValue)
	{
		V* FoundValue = Map.Find(*(K*)Key);
		if (FoundValue != nullptr)
		{
			*(V*)OutValue = *FoundValue;
			return true;
		}
		else
		{
			return false;
		}
	}

	static FScriptMap& OpAssign(FScriptMap& Destination, asCObjectType* Meta, FScriptMap& Source);

	template<typename K, typename V>
	static FScriptMap& OpAssign_Template(TMap<K, V>& Destination, FScriptMap& Source)
	{
		Destination = *(TMap<K, V>*)&Source;
		return *(FScriptMap*)&Destination;
	}

	static void Empty(FScriptMap& Map, asCObjectType* Meta, int32 Slack);

	template<typename K, typename V>
	static void Empty_Template(TMap<K, V>& Map, int32 Slack)
	{
		Map.Empty(Slack);
	}

	static void Reset(FScriptMap& Map, asCObjectType* Meta);

	template<typename K, typename V>
	static void Reset_Template(TMap<K, V>& Map)
	{
		Map.Reset();
	}

	static void GetKeys(FScriptMap& Map, asCObjectType* Meta, FScriptArray& OutKeys);
	static void GetValues(FScriptMap& Map, asCObjectType* Meta, FScriptArray& OutValues);
};
