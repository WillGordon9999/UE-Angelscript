#pragma once

namespace AngelscriptSort
{
	using ComparatorFunction = int(*)(void*, const void*, const void*);

	template <ComparatorFunction Comparator>
	class SortData
	{
	public:
		SortData(char* InData, size_t InSize, void* InUserData)
		: Data(InData)
		, ElementSize(InSize)
		, UserData(InUserData)
		{}
		
		FORCEINLINE void Swap(int A, int B) const
		{
			if (A == B)
			{
				return;
			}

			char* AElement = ToElement(A);
			char* BElement = ToElement(B);
			FMemory::Memswap(AElement, BElement, ElementSize);
		}

		FORCEINLINE int Compare(int A, int B) const
		{
			const char* AElement = ToElement(A);
			const char* BElement = ToElement(B);
			return Comparator(UserData, AElement, BElement);
		}

	private:
		FORCEINLINE char* ToElement(int Index) const
		{
			return Data + Index * ElementSize;
		}
		
		char* Data;
		size_t ElementSize;
		void* UserData;
	};

	template <ComparatorFunction Comparator>
	FORCEINLINE static int Partition(const SortData<Comparator>& Data, int Low, int High)
	{
		const int Pivot = High;
		int Midpoint = Low - 1;

		for (int i = Low; i <= High - 1; i++)
		{
			if (Data.Compare(i, Pivot) <= 0)
			{
				Midpoint++;
				Data.Swap(Midpoint, i);
			}
		}

		Data.Swap(Midpoint + 1, Pivot);
		return Midpoint + 1;
	}

	template <ComparatorFunction Comparator>
	FORCEINLINE static void QuickSortInternal(const SortData<Comparator>& Data, int Low, int High)
	{
		if (Low >= High || Low < 0)
			return;

		const int Pivot = Partition(Data, Low, High);

		QuickSortInternal(Data, Low, Pivot - 1);
		QuickSortInternal(Data, Pivot + 1, High);
	}

	template <ComparatorFunction Comparator>
	void QuickSort(void* Data, int Length, size_t ElementSize, void* UserData)
	{
		QuickSortInternal(SortData<Comparator>(reinterpret_cast<char*>(Data), ElementSize, UserData), 0, Length - 1);
	}
}
