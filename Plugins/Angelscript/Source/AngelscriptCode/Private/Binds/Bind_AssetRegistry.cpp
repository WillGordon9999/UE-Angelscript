#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "AssetRegistry/IAssetRegistry.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Blueprint.h"
#include "Internationalization/Regex.h"
#include "Helper_ToString.h"

#if WITH_EDITOR
#include "WidgetBlueprint.h"
#endif

IAssetRegistry& GetAssetRegistry()
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	return AssetRegistryModule.Get();
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_AssetData(FAngelscriptBinds::EOrder::Late, []
{
	auto FAssetData_ = FAngelscriptBinds::ExistingClass("FAssetData");

	FAssetData_.Method("FSoftObjectPath GetSoftObjectPath() const", METHOD_TRIVIAL(FAssetData, GetSoftObjectPath));
	FAssetData_.Method("FString GetObjectPathString() const", METHOD_TRIVIAL(FAssetData, GetObjectPathString));
	FAssetData_.Method("bool IsInstanceOf(const UClass BaseClass, bool bResolveClass = false) const", [](const FAssetData* AssetData, const UClass* BaseClass, bool bResolveClass = false) -> bool
	{
		return AssetData->IsInstanceOf(BaseClass, bResolveClass ? EResolveClass::Yes : EResolveClass::No);
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_AssetRegistry(FAngelscriptBinds::EOrder::Late, []
{
	auto FTopLevelAssetPath_ = FAngelscriptBinds::ExistingClass("FTopLevelAssetPath");
	FTopLevelAssetPath_.Constructor("void f(const UObject AssetObject)", [](FTopLevelAssetPath* Memory, const UObject* AssetObject)
	{
		new(Memory) FTopLevelAssetPath(AssetObject);
	});
	FTopLevelAssetPath_.Constructor("void f(const FString& AssetPath)", [](FTopLevelAssetPath* Memory, const FString& AssetPath)
	{
		new(Memory) FTopLevelAssetPath(AssetPath);
	});
	FTopLevelAssetPath_.Constructor("void f(const FName& PackageName, const FName& AssetName)", [](FTopLevelAssetPath* Memory, const FName& PackageName, const FName& AssetName)
	{
		new(Memory) FTopLevelAssetPath(PackageName, AssetName);
	});
	FTopLevelAssetPath_.Method("bool IsValid() const", &FTopLevelAssetPath::IsValid);
	FTopLevelAssetPath_.Method("bool IsNull() const", &FTopLevelAssetPath::IsNull);
	FTopLevelAssetPath_.Method("void Reset()", &FTopLevelAssetPath::Reset);
	FTopLevelAssetPath_.Method("bool opEquals(const FTopLevelAssetPath& Other) const", &FTopLevelAssetPath::operator==);
	FTopLevelAssetPath_.Method("FTopLevelAssetPath& opAssign(const FString& AssetPath)", [](FTopLevelAssetPath* Self, const FString& AssetPath) -> FTopLevelAssetPath*
	{
		*Self = AssetPath;
		return Self;
	});

	FToStringHelper::Register(TEXT("FTopLevelAssetPath"), [](void* Ptr, FString& Str)
	{
		Str += ((FTopLevelAssetPath*)Ptr)->ToString();
	});

	{
		FAngelscriptBinds::FNamespace ns("AssetRegistry");

		FAngelscriptBinds::BindGlobalFunction(
			"bool IsLoadingAssets()",
			[]() -> bool {
				return GetAssetRegistry().IsLoadingAssets();
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool HasAssets(const FName PackagePath, const bool bRecursive = false)",
			[](const FName PackagePath, const bool bRecursive = false) -> bool {
				return GetAssetRegistry().HasAssets(PackagePath, bRecursive);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets = false)", 
			[](FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets = false) -> bool {
				return GetAssetRegistry().GetAssetsByPackageName(PackageName, OutAssetData, bIncludeOnlyOnDiskAssets);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive = false, bool bIncludeOnlyOnDiskAssets = false)",
			[](FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive = false, bool bIncludeOnlyOnDiskAssets = false) -> bool {
				return GetAssetRegistry().GetAssetsByPath(PackagePath, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAssetsByClass(const FTopLevelAssetPath& ClassPath, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses = false)",
			[](const FTopLevelAssetPath& ClassPath, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses = false) -> bool {
				return GetAssetRegistry().GetAssetsByClass(ClassPath, OutAssetData, bSearchSubClasses);
			}
		);

		// Gets the all Blueprint CDOs for a given ParentClass.
		FAngelscriptBinds::BindGlobalFunction(
			"void GetBlueprintCDOsByParentClass(UClass Class, TArray<UObject>& OutAssets)",
			[](UClass* Class, TArray<UObject*>& OutAssets) -> void {

			if (Class == nullptr)
			{
				FAngelscriptManager::Throw("A null Class was passed to GetBlueprintCDOsByParentClass.");
				return;
			}

			IAssetRegistry& AssetRegistry = GetAssetRegistry();

			// Use the asset registry to get the set of all class names deriving from Base
			TSet< FTopLevelAssetPath > DerivedNames;
			TArray<FTopLevelAssetPath> BaseNames;
			BaseNames.Add(FTopLevelAssetPath(Class));
			TSet<FTopLevelAssetPath> Excluded;

			AssetRegistry.GetDerivedClassNames(BaseNames, Excluded, DerivedNames);

			TArray< FAssetData > AssetList;
			AssetRegistry.GetAssetsByClass(FTopLevelAssetPath(UBlueprint::StaticClass()), AssetList);
			// Iterate over retrieved blueprint assets
			for (const FAssetData& Asset : AssetList)
			{
				// Get the the class this blueprint generates (this is stored as a full path)
				FString AssetClassName;
				if (Asset.GetTagValue(FBlueprintTags::GeneratedClassPath, AssetClassName))
				{
					// Convert path to just the name part
					const FString ClassObjectPath = FPackageName::ExportTextPathToObjectPath(AssetClassName);

					// Check if this class is in the derived set
					if (DerivedNames.Contains(FTopLevelAssetPath(ClassObjectPath)))
					{
						UBlueprint* Blueprint = Cast<UBlueprint>(Asset.GetAsset());
						UObject* BlueprintDefaultSubObject = Blueprint->GeneratedClass->GetDefaultObject();
						if (BlueprintDefaultSubObject != nullptr)
						{
							OutAssets.Add(BlueprintDefaultSubObject);
						}
					}
				}
			}
		}
		);

#if WITH_EDITOR
		// Gets the all Widget Blueprint CDOs for a given ParentClass.
		FAngelscriptBinds::BindGlobalFunction(
			"void GetWidgetBlueprintCDOsByParentClass(UClass Class, TArray<UObject>& OutAssets)",
			[](UClass* Class, TArray<UObject*>& OutAssets) -> void {

				IAssetRegistry& AssetRegistry = GetAssetRegistry();

				// Use the asset registry to get the set of all class names deriving from Base
				TSet< FTopLevelAssetPath > DerivedNames;
				TArray<FTopLevelAssetPath> BaseNames;
				BaseNames.Add(FTopLevelAssetPath(Class));
				TSet<FTopLevelAssetPath> Excluded;

				AssetRegistry.GetDerivedClassNames(BaseNames, Excluded, DerivedNames);

				TArray< FAssetData > AssetList;
				AssetRegistry.GetAssetsByClass(FTopLevelAssetPath(UWidgetBlueprint::StaticClass()), AssetList);
				// Iterate over retrieved blueprint assets
				for (const FAssetData& Asset : AssetList)
				{
					// Get the the class this blueprint generates (this is stored as a full path)
					FString AssetClassName;
					if (Asset.GetTagValue(FBlueprintTags::GeneratedClassPath, AssetClassName))
					{
						// Convert path to just the name part
						const FString ClassObjectPath = FPackageName::ExportTextPathToObjectPath(AssetClassName);

						// Check if this class is in the derived set
						if (DerivedNames.Contains(FTopLevelAssetPath(ClassObjectPath)))
						{
							UWidgetBlueprint* Blueprint = Cast<UWidgetBlueprint>(Asset.GetAsset());
							UObject* BlueprintDefaultSubObject = Blueprint->GeneratedClass->GetDefaultObject();
							if (BlueprintDefaultSubObject != nullptr)
							{
								OutAssets.Add(BlueprintDefaultSubObject);
							}
						}
					}
				}
			}
		);
#endif

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAssetsByTags(const TArray<FName>& AssetTags, TArray<FAssetData>& OutAssetData)",
			[](const TArray<FName>& AssetTags, TArray<FAssetData>& OutAssetData) -> bool {
				return GetAssetRegistry().GetAssetsByTags(AssetTags, OutAssetData);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"FAssetData GetAssetByObjectPath(const FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets = false)",
			[](const FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets = false) -> FAssetData {
				return GetAssetRegistry().GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets = false)",
			[](TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets = false) -> bool {
				return GetAssetRegistry().GetAllAssets(OutAssetData, bIncludeOnlyOnDiskAssets);
			}
		);
		
		FAngelscriptBinds::BindGlobalFunction(
			"bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets = true)",
			[](const FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets = true) -> bool {
				return GetAssetRegistry().GetAssets(Filter, OutAssetData, bSkipARFilteredAssets);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies)",
			[](FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) -> bool {
				return GetAssetRegistry().K2_GetDependencies(PackageName, DependencyOptions, OutDependencies);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers)",
			[](FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) -> bool {
				return GetAssetRegistry().K2_GetReferencers(PackageName, ReferenceOptions, OutReferencers);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"void GetDerivedClassNames(const TArray<FTopLevelAssetPath>& ClassNames, const TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>&OutDerivedClassNames)",
			[](const TArray<FTopLevelAssetPath>& ClassNames, const TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>& OutDerivedClassNames) -> void {
				GetAssetRegistry().GetDerivedClassNames(ClassNames, ExcludedClassNames, OutDerivedClassNames);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"bool GetGeneratedClassName(const FAssetData& AssetData, FTopLevelAssetPath& OutGeneratedClassName)",
			[](const FAssetData& AssetData, FTopLevelAssetPath& OutGeneratedClassName) -> bool {
				FAssetDataTagMapSharedView::FFindTagResult Result = AssetData.TagsAndValues.FindTag(TEXT("GeneratedClass"));
				if (Result.IsSet())
				{
					const FString& GeneratedClassPathPtr = Result.GetValue();
					OutGeneratedClassName = FTopLevelAssetPath(FPackageName::ExportTextPathToObjectPath(*GeneratedClassPathPtr));
					return true;
				}
				return false;
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"void AssetCreated(UObject NewAsset)",
			[](UObject* NewAsset) -> void {
				GetAssetRegistry().AssetCreated(NewAsset);
			}
		);

		FAngelscriptBinds::BindGlobalFunction(
			"void LoadAllBlueprintsUnderPath(FName PathToLoadFrom, FString OptionalFileIncludeRegex = \"\")",
			[](FName PathToLoadFrom, FString OptionalFileIncludeRegex) -> void
			{
				const FRegexPattern InclusiveRegex(OptionalFileIncludeRegex);
				IAssetRegistry& AssetRegistry = GetAssetRegistry();

				TArray<FAssetData> AllSubAssets;
				AssetRegistry.GetAssetsByPath(PathToLoadFrom, AllSubAssets, true);
				for (FAssetData& AssetData : AllSubAssets)
				{
					if (!OptionalFileIncludeRegex.IsEmpty())
					{
						FRegexMatcher InclusiveRegexMatcher(InclusiveRegex, AssetData.AssetName.ToString());
						if (!InclusiveRegexMatcher.FindNext())
						{
							// We required that the regex should match all asset names, but this name did not match, so skip it.
							continue;
						}
					}

					AssetData.GetAsset();
				}
			}
		);
	}
});
