#include "AngelscriptBinds.h"

#include "AngelscriptManager.h"
#include "AngelscriptSettings.h"

#include "AngelscriptInclude.h"
#include "AngelscriptSettings.h"
//#include "as_property.h"
//#include "as_scriptfunction.h"
#include "source/as_property.h"
#include "source/as_scriptfunction.h"

#include "StartAngelscriptHeaders.h"
//#include "as_scriptfunction.h"
//#include "as_objecttype.h"
//#include "as_scriptengine.h"
#include "source/as_scriptfunction.h"
#include "source/as_objecttype.h"
#include "source/as_scriptengine.h"
#include "EndAngelscriptHeaders.h"

//WILL-EDIT
TMap<UClass*, TMap<FString, FFuncEntry>> FAngelscriptBinds::ClassFuncMaps = TMap<UClass*, TMap<FString, FFuncEntry>>();
TMap<FString, TArray<TObjectPtr<UClass>>> FAngelscriptBinds::RuntimeClassDB = TMap<FString, TArray<TObjectPtr<UClass>>>();
TArray<FString> FAngelscriptBinds::BindModuleNames = TArray<FString>();
TMap<UClass*, TSet<FString>> FAngelscriptBinds::SkipBinds = TMap<UClass*, TSet<FString>>();
#if WITH_EDITOR
TMap<FString, TArray<TObjectPtr<UClass>>> FAngelscriptBinds::EditorClassDB = TMap<FString, TArray<TObjectPtr<UClass>>>();
#endif

struct FBindFunction
{
	int32 BindOrder;
	TFunction<void()> Function;

	bool operator<(const FBindFunction& Other) const
	{
		return BindOrder < Other.BindOrder;
	}
};

static TArray<FBindFunction>& GetBindArray()
{
	static TArray<FBindFunction> BindArray;
	return BindArray;
}

void FAngelscriptBinds::RegisterBinds(int32 BindOrder, TFunction<void()> Function)
{
	GetBindArray().Add({BindOrder, Function});
}

void FAngelscriptBinds::CallBinds()
{
	GetBindArray().Sort();
	for (auto& Function : GetBindArray())
		Function.Function();
}

FAngelscriptBinds FAngelscriptBinds::ReferenceClass(FBindString Name, UClass* UnrealClass)
{
	auto Binds = FAngelscriptBinds(Name, asOBJ_REF | asOBJ_NOCOUNT | asOBJ_IMPLICIT_HANDLE, 0);
	((asCObjectType*)Binds.ScriptType)->size = UnrealClass->GetStructureSize();
	Binds.ScriptType->alignment = UnrealClass->GetMinAlignment();
	return Binds;
}

FAngelscriptBinds FAngelscriptBinds::ExistingClass(FBindString Name)
{
	return FAngelscriptBinds(Name);
}

FAngelscriptBinds FAngelscriptBinds::ValueClass(FBindString Name, FBindFlags Flags, int32 Size)
{
	auto asFlags = asOBJ_VALUE | asOBJ_APP_CLASS | Flags.ExtraFlags;
	if (Flags.bPOD)
		asFlags |= asOBJ_POD;
	if (Flags.bTemplate)
		asFlags |= asOBJ_TEMPLATE;

	auto Binds = FAngelscriptBinds(Name, asFlags, Size);
	if (Flags.bTemplate && !Flags.TemplateType.IsEmpty())
	{
		auto& Manager = FAngelscriptManager::Get();
		int32 TemplatePos = Binds.ClassName.ToFString().Find(TEXT("<"));
		Binds.ClassName = Binds.ClassName.ToFString().Left(TemplatePos);
		Binds.ScriptType = Manager.Engine->GetTypeInfoByName(Binds.ClassName.ToCString());
		Binds.ClassName = Binds.ClassName.ToFString() + Flags.TemplateType.ToFString();
	}

	if (Flags.Alignment != -1)
	{
		check(Binds.ScriptType->alignment == 8 || Binds.ScriptType->alignment == Flags.Alignment);
		Binds.ScriptType->alignment = Flags.Alignment;
	}
	return Binds;
}

