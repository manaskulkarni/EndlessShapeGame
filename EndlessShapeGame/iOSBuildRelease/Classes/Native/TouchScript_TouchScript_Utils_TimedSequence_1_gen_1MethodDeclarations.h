#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Utils.TimedSequence`1<System.Object>
struct TimedSequence_1_t2583;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2114;
// System.Predicate`1<System.Object>
struct Predicate_1_t2118;

// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::.ctor()
extern "C" void TimedSequence_1__ctor_m18916_gshared (TimedSequence_1_t2583 * __this, const MethodInfo* method);
#define TimedSequence_1__ctor_m18916(__this, method) (( void (*) (TimedSequence_1_t2583 *, const MethodInfo*))TimedSequence_1__ctor_m18916_gshared)(__this, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Add(T)
extern "C" void TimedSequence_1_Add_m18917_gshared (TimedSequence_1_t2583 * __this, Object_t * ___element, const MethodInfo* method);
#define TimedSequence_1_Add_m18917(__this, ___element, method) (( void (*) (TimedSequence_1_t2583 *, Object_t *, const MethodInfo*))TimedSequence_1_Add_m18917_gshared)(__this, ___element, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Add(T,System.Single)
extern "C" void TimedSequence_1_Add_m18919_gshared (TimedSequence_1_t2583 * __this, Object_t * ___element, float ___time, const MethodInfo* method);
#define TimedSequence_1_Add_m18919(__this, ___element, ___time, method) (( void (*) (TimedSequence_1_t2583 *, Object_t *, float, const MethodInfo*))TimedSequence_1_Add_m18919_gshared)(__this, ___element, ___time, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Clear()
extern "C" void TimedSequence_1_Clear_m18921_gshared (TimedSequence_1_t2583 * __this, const MethodInfo* method);
#define TimedSequence_1_Clear_m18921(__this, method) (( void (*) (TimedSequence_1_t2583 *, const MethodInfo*))TimedSequence_1_Clear_m18921_gshared)(__this, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m18923_gshared (TimedSequence_1_t2583 * __this, float ___time, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m18923(__this, ___time, method) (( Object_t* (*) (TimedSequence_1_t2583 *, float, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m18923_gshared)(__this, ___time, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single,System.Single&)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m18925_gshared (TimedSequence_1_t2583 * __this, float ___time, float* ___lastTime, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m18925(__this, ___time, ___lastTime, method) (( Object_t* (*) (TimedSequence_1_t2583 *, float, float*, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m18925_gshared)(__this, ___time, ___lastTime, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single,System.Predicate`1<T>)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m18926_gshared (TimedSequence_1_t2583 * __this, float ___time, Predicate_1_t2118 * ___predicate, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m18926(__this, ___time, ___predicate, method) (( Object_t* (*) (TimedSequence_1_t2583 *, float, Predicate_1_t2118 *, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m18926_gshared)(__this, ___time, ___predicate, method)
