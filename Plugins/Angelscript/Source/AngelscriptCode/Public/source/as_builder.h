/*
   AngelCode Scripting Library
   Copyright (c) 2003-2017 Andreas Jonsson

   This software is provided 'as-is', without any express or implied
   warranty. In no event will the authors be held liable for any
   damages arising from the use of this software.

   Permission is granted to anyone to use this software for any
   purpose, including commercial applications, and to alter it and
   redistribute it freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you
      must not claim that you wrote the original software. If you use
      this software in a product, an acknowledgment in the product
      documentation would be appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and
      must not be misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
      distribution.

   The original version of this library can be located at:
   http://www.angelcode.com/angelscript/

   Andreas Jonsson
   andreas@angelcode.com
*/


//
// as_builder.h
//
// This is the class that manages the compilation of the scripts
//


#ifndef AS_BUILDER_H
#define AS_BUILDER_H

#include "as_config.h"
#include "as_symboltable.h"
#include "as_scriptengine.h"
#include "as_module.h"
#include "as_array.h"
#include "as_scriptcode.h"
#include "as_scriptnode.h"
#include "as_datatype.h"
#include "as_property.h"

BEGIN_AS_NAMESPACE

#ifdef AS_NO_COMPILER
// Forward declare the structure, as it is part of some function signatures used even without the compiler
struct sGlobalVariableDescription;
#endif

#ifndef AS_NO_COMPILER

struct sFunctionDescription
{
	asCScriptCode       *script;
	asCScriptNode       *node;
	asCString            name;
	asCObjectType       *objType;
	asCArray<asCString>  paramNames;
	int                  funcId;
	bool                 isExistingShared;
};

struct sFactoryDescription
{
	asCScriptCode       *script;
	int funcId;
};

struct sGlobalVariableDescription
{
	asCScriptCode     *script;
	asCScriptNode     *declaredAtNode;
	asCScriptNode     *initializationNode;
	asCString          name;
	asCGlobalProperty *property;
	asCDataType        datatype;
	asSNameSpace      *nameSpace;
	int                index;
	bool               isCompiled;
	bool               isPureConstant;
	bool               isEnumValue;
	asQWORD            constantValue;
};

struct sPropertyInitializer
{
	sPropertyInitializer() : declNode(0), initNode(0), file(0) {}
	sPropertyInitializer(const asCString &nm, asCScriptNode *decl, asCScriptNode *init, asCScriptCode *f) : name(nm), declNode(decl), initNode(init), file(f) {}
	sPropertyInitializer &operator=(const sPropertyInitializer &o) {name = o.name; declNode = o.declNode; initNode = o.initNode; file = o.file; return *this;}

	asCString      name;
	asCScriptNode *declNode;
	asCScriptNode *initNode;
	asCScriptCode *file;
};

struct sClassDeclaration
{
	sClassDeclaration() { script = 0; node = 0; validState = 0; typeInfo = 0; isExistingShared = false; isFinal = false; isTidy = false; isResolving = false; hasResolved = false; }

	asCScriptCode *script;
	asCScriptNode *node;
	asCString      name;
	int            validState;
	asCTypeInfo   *typeInfo;
	bool           isExistingShared;
	bool           isFinal;
	bool           isTidy;
	bool           isResolving = false;
	bool           hasResolved = false;
	bool           isLayouting = false;
	bool           hasLayouted = false;
	bool           evaluatedDestructor = false;

	asCArray<sPropertyInitializer> propInits;
	asCArray<asCScriptNode*> defaultStatements;
};

struct sFuncDef
{
	asCScriptCode *script;
	asCScriptNode *node;
	asCString      name;
	int            idx;
};

struct sMixinClass
{
	asCScriptCode *script;
	asCScriptNode *node;
	asCString      name;
	asSNameSpace  *ns;
};

#endif // AS_NO_COMPILER

class asCBuilder
{
public:
	FMemStackBase MemStack;

	asCBuilder(asCScriptEngine *engine, asCModule *module);
	~asCBuilder();