FAngelscriptBinds::FAngelscriptBinds(FBindString Name, int32 Flags, int32 Size)
	: ClassName(Name)
{
	auto& Manager = FAngelscriptManager::Get();
	int TypeId = Manager.Engine->RegisterObjectType(ClassName.ToCString(), Size, Flags);

	if (TypeId == asALREADY_REGISTERED)
	{
		ScriptType = Manager.Engine->GetTypeInfoByName(ClassName.ToCString());
		check(ScriptType != nullptr);
		check(ScriptType->GetSize() == Size);
	}
	else
	{
		ScriptType = Manager.Engine->GetTypeInfoById(TypeId);
	}

	ensure(ScriptType != nullptr || ((Flags & asOBJ_TEMPLATE) != 0));
}

FAngelscriptBinds::FAngelscriptBinds(FBindString Name)
	: ClassName(Name)
{
}

void FAngelscriptBinds::GenericMethod(FBindString Signature, void(CDECL *Fun)(asIScriptGeneric*), void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectMethod(ClassName.ToCString(), Signature.ToCString(), asFUNCTION(Fun), asCALL_GENERIC, nullptr);
	OnBind(FunctionId, UserData, nullptr);
}

void FAngelscriptBinds::BindBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectBehaviour(ClassName.ToCString(), Beh, Signature.ToCString(), Ptr, asCALL_THISCALL, *(asFunctionCaller*)&Caller);
	OnBind(FunctionId, nullptr, nullptr);
}

int FAngelscriptBinds::PreviouslyBoundFunction = -1;
int FAngelscriptBinds::PreviouslyBoundGlobalProperty = -1;
asIScriptFunction* FAngelscriptBinds::GetPreviousBind()
{
	if (PreviouslyBoundFunction == -1)
		return nullptr;

	auto& Manager = FAngelscriptManager::Get();
	return Manager.Engine->GetFunctionById(PreviouslyBoundFunction);
}

void FAngelscriptBinds::MarkAsImplicitConstructor()
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_IMPLICITCONSTRUCTOR, true);
		if (auto* ObjectType = Function->objectType)
			ObjectType->hasImplicitConstructors = true;
	}
}

void FAngelscriptBinds::DeprecatePreviousBind(const ANSICHAR* DeprecationMessage)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_DEPRECATED, true);
#if WITH_EDITOR
		Function->deprecationMessage = DeprecationMessage;
#endif
	}
}

void FAngelscriptBinds::SetPreviousBindIsPropertyAccessor(bool bIsProperty)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_PROPERTY, bIsProperty);
	}
}

void FAngelscriptBinds::SetPreviousBindIsGeneratedAccessor(bool bIsAccessor)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_GENERATED_FUNCTION, bIsAccessor);
	}
}

void FAngelscriptBinds::SetPreviousBindIsEditorOnly(bool bEditorOnly)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_EDITOR_ONLY, bEditorOnly);
	}
}

void FAngelscriptBinds::SetPreviousBindRequiresWorldContext(bool bRequiresWorldContext)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_USES_WORLDCONTEXT, bRequiresWorldContext);
	}
}

void FAngelscriptBinds::SetPreviousBindIsCallable(bool bIsCallable)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_NOT_CALLABLE, !bIsCallable);
	}
}

void FAngelscriptBinds::SetPreviousBindNoDiscard(bool bNoDiscard)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_NODISCARD, bNoDiscard);
	}
}

void FAngelscriptBinds::SetPreviousBindArgumentDeterminesOutputType(int ArgumentIndex)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->determinesOutputTypeArgumentIndex = ArgumentIndex;
	}
}

void FAngelscriptBinds::SetPreviousBindForceConstArgumentExpressions(bool bForceConst)
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->traits.SetTrait(asEFuncTrait::asTRAIT_FORCE_CONST_ARGUMENT_EXPRESSIONS, bForceConst);
	}
}

void FAngelscriptBinds::PreviousBindPassScriptFunctionAsFirstParam()
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->sysFuncIntf->passFirstParamMetaData = asEFirstParamMetaData::ScriptFunction;
	}
}

void FAngelscriptBinds::PreviousBindPassScriptObjectTypeAsFirstParam()
{
	if (auto* Function = (asCScriptFunction*)GetPreviousBind())
	{
		Function->sysFuncIntf->passFirstParamMetaData = asEFirstParamMetaData::ScriptObjectType;
	}
}

