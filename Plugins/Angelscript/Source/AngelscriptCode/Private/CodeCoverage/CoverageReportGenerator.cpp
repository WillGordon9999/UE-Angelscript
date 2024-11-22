#include "CoverageReportGenerator.h"

#include "AngelscriptManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

const TCHAR COVERAGE_HTML_HEAD[] = TEXT(
	"<html>\n"
	"<head>\n"
	"<style>\n"
	"  .covered { background-color: lightgreen }\n"
	"  .not-covered { background-color: red; color: white }\n"
	"</style>\n"
	"</head>\n"
	"<body>\n"
	"<pre>\n\n");

const TCHAR COVERAGE_HTML_FOOTER[] = TEXT(
	"</pre>\n"
	"</html>\n");

bool WriteFileCoverageReportHtml(const FString& RelativeFilename, const FLineCoverage& Coverage,
	const FString& OutputDir, int& OutNumLinesInOriginal)
{
	const TMap<int, int>& HitCounts = Coverage.HitCounts;

	FString Contents;
	FFileHelper::LoadFileToString(Contents, *Coverage.AbsoluteFilename);
	TArray<FString> Lines;
	OutNumLinesInOriginal = Contents.ParseIntoArrayLines(Lines, false);
	int CurrentLine = 1;

	FString OutputFile = FPaths::ChangeExtension(FPaths::Combine(OutputDir, RelativeFilename), ".as.html");
	if (!FFileHelper::SaveStringToFile(COVERAGE_HTML_HEAD, *OutputFile, FFileHelper::EEncodingOptions::ForceAnsi))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	for (FString& Line : Lines)
	{
		const int* HitCount = HitCounts.Find(CurrentLine);
		Line = Line.Replace(TEXT("<"), TEXT("&lt;"));
		Line = Line.Replace(TEXT(">"), TEXT("&gt;"));
		if (HitCount != nullptr)
		{
			if (*HitCount > 0)
			{
				Line = FString::Printf(
					TEXT("<span class=\"covered\" title=\"The line was hit %d times\">%s</span>"), *HitCount, *Line);
			}
			else
			{
				Line = FString::Printf(
					TEXT("<span class=\"not-covered\" title=\"This line was not hit\">%s</span>"), *Line);
			}
		}
		CurrentLine++;
	}

	if (!FFileHelper::SaveStringArrayToFile(Lines, *OutputFile, FFileHelper::EEncodingOptions::ForceAnsi,
			&IFileManager::Get(), EFileWrite::FILEWRITE_Append))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	if (!FFileHelper::SaveStringToFile(COVERAGE_HTML_FOOTER, *OutputFile, FFileHelper::EEncodingOptions::ForceAnsi,
			&IFileManager::Get(), EFileWrite::FILEWRITE_Append))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	return true;
}

void AddCoverageLeaf(FCoverageNode& Root, const FString& Path, const FLineCoverage& Coverage)
{
	static const TCHAR* PathDelimiters[] = {
		TEXT("/"),
		TEXT("\\"),
	};
	TArray<FString> PathComponents;
	Path.ParseIntoArray(PathComponents, PathDelimiters, 2, false);

	FCoverageNode* Current = &Root;
	for (const FString& Component : PathComponents)
	{
		if (!Current->Children.Contains(Component))
		{
			Current->Children.Add(Component, new FCoverageNode);
		}
		Current = Current->Children[Component];
	}

	Current->Counts.NumLinesHit = Coverage.NumLinesHit();
	Current->Counts.NumExecutableLines = Coverage.NumExecutableLines();
}

// Traverse the directory tree in postorder (leaves first) and compute totals
// for subdirectories as we go.
FCoverageCounts ComputeCoverage(FCoverageNode& Node)
{
	if (Node.Children.Num() == 0)
	{
		// This is a leaf (e.g. one .as source file).
		return Node.Counts;
	}

	Node.Counts = FCoverageCounts{0, 0};
	for (const TPair<FString, FCoverageNode*>& Child : Node.Children)
	{
		FCoverageCounts ChildCoverage = ComputeCoverage(*Child.Value);
		Node.Counts.NumLinesHit += ChildCoverage.NumLinesHit;
		Node.Counts.NumExecutableLines += ChildCoverage.NumExecutableLines;
	}
	return Node.Counts;
}

const TCHAR COVERAGE_SUMMARY_HTML_HEAD[] = TEXT(
	"<html>\n"
	"<head>\n"
	"<style>\n"
	"  table, th, td { border: 1px solid black; }\n"
	"  .great { background-color: green }\n"
	"  .good { background-color: lightgreen }\n"
	"  .ok { background-color: yellow; }\n"
	"  .bad { background-color: red; color: white }\n"
	"</style>\n"
	"<script>\n"
	"   window.onload = function() {\n"
	"      const generatedAt = Date.parse('%s'); \n"    // <--- Current date
	"      const reportAgeMillis = Date.now() - generatedAt;\n"
	"      const reportAgeDays = Math.floor(reportAgeMillis / (1000*60*60*24));\n"
	"      if (reportAgeDays > 2) {\n"
	"         const warning = 'This report is stale (' + reportAgeDays + ' days old)!';\n"
	"         document.getElementById('stale-warning').innerHTML = warning;\n"
	"      }\n"
	"   };\n"
	"</script>\n"
	"</head>\n"
	"<body>\n"
	"<p><strong id=\"stale-warning\" class=\"bad\"></strong></p>\n"
	"<p>Total: %s</p>\n"    // <--- Num hit lines / total lines
	"<table>"
	"  <tr><th>File/Directory</th><th>Lines Covered</th></tr>\n");

