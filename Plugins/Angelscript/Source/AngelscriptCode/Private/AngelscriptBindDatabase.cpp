#include "AngelscriptBindDatabase.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/MemoryReader.h"
#include "StaticJIT/StaticJITConfig.h"
#include "AngelscriptManager.h"
#include "UObject/Class.h"

#if WITH_EDITOR
#include "SourceCodeNavigation.h"
#endif

//FAngelscriptBindDatabase FAngelscriptBindDatabase::Instance = FAngelscriptBindDatabase();
FAngelscriptBindDatabase FAngelscriptBindDatabase::Instance;

void FAngelscriptBindDatabase::Serialize(FArchive& Archive)
{
	Archive << Structs;
	Archive << Classes;
}

void FAngelscriptBindDatabase::Clear()
{
	Structs.Empty();
}

void FAngelscriptBindDatabase::Save(const FString& Path)
{
	{
		TArray<uint8> Data;
		FMemoryWriter Writer(Data);

		Serialize(Writer);

		bool bSaveSuccess = FFileHelper::SaveArrayToFile(Data, *Path);
		if (IsRunningCookCommandlet())
		{
			if (!bSaveSuccess)
			{
				UE_LOG(Angelscript, Error, TEXT("Unable to write the Script/Binds.Cache file during cook"));
			}
		}
	}

#if WITH_EDITOR
	{
		TArray<uint8> HeaderData;
		FMemoryWriter Writer(HeaderData);

		TArray<FAngelscriptClassHeader> Headers;
		for (auto& Bind : Classes)
		{
			UClass* Class = FindObject<UClass>(nullptr, *Bind.UnrealPath);
			FString HeaderPath;
			if (FSourceCodeNavigation::FindClassHeaderPath(Class, HeaderPath) && IFileManager::Get().FileSize(*HeaderPath) != INDEX_NONE)
				Headers.Add(FAngelscriptClassHeader{Bind.UnrealPath, HeaderPath});
		}

		for (auto& Bind : Structs)
		{
			UScriptStruct* Struct = FindObject<UScriptStruct>(nullptr, *Bind.UnrealPath);
			FString HeaderPath;
			if (FSourceCodeNavigation::FindClassHeaderPath(Struct, HeaderPath) && IFileManager::Get().FileSize(*HeaderPath) != INDEX_NONE)
				Headers.Add(FAngelscriptClassHeader{Bind.UnrealPath, HeaderPath});
		}

		for (UEnum* Enum : BoundEnums)
		{
			FString HeaderPath;
			if (FSourceCodeNavigation::FindClassHeaderPath(Enum, HeaderPath) && IFileManager::Get().FileSize(*HeaderPath) != INDEX_NONE)
				Headers.Add(FAngelscriptClassHeader{Enum->GetPathName(), HeaderPath});
		}

		for (UDelegateFunction* DelegateFunction : BoundDelegateFunctions)
		{
			FString HeaderPath;
			if (FSourceCodeNavigation::FindClassHeaderPath(DelegateFunction, HeaderPath) && IFileManager::Get().FileSize(*HeaderPath) != INDEX_NONE)
				Headers.Add(FAngelscriptClassHeader{ DelegateFunction->GetPathName(), HeaderPath });
		}

		Writer << Headers;

		FFileHelper::SaveArrayToFile(HeaderData, *(Path + TEXT(".Headers")));
	}
#endif
}

void FAngelscriptBindDatabase::Load(const FString& Path, bool bGeneratingPrecompiledData)
{
	{
		TArray<uint8> Data;
		FFileHelper::LoadFileToArray(Data, *Path);

		FMemoryReader Reader(Data);
		Serialize(Reader);

		if (Classes.Num() == 0 && Structs.Num() == 0)
		{
			UE_LOG(Angelscript, Fatal, TEXT("Unable to load script bind database, Script/Binds.Cache file is missing or old. This will cause script compilation and execution to fail."));
		}
	}

#if AS_CAN_GENERATE_JIT
	if (bGeneratingPrecompiledData)
	{
		TArray<uint8> HeaderData;
		FFileHelper::LoadFileToArray(HeaderData, *(Path + TEXT(".Headers")));

		FMemoryReader Reader(HeaderData);

		TArray<FAngelscriptClassHeader> Headers;
		Reader << Headers;

		for (const auto& Header : Headers)
		{
			UObject* Field = FindObject<UObject>(nullptr, *Header.UnrealPath);
			if (Field == nullptr)
				continue;
			HeaderLinks.Add(Field, Header.Header);
		}
	}
#endif
}

FString FAngelscriptBindDatabase::GetSourceHeader(UField* Field)
{
#if WITH_EDITOR
	FString HeaderPath;
	if (FSourceCodeNavigation::FindClassHeaderPath(Field, HeaderPath) && IFileManager::Get().FileSize(*HeaderPath) != INDEX_NONE)
		return HeaderPath;
#else
	FString* Found = FAngelscriptBindDatabase::Get().HeaderLinks.Find(Field);
	if (Found != nullptr)
		return *Found;
#endif

	return TEXT("");
}