	// These methods are used by the application interface
	int VerifyProperty(asCDataType *dt, const char *decl, asCString &outName, asCDataType &outType, asSNameSpace *ns);
	int ParseDataType(const char *datatype, asCDataType *result, asSNameSpace *implicitNamespace, bool isReturnType = false, bool IsAppInterface = false);
	int ParseTemplateDecl(const char *decl, asCString *name, asCArray<asCString> &subtypeNames);
	int ParseFunctionDeclaration(asCObjectType *type, const char *decl, asCScriptFunction *func, bool isSystemFunction, asCArray<bool> *paramAutoHandles = 0, bool *returnAutoHandle = 0, asSNameSpace *ns = 0, asCScriptNode **outListPattern = 0, asCObjectType **outParentClass = 0);
	int ParseVariableDeclaration(const char *decl, asSNameSpace *implicitNamespace, asCString &outName, asSNameSpace *&outNamespace, asCDataType &outDt);
	int CheckNameConflict(const char *name, asCScriptNode *node, asCScriptCode *code, asSNameSpace *ns);
	int CheckNameConflictMember(asCTypeInfo *type, const char *name, asCScriptNode *node, asCScriptCode *code, bool isProperty);
	int ValidatePropertyAccessorFunc(asCScriptFunction *func);

#ifndef AS_NO_COMPILER
	int AddCode(const char *name, const char *code, int codeLength, int lineOffset, int sectionIdx, bool makeCopy);

	int CompileFunction(const char *sectionName, const char *code, int lineOffset, asDWORD compileFlags, asCScriptFunction **outFunc);

	// First stage of building, generate type information for all classes declared in this module
	int BuildParallelParseScripts();
	int BuildGenerateTypes();
	int BuildLayoutClasses();
	void BuildAllocateGlobalVariables();
	int BuildLayoutFunctions();

	// Second stage of building, generate methods and function declarations using the type information we already have
	int BuildGenerateFunctions();

	// Third stage of building, compile the actual bytecode in all functions
	int BuildCompileCode();
#endif

//protected:
	friend class asCModule;
	friend class asCParser;
	friend class asCScriptFunction;
	friend class asCScriptEngine;

	void               Reset();

	void               WriteInfo(const asCString &scriptname, const asCString &msg, int r, int c, bool preMessage);
	void               WriteInfo(const asCString &msg, asCScriptCode *file, asCScriptNode *node);
	void               WriteError(const asCString &scriptname, const asCString &msg, int r, int c);
	void               WriteError(const asCString &msg, asCScriptCode *file, asCScriptNode *node);
	void               WriteWarning(const asCString &scriptname, const asCString &msg, int r, int c);
	void               WriteWarning(const asCString &msg, asCScriptCode *file, asCScriptNode *node);

	bool               DoesGlobalPropertyExist(const char *prop, asSNameSpace *ns, asCGlobalProperty **outProp = 0, sGlobalVariableDescription **outDesc = 0, bool *isAppProp = 0, bool bAllowAnyModule = false);
	asCGlobalProperty *GetGlobalProperty(const char *prop, asSNameSpace *ns, bool *isCompiled, bool *isPureConstant, asQWORD *constantValue, bool *isAppProp, bool bAllowAnyModule = false);
	int                ValidateDefaultArgs(asCScriptCode *script, asCScriptNode *node, asCScriptFunction *func);
	asCString          GetCleanExpressionString(asCScriptNode *n, asCScriptCode *file);

	asSNameSpace      *GetNameSpaceFromNode(asCScriptNode *node, asCScriptCode *script, asSNameSpace *implicitNs, asCScriptNode **next, asCObjectType **objType = 0);
	asSNameSpace      *GetNameSpaceByString(const asCString &nsName, asSNameSpace *implicitNs, asCScriptNode *errNode, asCScriptCode *script, asCTypeInfo **scopeType = 0, bool isRequired = true);
	asCString          GetScopeFromNode(asCScriptNode *n, asCScriptCode *script, asCScriptNode **next = 0);

	asCTypeInfo       *GetType(const char *type, asSNameSpace *ns, asCObjectType *parentType);
	asCObjectType     *GetObjectType(const char *type, asSNameSpace *ns);
	asCFuncdefType    *GetFuncDef(const char *type, asSNameSpace *ns, asCObjectType *parentType);
	asCTypeInfo       *GetTypeFromTypesKnownByObject(const char *type, asCObjectType *currentType);
	asCDataType        CreateDataTypeFromNode(asCScriptNode *node, asCScriptCode *file, asSNameSpace *implicitNamespace, bool acceptHandleForScope = false, asCObjectType *currentType = 0, bool reportError = true, bool *isValid = 0);
	asCObjectType     *GetTemplateInstanceFromNode(asCScriptNode *node, asCScriptCode *file, asCObjectType *templateType, asSNameSpace *implicitNamespace, asCObjectType *currentType, asCScriptNode **next = 0);
	asCDataType        ModifyDataTypeFromNode(const asCDataType &type, asCScriptNode *node, asCScriptCode *file, asETypeModifiers *inOutFlag, bool *autoHandle);

