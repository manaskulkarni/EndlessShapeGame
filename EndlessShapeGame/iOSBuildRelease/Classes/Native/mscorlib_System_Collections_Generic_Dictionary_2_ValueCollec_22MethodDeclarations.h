#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t673;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19838_gshared (Enumerator_t2637 * __this, Dictionary_2_t673 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m19838(__this, ___host, method) (( void (*) (Enumerator_t2637 *, Dictionary_2_t673 *, const MethodInfo*))Enumerator__ctor_m19838_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19839_gshared (Enumerator_t2637 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19839(__this, method) (( Object_t * (*) (Enumerator_t2637 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19839_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>::Dispose()
extern "C" void Enumerator_Dispose_m19840_gshared (Enumerator_t2637 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19840(__this, method) (( void (*) (Enumerator_t2637 *, const MethodInfo*))Enumerator_Dispose_m19840_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19841_gshared (Enumerator_t2637 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19841(__this, method) (( bool (*) (Enumerator_t2637 *, const MethodInfo*))Enumerator_MoveNext_m19841_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>::get_Current()
extern "C" TouchState_t674  Enumerator_get_Current_m19842_gshared (Enumerator_t2637 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19842(__this, method) (( TouchState_t674  (*) (Enumerator_t2637 *, const MethodInfo*))Enumerator_get_Current_m19842_gshared)(__this, method)
