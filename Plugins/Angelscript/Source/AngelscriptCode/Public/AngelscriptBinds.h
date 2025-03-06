#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"

// Unfortunately we need Angelscript here, since we need access
// to asSMethodPtr to make the template magic work.
// Dependency inversion on the bind event means we 
// don't really include this file outside the Binds folder
// though, thankfully.
#include "AngelscriptInclude.h"
#include "AngelscriptBindDatabase.h"
#include "AngelscriptBindString.h"
#include "AngelscriptType.h"
#include "StaticJIT/StaticJITBinds.h"
//#include "FunctionCallers.h"

// Need to disable some casting warnings. Trust us MSVC we know what we're doing
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4191)
#endif

#ifdef _MSC_VER
#define CDECL __cdecl
#else
#define CDECL
#endif

#ifndef AS_FORCE_LINK
#if defined(__GNUC__) || defined(__clang__)
#define AS_FORCE_LINK [[gnu::used, gnu::retain]]
#else
#define AS_FORCE_LINK
#endif
#endif

#if AS_CAN_GENERATE_JIT
#define METHODPR(Ret,Cls,Name,Args) ((Ret(Cls::*)Args)&Cls::Name), #Cls, #Name, false
#define METHODPR_TRIVIAL(Ret,Cls,Name,Args) ((Ret(Cls::*)Args)&Cls::Name), #Cls, #Name, true
#define METHOD(Cls,Name) (&Cls::Name), #Cls, #Name, false
#define METHOD_TRIVIAL(Cls,Name) (&Cls::Name), #Cls, #Name, true
#define FUNCPR(Ret,Name,Args) ((Ret(*)Args)&Name), #Name, false
#define FUNCPR_TRIVIAL(Ret,Name,Args) ((Ret(*)Args)&Name), #Name, true
#define FUNC(Name) (&Name), #Name, false
#define FUNC_TRIVIAL(Name) (&Name), #Name, true
#define FUNC_CUSTOMNATIVE(Name, CustomNative) (&Name), #CustomNative, false
#define FUNC_TRIVIAL_CUSTOMNATIVE(Name, CustomNative) (&Name), #CustomNative, true
#else
#define METHODPR(Ret,Cls,Name,Args) ((Ret(Cls::*)Args)&Cls::Name)
#define METHODPR_TRIVIAL(Ret,Cls,Name,Args) ((Ret(Cls::*)Args)&Cls::Name)
#define METHOD(Cls,Name) (&Cls::Name)
#define METHOD_TRIVIAL(Cls,Name) (&Cls::Name)
#define FUNCPR(Ret,Name,Args) ((Ret(*)Args)&Name)
#define FUNCPR_TRIVIAL(Ret,Name,Args) ((Ret(*)Args)&Name)
#define FUNC(Name) (&Name)
#define FUNC_TRIVIAL(Name) (&Name)
#define FUNC_CUSTOMNATIVE(Name, CustomNative) (&Name)
#define FUNC_TRIVIAL_CUSTOMNATIVE(Name, CustomNative) (&Name)
#endif



/* Template metamagic for determining function pointer type from lambda. */
template<class> struct TRemoveFuncConst;
template<class Value, class... Args>
struct TRemoveFuncConst<Value(Args...)>
{
	using Type = Value(CDECL *)(Args...);
};

template<class Value, class... Args>
struct TRemoveFuncConst<Value(Args...) const>
{
	using Type = Value(CDECL *)(Args...);
};

template< class > struct TRemoveMethodPtr;
template< class C, class T > struct TRemoveMethodPtr< T C::* >
{
	typedef typename TRemoveFuncConst<T>::Type Type;
};

template< class T > struct TLambdaFuncPtr
{
	typedef typename TRemoveMethodPtr< decltype(&T::operator()) >::Type Type;
};


struct FBindFlags
{
	bool bPOD = false;
	bool bTemplate = false;
	FBindString TemplateType;
	int Alignment = -1;
	int ExtraFlags = 0;
};

struct FSystemFunctionArgument
{
	FBindString Name;
	FBindString DefaultValue;
	FAngelscriptTypeUsage Type;
	bool bReference = false;
	bool bConst = false;
};

struct FSystemFunctionBind
{
	FBindString Name;
	FAngelscriptTypeUsage ReturnType;
	TArray<FSystemFunctionArgument, TInlineAllocator<4>> Arguments;
	bool bConst = false;
	FBindString Namespace;
	TSharedPtr<FAngelscriptType> ObjectType;
};

