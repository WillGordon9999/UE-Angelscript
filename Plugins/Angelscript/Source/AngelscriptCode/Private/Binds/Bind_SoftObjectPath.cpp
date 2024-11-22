#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "GameFramework/GameMode.h"
#include "UObject/SoftObjectPath.h"
#include "Helper_ToString.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FSoftObjectPath(FAngelscriptBinds::EOrder::Late, [] {
	auto SoftObjectPath_ = FAngelscriptBinds::ExistingClass("FSoftObjectPath");

	SoftObjectPath_.Constructor("void f(const FString& Path)",
	[](void* Memory, const FString& Path)
	{
		new(Memory) FSoftObjectPath(Path);
	});

	SoftObjectPath_.Constructor("void f(const UObject InObject)",
	[](void* Memory, const UObject* InObject)
	{
		new(Memory) FSoftObjectPath(InObject);
	});

	SoftObjectPath_.Method("FString GetLongPackageName() const", METHOD_TRIVIAL(FSoftObjectPath, GetLongPackageName));
	SoftObjectPath_.Method("FString GetAssetName() const", METHOD_TRIVIAL(FSoftObjectPath, GetAssetName));
	SoftObjectPath_.Method("FTopLevelAssetPath GetAssetPath() const", METHOD_TRIVIAL(FSoftObjectPath, GetAssetPath));

	SoftObjectPath_.Method("bool IsValid() const", METHOD_TRIVIAL(FSoftObjectPath, IsValid));
	SoftObjectPath_.Method("bool IsNull() const", METHOD_TRIVIAL(FSoftObjectPath, IsNull));
	SoftObjectPath_.Method("bool IsAsset() const", METHOD_TRIVIAL(FSoftObjectPath, IsAsset));
	SoftObjectPath_.Method("bool IsSubobject() const", METHOD_TRIVIAL(FSoftObjectPath, IsSubobject));

	SoftObjectPath_.Method("bool opEquals(const FSoftObjectPath& Other) const", METHOD_TRIVIAL(FSoftObjectPath, operator==));

	SoftObjectPath_.Method("UObject TryLoad() const", [](FSoftObjectPath* Path) -> UObject* {
		return Path->TryLoad();
	});

	SoftObjectPath_.Method("UObject ResolveObject() const", METHOD_TRIVIAL(FSoftObjectPath, ResolveObject));

	FToStringHelper::Register(TEXT("FSoftObjectPath"), [](void* Ptr, FString& Str)
	{
		Str += ((FSoftObjectPath*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FSoftClassPath(FAngelscriptBinds::EOrder::Late, [] {
	auto FSoftClassPath_ = FAngelscriptBinds::ExistingClass("FSoftClassPath");

	FSoftClassPath_.Constructor("void f(const FString& Path)",
	[](void* Memory, const FString& Path)
	{
		new(Memory) FSoftClassPath(Path);
	});

	FSoftClassPath_.Constructor("void f(const UClass InClass)",
	[](void* Memory, const UClass* InClass)
	{
		new(Memory) FSoftClassPath(InClass);
	});

	FSoftClassPath_.Method("FString GetLongPackageName() const", METHOD_TRIVIAL(FSoftClassPath, GetLongPackageName));
	FSoftClassPath_.Method("FString GetAssetName() const", METHOD_TRIVIAL(FSoftClassPath, GetAssetName));
	FSoftClassPath_.Method("FTopLevelAssetPath GetAssetPath() const", METHOD_TRIVIAL(FSoftClassPath, GetAssetPath));

	FSoftClassPath_.Method("bool IsValid() const", METHOD_TRIVIAL(FSoftClassPath, IsValid));
	FSoftClassPath_.Method("bool IsNull() const", METHOD_TRIVIAL(FSoftClassPath, IsNull));
	FSoftClassPath_.Method("bool IsAsset() const", METHOD_TRIVIAL(FSoftClassPath, IsAsset));
	FSoftClassPath_.Method("bool IsSubobject() const", METHOD_TRIVIAL(FSoftClassPath, IsSubobject));
	FSoftClassPath_.Method("UClass ResolveClass() const", [](const FSoftClassPath& SoftClassPath)
	{
		return SoftClassPath.ResolveClass();
	});

	FSoftClassPath_.Method("UClass TryLoadClass() const", [](const FSoftClassPath& SoftClassPath)
	{
		return SoftClassPath.TryLoadClass<UObject>();
	});
	FToStringHelper::Register(TEXT("FSoftClassPath"), [](void* Ptr, FString& Str)
	{
		Str += ((FSoftClassPath*)Ptr)->ToString();
	});
});