void FAngelscriptBinds::OnBind(int FunctionId, void* UserData, const FAngelscriptType::FBindParams* BindParams)
{
	auto& Manager = FAngelscriptManager::Get();
	asCScriptFunction* ScriptFunction = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);
	if (ScriptFunction != nullptr)
	{
		if (UserData != nullptr)
		{
			ScriptFunction->SetUserData(UserData, 0);
		}

		if (BindParams != nullptr && BindParams->bProtected)
		{
			ScriptFunction->SetProtected(true);
		}

		// All C++ bound functions can implicitly be treated as property accessors
		if (Manager.ConfigSettings->bAllowImplicitPropertyAccessors)
		{
			ScriptFunction->SetProperty(true);
		}
	}

	PreviouslyBoundFunction = FunctionId;
}

void FAngelscriptBinds::BindExternBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectBehaviour(ClassName.ToCString(), Beh, Signature.ToCString(), Ptr, asCALL_CDECL_OBJFIRST, *(asFunctionCaller*)&Caller);
	OnBind(FunctionId, UserData, nullptr);
}

void FAngelscriptBinds::BindStaticBehaviour(asEBehaviours Beh, FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectBehaviour(ClassName.ToCString(), Beh, Signature.ToCString(), Ptr, asCALL_CDECL, *(asFunctionCaller*)&Caller);
	OnBind(FunctionId, UserData, nullptr);
}

void FAngelscriptBinds::BindMethod(FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectMethod(ClassName.ToCString(), Signature.ToCString(), Ptr, asCALL_THISCALL, *(asFunctionCaller*)&Caller, nullptr);
	OnBind(FunctionId, UserData, nullptr);
}

int FAngelscriptBinds::BindMethodDirect(FBindString ClassName, FBindString Signature, asSFuncPtr Function, asECallConvTypes CallConv, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int32 FunctionId = Manager.Engine->RegisterObjectMethod(ClassName.ToCString(), Signature.ToCString(), Function, CallConv, *(asFunctionCaller*)&Caller);
	OnBind(FunctionId, UserData, nullptr);
	return FunctionId;
}

int FAngelscriptBinds::CompileOutInTest(int FunctionId)
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);

	if (UE_BUILD_TEST || UE_BUILD_SHIPPING || (WITH_EDITOR && FAngelscriptManager::bSimulateCooked))
	{
		Function->compileOutType = asECompileOutType::CompileOutEntirely;
	}

	if (Manager.ConfigSettings->bForceConstWithinDevelopmentOnlyFunctions)
	{
		Function->traits.SetTrait(asTRAIT_FORCE_CONST_ARGUMENT_EXPRESSIONS, true);
	}

	return FunctionId;
}

int FAngelscriptBinds::CompileOutIfNoLog(int FunctionId)
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);

	if (UE_BUILD_TEST || UE_BUILD_SHIPPING || (WITH_EDITOR && FAngelscriptManager::bSimulateCooked))
	{
		Function->compileOutType = asECompileOutType::CompileOutEntirely;
	}

	if (Manager.ConfigSettings->bForceConstWithinDevelopmentOnlyFunctions)
	{
		Function->traits.SetTrait(asTRAIT_FORCE_CONST_ARGUMENT_EXPRESSIONS, true);
	}

	return FunctionId;
}

int FAngelscriptBinds::CompileOutAsEnsure(int FunctionId)
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);
	Function->traits.SetTrait(asTRAIT_NODISCARD, true);

	if (UE_BUILD_SHIPPING || (WITH_EDITOR && FAngelscriptManager::bSimulateCooked))
	{
		Function->compileOutType = asECompileOutType::ReplaceWithFirstParam;
	}
	return FunctionId;
}

int FAngelscriptBinds::CompileOutAsCheck(int FunctionId)
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);

	if (UE_BUILD_SHIPPING || (WITH_EDITOR && FAngelscriptManager::bSimulateCooked))
	{
		Function->compileOutType = asECompileOutType::CompileOutEntirely;
	}

	if (Manager.ConfigSettings->bForceConstWithinDevelopmentOnlyFunctions)
	{
		Function->traits.SetTrait(asTRAIT_FORCE_CONST_ARGUMENT_EXPRESSIONS, true);
	}

	return FunctionId;
}

