#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FTimespan(FAngelscriptBinds::EOrder::Late, []
{
	auto FTimespan_ = FAngelscriptBinds::ExistingClass("FTimespan");

	FTimespan_.Constructor("void f(int64 Ticks)", [](FTimespan* Address, int64 Ticks)
	{
		new(Address) FTimespan(Ticks);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FTimespan_, "FTimespan");

	FTimespan_.Constructor("void f(int32 Hours, int32 Minutes, int32 Seconds)", [](FTimespan* Address, int32 Hours, int32 Minutes, int32 Seconds)
	{
		new(Address) FTimespan(Hours, Minutes, Seconds);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FTimespan_, "FTimespan");

	FTimespan_.Constructor("void f(int32 Days, int32 Hours, int32 Minutes, int32 Seconds)", [](FTimespan* Address, int32 Days, int32 Hours, int32 Minutes, int32 Seconds)
	{
		new(Address) FTimespan(Days, Hours, Minutes, Seconds);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FTimespan_, "FTimespan");

	FTimespan_.Constructor("void f(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano)", [](FTimespan* Address, int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano)
	{
		new(Address) FTimespan(Days, Hours, Minutes, Seconds, FractionNano);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FTimespan_, "FTimespan");

	FTimespan_.Method("FTimespan opAdd(const FTimespan& Other) const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator+, (const FTimespan&) const));
	FTimespan_.Method("FTimespan& opAddAssign(const FTimespan& Other)", METHODPR_TRIVIAL(FTimespan&, FTimespan, operator+=, (const FTimespan&)));

	FTimespan_.Method("FTimespan opSub() const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator-, () const));
	FTimespan_.Method("FTimespan opSub(const FTimespan& Other) const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator-, (const FTimespan&) const));
	FTimespan_.Method("FTimespan& opSubAssign(const FTimespan& Other)", METHODPR_TRIVIAL(FTimespan&, FTimespan, operator-=, (const FTimespan&)));

	FTimespan_.Method("FTimespan opMul(float64 Scalar) const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator*, (double) const));
	FTimespan_.Method("FTimespan& opMulAssign(float64 Scalar)", METHODPR_TRIVIAL(FTimespan&, FTimespan, operator*=, (double)));

	FTimespan_.Method("FTimespan opDiv(float64 Scalar) const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator/, (double) const));
	FTimespan_.Method("FTimespan& opDivAssign(float64 Scalar)", METHODPR_TRIVIAL(FTimespan&, FTimespan, operator/=, (double)));

	FTimespan_.Method("FTimespan opMod(const FTimespan& Other) const", METHODPR_TRIVIAL(FTimespan, FTimespan, operator%, (const FTimespan&) const));
	FTimespan_.Method("FTimespan& opModAssign(const FTimespan& Other)", METHODPR_TRIVIAL(FTimespan&, FTimespan, operator%=, (const FTimespan&)));

	FTimespan_.Method("int opCmp(const FTimespan& Other) const",
	[](const FTimespan& Timespan, const FTimespan& Other) -> int32
	{
		if (Timespan < Other)
			return -1;
		else if (Timespan > Other)
			return 1;
		else
			return 0;
	});

	FTimespan_.Method("bool opEquals(const FTimespan& Other) const", METHODPR_TRIVIAL(bool, FTimespan, operator==, (const FTimespan&) const));

	FTimespan_.Method("int32 GetDays() const", METHODPR_TRIVIAL(int32, FTimespan, GetDays, ()const));
	FTimespan_.Method("FTimespan GetDuration()", METHODPR_TRIVIAL(FTimespan, FTimespan, GetDuration, ()));

	FTimespan_.Method("int32 GetFractionMicro() const", METHODPR_TRIVIAL(int32, FTimespan, GetFractionMicro, () const));
	FTimespan_.Method("int32 GetFractionMilli() const", METHODPR_TRIVIAL(int32, FTimespan, GetFractionMilli, () const));
	FTimespan_.Method("int32 GetFractionNano() const",  METHODPR_TRIVIAL(int32, FTimespan, GetFractionNano,  () const));
	FTimespan_.Method("int32 GetFractionTicks() const", METHODPR_TRIVIAL(int32, FTimespan, GetFractionTicks, () const));

	FTimespan_.Method("int32 GetHours() const",   METHODPR_TRIVIAL(int32, FTimespan, GetHours,   () const));
	FTimespan_.Method("int32 GetMinutes() const", METHODPR_TRIVIAL(int32, FTimespan, GetMinutes, () const));
	FTimespan_.Method("int32 GetSeconds() const", METHODPR_TRIVIAL(int32, FTimespan, GetSeconds, () const));
	FTimespan_.Method("int64 GetTicks() const",   METHODPR_TRIVIAL(int64, FTimespan, GetTicks,   () const));

	FTimespan_.Method("float64 GetTotalDays() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalDays, () const));
	FTimespan_.Method("float64 GetTotalHours() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalHours, () const));
	FTimespan_.Method("float64 GetTotalMicroseconds() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalMicroseconds, () const));
	FTimespan_.Method("float64 GetTotalMilliseconds() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalMilliseconds, () const));
	FTimespan_.Method("float64 GetTotalMinutes() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalMinutes, () const));
	FTimespan_.Method("float64 GetTotalSeconds() const", METHODPR_TRIVIAL(double, FTimespan, GetTotalSeconds, () const));

	FTimespan_.Method("bool IsZero() const", METHODPR_TRIVIAL(bool, FTimespan, IsZero, () const));

	FAngelscriptBinds::FNamespace ns("FTimespan");
	{
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromDays(float64 Days) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromDays, (double)));
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromHours(float64 Hours) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromHours, (double)));
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromMicroseconds(float64 Microseconds) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromMicroseconds, (double)));
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromMilliseconds(float64 Milliseconds) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromMilliseconds, (double)));
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromMinutes(float64 Minutes) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromMinutes, (double)));
		FAngelscriptBinds::BindGlobalFunction("FTimespan FromSeconds(float64 Seconds) no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::FromSeconds, (double)));

		FAngelscriptBinds::BindGlobalFunction("FTimespan MaxValue() no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::MaxValue, ()));
		FAngelscriptBinds::BindGlobalFunction("FTimespan MinValue() no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::MinValue, ()));

		FAngelscriptBinds::BindGlobalFunction("FTimespan Zero() no_discard", FUNCPR_TRIVIAL(FTimespan, FTimespan::Zero, ()));

		FAngelscriptBinds::BindGlobalFunction("float64 Ratio(FTimespan Dividend, FTimespan Divisor) no_discard", FUNCPR_TRIVIAL(double, FTimespan::Ratio, (FTimespan, FTimespan)));
	}

	FTimespan_.Method("FString ToString() const", METHODPR_TRIVIAL(FString, FTimespan, ToString, () const));
	FTimespan_.Method("FString ToString(const FString Format) const", [](FTimespan* Timespan, const FString Format) -> FString {
		return Timespan->ToString(*Format);
	});
});
