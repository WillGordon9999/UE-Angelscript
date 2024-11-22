#include "Engine/Engine.h"
#include "Serialization/MemoryReader.h"

#include "AngelscriptCodeModule.h"
#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

#include "StartAngelscriptHeaders.h"
//#include "as_objecttype.h"
#include "source/as_objecttype.h"
#include "EndAngelscriptHeaders.h"

/**
 * Creates a binding for FMemoryReader.
 */
AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FMemoryReader([]
{
	auto bind = FAngelscriptBinds::ValueClass<FMemoryReader>("FMemoryReader", FBindFlags());

	bind.Constructor("void f(const TArray<uint8>& Data, bool ForceByteSwapping = false)", [](FMemoryReader* Address, const TArray<uint8>& Data, bool ForceByteSwapping)
	{
		auto reader = new(Address) FMemoryReader(Data);
		reader->SetByteSwapping(ForceByteSwapping);
		return reader;
	});

	bind.Method("int TotalSize() const", [](FMemoryReader* reader) -> int 
	{
		return (int)reader->TotalSize();
	});

	bind.Method("int Tell() const", [](FMemoryReader* reader) -> int
	{
		return (int)reader->Tell();
	});

	bind.Method("void Seek(int InPos)", [](FMemoryReader* reader, int InPos)
	{
		if (InPos > reader->TotalSize())
		{
			FAngelscriptManager::Throw("Skipping past array bounds");
			return;
		}
		reader->Seek(InPos);
	});

	bind.Method("void Skip(int Count)", [](FMemoryReader* reader, int Count)
	{
		if (reader->Tell() + Count > reader->TotalSize())
		{
			FAngelscriptManager::Throw("Skipping past array bounds");
			return;
		}
		reader->Seek(reader->Tell() + Count);
	});

	bind.Method("int8 ReadInt8()", [](FMemoryReader* reader) -> int8
	{
		int8 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("uint8 ReadUInt8()", [](FMemoryReader* reader) -> uint8
	{
		uint8 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("int16 ReadInt16()", [](FMemoryReader* reader) -> int16
	{
		int16 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("uint16 ReadUInt16()", [](FMemoryReader* reader) -> uint16
	{
		uint16 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("int32 ReadInt32()", [](FMemoryReader* reader) -> int32
	{
		int32 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("uint32 ReadUInt32()", [](FMemoryReader* reader) -> uint32
	{
		uint32 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("int64 ReadInt64()", [](FMemoryReader* reader) -> int64
	{
		int64 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("uint64 ReadUInt64()", [](FMemoryReader* reader) -> uint64
	{
		uint64 Result;
		*reader << Result;
		return Result;
	});

	bind.Method("float32 ReadFloat()", [](FMemoryReader* reader) -> float
	{
		float Result;
		*reader << Result;
		return Result;
	});

	bind.Method("float64 ReadDouble()", [](FMemoryReader* reader) -> double
	{
		double Result;
		*reader << Result;
		return Result;
	});

	bind.Method("TArray<uint8> ReadBytes(int Count)", [](FMemoryReader* reader, int Count) -> TArray<uint8>
	{
		TArray<uint8> Result;
		Result.SetNumUninitialized(Count);
		reader->Serialize(Result.GetData(), Count);
		return Result;
	});

	bind.Method("FString ReadAnsiString(int Count)", [](FMemoryReader* reader, int Count) -> FString
	{
		TArray<ANSICHAR> Buffer;
		Buffer.SetNumUninitialized(Count);
		reader->Serialize(Buffer.GetData(), Count);

		return FString(Count, StringCast<TCHAR>(Buffer.GetData(), Count).Get());
	});
});

