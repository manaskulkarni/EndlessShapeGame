#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
extern "C" void Nullable_1__ctor_m3831_gshared (Nullable_1_t598 * __this, bool ___value, const MethodInfo* method);
#define Nullable_1__ctor_m3831(__this, ___value, method) (( void (*) (Nullable_1_t598 *, bool, const MethodInfo*))Nullable_1__ctor_m3831_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m3826_gshared (Nullable_1_t598 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m3826(__this, method) (( bool (*) (Nullable_1_t598 *, const MethodInfo*))Nullable_1_get_HasValue_m3826_gshared)(__this, method)
// T System.Nullable`1<System.Boolean>::get_Value()
extern "C" bool Nullable_1_get_Value_m18469_gshared (Nullable_1_t598 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m18469(__this, method) (( bool (*) (Nullable_1_t598 *, const MethodInfo*))Nullable_1_get_Value_m18469_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m18470_gshared (Nullable_1_t598 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18470(__this, ___other, method) (( bool (*) (Nullable_1_t598 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m18470_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m18471_gshared (Nullable_1_t598 * __this, Nullable_1_t598  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18471(__this, ___other, method) (( bool (*) (Nullable_1_t598 *, Nullable_1_t598 , const MethodInfo*))Nullable_1_Equals_m18471_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m18472_gshared (Nullable_1_t598 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m18472(__this, method) (( int32_t (*) (Nullable_1_t598 *, const MethodInfo*))Nullable_1_GetHashCode_m18472_gshared)(__this, method)
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
extern "C" bool Nullable_1_GetValueOrDefault_m3832_gshared (Nullable_1_t598 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m3832(__this, method) (( bool (*) (Nullable_1_t598 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m3832_gshared)(__this, method)
// System.String System.Nullable`1<System.Boolean>::ToString()
extern "C" String_t* Nullable_1_ToString_m18473_gshared (Nullable_1_t598 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m18473(__this, method) (( String_t* (*) (Nullable_1_t598 *, const MethodInfo*))Nullable_1_ToString_m18473_gshared)(__this, method)
