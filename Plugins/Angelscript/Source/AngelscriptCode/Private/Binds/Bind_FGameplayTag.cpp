#include "AngelscriptBinds/Bind_FGameplayTag.h"
#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "../Debugging/AngelscriptDebugServer.h"

#include "../Private/Binds/Helper_StructType.h"
#include "../Private/Binds/Helper_ToString.h"

#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"
#include "GameplayTagsSettings.h"

// These are global variables because they are meant
// to be static, persistent memory, and they are used
// in multiple functions in this file (for organization reasons).
// 25 is an arbitrary number chosen for how many tags
// fit in one chunk before a new chunk is allocated.
TChunkedArray<FGameplayTag, sizeof(FGameplayTag) * 25> AngelscriptGameplayTags;

// This is a duplication of data for checking tag containment.
// A TSet gives us a O(1) lookup rather than O(n) TArray gives.
// Reallocation of this variable as tags are added is acceptable
// since it doesn't break bound pointers used in AngelscriptGameplayTags
TSet<FName> AngelscriptGameplayTagsLookup;

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayTagQuery(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayTagQuery_ = FAngelscriptBinds::ExistingClass("FGameplayTagQuery");

	{
		FAngelscriptBinds::FNamespace ns("FGameplayTagQuery");
		FAngelscriptBinds::BindGlobalVariable("FGameplayTagQuery EmptyQuery", &FGameplayTagQuery::EmptyQuery);

		FAngelscriptBinds::BindGlobalFunction("FGameplayTagQuery MakeQuery_MatchAnyTags(const FGameplayTagContainer& InTags) no_discard", &FGameplayTagQuery::MakeQuery_MatchAnyTags);
		FAngelscriptBinds::BindGlobalFunction("FGameplayTagQuery MakeQuery_MatchAllTags(const FGameplayTagContainer& InTags) no_discard", &FGameplayTagQuery::MakeQuery_MatchAllTags);
		FAngelscriptBinds::BindGlobalFunction("FGameplayTagQuery MakeQuery_MatchNoTags(const FGameplayTagContainer& InTags) no_discard", &FGameplayTagQuery::MakeQuery_MatchNoTags);
		FAngelscriptBinds::BindGlobalFunction("FGameplayTagQuery MakeQuery_MatchTag(const FGameplayTag& InTag) no_discard", &FGameplayTagQuery::MakeQuery_MatchTag);
	}
});

void Bind_AddNewGameplayTag(int32 GameplayTagIndex)
{
	FAngelscriptBinds::FNamespace ns("GameplayTags");

	const FGameplayTag& GameplayTag = AngelscriptGameplayTags[GameplayTagIndex];

	FString TagAsString = GameplayTag.ToString();

	// Exchange dots and other invalid characters in the tag for underscores
	for (int32 Index = TagAsString.Len() - 1; Index >= 0; --Index)
	{
		if (!FAngelscriptManager::IsValidIdentifierCharacter(TagAsString[Index]))
		{
			TagAsString[Index] = '_';
		}
	}

	const FString Declaration = TEXT("const FGameplayTag ") + TagAsString;
	FAngelscriptBinds::BindGlobalVariable(TCHAR_TO_ANSI(*Declaration), &GameplayTag);
}

bool Bind_ProcessGameplayTag(const FName TagName)
{
	bool Result = false;
	const FGameplayTag Tag = UGameplayTagsManager::Get().RequestGameplayTag(TagName, false);

	if (Tag.IsValid())
	{
		if (!AngelscriptGameplayTagsLookup.Contains(TagName))
		{
			Result = true;
			int32 Index = AngelscriptGameplayTags.AddElement(Tag);
			AngelscriptGameplayTagsLookup.Add(TagName);

			// AddElement makes a copy, so we need to use the
			// returned index to get the pointer to the persistent
			// value
			Bind_AddNewGameplayTag(Index);
		}
		for (auto& ParentTag : Tag.GetGameplayTagParents())
		{
			FName ParentTagName = ParentTag.GetTagName();
			if (!AngelscriptGameplayTagsLookup.Contains(ParentTagName))
			{
				Result = true;
				int32 Index = AngelscriptGameplayTags.AddElement(ParentTag);
				AngelscriptGameplayTagsLookup.Add(ParentTagName);

				// AddElement makes a copy, so we need to use the
				// returned index to get the pointer to the persistent
				// value
				Bind_AddNewGameplayTag(Index);
			}
		}
	}

	return Result;
}

bool Bind_AddNewGameplayTags()
{
	bool Result = false;
	TArray<const FGameplayTagSource*> Sources;
	UGameplayTagsManager::Get().FindTagSourcesWithType(EGameplayTagSourceType::Native, Sources);
	UGameplayTagsManager::Get().FindTagSourcesWithType(EGameplayTagSourceType::DefaultTagList, Sources);
	UGameplayTagsManager::Get().FindTagSourcesWithType(EGameplayTagSourceType::TagList, Sources);
	UGameplayTagsManager::Get().FindTagSourcesWithType(EGameplayTagSourceType::RestrictedTagList, Sources);
	UGameplayTagsManager::Get().FindTagSourcesWithType(EGameplayTagSourceType::DataTable, Sources);

	for (const FGameplayTagSource* Source : Sources)
	{
		if (Source->SourceTagList != nullptr)
		{
			for (const auto& RowTag : Source->SourceTagList->GameplayTagList)
			{
				Result |= Bind_ProcessGameplayTag(RowTag.Tag);
			}
		}

		if (Source->SourceRestrictedTagList != nullptr)
		{
			for (const auto& RowTag : Source->SourceRestrictedTagList->RestrictedGameplayTagList)
			{
				Result |= Bind_ProcessGameplayTag(RowTag.Tag);
			}
		}
	}

	return Result;
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayTag(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayTag_ = FAngelscriptBinds::ExistingClass("FGameplayTag");

	{
		FAngelscriptBinds::FNamespace ns("FGameplayTag");
		FAngelscriptBinds::BindGlobalFunction("FGameplayTag RequestGameplayTag(const FName& TagName, bool ErrorIfNotFound = true) no_discard", FUNC_TRIVIAL(FGameplayTag::RequestGameplayTag));
	}

	FGameplayTag_.Method("bool opEquals(const FGameplayTag& Other) const", METHODPR_TRIVIAL(bool, FGameplayTag, operator==, (FGameplayTag const& Other) const));
	FGameplayTag_.Method("FName GetTagName() const", METHOD_TRIVIAL(FGameplayTag, GetTagName));

	FToStringHelper::Register(TEXT("FGameplayTag"), [](void *Ptr, FString &Str) {
		Str += ((FGameplayTag *)Ptr)->ToString();
	});

	Bind_AddNewGameplayTags();
});

void AngelscriptReloadGameplayTags()
{
	if (Bind_AddNewGameplayTags())
	{
#if WITH_AS_DEBUGSERVER
		FAngelscriptDebugServer* DebugServer = FAngelscriptManager::Get().DebugServer;
		if (DebugServer != nullptr)
		{
			DebugServer->BroadcastDebugDatabase();
		}
#endif
	}
}
