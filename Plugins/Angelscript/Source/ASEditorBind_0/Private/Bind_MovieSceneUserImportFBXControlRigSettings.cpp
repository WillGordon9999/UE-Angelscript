#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "MovieSceneToolsUserSettings.h"
void FASEditorBind_0Module::Bind_MovieSceneUserImportFBXControlRigSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneUserImportFBXControlRigSettings::StaticClass(), "LoadControlMappingsFromPreset", { ERASE_METHOD_PTR(UMovieSceneUserImportFBXControlRigSettings, LoadControlMappingsFromPreset, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
