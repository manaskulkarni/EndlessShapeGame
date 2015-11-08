#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m12385_gshared (Nullable_1_t2058 * __this, TimeSpan_t1097  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m12385(__this, ___value, method) (( void (*) (Nullable_1_t2058 *, TimeSpan_t1097 , const MethodInfo*))Nullable_1__ctor_m12385_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m12386_gshared (Nullable_1_t2058 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m12386(__this, method) (( bool (*) (Nullable_1_t2058 *, const MethodInfo*))Nullable_1_get_HasValue_m12386_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1097  Nullable_1_get_Value_m12387_gshared (Nullable_1_t2058 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m12387(__this, method) (( TimeSpan_t1097  (*) (Nullable_1_t2058 *, const MethodInfo*))Nullable_1_get_Value_m12387_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m22503_gshared (Nullable_1_t2058 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22503(__this, ___other, method) (( bool (*) (Nullable_1_t2058 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m22503_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m22504_gshared (Nullable_1_t2058 * __this, Nullable_1_t2058  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22504(__this, ___other, method) (( bool (*) (Nullable_1_t2058 *, Nullable_1_t2058 , const MethodInfo*))Nullable_1_Equals_m22504_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m22505_gshared (Nullable_1_t2058 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m22505(__this, method) (( int32_t (*) (Nullable_1_t2058 *, const MethodInfo*))Nullable_1_GetHashCode_m22505_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1097  Nullable_1_GetValueOrDefault_m22506_gshared (Nullable_1_t2058 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m22506(__this, method) (( TimeSpan_t1097  (*) (Nullable_1_t2058 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m22506_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m22507_gshared (Nullable_1_t2058 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m22507(__this, method) (( String_t* (*) (Nullable_1_t2058 *, const MethodInfo*))Nullable_1_ToString_m22507_gshared)(__this, method)
