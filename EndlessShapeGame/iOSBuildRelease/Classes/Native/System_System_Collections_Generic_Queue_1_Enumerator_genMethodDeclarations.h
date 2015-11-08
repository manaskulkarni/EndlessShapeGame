#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2205;
// System.Object
struct Object_t;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" void Enumerator__ctor_m13627_gshared (Enumerator_t2206 * __this, Queue_1_t2205 * ___q, const MethodInfo* method);
#define Enumerator__ctor_m13627(__this, ___q, method) (( void (*) (Enumerator_t2206 *, Queue_1_t2205 *, const MethodInfo*))Enumerator__ctor_m13627_gshared)(__this, ___q, method)
// System.Object System.Collections.Generic.Queue`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13628_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13628(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13628_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13629_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13629(__this, method) (( void (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_Dispose_m13629_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13630_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13630(__this, method) (( bool (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_MoveNext_m13630_gshared)(__this, method)
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13631_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13631(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_get_Current_m13631_gshared)(__this, method)
