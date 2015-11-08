﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2097;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m12391_gshared (GenericEqualityComparer_1_t2097 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m12391(__this, method) (( void (*) (GenericEqualityComparer_1_t2097 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m12391_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m22532_gshared (GenericEqualityComparer_1_t2097 * __this, TimeSpan_t1097  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m22532(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2097 *, TimeSpan_t1097 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m22532_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m22533_gshared (GenericEqualityComparer_1_t2097 * __this, TimeSpan_t1097  ___x, TimeSpan_t1097  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m22533(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2097 *, TimeSpan_t1097 , TimeSpan_t1097 , const MethodInfo*))GenericEqualityComparer_1_Equals_m22533_gshared)(__this, ___x, ___y, method)