	int numErrors;
	int numWarnings;
	bool silent;
	bool scriptsParsed = false;
	bool bValueDependenciesAreHard = false;

	asCScriptEngine *engine;
	asCModule       *module;

#ifndef AS_NO_COMPILER
//protected:
	friend class asCCompiler;

	int                CheckForConflictsDueToDefaultArgs(asCScriptCode *script, asCScriptNode *node, asCScriptFunction *func, asCObjectType *objType);
	int                GetNamespaceAndNameFromNode(asCScriptNode *n, asCScriptCode *script, asSNameSpace *implicitNs, asSNameSpace *&outNs, asCString &outName);
	int                RegisterMixinClass(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	sMixinClass       *GetMixinClass(const char *name, asSNameSpace *ns);
	void               IncludePropertiesFromMixins(sClassDeclaration *decl);
	void               IncludeMethodsFromMixins(sClassDeclaration *decl);
	void               AddInterfaceToClass(sClassDeclaration *decl, asCScriptNode *errNode, asCObjectType *intf);
	void               AddInterfaceFromMixinToClass(sClassDeclaration *decl, asCScriptNode *errNode, sMixinClass *mixin);

	int                RegisterScriptFunctionFromNode(asCScriptNode *node, asCScriptCode *file, asCObjectType *object = 0, bool isInterface = false, bool isGlobalFunction = false, asSNameSpace *ns = 0, bool isExistingShared = false, bool isMixin = false);
	int                RegisterScriptFunction(asCScriptNode *node, asCScriptCode *file, asCObjectType *objType, bool isInterface, bool isGlobalFunction, asSNameSpace *ns, bool isExistingShared, bool isMixin, asCString &name, asCDataType &returnType, asCArray<asCString> &parameterNames, asCArray<asCDataType> &parameterTypes, asCArray<asETypeModifiers> &inOutFlags, asCArray<asCString *> &defaultArgs, asSFunctionTraits funcTraits, asCString* accessSpecifier = nullptr);
	int                RegisterVirtualProperty(asCScriptNode *node, asCScriptCode *file, asCObjectType *object = 0, bool isInterface = false, bool isGlobalFunction = false, asSNameSpace *ns = 0, bool isExistingShared = false);
	int                RegisterImportedFunction(int funcID, asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterGlobalVar(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterClass(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterInterface(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterEnum(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterTypedef(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns);
	int                RegisterFuncDef(asCScriptNode *node, asCScriptCode *file, asSNameSpace *ns, asCObjectType *parent);
	asCScriptFunction *RegisterLambda(asCScriptNode *node, asCScriptCode *file, asCScriptFunction *funcDef, const asCString &name, asSNameSpace *ns);
	void               CompleteFuncDef(sFuncDef *funcDef);
	void               CompileInterfaces();
	void               CompileClasses(asUINT originalNumTempl);
	void               DetermineTypeRelations();
	void               GetParsedFunctionDetails(asCScriptNode *node, asCScriptCode *file, asCObjectType *objType, asCString &name, asCDataType &returnType, asCArray<asCString> &parameterNames, asCArray<asCDataType> &parameterTypes, asCArray<asETypeModifiers> &inOutFlags, asCArray<asCString *> &defaultArgs, asSFunctionTraits &traits, asSNameSpace *implicitNamespace, asCString* accessSpecifier = nullptr);
	bool               DoesMethodExist(asCObjectType *objType, int methodId, asUINT *methodIndex = 0);
	void               AddDefaultConstructor(asCObjectType *objType, asCScriptCode *file);
	void               AddInitDefaultsFunction(asCObjectType *objType, asCScriptCode *file);
	void               AddDefaultDestructor(asCObjectType *objType, asCScriptCode *file);
	asCObjectProperty *AddPropertyToClass(sClassDeclaration *c, const asCString &name, const asCDataType &type, bool isPrivate, bool isProtected, asCScriptCode *file = 0, asCScriptNode *node = 0);
	int                CreateVirtualFunction(asCScriptFunction *func, int idx);
	void               ParseScripts();
	void               RegisterTypesFromScript(asCScriptNode *node, asCScriptCode *script, asSNameSpace *ns);
	void               RegisterNonTypesFromScript(asCScriptNode *node, asCScriptCode *script, asSNameSpace *ns);
	void               CreateDefaultDestructors();
	void               CompileFunctions();
	void               RegisterGlobalVariables();
	void               CompileGlobalVariables();
	int                GetEnumValueFromType(asCEnumType *type, const char *name, asCDataType &outDt, asDWORD &outValue);
	int                GetEnumValue(const char *name, asCDataType &outDt, asDWORD &outValue, asSNameSpace *ns);
	bool               DoesTypeExist(const char* type);
	asCObjectProperty *GetObjectProperty(asCDataType &obj, const char *prop);
	asCScriptFunction *GetFunctionDescription(int funcId);
	void               GetFunctionDescriptions(const char *name, asCArray<int> &funcs, asSNameSpace *ns, bool lookForMixins = false);
	void               GetObjectMethodDescriptions(const char *name, asCObjectType *objectType, asCArray<int> &methods, bool objIsConst, const asCString &scope = "", asCScriptNode *errNode = 0, asCScriptCode *script = 0, bool bConstDueToTemporary = false);
	void               EvaluateTemplateInstances(bool keepSilent);

	int                RegisterAccessSpecifier(asCScriptNode* node, asCScriptCode* file, asCObjectType* object);

	bool EnsureClassCompiled(asITypeInfo* TypeInfo);
	void CompileClass(sClassDeclaration* classDecl);

	bool EnsureClassLayouted(asITypeInfo* TypeInfo);
	void LayoutClass(sClassDeclaration* classDecl);

	void LayoutFunction(sFunctionDescription* funcDecl);

	void MarkDependency(asCModule* DependencyModule, asCScriptNode* node, asCScriptCode* script);
	void MarkDependency(asCTypeInfo* TypeInfo, asCScriptNode* node, asCScriptCode* script);
	void MarkDependency(asCGlobalProperty* Variable, asCScriptNode* node, asCScriptCode* script);
	void MarkDependency(asCScriptFunction* Function, asCScriptNode* node, asCScriptCode* script);
	void MarkStructuralDependency(asCTypeInfo* UserTypeInfo, asCTypeInfo* DependentOnTypeInfo, asCScriptNode* node, asCScriptCode* script);
	void MarkHardValueDependency(asCModule* DependencyModule, asCScriptNode* node, asCScriptCode* script);

	asCArray<asCScriptCode *>                  scripts;
	asCArray<sFunctionDescription *>           functions;
	asCArray<sFactoryDescription>           factories;

	asCSymbolMap<sGlobalVariableDescription*> globVariables;
	asCArray<sGlobalVariableDescription*> globVariableList;

	asCArray<sClassDeclaration *>              classDeclarations;
	asCArray<sClassDeclaration *>              interfaceDeclarations;
	asCArray<sClassDeclaration *>              namedTypeDeclarations;
	asCArray<sFuncDef *>                       funcDefs;
	asCArray<sMixinClass *>                    mixinClasses;
	asCArray<class asCParser*>                 parsers;

#if WITH_EDITOR
	// Each editor-only code block has its start and end line recorded here for error checking
	TArray<TPair<size_t,size_t>> EditorOnlyBlockCharacterPositions;
	bool isEditorOnlyModule = false;

	void SetEditorOnlyBlockLinePositions(const TArray<TPair<int,int>>& LinePositions);
	bool IsNodeInEditorOnlyCode(asCScriptCode* script, asCScriptNode* node);

	void CheckEditorOnlyType(asCTypeInfo* TypeInfo, asCScriptNode* node, asCScriptCode* script);
	void CheckEditorOnlyFunction(asCScriptFunction* Function, asCScriptNode* node, asCScriptCode* script);
	void CheckEditorOnlyProperty(asCObjectProperty* Property, asCScriptNode* node, asCScriptCode* script);
	void CheckEditorOnlyGlobal(asCGlobalProperty* Property, asCScriptNode* node, asCScriptCode* script);
#else
	FORCEINLINE void CheckEditorOnlyType(asCTypeInfo* TypeInfo, asCScriptNode* node, asCScriptCode* script) {}
	FORCEINLINE void CheckEditorOnlyFunction(asCScriptFunction* Function, asCScriptNode* node, asCScriptCode* script) {}
	FORCEINLINE void CheckEditorOnlyProperty(asCObjectProperty* Property, asCScriptNode* node, asCScriptCode* script) {}
	FORCEINLINE void CheckEditorOnlyGlobal(asCGlobalProperty* Property, asCScriptNode* node, asCScriptCode* script) {}
#endif
#endif
};

END_AS_NAMESPACE

#endif
