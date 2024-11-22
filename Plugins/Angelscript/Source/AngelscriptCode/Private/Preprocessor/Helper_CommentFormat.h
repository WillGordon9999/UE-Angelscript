#pragma once
#include "CoreMinimal.h"

/*
	This code is taken from FHeaderParser, to nicely format comments into tooltips for functions and classes.
*/

inline bool IsAllSameChar(const TCHAR* Str, TCHAR Ch)
{
	check(Str);

	while (TCHAR StrCh = *Str++)
	{
		if (StrCh != Ch)
			return false;
	}

	return true;
}

inline bool IsLineSeparator(const TCHAR* Str)
{
	check(Str);

	return IsAllSameChar(Str, TEXT('-')) || IsAllSameChar(Str, TEXT('=')) || IsAllSameChar(Str, TEXT('*'));
}

inline FString FormatCommentForToolTip(const FString& Input)
{
	// Return an empty string if there are no alpha-numeric characters or a Unicode characters above 0xFF
	// (which would be the case for pure CJK comments) in the input string.
	bool bFoundAlphaNumericChar = false;
	for ( int32 i = 0 ; i < Input.Len() ; ++i )
	{
		if ( FChar::IsAlnum(Input[i]) || (Input[i] > 0xFF) )
		{
			bFoundAlphaNumericChar = true;
			break;
		}
	}

	if ( !bFoundAlphaNumericChar )
	{
		return FString( TEXT("") );
	}

	FString Result(Input);

	// Sweep out comments marked to be ignored.
	{
		int32 CommentStart, CommentEnd;
		// Block comments go first
		for (CommentStart = Result.Find(TEXT("/*~")); CommentStart != INDEX_NONE; CommentStart = Result.Find(TEXT("/*~")))
		{
			CommentEnd = Result.Find(TEXT("*/"), ESearchCase::CaseSensitive, ESearchDir::FromStart, CommentStart);
			if (CommentEnd != INDEX_NONE)
			{
				Result.RemoveAt(CommentStart, (CommentEnd + 2) - CommentStart, false);
			}
			else
			{
				// This looks like an error - an unclosed block comment.
				break;
			}
		}
		// Leftover line comments go next
		for (CommentStart = Result.Find(TEXT("//~")); CommentStart != INDEX_NONE; CommentStart = Result.Find(TEXT("//~")))
		{
			CommentEnd = Result.Find(TEXT("\n"), ESearchCase::CaseSensitive, ESearchDir::FromStart, CommentStart);
			if (CommentEnd != INDEX_NONE)
			{
				Result.RemoveAt(CommentStart, (CommentEnd + 1) - CommentStart, false);
			}
			else
			{
				Result.RemoveAt(CommentStart, Result.Len() - CommentStart, false);
				break;
			}
		}
		// Finish by shrinking if anything was removed, since we deferred this during the search.
		Result.Shrink();
	}

	// Check for known commenting styles.
	const bool bJavaDocStyle = Result.Contains(TEXT("/**"));
	const bool bCStyle = Result.Contains(TEXT("/*"));
	const bool bCPPStyle = Result.StartsWith(TEXT("//"));

	if ( bJavaDocStyle || bCStyle)
	{
		// Remove beginning and end markers.
		Result = Result.Replace( TEXT("/**"), TEXT("") );
		Result = Result.Replace( TEXT("/*"), TEXT("") );
		Result = Result.Replace( TEXT("*/"), TEXT("") );
	}

	if ( bCPPStyle )
	{
		// Remove c++-style comment markers.  Also handle javadoc-style comments by replacing
		// all triple slashes with double-slashes
		Result = Result.Replace(TEXT("///"), TEXT("//")).Replace( TEXT("//"), TEXT("") );

		// Parser strips cpptext and replaces it with "// (cpptext)" -- prevent
		// this from being treated as a comment on variables declared below the
		// cpptext section
		Result = Result.Replace( TEXT("(cpptext)"), TEXT("") );
	}

	// Get rid of carriage return or tab characters, which mess up tooltips.
	Result = Result.Replace( TEXT( "\r" ), TEXT( "" ) );

	//wx widgets has a hard coded tab size of 8
	{
		const int32 SpacesPerTab = 8;
		Result = Result.ConvertTabsToSpaces (SpacesPerTab);
	}

	// get rid of uniform leading whitespace and all trailing whitespace, on each line
	TArray<FString> Lines;
	Result.ParseIntoArray(Lines, TEXT("\n"), false);

	for (FString& Line : Lines)
	{
		// Remove trailing whitespace
		Line.TrimEndInline();

		// Remove leading "*" and "* " in javadoc comments.
		if (bJavaDocStyle)
		{
			// Find first non-whitespace character
			int32 Pos = 0;
			while (Pos < Line.Len() && FChar::IsWhitespace(Line[Pos]))
			{
				++Pos;
			}

			// Is it a *?
			if (Pos < Line.Len() && Line[Pos] == '*')
			{
				// Eat next space as well
				if (Pos+1 < Line.Len() && FChar::IsWhitespace(Line[Pos+1]))
				{
					++Pos;
				}

				Line = Line.RightChop(Pos + 1);
			}
		}
	}

	// Find first meaningful line
	int32 FirstIndex = 0;
	for (FString Line : Lines)
	{
		Line.TrimStartInline();

		if (Line.Len() && !IsLineSeparator(*Line))
			break;

		++FirstIndex;
	}

	int32 LastIndex = Lines.Num();
	while (LastIndex != FirstIndex)
	{
		FString Line = Lines[LastIndex - 1];
		Line.TrimStartInline();

		if (Line.Len() && !IsLineSeparator(*Line))
			break;

		--LastIndex;
	}

	Result.Empty();

	if (FirstIndex != LastIndex)
	{
		FString& FirstLine = Lines[FirstIndex];

		// Figure out how much whitespace is on the first line
		int32 MaxNumWhitespaceToRemove;
		for (MaxNumWhitespaceToRemove = 0; MaxNumWhitespaceToRemove < FirstLine.Len(); MaxNumWhitespaceToRemove++)
		{
			if (!FChar::IsLinebreak(FirstLine[MaxNumWhitespaceToRemove]) && !FChar::IsWhitespace(FirstLine[MaxNumWhitespaceToRemove]))
			{
				break;
			}
		}

		for (int32 Index = FirstIndex; Index != LastIndex; ++Index)
		{
			FString Line = Lines[Index];

			int32 TemporaryMaxWhitespace = MaxNumWhitespaceToRemove;

			// Allow eating an extra tab on subsequent lines if it's present
			if ((Index > 0) && (Line.Len() > 0) && (Line[0] == '\t'))
			{
				TemporaryMaxWhitespace++;
			}

			// Advance past whitespace
			int32 Pos = 0;
			while (Pos < TemporaryMaxWhitespace && Pos < Line.Len() && FChar::IsWhitespace(Line[Pos]))
			{
				++Pos;
			}

			if (Pos > 0)
			{
				Line = Line.Mid(Pos);
			}

			if (Index > 0)
			{
				Result += TEXT("\n");
			}

			if (Line.Len() && !IsAllSameChar(*Line, TEXT('=')))
			{
				Result += Line;
			}
		}
	}

	//@TODO: UCREMOVAL: Really want to trim an arbitrary number of newlines above and below, but keep multiple newlines internally
	// Make sure it doesn't start with a newline
	if (!Result.IsEmpty() && FChar::IsLinebreak(Result[0]))
	{
		Result = Result.Mid(1);
	}

	// Make sure it doesn't end with a dead newline
	if (!Result.IsEmpty() && FChar::IsLinebreak(Result[Result.Len() - 1]))
	{
		Result = Result.Left(Result.Len() - 1);
	}

	// Done.
	return Result;
}
