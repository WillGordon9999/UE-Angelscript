#include "AngelscriptBinds.h"
#include "JsonObjectConverter.h"

namespace
{
bool UStructToJsonObjectString(const void* Data, int TypeId, FString& Result, int CheckFlags, int SkipFlags, int Indent, bool PrettyPrint)
{
	const FAngelscriptTypeUsage Usage = FAngelscriptTypeUsage::FromTypeId(TypeId);
	const UStruct* StructDef = Usage.GetUnrealStruct();
	if (StructDef == nullptr)
	{
		UE_LOG(LogJson, Warning, TEXT("UStructToJsonObjectString - not a valid USTRUCT"));
		return false;
	}

	return FJsonObjectConverter::UStructToJsonObjectString(
		StructDef, Data, Result, CheckFlags, SkipFlags, Indent, nullptr, PrettyPrint);
}

bool AppendUStructToJsonObjectString(const void* Data, int TypeId, FString& InOutString, int CheckFlags, int SkipFlags, int Indent, bool PrettyPrint)
{
	FString NewJsonString;
	bool bConversionResult = UStructToJsonObjectString(Data, TypeId, NewJsonString, CheckFlags, SkipFlags, Indent, PrettyPrint);

	// Merge the new JSON with any potential old JSON
	InOutString += NewJsonString;

	if (Indent == 0)
	{
		InOutString = InOutString.Replace(TEXT("\r\n}{"), TEXT(","));
	}
	else
	{
		FString IndentStr;
		for (int i = 0; i < Indent; ++i)
		{
			IndentStr += "\t";
		}
		InOutString = InOutString.Replace(*(FString(TEXT("\r\n")) + IndentStr + FString(TEXT("}{"))), TEXT(","));
	}

	return bConversionResult;
}

bool JsonObjectStringToUStruct(const FString& JsonString, void* Data, int TypeId, int CheckFlags, int SkipFlags)
{
	const FAngelscriptTypeUsage Usage = FAngelscriptTypeUsage::FromTypeId(TypeId);
	const UStruct* StructDef = Usage.GetUnrealStruct();
	if (StructDef == nullptr)
	{
		UE_LOG(LogJson, Warning, TEXT("JsonObjectStringToUStruct - not a valid USTRUCT"));
		return false;
	}

	// This part is copied verbatim from FJsonObjectConverter::JsonObjectStringToUStruct
	// There is no API that does deserialize that also takes a UStruct*;
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
	if (!FJsonSerializer::Deserialize(JsonReader, JsonObject) || !JsonObject.IsValid())
	{
		UE_LOG(LogJson, Warning, TEXT("JsonObjectStringToUStruct - Unable to parse json=[%s]"), *JsonString);
		return false;
	}

	return FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), StructDef, Data, CheckFlags, SkipFlags);
}

}	// namespace

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_JsonObjectConvert(FAngelscriptBinds::EOrder::Late, [] {
	FAngelscriptBinds::FNamespace ns("FJsonObjectConverter");

	const FString StructToStringSignature =
		"bool UStructToJsonObjectString(const ?&in MaybeStruct, "
		"FString &out Result, "
		"int CheckFlags = 0, "
		"int SkipFlags = 0, "
		"int Indent = 0, "
		"bool PrettyPrint = true)";
	FAngelscriptBinds::BindGlobalFunction(StructToStringSignature, UStructToJsonObjectString);

	const FString AppendStructToStringSignature =
		"bool AppendUStructToJsonObjectString(const ?&in MaybeStruct, "
		"FString& InOutString, "
		"int CheckFlags = 0, "
		"int SkipFlags = 0, "
		"int Indent = 0, "
		"bool PrettyPrint = true)";
	FAngelscriptBinds::BindGlobalFunction(AppendStructToStringSignature, AppendUStructToJsonObjectString);

	const FString StringToStructSignature =
		"bool JsonObjectStringToUStruct(const FString &in JsonString, "
		"?&out MaybeStruct, "
		"int CheckFlags = 0, "
		"int SkipFlags = 0)";
	FAngelscriptBinds::BindGlobalFunction(StringToStructSignature, JsonObjectStringToUStruct);
});
