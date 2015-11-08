#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1586;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1588;
// System.Type[]
struct TypeU5BU5D_t105;
// System.Exception
struct Exception_t236;
// System.Reflection.AssemblyName
struct AssemblyName_t1634;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m9557 (AssemblyBuilder_t1586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1588* AssemblyBuilder_GetModulesInternal_m9558 (AssemblyBuilder_t1586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t105* AssemblyBuilder_GetTypes_m9559 (AssemblyBuilder_t1586 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m9560 (AssemblyBuilder_t1586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t236 * AssemblyBuilder_not_supported_m9561 (AssemblyBuilder_t1586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1634 * AssemblyBuilder_UnprotectedGetName_m9562 (AssemblyBuilder_t1586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
