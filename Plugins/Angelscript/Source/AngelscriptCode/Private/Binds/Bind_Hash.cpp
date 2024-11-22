#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Hash/CityHash.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_Hash(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ns("Hash");

	FAngelscriptBinds::BindGlobalFunction("uint32 CityHash32(const FString& buf)", [](const FString& buf) -> uint32
	{
		return CityHash32((const char*)*buf, (uint32)buf.Len() * sizeof(TCHAR));
	});

	FAngelscriptBinds::BindGlobalFunction("uint32 CityHash32(const TArray<int8>& buf)", [](const TArray<int8>& buf) -> uint32
	{
		return CityHash32((const char*)buf.GetData(), (uint32)buf.Num());
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64(const FString& buf)", [](const FString& buf) -> uint64
	{
		return CityHash64((const char*)*buf, (uint32)buf.Len() * sizeof(TCHAR));
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64(const TArray<int8>& buf)", [](const TArray<int8>& buf) -> uint64
	{
		return CityHash64((const char*)buf.GetData(), (uint32)buf.Num());
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64WithSeed(const FString& buf, uint64 seed)", [](const FString& buf, uint64 seed) -> uint64
	{
		return CityHash64WithSeed((const char*)*buf, (uint32)buf.Len() * sizeof(TCHAR), seed);
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64WithSeed(const TArray<int8>& buf, uint64 seed)", [](const TArray<int8>& buf, uint64 seed) -> uint64
	{
		return CityHash64WithSeed((const char*)buf.GetData(), (uint32)buf.Num(), seed);
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64WithSeeds(const FString& buf, uint64 seed0, uint64 seed1)", [](const FString& buf, uint64 seed0, uint64 seed1) -> uint64
	{
		return CityHash64WithSeeds((const char*)*buf, (uint32)buf.Len() * sizeof(TCHAR), seed0, seed1);
	});

	FAngelscriptBinds::BindGlobalFunction("uint64 CityHash64WithSeeds(const TArray<int8>& buf, uint64 seed0, uint64 seed1)", [](const TArray<int8>& buf, uint64 seed0, uint64 seed1) -> uint64
	{
		return CityHash64WithSeeds((const char*)buf.GetData(), (uint32)buf.Num(), seed0, seed1);
	});
});