const TCHAR COVERAGE_SUMMARY_HTML_FOOTER[] = TEXT(
	"</table>\n"
	"<p><small>Generated at: %s</small></p>\n"    // <--- Current date
	"</html>\n");

const TCHAR* StyleClassForCoverage(const FCoverageCounts Counts)
{
	if (Counts.NumExecutableLines == 0)
	{
		return TEXT("");
	}

	float Coverage = (float) Counts.NumLinesHit / Counts.NumExecutableLines;
	if (Coverage > 0.8)
	{
		return TEXT("great");
	}
	else if (Coverage > 0.5)
	{
		return TEXT("good");
	}
	else if (Coverage > 0.2)
	{
		return TEXT("ok");
	}
	return TEXT("bad");
}

FString SummaryLineForNode(const FString& PathComponent, const FCoverageNode& Node)
{
	FString Link;
	FString Name;
	if (Node.Children.Num() > 0)
	{
		Link = PathComponent + "/index.html";
		Name = PathComponent + "/";
	}
	else
	{
		Link += PathComponent + ".html";
		Name = PathComponent;
	}
	const TCHAR* StyleClass = StyleClassForCoverage(Node.Counts);
	return FString::Printf(TEXT("<!-- %s --><tr class=\"%s\"><td><a class=\"%s\" href=\"%s\">%s</a></td><td>%s</td></tr>"),
		*Name, StyleClass, StyleClass, *Link, *Name, *Node.Counts.ToString());
}

bool WriteCoverageSummaryHtml(FCoverageNode& Node, const FString& OutputDir)
{
	if (Node.Children.Num() == 0)
	{
		// Leaves already have their own HTML file.
		return true;
	}

	TArray<FString> Lines;
	for (const TPair<FString, FCoverageNode*>& Child : Node.Children)
	{
		FString Subdir = FPaths::Combine(OutputDir, Child.Key);
		WriteCoverageSummaryHtml(*Child.Value, Subdir);

		Lines.Add(SummaryLineForNode(Child.Key, *Child.Value));
	}

	// Put directories first. This assumes SummaryLineForNode puts the path early in the line so
	// that lexical sort sorts on the dir (and not on e.g. the <td> class).
	Lines.StableSort([](const FString& A, const FString& B) {
		bool bAIsDir = A.Contains(TEXT("index.html"));
		bool bBIsDir = B.Contains(TEXT("index.html"));

		if (bAIsDir && bBIsDir)
		{
			return A < B;
		}
		if (bAIsDir)
		{
			return true;
		}
		if (bBIsDir)
		{
			return false;
		}
		return A < B;
	});

	FString OutputFile = FPaths::Combine(OutputDir, TEXT("index.html"));
	FString Now = FDateTime::Now().ToHttpDate();
	if (!FFileHelper::SaveStringToFile(
			FString::Printf(COVERAGE_SUMMARY_HTML_HEAD, *Now, *Node.Counts.ToString()), *OutputFile))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	if (!FFileHelper::SaveStringArrayToFile(Lines, *OutputFile, FFileHelper::EEncodingOptions::AutoDetect,
			&IFileManager::Get(), EFileWrite::FILEWRITE_Append))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	if (!FFileHelper::SaveStringToFile(FString::Printf(COVERAGE_SUMMARY_HTML_FOOTER, *Now), *OutputFile,
			FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	return true;
}

TSharedRef<FJsonObject> CountsToJson(FCoverageCounts Counts)
{
	auto Json = MakeShared<FJsonObject>();

	if (Counts.NumExecutableLines > 0)
	{
		Json->SetNumberField(TEXT("coverage_pct"), (float) Counts.NumLinesHit / Counts.NumExecutableLines * 100);
	}
	else
	{
		Json->SetNumberField(TEXT("coverage_pct"), 0.0f);
	}
	Json->SetNumberField(TEXT("lines_hit"), Counts.NumLinesHit);
	Json->SetNumberField(TEXT("lines_total"), Counts.NumExecutableLines);

	return Json;
}

bool WriteTopLevelCoverageJson(FCoverageNode& Root, const FString& OutputDir)
{
	TArray<TSharedPtr<FJsonValue>> Directories;
	for (const TPair<FString, FCoverageNode*>& Child : Root.Children)
	{
		auto Node = CountsToJson(Child.Value->Counts);
		Node->SetStringField(TEXT("name"), Child.Key);
		Directories.Add(TSharedPtr<FJsonValue>(MakeShared<FJsonValueObject>(Node)));
	}

	auto Json = MakeShared<FJsonObject>();
	Json->SetObjectField(TEXT("total"), CountsToJson(Root.Counts));
	Json->SetArrayField(TEXT("coverage"), Directories);

	FString JsonString;
	auto JsonWriter = TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&JsonString, 0);
	if (!FJsonSerializer::Serialize(Json, JsonWriter, true))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed serializing coverage JSON"));
		return false;
	}

	FString OutputFile = FPaths::Combine(OutputDir, TEXT("coverage_summary.json"));
	if (!FFileHelper::SaveStringToFile(JsonString, *OutputFile,
			FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_None))
	{
		UE_LOG(Angelscript, Error, TEXT("Failed writing %s"), *OutputFile);
		return false;
	}

	return true;
}
