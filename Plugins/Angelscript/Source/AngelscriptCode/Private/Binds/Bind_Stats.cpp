#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

DECLARE_STATS_GROUP(TEXT("Angelscript"), STATGROUP_Angelscript, STATCAT_Advanced);

struct FScriptStatID
{
	TStatId StatID;

#if STATS || ENABLE_STATNAMEDEVENTS
	FScriptStatID(const FName& Name)
	{
		FString NameStr = Name.ToString();

#if STATS
		StatID = FDynamicStats::CreateStatId<FStatGroup_STATGROUP_Angelscript>( NameStr );
#else // ENABLE_STATNAMEDEVENTS
		const auto& ConversionData = StringCast<PROFILER_CHAR>(*NameStr);
		const int32 NumStorageChars = (ConversionData.Length() + 1);	//length doesn't include null terminator

		auto* StoragePtr = new PROFILER_CHAR[NumStorageChars];
		FMemory::Memcpy(StoragePtr, ConversionData.Get(), NumStorageChars * sizeof(PROFILER_CHAR));
		
		StatID = TStatId(StoragePtr);
#endif
	}
#else
	FScriptStatID(const FName& Name)
	{}
#endif
};

struct FScriptScopeCycleCounter
{
	FScopeCycleCounter Counter;

	FScriptScopeCycleCounter(const FScriptStatID& StatID)
		: Counter(StatID.StatID)
	{
	}

	FScriptScopeCycleCounter(const UObject* Object)
		: Counter(Object != nullptr ? Object->GetStatID() : TStatId())
	{
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_Stats([]
{
	FBindFlags StatFlags;
	auto FStatID_ = FAngelscriptBinds::ValueClass<FScriptStatID>("FStatID", StatFlags);
	FStatID_.Constructor("void f(const FName& Name)",
	[](FScriptStatID* Counter, const FName& Name)
	{
		new(Counter) FScriptStatID(Name);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FStatID_.Destructor("void f()",
	[](FScriptStatID* Counter)
	{
		Counter->~FScriptStatID();
	});

	FBindFlags CounterFlags;
	auto FScopeCycleCounter_ = FAngelscriptBinds::ValueClass<FScriptScopeCycleCounter>("FScopeCycleCounter", CounterFlags);

	FScopeCycleCounter_.Constructor("void f(const FStatID& Stat)",
	[](FScriptScopeCycleCounter* Counter, const FScriptStatID& Stat)
	{
		new(Counter) FScriptScopeCycleCounter(Stat);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FScopeCycleCounter_.Constructor("void f(const UObject Object)",
	[](FScriptScopeCycleCounter* Counter, const UObject* Object)
	{
		new(Counter) FScriptScopeCycleCounter(Object);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FScopeCycleCounter_.Destructor("void f()",
	[](FScriptScopeCycleCounter* Counter)
	{
		Counter->~FScriptScopeCycleCounter();
	});
});
