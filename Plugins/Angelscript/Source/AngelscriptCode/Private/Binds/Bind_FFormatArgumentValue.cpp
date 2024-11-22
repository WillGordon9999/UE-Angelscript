#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_CppType.h"

struct FFormatArgumentValueType : TAngelscriptCppType<FFormatArgumentValue>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FFormatArgumentValue");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FFormatArgumentValue(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FFormatArgumentValue_ = FAngelscriptBinds::ValueClass<FFormatArgumentValue>("FFormatArgumentValue", Flags);
	FAngelscriptType::Register(MakeShared<FFormatArgumentValueType>());

	FFormatArgumentValue_.Constructor("void f()", [](FFormatArgumentValue* Address)
	{
		new(Address) FFormatArgumentValue();
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const int32 Value)", [](FFormatArgumentValue* Address, const int32 Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const uint32 Value)", [](FFormatArgumentValue* Address, const uint32 Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const int64 Value)", [](FFormatArgumentValue* Address, const int64 Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const uint64 Value)", [](FFormatArgumentValue* Address, const uint64 Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const float32 Value)", [](FFormatArgumentValue* Address, const float Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const float64 Value)", [](FFormatArgumentValue* Address, const double Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FFormatArgumentValue_Late(FAngelscriptBinds::EOrder::Late, []
{
    auto FFormatArgumentValue_ = FAngelscriptBinds::ExistingClass("FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(const FText& Value)", [](FFormatArgumentValue* Address, const FText& Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");

	FFormatArgumentValue_.Constructor("void f(ETextGender Value)", [](FFormatArgumentValue* Address, ETextGender Value)
	{
		new(Address) FFormatArgumentValue(Value);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FFormatArgumentValue_, "FFormatArgumentValue");
});