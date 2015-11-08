#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<ShapeManager/ShapeProperties>
struct DefaultComparer_t2200;
// ShapeManager/ShapeProperties
#include "AssemblyU2DCSharp_ShapeManager_ShapeProperties.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<ShapeManager/ShapeProperties>::.ctor()
extern "C" void DefaultComparer__ctor_m13587_gshared (DefaultComparer_t2200 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13587(__this, method) (( void (*) (DefaultComparer_t2200 *, const MethodInfo*))DefaultComparer__ctor_m13587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<ShapeManager/ShapeProperties>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13588_gshared (DefaultComparer_t2200 * __this, ShapeProperties_t180  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13588(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2200 *, ShapeProperties_t180 , const MethodInfo*))DefaultComparer_GetHashCode_m13588_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<ShapeManager/ShapeProperties>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13589_gshared (DefaultComparer_t2200 * __this, ShapeProperties_t180  ___x, ShapeProperties_t180  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13589(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2200 *, ShapeProperties_t180 , ShapeProperties_t180 , const MethodInfo*))DefaultComparer_Equals_m13589_gshared)(__this, ___x, ___y, method)
