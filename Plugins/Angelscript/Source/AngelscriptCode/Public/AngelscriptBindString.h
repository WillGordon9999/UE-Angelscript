#pragma once

#include "CoreMinimal.h"

// String class that can store both a const ANSICHAR* and an
// FString when needed, and can output to both efficiently.
// Note that this does not support non-ASCII codepoints in any way!
struct FBindString
{
private:
	mutable FString UnrealString;
	mutable bool bUnrealStringUpdated = true;
	mutable TArray<ANSICHAR> AnsiString;
	mutable bool bAnsiStringUpdated = true;
	const ANSICHAR* CharPtr = nullptr;

public:
	FBindString() {}
	FBindString(const FBindString& Other) = default;
	FBindString(FBindString&& Other) = default;

	FBindString& operator=(const FBindString& Other) = default;
	FBindString& operator=(FBindString&& Other) = default;

	FBindString(const FString& InUnrealString)
	{
		*this = InUnrealString;
	}

	FBindString(const ANSICHAR* ConstantString)
	{
		*this = ConstantString;
	}

	bool IsEmpty() const
	{
		if (CharPtr != nullptr)
			return *CharPtr == '\0';

		if (bUnrealStringUpdated)
			return UnrealString.IsEmpty();

		if (bAnsiStringUpdated)
			return AnsiString.Num() > 1; // includes the \0 at the end

		return true;
	}

	const FString& ToFString() const
	{
		if (!bUnrealStringUpdated)
		{
			if (CharPtr != nullptr)
			{
				UnrealString = ANSI_TO_TCHAR(CharPtr);
				bUnrealStringUpdated = true;
			}
		}
		return UnrealString;
	}

	const ANSICHAR* ToCString_EnsureConstant() const
	{
		ensure(CharPtr != nullptr);
		return CharPtr;
	}

	const ANSICHAR* ToCString() const
	{
		if (CharPtr != nullptr)
			return CharPtr;

		if (!bAnsiStringUpdated)
		{
			AnsiString.SetNum(UnrealString.Len() + 1);

			int32 Index = 0;
			for (auto Char : UnrealString)
			{
				AnsiString[Index] = (ANSICHAR)UnrealString[Index];
				Index += 1;
			}
			AnsiString[Index] = '\0';

			bAnsiStringUpdated = true;
		}

		return AnsiString.GetData();
	}

	FBindString& operator=(const FString& InUnrealString)
	{
		bAnsiStringUpdated = false;
		bUnrealStringUpdated = true;
		CharPtr = nullptr;
		UnrealString = InUnrealString;

		return *this;
	}

	FBindString& operator=(const ANSICHAR* ConstantString)
	{
		bAnsiStringUpdated = false;
		bUnrealStringUpdated = false;
		CharPtr = ConstantString;

		return *this;
	}

	void SetDynamic(const ANSICHAR* DynamicString)
	{
		bUnrealStringUpdated = false;
		CharPtr = nullptr;

		bAnsiStringUpdated = true;
		AnsiString.Reset();

		const ANSICHAR* Cursor = DynamicString;
		while (*Cursor != '\0')
		{
			AnsiString.Add(*Cursor);
			++Cursor;
		}
		AnsiString.Add('\0');
	}
};