int FAngelscriptBinds::CompileReplaceWithFirstArgInTest(int FunctionId)
{
	if (UE_BUILD_TEST || UE_BUILD_SHIPPING || (WITH_EDITOR && FAngelscriptManager::bSimulateCooked))
	{
		auto& Manager = FAngelscriptManager::Get();
		auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(FunctionId);
		Function->compileOutType = asECompileOutType::ReplaceWithFirstParam;
	}
	return FunctionId;
}

void FAngelscriptBinds::CompileOutPreviousBind()
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(PreviouslyBoundFunction);
	Function->compileOutType = asECompileOutType::CompileOutEntirely;
}

void FAngelscriptBinds::CompileOutPreviousBindAsMethodChain()
{
	auto& Manager = FAngelscriptManager::Get();
	auto* Function = (asCScriptFunction*)Manager.Engine->GetFunctionById(PreviouslyBoundFunction);
	Function->compileOutType = asECompileOutType::CompileOutAsMethodChain;
}

int FAngelscriptBinds::BindExternMethod(FBindString Signature, asSFuncPtr Ptr, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterObjectMethod(ClassName.ToCString(), Signature.ToCString(), Ptr, asCALL_CDECL_OBJFIRST, *(asFunctionCaller*)&Caller, nullptr);
	OnBind(FunctionId, UserData, nullptr);

	return FunctionId;
}

int FAngelscriptBinds::BindExternMethod(FBindString Signature, asSFuncPtr Ptr, const FAngelscriptType::FBindParams& BindParams, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	const asUINT Access = asCScriptFunction::GenerateExposedType(BindParams.bCanEdit, BindParams.bCanRead, BindParams.bCanWrite);
	int FunctionId = Manager.Engine->RegisterObjectMethod(ClassName.ToCString(), Signature.ToCString(), Ptr, asCALL_CDECL_OBJFIRST, *(asFunctionCaller*)&Caller, nullptr, 0, false, Access);
	OnBind(FunctionId, UserData, &BindParams);

	return FunctionId;
}

void FAngelscriptBinds::BindProperty(FBindString Signature, size_t Offset)
{
	auto& Manager = FAngelscriptManager::Get();
	Manager.Engine->RegisterObjectProperty(ClassName.ToCString(), Signature.ToCString(), Offset);
}

void FAngelscriptBinds::BindProperty(FBindString Signature, size_t Offset, const FAngelscriptType::FBindParams& BindParams)
{
	auto& Manager = FAngelscriptManager::Get();
	const asUINT Access = asCObjectProperty::GenerateExposedType(BindParams.bCanEdit, BindParams.bCanRead, BindParams.bCanWrite);
	Manager.Engine->RegisterObjectProperty(ClassName.ToCString(), Signature.ToCString(), Offset, 0, false, Access, BindParams.bProtected);
}

int FAngelscriptBinds::BindGlobalFunction(FBindString Signature, asSFuncPtr Function, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterGlobalFunction(Signature.ToCString(), Function, asCALL_CDECL, *(asFunctionCaller*)&Caller, nullptr);
	OnBind(FunctionId, UserData, nullptr);

	return FunctionId;
}

int FAngelscriptBinds::BindGlobalFunction(FBindString Signature, asSFuncPtr Function, FBindString FuncName, bool bTrivial, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	int Result = BindGlobalFunction(Signature.ToCString(), Function, Caller, UserData);
	SCRIPT_NATIVE_FUNCTION(FuncName.ToCString_EnsureConstant(), bTrivial);
	return Result;
}

int FAngelscriptBinds::BindGlobalFunctionDirect(FBindString Signature, asSFuncPtr Function, asECallConvTypes CallConv, ASAutoCaller::FunctionCaller Caller, void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterGlobalFunction(Signature.ToCString(), Function, CallConv, *(asFunctionCaller*)&Caller);
	OnBind(FunctionId, UserData, nullptr);

	return FunctionId;
}

int FAngelscriptBinds::BindGlobalGenericFunction(FBindString Signature, void(CDECL* Function)(asIScriptGeneric*), void* UserData)
{
	auto& Manager = FAngelscriptManager::Get();
	int FunctionId = Manager.Engine->RegisterGlobalFunction(Signature.ToCString(), asFUNCTION(Function), asCALL_GENERIC, nullptr, nullptr);
	OnBind(FunctionId, UserData, nullptr);

	return FunctionId;
}

