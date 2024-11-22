#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

#include "Misc/FileHelper.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_EFileWrite(FAngelscriptBinds::EOrder::Early, []
{
	auto EFileWrite_ = FAngelscriptBinds::Enum("EFileWrite");
	EFileWrite_["None"] = FILEWRITE_None;
	EFileWrite_["NoFail"] = FILEWRITE_NoFail;
	EFileWrite_["NoReplaceExisting"] = FILEWRITE_NoReplaceExisting;
	EFileWrite_["EvenIfReadOnly"] = FILEWRITE_EvenIfReadOnly;
	EFileWrite_["Append"] = FILEWRITE_Append;
	EFileWrite_["AllowRead"] = FILEWRITE_AllowRead;
	EFileWrite_["Silent"] = FILEWRITE_Silent;
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_EFileRead(FAngelscriptBinds::EOrder::Early, []
{
	auto EFileRead_ = FAngelscriptBinds::Enum("EFileRead");
	EFileRead_["None"] = FILEREAD_None;
	EFileRead_["NoFail"] = FILEREAD_NoFail;
	EFileRead_["Silent"] = FILEREAD_Silent;
	EFileRead_["AllowWrite"] = FILEREAD_AllowWrite;
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FFileHelper(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ns("FFileHelper");

	auto EHashOptions_ = FAngelscriptBinds::Enum("EHashOptions");
	EHashOptions_["None"] = FFileHelper::EHashOptions::None;
	EHashOptions_["EnableVerify"] = FFileHelper::EHashOptions::EnableVerify;
	EHashOptions_["ErrorMissingHash"] = FFileHelper::EHashOptions::ErrorMissingHash;

	auto EEncodingOptions_ = FAngelscriptBinds::Enum("EEncodingOptions");
	EEncodingOptions_["AutoDetect"] = FFileHelper::EEncodingOptions::AutoDetect;
	EEncodingOptions_["ForceAnsi"] = FFileHelper::EEncodingOptions::ForceAnsi;
	EEncodingOptions_["ForceUnicode"] = FFileHelper::EEncodingOptions::ForceUnicode;
	EEncodingOptions_["ForceUTF8"] = FFileHelper::EEncodingOptions::ForceUTF8;
	EEncodingOptions_["ForceUTF8WithoutBOM"] = FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM;

	FAngelscriptBinds::BindGlobalFunction("bool LoadFileToString(FString& Result, const FString& Filename, FFileHelper::EHashOptions HashOptions = FFileHelper::EHashOptions::None, uint32 ReadFlags = uint32(EFileRead::None))",
		[](FString& Result, const FString& Filename, FFileHelper::EHashOptions HashOptions, uint32 ReadFlags) { return FFileHelper::LoadFileToString(Result, *Filename, HashOptions, ReadFlags); });
	FAngelscriptBinds::BindGlobalFunction("bool SaveStringToFile(const FString& String, const FString& Filename, FFileHelper::EEncodingOptions EncodingOptions = FFileHelper::EEncodingOptions::AutoDetect, uint32 WriteFlags = uint32(EFileWrite::None))",
		[](const FString& String, const FString& Filename, FFileHelper::EEncodingOptions EncodingOptions, uint32 WriteFlags) { return FFileHelper::SaveStringToFile(String, *Filename, EncodingOptions, &IFileManager::Get(), WriteFlags); });
});
