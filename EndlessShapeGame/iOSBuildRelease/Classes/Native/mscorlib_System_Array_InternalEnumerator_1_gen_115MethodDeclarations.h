﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22347_gshared (InternalEnumerator_1_t2879 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22347(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2879 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22347_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22348_gshared (InternalEnumerator_1_t2879 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22348(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2879 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22348_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22349_gshared (InternalEnumerator_1_t2879 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22349(__this, method) (( void (*) (InternalEnumerator_1_t2879 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22349_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22350_gshared (InternalEnumerator_1_t2879 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22350(__this, method) (( bool (*) (InternalEnumerator_1_t2879 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22350_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t833  InternalEnumerator_1_get_Current_m22351_gshared (InternalEnumerator_1_t2879 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22351(__this, method) (( DateTime_t833  (*) (InternalEnumerator_1_t2879 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22351_gshared)(__this, method)
