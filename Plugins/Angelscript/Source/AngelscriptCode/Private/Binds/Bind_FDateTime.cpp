#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "Helper_ToString.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FDateTime(FAngelscriptBinds::EOrder::Late, []
{
	auto FDateTime_ = FAngelscriptBinds::ExistingClass("FDateTime");

	FDateTime_.Constructor("void f(int Year, int Month, int Day, int Hour = 0, int Minute = 0, int Second = 0, int Millisecond = 0)",
	[](FDateTime* Address, int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond)
	{
		new(Address) FDateTime(Year, Month, Day, Hour, Minute, Second, Millisecond);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FDateTime_, "FDateTime");

	FDateTime_.Method("bool opEquals(const FDateTime& Other) const", METHODPR_TRIVIAL(bool, FDateTime, operator==, (const FDateTime&) const));

	FDateTime_.Method("FDateTime GetDate() const", METHODPR_TRIVIAL(FDateTime, FDateTime, GetDate, () const));
	FDateTime_.Method("void GetDate(int& OutYear, int& OutMonth, int& OutDay) const", METHODPR_TRIVIAL(void, FDateTime, GetDate, (int32&,int32&,int32&) const));

	FDateTime_.Method("int GetDay() const", METHOD_TRIVIAL(FDateTime, GetDay));
	FDateTime_.Method("int GetDayOfYear() const", METHOD_TRIVIAL(FDateTime, GetDayOfYear));
	FDateTime_.Method("int GetHour() const", METHOD_TRIVIAL(FDateTime, GetHour));
	FDateTime_.Method("int GetHour12() const", METHOD_TRIVIAL(FDateTime, GetHour));
	FDateTime_.Method("int GetMillisecond() const", METHOD_TRIVIAL(FDateTime, GetMillisecond));
	FDateTime_.Method("int GetMinute() const", METHOD_TRIVIAL(FDateTime, GetMinute));
	FDateTime_.Method("int GetMonth() const", METHOD_TRIVIAL(FDateTime, GetMonth));
	FDateTime_.Method("int GetSecond() const", METHOD_TRIVIAL(FDateTime, GetSecond));
	FDateTime_.Method("int GetYear() const", METHOD_TRIVIAL(FDateTime, GetYear));

	FDateTime_.Method("bool IsAfternoon() const", METHOD_TRIVIAL(FDateTime, IsAfternoon));
	FDateTime_.Method("bool IsMorning() const", METHOD_TRIVIAL(FDateTime, IsMorning));

	FDateTime_.Method("int64 ToUnixTimestamp() const", METHOD_TRIVIAL(FDateTime, ToUnixTimestamp));
	FDateTime_.Method("FString ToHttpDate() const", METHOD_TRIVIAL(FDateTime, ToHttpDate));
	FDateTime_.Method("FString ToIso8601() const", METHOD_TRIVIAL(FDateTime, ToIso8601));

	FToStringHelper::Register(TEXT("FDateTime"), [](void* Ptr, FString& Str)
	{
		Str += ((FDateTime*)Ptr)->ToString();
	});

	FDateTime_.Method("FString ToString(const FString& Format) const", [](const FDateTime& DateTime, const FString& Format) -> FString
	{
		return DateTime.ToString(*Format);
	});

	FDateTime_.Method("int64 GetTicks() const", METHOD_TRIVIAL(FDateTime, GetTicks));

	FDateTime_.Method("int opCmp(const FDateTime& Other) const",
	[](const FDateTime& DateTime, const FDateTime& Other) -> int32
	{
		if (DateTime < Other)
			return -1;
		else if (DateTime > Other)
			return 1;
		else
			return 0;
	});

	FDateTime_.Method("FDateTime opAdd(const FTimespan& Other) const", METHODPR_TRIVIAL(FDateTime, FDateTime, operator+, (const FTimespan&) const));
	FDateTime_.Method("FDateTime& opAddAssign(const FTimespan& Other)", METHODPR_TRIVIAL(FDateTime&, FDateTime, operator+=, (const FTimespan&)));
	FDateTime_.Method("FTimespan opSub(const FDateTime& Other) const", METHODPR_TRIVIAL(FTimespan, FDateTime, operator-, (const FDateTime&) const));
	FDateTime_.Method("FDateTime opSub(const FTimespan& Other) const", METHODPR_TRIVIAL(FDateTime, FDateTime, operator-, (const FTimespan&) const));
	FDateTime_.Method("FDateTime& opSubAssign(const FTimespan& Other)", METHODPR_TRIVIAL(FDateTime&, FDateTime, operator-=, (const FTimespan&)));

	{
		FAngelscriptBinds::FNamespace ns("FDateTime");
		FAngelscriptBinds::BindGlobalFunction("int DaysInMonth(int Year, int Month) no_discard", FUNC_TRIVIAL(FDateTime::DaysInMonth));
		FAngelscriptBinds::BindGlobalFunction("int DaysInYear(int Year) no_discard", FUNC_TRIVIAL(FDateTime::DaysInYear));
		FAngelscriptBinds::BindGlobalFunction("bool IsLeapYear(int Year) no_discard", FUNC_TRIVIAL(FDateTime::IsLeapYear));

		FAngelscriptBinds::BindGlobalFunction("FDateTime FromUnixTimestamp(int64 UnixTime) no_discard", FUNC_TRIVIAL(FDateTime::FromUnixTimestamp));
		FAngelscriptBinds::BindGlobalFunction("FDateTime MinValue() no_discard", FUNC_TRIVIAL(FDateTime::MinValue));
		FAngelscriptBinds::BindGlobalFunction("FDateTime MaxValue() no_discard", FUNC_TRIVIAL(FDateTime::MaxValue));

		FAngelscriptBinds::BindGlobalFunction("FDateTime Now() no_discard", FUNC_TRIVIAL(FDateTime::Now));
		FAngelscriptBinds::BindGlobalFunction("FDateTime UtcNow() no_discard", FUNC_TRIVIAL(FDateTime::UtcNow));
		FAngelscriptBinds::BindGlobalFunction("FDateTime Today() no_discard", FUNC_TRIVIAL(FDateTime::Today));

		FAngelscriptBinds::BindGlobalFunction("bool Parse(const FString& DateTimeString, FDateTime& OutDateTime)", FUNC_TRIVIAL(FDateTime::Parse));
		FAngelscriptBinds::BindGlobalFunction("bool ParseHttpDate(const FString& HttpDate, FDateTime& OutDateTime)", FUNC_TRIVIAL(FDateTime::ParseHttpDate));
		
		FAngelscriptBinds::BindGlobalFunction("bool ParseIso8601(const FString& DateTimeString, FDateTime& OutDateTime)",
		[](const FString& DateTimeString, FDateTime& OutDateTime) -> bool
		{
			return FDateTime::ParseIso8601(*DateTimeString, OutDateTime);
		});
	}
});
