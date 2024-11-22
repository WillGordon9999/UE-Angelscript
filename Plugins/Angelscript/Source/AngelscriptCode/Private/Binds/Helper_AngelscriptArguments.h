#pragma once

#include "AngelscriptInclude.h"

template<typename ValueType>
FORCEINLINE void TSetAngelscriptArgument(asIScriptContext* Context, int32 ArgumentIndex, ValueType Value);

template<>
FORCEINLINE void TSetAngelscriptArgument<float>(asIScriptContext* Context, int32 ArgumentIndex, float Value)
{
	Context->SetArgFloat(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<int32>(asIScriptContext* Context, int32 ArgumentIndex, int32 Value)
{
	Context->SetArgDWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<uint32>(asIScriptContext* Context, int32 ArgumentIndex, uint32 Value)
{
	Context->SetArgDWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<bool>(asIScriptContext* Context, int32 ArgumentIndex, bool Value)
{
	Context->SetArgByte(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<double>(asIScriptContext* Context, int32 ArgumentIndex, double Value)
{
	Context->SetArgDouble(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<int64>(asIScriptContext* Context, int32 ArgumentIndex, int64 Value)
{
	Context->SetArgQWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<uint64>(asIScriptContext* Context, int32 ArgumentIndex, uint64 Value)
{
	Context->SetArgQWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<int16>(asIScriptContext* Context, int32 ArgumentIndex, int16 Value)
{
	Context->SetArgWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<uint16>(asIScriptContext* Context, int32 ArgumentIndex, uint16 Value)
{
	Context->SetArgWord(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<int8>(asIScriptContext* Context, int32 ArgumentIndex, int8 Value)
{
	Context->SetArgByte(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<uint8>(asIScriptContext* Context, int32 ArgumentIndex, uint8 Value)
{
	Context->SetArgByte(ArgumentIndex, Value);
}

template<>
FORCEINLINE void TSetAngelscriptArgument<UObject*>(asIScriptContext* Context, int32 ArgumentIndex, UObject* Value)
{
	Context->SetArgAddress(ArgumentIndex, Value);
}

template<typename ValueType>
FORCEINLINE ValueType TGetAngelscriptReturnValue(asIScriptContext* Context);

template<>
FORCEINLINE float TGetAngelscriptReturnValue<float>(asIScriptContext* Context)
{
	return Context->GetReturnFloat();
}

template<>
FORCEINLINE double TGetAngelscriptReturnValue<double>(asIScriptContext* Context)
{
	return Context->GetReturnDouble();
}

template<>
FORCEINLINE int32 TGetAngelscriptReturnValue<int32>(asIScriptContext* Context)
{
	return Context->GetReturnDWord();
}

template<>
FORCEINLINE uint32 TGetAngelscriptReturnValue<uint32>(asIScriptContext* Context)
{
	return Context->GetReturnDWord();
}

template<>
FORCEINLINE int64 TGetAngelscriptReturnValue<int64>(asIScriptContext* Context)
{
	return Context->GetReturnQWord();
}

template<>
FORCEINLINE uint64 TGetAngelscriptReturnValue<uint64>(asIScriptContext* Context)
{
	return Context->GetReturnQWord();
}

template<>
FORCEINLINE int16 TGetAngelscriptReturnValue<int16>(asIScriptContext* Context)
{
	return Context->GetReturnWord();
}

template<>
FORCEINLINE uint16 TGetAngelscriptReturnValue<uint16>(asIScriptContext* Context)
{
	return Context->GetReturnWord();
}

template<>
FORCEINLINE int8 TGetAngelscriptReturnValue<int8>(asIScriptContext* Context)
{
	return Context->GetReturnByte();
}

template<>
FORCEINLINE uint8 TGetAngelscriptReturnValue<uint8>(asIScriptContext* Context)
{
	return Context->GetReturnByte();
}

template<>
FORCEINLINE bool TGetAngelscriptReturnValue<bool>(asIScriptContext* Context)
{
	return Context->GetReturnByte() != 0;
}

template<>
FORCEINLINE UObject* TGetAngelscriptReturnValue<UObject*>(asIScriptContext* Context)
{
	return (UObject*)Context->GetReturnAddress();
}