void FAngelscriptBinds::BindGlobalVariable(FBindString Signature, const void* Address)
{
	auto& Manager = FAngelscriptManager::Get();
	PreviouslyBoundGlobalProperty = Manager.Engine->RegisterGlobalProperty(Signature.ToCString(), (void*)Address);
}

void FAngelscriptBinds::SetPreviousBoundPropertyPureConstant(asQWORD ConstantValue)
{
	auto& Manager = FAngelscriptManager::Get();
	asCGlobalProperty* Property = Manager.Engine->globalProperties[PreviouslyBoundGlobalProperty];
	Property->isPureConstant = true;
	Property->storage = ConstantValue;
}

FAngelscriptBinds::FEnumBind::FEnumBind(FBindString Name)
{
	EnumName = Name;

	auto& Manager = FAngelscriptManager::Get();
	auto* PrevNamespace = Manager.Engine->GetDefaultNamespace();

	TypeId = Manager.Engine->RegisterEnum(Name.ToCString());
}

asITypeInfo* FAngelscriptBinds::FEnumBind::GetTypeInfo()
{
	auto& Manager = FAngelscriptManager::Get();
	return Manager.Engine->GetTypeInfoById(TypeId);
}

void FAngelscriptBinds::FEnumBind::FEnumElement::operator=(int32 Value)
{
	auto& Manager = FAngelscriptManager::Get();
	auto* PrevNamespace = Manager.Engine->GetDefaultNamespace();

	auto AnsiEnumName = Bind->EnumName.ToCString();
	Manager.Engine->RegisterEnumValue(AnsiEnumName, Name.ToCString(), Value);
}

FAngelscriptBinds::FNamespace::FNamespace(FBindString Name)
{
	auto& Manager = FAngelscriptManager::Get();
	PrevNamespace.SetDynamic(Manager.Engine->GetDefaultNamespace());
	Manager.Engine->SetDefaultNamespace(Name.ToCString());
}

FAngelscriptBinds::FNamespace::~FNamespace()
{
	auto& Manager = FAngelscriptManager::Get();
	Manager.Engine->SetDefaultNamespace(PrevNamespace.ToCString());
}

asITypeInfo* FAngelscriptBinds::GetTypeInfo()
{
	if (ScriptType == nullptr && !ClassName.IsEmpty())
	{
		auto& Manager = FAngelscriptManager::Get();
		ScriptType = Manager.Engine->GetTypeInfoByName(ClassName.ToCString());
	}
	return ScriptType;
}

bool FAngelscriptBinds::HasMethod(const FString& MethodName)
{
	auto* Type = GetTypeInfo();
	if (!ensure(Type != nullptr))
		return false;
	return Type->GetMethodByName(TCHAR_TO_ANSI(*MethodName)) != nullptr;
}

bool FAngelscriptBinds::HasGetter(const FString& PropertyName)
{
	TArray<ANSICHAR, TInlineAllocator<64>> FuncName;
	FuncName.SetNumUninitialized(PropertyName.Len() + 4);
	FuncName[0] = 'G';
	FuncName[1] = 'e';
	FuncName[2] = 't';
	for (int32 i = 0, Count = PropertyName.Len(); i < Count; ++i)
		FuncName[i + 3] = (ANSICHAR)PropertyName[i];
	FuncName[FuncName.Num() - 1] = '\0';

	auto* Type = GetTypeInfo();
	if (!ensure(Type != nullptr))
		return false;
	return Type->GetMethodByName(&FuncName[0]) != nullptr;
}

bool FAngelscriptBinds::HasSetter(const FString& PropertyName)
{
	TArray<ANSICHAR, TInlineAllocator<64>> FuncName;
	FuncName.SetNumUninitialized(PropertyName.Len() + 4);
	FuncName[0] = 'S';
	FuncName[1] = 'e';
	FuncName[2] = 't';
	for (int32 i = 0, Count = PropertyName.Len(); i < Count; ++i)
		FuncName[i + 3] = (ANSICHAR)PropertyName[i];
	FuncName[FuncName.Num() - 1] = '\0';

	auto* Type = GetTypeInfo();
	if (!ensure(Type != nullptr))
		return false;
	return Type->GetMethodByName(&FuncName[0]) != nullptr;
}