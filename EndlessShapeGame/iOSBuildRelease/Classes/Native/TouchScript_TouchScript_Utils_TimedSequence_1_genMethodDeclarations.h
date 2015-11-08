#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
struct TimedSequence_1_t606;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t2499;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2503;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::.ctor()
extern "C" void TimedSequence_1__ctor_m3859_gshared (TimedSequence_1_t606 * __this, const MethodInfo* method);
#define TimedSequence_1__ctor_m3859(__this, method) (( void (*) (TimedSequence_1_t606 *, const MethodInfo*))TimedSequence_1__ctor_m3859_gshared)(__this, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Add(T)
extern "C" void TimedSequence_1_Add_m3860_gshared (TimedSequence_1_t606 * __this, Vector2_t85  ___element, const MethodInfo* method);
#define TimedSequence_1_Add_m3860(__this, ___element, method) (( void (*) (TimedSequence_1_t606 *, Vector2_t85 , const MethodInfo*))TimedSequence_1_Add_m3860_gshared)(__this, ___element, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Add(T,System.Single)
extern "C" void TimedSequence_1_Add_m18767_gshared (TimedSequence_1_t606 * __this, Vector2_t85  ___element, float ___time, const MethodInfo* method);
#define TimedSequence_1_Add_m18767(__this, ___element, ___time, method) (( void (*) (TimedSequence_1_t606 *, Vector2_t85 , float, const MethodInfo*))TimedSequence_1_Add_m18767_gshared)(__this, ___element, ___time, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Clear()
extern "C" void TimedSequence_1_Clear_m18768_gshared (TimedSequence_1_t606 * __this, const MethodInfo* method);
#define TimedSequence_1_Clear_m18768(__this, method) (( void (*) (TimedSequence_1_t606 *, const MethodInfo*))TimedSequence_1_Clear_m18768_gshared)(__this, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m18769_gshared (TimedSequence_1_t606 * __this, float ___time, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m18769(__this, ___time, method) (( Object_t* (*) (TimedSequence_1_t606 *, float, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m18769_gshared)(__this, ___time, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single,System.Single&)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m3862_gshared (TimedSequence_1_t606 * __this, float ___time, float* ___lastTime, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m3862(__this, ___time, ___lastTime, method) (( Object_t* (*) (TimedSequence_1_t606 *, float, float*, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m3862_gshared)(__this, ___time, ___lastTime, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single,System.Predicate`1<T>)
extern "C" Object_t* TimedSequence_1_FindElementsLaterThan_m18770_gshared (TimedSequence_1_t606 * __this, float ___time, Predicate_1_t2503 * ___predicate, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m18770(__this, ___time, ___predicate, method) (( Object_t* (*) (TimedSequence_1_t606 *, float, Predicate_1_t2503 *, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m18770_gshared)(__this, ___time, ___predicate, method)
