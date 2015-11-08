#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t966;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t974;
// System.Globalization.CultureInfo
struct CultureInfo_t968;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t973;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t2048;

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m9882 (Binder_t966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m9883 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t966 * Binder_get_DefaultBinder_m9884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m9885 (Object_t * __this /* static, unused */, Binder_t966 * ___binder, ObjectU5BU5D_t234* ___args, ParameterInfoU5BU5D_t974* ___pinfo, CultureInfo_t968 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m9886 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t973 * Binder_FindMostDerivedMatch_m9887 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t2048* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
