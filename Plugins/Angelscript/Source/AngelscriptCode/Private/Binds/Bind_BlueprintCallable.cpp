#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptDocs.h"

#include "UObject/UObjectIterator.h"
#include "UObject/UnrealType.h"
#include "ClassGenerator/ASClass.h"

#include "Helper_FunctionSignature.h"

extern void RegisterBlueprintEventByScriptName(UClass* Class, const FString& ScriptName, UFunction* Function);

// Bind a native function to angelscript, provided all
// argument and return types are known as FAngelscriptTypes.
static const FName NAME_Function_NotInAngelscript("NotInAngelscript");
static const FName NAME_Function_BlueprintInternalUseOnly("BlueprintInternalUseOnly");
void BindBlueprintCallable(
	TSharedRef<FAngelscriptType> InType,
	UFunction* Function,
	FAngelscriptMethodBind& DBBind
#if !AS_USE_BIND_DB
	, const TCHAR* OverrideName
#endif
)
{
#if !AS_USE_BIND_DB
	// Don't bind functions that aren't native
	if (!Function->HasAnyFunctionFlags(FUNC_Native))
		return;

	// Specifically excluded functions are not bound
	if (Function->HasMetaData(NAME_Function_NotInAngelscript))
		return;

	// BlueprintInternalUseOnly functions are not bound
	if (Function->HasMetaData(NAME_Function_BlueprintInternalUseOnly))
		return;
#endif

	//WILL-EDIT
	UClass* OwningClass = CastChecked<UClass>(Function->GetOuter());
	FFuncEntry* Entry = nullptr;

	if (OwningClass != nullptr)
	{
		FString Name = Function->GetFName().ToString();							
		auto* map = FAngelscriptBinds::ClassFuncMaps.Find(OwningClass);		
		
		if (map) 
			Entry = map->Find(Name);
	}

	// Don't bind functions without a native pointer
	if (Entry == nullptr) 
		return;

	auto* DirectNativePointer = &Entry->FuncPtr;
	if (DirectNativePointer == nullptr || !DirectNativePointer->IsBound())
		return;

	//auto* DirectNativePointer = &FuncInMap->Key;	
	//if (!DirectNativePointer->IsBound())
	//	return;	

#if AS_USE_BIND_DB
	FAngelscriptFunctionSignature Signature;
	Signature.InitFromDB(InType, Function, DBBind, /* bInitTypes= */ false);

#elif !AS_USE_BIND_DB
	FAngelscriptFunctionSignature Signature(InType, Function, OverrideName);

	// Don't bind things that have types that are unknown to us
	if (!Signature.bAllTypesValid)
		return;
#endif

	// FGenericFuncPtr is a copy of asSFuncPtr, so do a direct memcpy
	asSFuncPtr ASFuncPtr;
	static_assert(sizeof(asSFuncPtr) == sizeof(FGenericFuncPtr), "FGenericFuncPtr must be the same struct as asSFuncPtr");
	FMemory::Memcpy(&ASFuncPtr, DirectNativePointer, sizeof(asSFuncPtr));

	// Actually bind into angelscript engine
	if (Signature.bStaticInScript)
	{
		// Some functions have a meta tag to put them in global scope
		if (Signature.bGlobalScope)
		{
			//int GlobalFunctionId = FAngelscriptBinds::BindGlobalFunction(Signature.Declaration, ASFuncPtr, FuncInMap->Value);			
			int GlobalFunctionId = FAngelscriptBinds::BindGlobalFunction(Signature.Declaration, ASFuncPtr, Entry->Caller);
			Signature.ModifyScriptFunction(GlobalFunctionId);
		}

		// Static functions should be bound as a global function in a namespace
		FAngelscriptBinds::FNamespace ns(Signature.ClassName);
		//int FunctionId = FAngelscriptBinds::BindGlobalFunction(Signature.Declaration, ASFuncPtr, FuncInMap->Value);
		int FunctionId = FAngelscriptBinds::BindGlobalFunction(Signature.Declaration, ASFuncPtr, Entry->Caller);
		Signature.ModifyScriptFunction(FunctionId);
	}
	else if (Signature.bStaticInUnreal)
	{
		// This is a static function converted through mixin to a script member function
		int FunctionId = FAngelscriptBinds::BindMethodDirect
		(
			Signature.ClassName,
			Signature.Declaration, ASFuncPtr,
			asCALL_CDECL_OBJFIRST, Entry->Caller /*FuncInMap->Value*/
		);
		Signature.ModifyScriptFunction(FunctionId);
	}
	else
	{
		//auto caller = ASAutoCaller::FunctionCaller::Make();
		//caller.MethodPtr = DirectNativePointer;
		// Member methods should be bound as THISCALL		
		int FunctionId = FAngelscriptBinds::BindMethodDirect
		(
			InType->GetAngelscriptTypeName(),
			Signature.Declaration, ASFuncPtr, asCALL_THISCALL, Entry->Caller /*FuncInMap->Value*/
		);
		Signature.ModifyScriptFunction(FunctionId);
	}

#if AS_CAN_GENERATE_JIT
#if AS_USE_BIND_DB
	SCRIPT_NATIVE_UFUNCTION(Function, FPackageName::ObjectPathToObjectName(DBBind.UnrealPath), Signature.bTrivial);
#else
	SCRIPT_NATIVE_UFUNCTION(Function, Function->GetName(), Signature.bTrivial);
#endif
#endif

#if !AS_USE_BIND_DB
	Signature.WriteToDB(DBBind);
#endif
}