struct ANGELSCRIPTCODE_API FAngelscriptBinds
{
	/* 
	* Class-specific binding.
	*/
	static FAngelscriptBinds ReferenceClass(FBindString Name, UClass* UnrealClass);
	static FAngelscriptBinds ExistingClass(FBindString Name);

	template<typename T>
	static FAngelscriptBinds ValueClass(FBindString Name, FBindFlags Flags)
	{
		if (Flags.Alignment == -1)
			Flags.Alignment = alignof(T);
		Flags.ExtraFlags |= asGetTypeTraits<T>();
		return ValueClass(Name, Flags, sizeof(T));
	}

	static FAngelscriptBinds ValueClass(FBindString Name, UScriptStruct* StructType, FBindFlags Flags)
	{
		int Size;
		auto* Ops = StructType->GetCppStructOps();
		if (Ops != nullptr)
			Size = Ops->GetSize();
		else
			Size = StructType->GetPropertiesSize();
		if (Flags.Alignment == -1)
			Flags.Alignment = StructType->GetMinAlignment();
		return ValueClass(Name, Flags, Size);
	}

	static FAngelscriptBinds ValueClass(FBindString Name, SIZE_T Size, FBindFlags Flags)
	{
		Flags.ExtraFlags |= asOBJ_APP_CLASS_CDAK;
		return ValueClass(Name, Flags, Size);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...), void* UserData = nullptr)
	{
		return BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...)const, void* UserData = nullptr)
	{
		return BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...)const&, void* UserData = nullptr)
	{
		return BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename Value, typename... Args>
	inline int Method(FBindString Signature, Value(CDECL *fun)(Args...), void* UserData = nullptr)
	{
		return BindExternMethod(Signature, asFUNCTION(fun), ASAutoCaller::MakeFunctionCaller(fun), UserData);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...)const, FBindString MethodClass, FBindString MethodName, bool bTrivial, void* UserData = nullptr)
	{
		BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_METHOD(*this, MethodName.ToCString_EnsureConstant(), bTrivial);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...), FBindString MethodClass, FBindString MethodName, bool bTrivial, void* UserData = nullptr)
	{
		BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_METHOD(*this, MethodName.ToCString_EnsureConstant(), bTrivial);
	}

	template<typename C, typename Value, typename... Args>
	inline void Method(FBindString Signature, Value(C::*Fun)(Args...)const&, FBindString MethodClass, FBindString MethodName, bool bTrivial, void* UserData = nullptr)
	{
		BindMethod(Signature, asSMethodPtr<sizeof(void(C::*)())>::Convert((void(C::*)())(Fun)), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_METHOD(*this, MethodName.ToCString_EnsureConstant(), bTrivial);
	}

	template<typename Value, typename... Args>
	inline int Method(FBindString Signature, Value(CDECL *fun)(Args...), FBindString FuncName, bool bTrivial, void* UserData = nullptr)
	{
		int Result = BindExternMethod(Signature, asFUNCTION(fun), ASAutoCaller::MakeFunctionCaller(fun), UserData);
		SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
		return Result;
	}

	template<typename Value, typename... Args>
	inline int Method(FBindString Signature, Value(CDECL *fun)(Args...), FBindString FuncName, bool bTrivial, const FAngelscriptType::FBindParams& BindParams, void* UserData = nullptr)
	{
		int Result = BindExternMethod(Signature, asFUNCTION(fun), BindParams, ASAutoCaller::MakeFunctionCaller(fun), UserData);
		SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
		return Result;
	}

	template<typename Value, typename... Args>
	inline int Method(FBindString Signature, Value(CDECL *fun)(Args...), const FAngelscriptType::FBindParams& BindParams, void* UserData = nullptr)
	{
		int Result = BindExternMethod(Signature, asFUNCTION(fun), BindParams, ASAutoCaller::MakeFunctionCaller(fun), UserData);
		return Result;
	}

	template<typename T>
	inline int Method(FBindString Signature, T Function, void* UserData = nullptr)
	{
		auto FunctionPointer = (typename TLambdaFuncPtr<T>::Type)Function;
		return BindExternMethod(Signature, asFUNCTION(FunctionPointer), ASAutoCaller::MakeFunctionCaller(FunctionPointer), UserData);
	}

	template<typename T>
	inline int Method(FBindString Signature, T Function, const FAngelscriptType::FBindParams& BindParams, void* UserData = nullptr)
	{
		auto FunctionPointer = (typename TLambdaFuncPtr<T>::Type)Function;
		return BindExternMethod(Signature, asFUNCTION(FunctionPointer), BindParams, ASAutoCaller::MakeFunctionCaller(FunctionPointer), UserData);
	}

	void GenericMethod(FBindString Signature, void(CDECL *Fun)(asIScriptGeneric*), void* UserData);

	template<typename T>
	inline void GenericMethod(FBindString Signature, T Function, void* UserData)
	{
		return GenericMethod(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	template<typename C, typename T>
	inline void Property(FBindString Signature, T C::*Ptr)
	{
		return BindProperty(Signature, (size_t)&(((C*)nullptr)->*Ptr));
	}

	inline void Property(FBindString Signature, size_t Offset)
	{
		return BindProperty(Signature, Offset);
	}

	inline void Property(FBindString Signature, size_t Offset, const FAngelscriptType::FBindParams& BindParams)
	{
		return BindProperty(Signature, Offset, BindParams);
	}

	template<typename Value, typename... Args>
	inline void Factory(FBindString Signature, Value(CDECL *Fun)(Args...), void* UserData = nullptr)
	{
		return BindStaticBehaviour(asBEHAVE_FACTORY, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename Value, typename... Args>
	inline void Destructor(FBindString Signature, Value(CDECL *Fun)(Args...), void* UserData = nullptr)
	{
		BindExternBehaviour(asBEHAVE_DESTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename Value, typename... Args>
	inline void Destructor(FBindString Signature, Value(CDECL *Fun)(Args...), FBindString FuncName, bool bTrivial, void* UserData = nullptr)
	{
		BindExternBehaviour(asBEHAVE_DESTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
	}

	template<typename T>
	inline void Destructor(FBindString Signature, T Function, void* UserData = nullptr)
	{
		Destructor(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	template<typename T>
	inline void Factory(FBindString Signature, T Function, void* UserData = nullptr)
	{
		return Factory(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	template<typename Value, typename... Args>
	inline void Constructor(FBindString Signature, Value(CDECL *Fun)(Args...), void* UserData = nullptr)
	{
		return BindExternBehaviour(asBEHAVE_CONSTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename Value, typename... Args>
	inline void Constructor(FBindString Signature, Value(CDECL *Fun)(Args...), FBindString FuncName, bool bTrivial, void* UserData = nullptr)
	{
		BindExternBehaviour(asBEHAVE_CONSTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
	}

	template<typename T>
	inline void Constructor(FBindString Signature, T Function, void* UserData = nullptr)
	{
		return Constructor(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	template<typename Value, typename... Args>
	inline void ImplicitConstructor(FBindString Signature, Value(CDECL *Fun)(Args...), void* UserData = nullptr)
	{
		BindExternBehaviour(asBEHAVE_CONSTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		MarkAsImplicitConstructor();
	}

	template<typename Value, typename... Args>
	inline void ImplicitConstructor(FBindString Signature, Value(CDECL *Fun)(Args...), FBindString FuncName, bool bTrivial, void* UserData = nullptr)
	{
		BindExternBehaviour(asBEHAVE_CONSTRUCT, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
		SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
		MarkAsImplicitConstructor();
	}

	template<typename T>
	inline void ImplicitConstructor(FBindString Signature, T Function, void* UserData = nullptr)
	{
		ImplicitConstructor(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	template<typename Value, typename... Args>
	inline void TemplateCallback(FBindString Signature, Value(CDECL *Fun)(Args...))
	{
		return BindStaticBehaviour(asBEHAVE_TEMPLATE_CALLBACK, Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun));
	}

	template<typename T>
	inline void TemplateCallback(FBindString Signature, T Function)
	{
		return TemplateCallback(Signature, (typename TLambdaFuncPtr<T>::Type)Function);
	}

	/* 
	* Global binding
	*/
	template<typename Value, typename... Args>
	static inline int BindGlobalFunction(FBindString Signature, Value(*Fun)(Args...), void* UserData = nullptr)
	{
		return BindGlobalFunction(Signature, asFUNCTION(Fun), ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename Value, typename... Args>
	static inline int BindGlobalFunction(FBindString Signature, Value(*Fun)(Args...), FBindString FuncName, bool bTrivial, void* UserData = nullptr)
	{
		return BindGlobalFunction(Signature, asFUNCTION(Fun), FuncName, bTrivial, ASAutoCaller::MakeFunctionCaller(Fun), UserData);
	}

	template<typename T>
	static inline int BindGlobalFunction(FBindString Signature, T Function, void* UserData = nullptr)
	{
		auto FuncPtr = (typename TLambdaFuncPtr<T>::Type)Function;
		return BindGlobalFunction(Signature, asFUNCTION(FuncPtr), ASAutoCaller::MakeFunctionCaller(FuncPtr), UserData);
	}

	template<typename T>
	static inline int BindGlobalGenericFunction(FBindString Signature, T Function, void* UserData = nullptr)
	{
		return BindGlobalGenericFunction(Signature, (typename TLambdaFuncPtr<T>::Type)Function, UserData);
	}

	/**
	 * Enum Binding
	 */
	class ANGELSCRIPTCODE_API FEnumBind
	{
	public:
		FEnumBind(FBindString Name);
		FBindString EnumName;
		int32 TypeId;

		asITypeInfo* GetTypeInfo();

		struct ANGELSCRIPTCODE_API FEnumElement
		{
			FEnumBind* Bind;
			FBindString Name;

			void operator=(int32 Value);

			template<typename E>
			void operator=(E Value)
			{
				*this = (int32)Value;
			}
		};

		FEnumElement operator[](FBindString Name)
		{
			return FEnumElement{this, Name};
		}
	};

	inline static FEnumBind Enum(FBindString Name)
	{
		return FEnumBind(Name);
	}

	/* Register functions to be called at bind-time. */
	enum class EOrder : int32
	{
		Early = -100,
		Normal = 0,
		Late = 100,
	};

	struct ANGELSCRIPTCODE_API FBind
	{
		FBind(int32 BindOrder, TFunction<void()> Function)
		{
			FAngelscriptBinds::RegisterBinds(BindOrder, Function);
		}

		FBind(EOrder BindOrder, TFunction<void()> Function)
		{
			FAngelscriptBinds::RegisterBinds((int32)BindOrder, Function);
		}

		FBind(TFunction<void()> Function)
		{
			FAngelscriptBinds::RegisterBinds(0, Function);
		}
	};

	static void RegisterBinds(int32 BindOrder, TFunction<void()> Function);

	struct ANGELSCRIPTCODE_API FNamespace
	{
		FBindString PrevNamespace;

		FNamespace(FBindString Name);
		~FNamespace();
	};

	//WILL-EDIT ================================================================

	static TMap<FString, TArray<TObjectPtr<UClass>>> RuntimeClassDB;
#if WITH_EDITOR
	static TMap<FString, TArray<TObjectPtr<UClass>>> EditorClassDB;
#endif

	static TMap<UClass*, TMap<FString, FFuncEntry>> ClassFuncMaps;
	//It's really tempting to make this just a TSet with "ClassName FuncName"
	//Only need to make sure it gets setup before Generate Binds can be called haha
	static TMap<UClass*, TSet<FString>> SkipBinds; 
	static TArray<FString> BindModuleNames;

	static void AddFunctionEntry(UClass* Class, FString Name, FFuncEntry Entry)
	{
		if (ClassFuncMaps.Contains(Class))
		{
			if (!ClassFuncMaps[Class].Contains(Name))
			{
				ClassFuncMaps[Class].Add(Name, Entry);
			}
		}

		else
		{
			ClassFuncMaps.Add(Class, TMap<FString, FFuncEntry>()).Add(Name, Entry);
		}
	}

	static void SkipFunctionEntry(UClass* Class, FString Name)
	{
		if (SkipBinds.Contains(Class))
		{
			if (!SkipBinds[Class].Contains(Name))
			{
				SkipBinds[Class].Add(Name);
			}
		}

		else
		{
			SkipBinds.Add(Class, TSet<FString>()).Add(Name);
		}
	}

	static bool CheckForSkip(UClass* Class, UFunction* Function)
	{		
		if (SkipBinds.Contains(Class))
		{
			if (SkipBinds[Class].Contains(Function->GetName()))
				return true;
		}

		return false;
	}

	//TO-DO make sure the binds are written to base directory not inside another module
	static void SaveBindModules(FString Path)
	{
		//TArray<uint8> Data;
		//FMemoryWriter Writer(Data);
		//Writer << BindModuleNames;
		//FFileHelper::SaveArrayToFile(Data, *Path);
		FFileHelper::SaveStringArrayToFile(BindModuleNames, *Path);
	}

	static void LoadBindModules(FString Path)
	{
		//TArray<uint8> Data;
		//FFileHelper::LoadFileToArray(Data, *Path);
		//FMemoryReader Reader(Data);
		//Reader << BindModuleNames;
		FFileHelper::LoadFileToStringArray(BindModuleNames, *Path);
	}

	//END WILL-EDIT =============================================================

	static int BindGlobalFunction(FBindString Signature, asSFuncPtr Function, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	static int BindGlobalFunction(FBindString Signature, asSFuncPtr Function, FBindString FuncName, bool bTrivial, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	static int BindGlobalFunctionDirect(FBindString Signature, asSFuncPtr Function, asECallConvTypes CallConv, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	static int BindGlobalGenericFunction(FBindString Signature, void(CDECL* Function)(asIScriptGeneric*), void* UserData = nullptr);
	static void BindGlobalVariable(FBindString Signature, const void* Address);
	static int BindMethodDirect(FBindString ClassName, FBindString Signature, asSFuncPtr Function, asECallConvTypes CallConv, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);

	static int CompileOutInTest(int FunctionId);
	static int CompileOutIfNoLog(int FunctionId);
	static int CompileOutAsEnsure(int FunctionId);
	static int CompileOutAsCheck(int FunctionId);
	static int CompileReplaceWithFirstArgInTest(int FunctionId);

	static void CompileOutPreviousBind();
	static void CompileOutPreviousBindAsMethodChain();

	asITypeInfo* GetTypeInfo();
	bool HasMethod(const FString& MethodName);
	bool HasGetter(const FString& PropertyName);
	bool HasSetter(const FString& PropertyName);

	static asIScriptFunction* GetPreviousBind();
	static int32 GetPreviousFunctionId() { return PreviouslyBoundFunction; }
	static int32 GetPreviousGlobalVariableId() { return PreviouslyBoundGlobalProperty; }
	static void DeprecatePreviousBind(const ANSICHAR* DeprecationMessage);
	static void SetPreviousBindIsGeneratedAccessor(bool bIsAccessor);
	static void SetPreviousBindIsEditorOnly(bool bEditorOnly);
	static void SetPreviousBindRequiresWorldContext(bool bRequiresWorldContext);
	static void SetPreviousBindIsPropertyAccessor(bool bIsProperty);
	static void SetPreviousBindIsCallable(bool bIsCallable);
	static void SetPreviousBindNoDiscard(bool bNoDiscard);
	static void SetPreviousBindForceConstArgumentExpressions(bool bForceConst);
	static void PreviousBindPassScriptFunctionAsFirstParam();
	static void PreviousBindPassScriptObjectTypeAsFirstParam();
	static void SetPreviousBindArgumentDeterminesOutputType(int ArgumentIndex);

	template<typename T>
	static void SetPreviousBoundGlobalVariablePureConstant(T ConstantValue)
	{
		asQWORD RawValue = 0;
		memcpy(&RawValue, &ConstantValue, sizeof(T));
		SetPreviousBoundPropertyPureConstant(RawValue);
	}

private:
	static FAngelscriptBinds ValueClass(FBindString Name, FBindFlags Flags, int32 Size);

	explicit FAngelscriptBinds(FBindString Name, int32 Flags, int32 Size);
	explicit FAngelscriptBinds(FBindString Name);

	FBindString ClassName;
	asITypeInfo* ScriptType = nullptr;

	void BindBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller);
	void BindExternBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	void BindStaticBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	void BindMethod(FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	int BindExternMethod(FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	int BindExternMethod(FBindString Signature, asSFuncPtr Ptr, const FAngelscriptType::FBindParams& BindParams, ASAutoCaller::FunctionCaller Caller, void* UserData = nullptr);
	void BindProperty(FBindString Signature, size_t Offset);
	void BindProperty(FBindString Signature, size_t Offset, const FAngelscriptType::FBindParams& BindParams);

	void MarkAsImplicitConstructor();

	static void OnBind(int FunctionId, void* UserData, const FAngelscriptType::FBindParams* BindParams);
	static int PreviouslyBoundFunction;
	static int PreviouslyBoundGlobalProperty;

	static void SetPreviousBoundPropertyPureConstant(asQWORD ConstantValue);

	friend struct FAngelscriptManager;
	static void CallBinds();
};

// Re-enable any warnings we disabled
#ifdef _MSC_VER
#pragma warning(pop)
#endif
