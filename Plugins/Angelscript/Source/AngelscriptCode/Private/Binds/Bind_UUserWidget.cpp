#include "Components/SceneComponent.h"

#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"

#include "Slate/SlateBrushAsset.h"
#include "Brushes/SlateNoResource.h"
#include "Rendering/DrawElements.h"

static const FName NAME_Slate_WhiteBrush("WhiteBrush");

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UUserWidget((int32)FAngelscriptBinds::EOrder::Late, []
{
	auto UUserWidget_ = FAngelscriptBinds::ExistingClass("UUserWidget");

	UUserWidget_.Method("FText GetPaletteCategory() const", [](UUserWidget* Widget)
	{
#if WITH_EDITORONLY_DATA
		return Widget->PaletteCategory;
#else
		return FText();
#endif
	});

	UUserWidget_.Method("void SetPaletteCategory(const FText& InPaletteCategory)", [](UUserWidget* Widget, const FText& InPaletteCategory)
	{
#if WITH_EDITORONLY_DATA
		Widget->PaletteCategory = InPaletteCategory;
#endif
	});

	UUserWidget_.Method("UWidget GetRootWidget() const", [](UUserWidget* Widget)
	{
		return Widget->GetRootWidget();
	});

	UUserWidget_.Method("void SetRootWidget(UWidget NewRootWidget)", [](UUserWidget* Widget, UWidget* NewRootWidget)
	{
		if (Widget->WidgetTree)
		{
			Widget->WidgetTree->RootWidget = NewRootWidget;
		}
	});

	UUserWidget_.Method("UWidget ConstructWidget(UClass WidgetClass, FName WidgetName = NAME_None)", [](UUserWidget* Widget, UClass* WidgetClass, FName WidgetName)
	{
		if (Widget->WidgetTree && ensureMsgf(WidgetClass && WidgetClass->IsChildOf(UWidget::StaticClass()), TEXT("Widget Class must be a subclass of UWidget! Right now AS won't let me use a TSubclassOf, very sad!")))
		{
			return Widget->WidgetTree->ConstructWidget<UWidget>(WidgetClass, WidgetName);
		}
		
		return (UWidget*)nullptr;
	});

	UUserWidget_.Method("bool RemoveWidget(UWidget WidgetToRemove)", [](UUserWidget* Widget, UWidget* WidgetToRemove)
	{
		if (Widget->WidgetTree)
		{
			return Widget->WidgetTree->RemoveWidget(WidgetToRemove);
		}

		return false;
	});
	
	UUserWidget_.Method("void GetAllWidgets(TArray<UWidget>& Widgets) const", [](UUserWidget* Widget, TArray<UWidget*>& Widgets)
	{
		if (Widget->WidgetTree)
		{
			Widget->WidgetTree->GetAllWidgets(Widgets);
		}
	});

	// Paint helpers for implementing custom widgets in script
	auto FPaintContext_ = FAngelscriptBinds::ExistingClass("FPaintContext");
	FPaintContext_.Method("const FGeometry& GetAllottedGeometry() const", [](FPaintContext& PaintContext) -> const FGeometry&
	{
		return PaintContext.AllottedGeometry;
	});

	FPaintContext_.Method("FLinearColor GetStyleColor(const FName& Color) const",
	[](FPaintContext& PaintContext, const FName& ColorName) -> FLinearColor
	{
		return FCoreStyle::Get().GetColor(ColorName);
	});

	FPaintContext_.Method("const FSlateBrush& GetStyleBrush(const FName& Brush) const",
	[](FPaintContext& PaintContext, const FName& BrushName) -> const FSlateBrush&
	{
		const FSlateBrush* Brush = FCoreStyle::Get().GetBrush(BrushName);
		if (Brush != nullptr)
		{
			return *Brush;
		}
		else
		{
			static FSlateBrush NoBrush;
			return NoBrush;
		}
	});

	FPaintContext_.Method("FSlateFontInfo GetStyleFont(int32 Size) const",
	[](FPaintContext& PaintContext, int32 Size) -> FSlateFontInfo
	{
		return FSlateFontInfo(FCoreStyle::GetDefaultFont(), Size);
	});

	FPaintContext_.Method("void DrawBox(const FVector2D& Position, const FVector2D& Size, const FLinearColor& Color)",
	[](FPaintContext& PaintContext, const FVector2D& Position, const FVector2D& Size, const FLinearColor& Color)
	{
		PaintContext.MaxLayer++;

		const FSlateBrush* WhiteBrush = FCoreStyle::Get().GetBrush(NAME_Slate_WhiteBrush);
		if ( WhiteBrush )
		{
			FSlateDrawElement::MakeBox(
				PaintContext.OutDrawElements,
				PaintContext.MaxLayer,
				PaintContext.AllottedGeometry.ToPaintGeometry(FVector2f(Size), FSlateLayoutTransform(FVector2f(Position))),
				WhiteBrush,
				ESlateDrawEffect::None,
				Color);
		}
	});

	FPaintContext_.Method("void DrawBox(const FVector2D& Position, const FVector2D& Size, const FName& BrushName, const FLinearColor& TintColor = FLinearColor::White)",
	[](FPaintContext& PaintContext, const FVector2D& Position, const FVector2D& Size, const FName& BrushName, const FLinearColor& TintColor)
	{
		PaintContext.MaxLayer++;

		const FSlateBrush* SlateBrush = FCoreStyle::Get().GetBrush(BrushName);
		if ( SlateBrush )
		{
			FSlateDrawElement::MakeBox(
				PaintContext.OutDrawElements,
				PaintContext.MaxLayer,
				PaintContext.AllottedGeometry.ToPaintGeometry(FVector2f(Size), FSlateLayoutTransform(FVector2f(Position))),
				SlateBrush,
				ESlateDrawEffect::None,
				TintColor * SlateBrush->TintColor.GetColor(PaintContext.WidgetStyle));
		}
	});

	FPaintContext_.Method("void DrawBox(const FVector2D& Position, const FVector2D& Size, const FSlateBrush& Brush, const FLinearColor& TintColor = FLinearColor::White)",
	[](FPaintContext& PaintContext, const FVector2D& Position, const FVector2D& Size, const FSlateBrush& Brush, const FLinearColor& TintColor)
	{
		PaintContext.MaxLayer++;
		FSlateDrawElement::MakeBox(
			PaintContext.OutDrawElements,
			PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToPaintGeometry(FVector2f(Size), FSlateLayoutTransform(FVector2f(Position))),
			&Brush,
			ESlateDrawEffect::None,
			TintColor * Brush.TintColor.GetColor(PaintContext.WidgetStyle));
	});

	FPaintContext_.Method("void DrawBox(const FVector2D& Position, const FVector2D& Size, USlateBrushAsset Brush, const FLinearColor& TintColor = FLinearColor::White)",
	[](FPaintContext& PaintContext, const FVector2D& Position, const FVector2D& Size, USlateBrushAsset* Brush, const FLinearColor& TintColor)
	{
		PaintContext.MaxLayer++;
		if (Brush != nullptr)
		{
			FSlateDrawElement::MakeBox(
				PaintContext.OutDrawElements,
				PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToPaintGeometry(FVector2f(Size), FSlateLayoutTransform(FVector2f(Position))),
				&Brush->Brush,
				ESlateDrawEffect::None,
				TintColor * PaintContext.WidgetStyle.GetForegroundColor());
		}
	});

	FPaintContext_.Method("void DrawLine(const FVector2D& PositionA, const FVector2D& PositionB, const FLinearColor& Color, float32 Thickness = 1.f, bool bAntiAlias = true)",
	[](FPaintContext& PaintContext, const FVector2D& PositionA, const FVector2D& PositionB, const FLinearColor& Color, float Thickness, bool bAntiAlias)
	{
		PaintContext.MaxLayer++;

		TArray<FVector2f> Points;
		Points.Add(FVector2f(PositionA));
		Points.Add(FVector2f(PositionB));

		FSlateDrawElement::MakeLines(
			PaintContext.OutDrawElements,
			PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToPaintGeometry(),
			Points,
			ESlateDrawEffect::None,
			Color,
			bAntiAlias,
			Thickness);
	});

	FPaintContext_.Method("void DrawLines(const TArray<FVector2D>& Points, const FLinearColor& Color, float32 Thickness = 1.f, bool bAntiAlias = true)",
	[](FPaintContext& PaintContext, const TArray<FVector2D>& Points, const FLinearColor& Color, float Thickness, bool bAntiAlias)
	{
		PaintContext.MaxLayer++;

		TArray<FVector2f> FloatPoints;
		FloatPoints.Reserve(Points.Num());
		for (auto Point : Points)
			FloatPoints.Add(FVector2f(Point));

		FSlateDrawElement::MakeLines(
			PaintContext.OutDrawElements,
			PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToPaintGeometry(),
			FloatPoints,
			ESlateDrawEffect::None,
			Color,
			bAntiAlias,
			Thickness);
	});

	FPaintContext_.Method("void DrawText(const FString& Text, const FVector2D& Position, const FLinearColor& Color)",
	[](FPaintContext& PaintContext, const FString& InString, const FVector2D& Position, const FLinearColor& Color)
	{
		PaintContext.MaxLayer++;

		FSlateFontInfo FontInfo = FCoreStyle::Get().GetWidgetStyle<FTextBlockStyle>("NormalText").Font;
		FSlateDrawElement::MakeText(
			PaintContext.OutDrawElements,
			PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToOffsetPaintGeometry(FVector2f(Position)),
			InString,
			FontInfo,
			ESlateDrawEffect::None,
			Color);
	});

	FPaintContext_.Method("void DrawText(const FSlateFontInfo& Font, const FString& Text, const FVector2D& Position, const FLinearColor& Color)",
	[](FPaintContext& PaintContext, const FSlateFontInfo& FontInfo, const FString& InString, const FVector2D& Position, const FLinearColor& Color)
	{
		PaintContext.MaxLayer++;

		FSlateDrawElement::MakeText(
			PaintContext.OutDrawElements,
			PaintContext.MaxLayer,
			PaintContext.AllottedGeometry.ToOffsetPaintGeometry(FVector2f(Position)),
			InString,
			FontInfo,
			ESlateDrawEffect::None,
			Color);
	});

	auto FSlateColor_ = FAngelscriptBinds::ExistingClass("FSlateColor");
	FSlateColor_.ImplicitConstructor("void f(const FLinearColor& InColor)", [](FSlateColor* SlateColor, const FLinearColor& Color)
	{
		new (SlateColor) FSlateColor(Color);
	});
	FSlateColor_.ImplicitConstructor("void f(const FColor& InColor)", [](FSlateColor* SlateColor, const FColor& Color)
	{
		new (SlateColor) FSlateColor(Color);
	});
	FSlateColor_.ImplicitConstructor("void f(EStyleColor InColorTableId)", [](FSlateColor* SlateColor, EStyleColor Color)
	{
		new (SlateColor) FSlateColor(Color);
	});

#if WITH_EDITOR
	// The GetIsVisible() function is deprecated, but conflicts with IsVisible() due to being treated as a
	// property accessor function. Make sure it has the meta tag to remove it from being bound:
	UFunction* Function_GetIsVisible = FindObject<UFunction>(nullptr, TEXT("/Script/UMG.UserWidget:GetIsVisible"));
	if (Function_GetIsVisible != nullptr)
		Function_GetIsVisible->SetMetaData(TEXT("NotInAngelscript"), TEXT("true"));
#endif
});
