#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FRandomStreamType : TAngelscriptBaseStructType<FRandomStream>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FRandomStream");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FRandomStream(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FRandomStream_ = FAngelscriptBinds::ValueClass<FRandomStream>("FRandomStream", Flags);
	FAngelscriptType::Register(MakeShared<FRandomStreamType>());

	FRandomStream_.Constructor("void f()", [](FRandomStream* Address)
	{
		new(Address) FRandomStream();
	});

	FRandomStream_.Constructor("void f(int32 InSeed)", [](FRandomStream* Address, int32 InSeed)
	{
		new(Address) FRandomStream(InSeed);
	});

	FRandomStream_.Constructor("void f(uint32 InSeed)", [](FRandomStream* Address, uint32 InSeed)
	{
		new(Address) FRandomStream((int32)InSeed);
	});

	FRandomStream_.Method("void Initialize(int32 InSeed)", METHODPR_TRIVIAL(void, FRandomStream, Initialize, (int32)));
	FRandomStream_.Method("void Initialize(uint32 InSeed)", METHODPR_TRIVIAL(void, FRandomStream, Initialize, (int32)));
	FRandomStream_.Method("void Reset() const", METHOD_TRIVIAL(FRandomStream, Reset));
	FRandomStream_.Method("int GetInitialSeed() const", METHOD_TRIVIAL(FRandomStream, GetInitialSeed));
	FRandomStream_.Method("void GenerateNewSeed()", METHOD_TRIVIAL(FRandomStream, GenerateNewSeed));
	FRandomStream_.Method("float32 GetFraction() const", METHOD_TRIVIAL(FRandomStream, GetFraction));
	FRandomStream_.Method("uint32 GetUnsignedInt() const", METHOD_TRIVIAL(FRandomStream, GetUnsignedInt));
	FRandomStream_.Method("int32 GetCurrentSeed() const", METHOD_TRIVIAL(FRandomStream, GetCurrentSeed));
	FRandomStream_.Method("int32 RandRange(int32 Min, int32 Max) const", METHODPR_TRIVIAL(int32, FRandomStream, RandRange, (int32, int32) const));
	FRandomStream_.Method("float64 RandRange(float64 Min, float64 Max) const", METHODPR_TRIVIAL(double, FRandomStream, FRandRange, (double, double) const));

	FToStringHelper::Register(TEXT("FRandomStream"), [](void* Ptr, FString& Str)
	{
		Str += ((FRandomStream*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FRandomStream_Late(FAngelscriptBinds::EOrder::Late, []
{
	auto FRandomStream_ = FAngelscriptBinds::ExistingClass("FRandomStream");

	FRandomStream_.Method("void Initialize(FName InName)", METHODPR_TRIVIAL(void, FRandomStream, Initialize, (FName)));

	FRandomStream_.Method("FVector GetUnitVector() const", METHOD_TRIVIAL(FRandomStream, GetUnitVector));
	FRandomStream_.Method("FVector VRand() const", METHOD_TRIVIAL(FRandomStream, VRand));

	FRandomStream_.Method("FVector VRandCone(const FVector& Dir, float32 ConeHalfAngleRad) const",
		METHODPR_TRIVIAL(FVector, FRandomStream, VRandCone, (FVector const&, float) const)
	);

	FRandomStream_.Method("FVector VRandCone(const FVector& Dir, float32 HorizontalConeHalfAngleRad, float32 VerticalConeHalfAngleRad) const",
		METHODPR_TRIVIAL(FVector, FRandomStream, VRandCone, (FVector const&, float, float) const)
	);
});