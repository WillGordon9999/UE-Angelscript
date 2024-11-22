#include "SourceCodeNavigation.h"
#include "AngelscriptManager.h"
#include "ClassGenerator/ASClass.h"
#include "ClassGenerator/ASStruct.h"

class FAngelscriptSourceCodeNavigation : public ISourceCodeNavigationHandler
{
public:
	virtual bool CanNavigateToClass(const UClass* InClass) override
	{
		auto ClassDesc = GetClassDesc(InClass);
		return ClassDesc.IsValid();
	}

	virtual bool NavigateToClass(const UClass* InClass) override
	{
		TSharedPtr<FAngelscriptModuleDesc> Module;
		auto ClassDesc = GetClassDesc(InClass, &Module);
		if (!ClassDesc.IsValid())
			return false;

		OpenModule(Module, ClassDesc->LineNumber);
		return true;
	}

	virtual bool CanNavigateToFunction(const UFunction* InFunction) override
	{
		auto* ASFunc = Cast<const UASFunction>(InFunction);
		if (ASFunc == nullptr)
			return false;
		return true;
	};

	virtual bool NavigateToFunction(const UFunction* InFunction) override
	{
		auto* ASFunc = Cast<const UASFunction>(InFunction);
		if (ASFunc == nullptr)
			return false;
		FString Path = ASFunc->GetSourceFilePath();
		if (Path.Len() == 0)
			return false;

		OpenFile(Path, ASFunc->GetSourceLineNumber());
		return true;
	};

	virtual bool CanNavigateToProperty(const FProperty* InProperty) override
	{
		auto ClassDesc = GetClassDesc(InProperty->GetOwnerStruct());
		return ClassDesc.IsValid();
	}

	virtual bool NavigateToProperty(const FProperty* InProperty) override
	{
		TSharedPtr<FAngelscriptModuleDesc> Module;
		auto ClassDesc = GetClassDesc(InProperty->GetOwnerStruct(), &Module);
		if (!ClassDesc.IsValid())
			return false;

		auto PropertyDesc = ClassDesc->GetProperty(InProperty->GetNameCPP());
		if (!PropertyDesc.IsValid())
			return false;

		OpenModule(Module, PropertyDesc->LineNumber);
		return true;
	}

	virtual bool CanNavigateToStruct(const UStruct* InStruct) override
	{
		auto ClassDesc = GetClassDesc(InStruct);
		return ClassDesc.IsValid();
	}

	virtual bool NavigateToStruct(const UStruct* InStruct) override
	{
		TSharedPtr<FAngelscriptModuleDesc> Module;
		auto ClassDesc = GetClassDesc(InStruct, &Module);
		if (!ClassDesc.IsValid())
			return false;

		OpenModule(Module, ClassDesc->LineNumber);
		return true;
	}

	virtual bool CanNavigateToStruct(const UScriptStruct* InStruct) override
	{
		return CanNavigateToStruct(Cast<UStruct>(InStruct));
	}

	virtual bool NavigateToStruct(const UScriptStruct* InStruct) override
	{
		return NavigateToStruct(Cast<UStruct>(InStruct));
	}

private:
	void OpenModule(TSharedPtr<FAngelscriptModuleDesc> Module, int LineNo = -1)
	{
		if (!Module.IsValid())
			return;
		if (Module->Code.Num() == 0)
			return;

		FString Path = Module->Code[0].AbsoluteFilename;
		if (LineNo != -1)
			FPlatformMisc::OsExecute(nullptr, TEXT("code"), *FString::Printf(TEXT("--goto \"%s:%d\""), *Path, LineNo));
		else
			FPlatformMisc::OsExecute(nullptr, TEXT("code"), *FString::Printf(TEXT("\"%s\""), *Path));
	}

	void OpenFile(const FString& Path, int LineNo = -1)
	{
		if (LineNo != -1)
			FPlatformMisc::OsExecute(nullptr, TEXT("code"), *FString::Printf(TEXT("--goto \"%s:%d\""), *Path, LineNo));
		else
			FPlatformMisc::OsExecute(nullptr, TEXT("code"), *FString::Printf(TEXT("\"%s\""), *Path));
	}

	TSharedPtr<FAngelscriptClassDesc> GetClassDesc(const UStruct* Struct, TSharedPtr<FAngelscriptModuleDesc>* OutModule = nullptr)
	{
		auto* ASClass = Cast<const UASClass>(Struct);
		if (ASClass != nullptr)
		{
			return FAngelscriptManager::Get().GetClass(ASClass->GetPrefixCPP() + ASClass->GetName(), OutModule);
		}

		auto* ASStruct = Cast<const UASStruct>(Struct);
		if (ASStruct != nullptr)
		{
			return FAngelscriptManager::Get().GetClass(ASStruct->GetPrefixCPP() + ASStruct->GetName(), OutModule);
		}

		return nullptr;
	}
};

void RegisterAngelscriptSourceNavigation()
{
	FSourceCodeNavigation::AddNavigationHandler(new FAngelscriptSourceCodeNavigation);
}
