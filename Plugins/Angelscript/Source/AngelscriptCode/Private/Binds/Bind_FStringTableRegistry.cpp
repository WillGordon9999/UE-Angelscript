#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Internationalization/StringTableRegistry.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_EStringTableLoadingPolicy(FAngelscriptBinds::EOrder::Early, []
{
	auto EStringTableLoadingPolicy_ = FAngelscriptBinds::Enum("EStringTableLoadingPolicy");
	EStringTableLoadingPolicy_["Find"] = EStringTableLoadingPolicy::Find;
	EStringTableLoadingPolicy_["FindOrLoad"] = EStringTableLoadingPolicy::FindOrLoad;
	EStringTableLoadingPolicy_["FindOrFullyLoad"] = EStringTableLoadingPolicy::FindOrFullyLoad;
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FStringTableRegistry_Operations(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::BindGlobalFunction("void LOCTABLE_NEW(const FName TableId, const FString& Namespace)",
	[](const FName TableId, const FString& Namespace) -> void
	{
		FStringTableRegistry::Get().Internal_NewLocTable(TableId, Namespace);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FAngelscriptBinds::BindGlobalFunction("void LOCTABLE_FROMFILE_ENGINE(const FName TableId, const FString& Namespace, const FString& FilePath)",
	[](const FName TableId, const FString& Namespace, const FString& FilePath) -> void
	{
		FStringTableRegistry::Get().Internal_LocTableFromFile(
			TableId, Namespace, FilePath, FPaths::EngineContentDir());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FAngelscriptBinds::BindGlobalFunction("void LOCTABLE_FROMFILE_GAME(const FName TableId, const FString& Namespace, const FString& FilePath)",
	[](const FName TableId, const FString& Namespace, const FString& FilePath) -> void
	{
		FStringTableRegistry::Get().Internal_LocTableFromFile(
			TableId, Namespace, FilePath, FPaths::ProjectContentDir());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FAngelscriptBinds::BindGlobalFunction("void LOCTABLE_SETSTRING(const FName TableId, const FString& Key, const FString& SourceString)",
	[](const FName TableId, const FString& Key, const FString& SourceString) -> void
	{
		FStringTableRegistry::Get().Internal_SetLocTableEntry(TableId, Key, SourceString);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FAngelscriptBinds::BindGlobalFunction("void LOCTABLE_SETMETA(const FName TableId, const FString& Key, const FName MetaDataId, const FString& MetaData)",
	[](const FName TableId, const FString& Key, const FName MetaDataId, const FString& MetaData) -> void
	{
		FStringTableRegistry::Get().Internal_SetLocTableEntryMetaData(TableId, Key, MetaDataId, MetaData);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FAngelscriptBinds::BindGlobalFunction("FText LOCTABLE(const FName TableId, const FString& Key)",
	[](const FName TableId, const FString& Key) -> FText
	{
		return FStringTableRegistry::Get().Internal_FindLocTableEntry(TableId, Key, EStringTableLoadingPolicy::FindOrLoad);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
});
