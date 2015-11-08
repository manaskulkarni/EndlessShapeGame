#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m19782_gshared (KeyValuePair_2_t715 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m19782(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t715 *, int32_t, TouchState_t674 , const MethodInfo*))KeyValuePair_2__ctor_m19782_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m19783_gshared (KeyValuePair_2_t715 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m19783(__this, method) (( int32_t (*) (KeyValuePair_2_t715 *, const MethodInfo*))KeyValuePair_2_get_Key_m19783_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m19784_gshared (KeyValuePair_2_t715 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m19784(__this, ___value, method) (( void (*) (KeyValuePair_2_t715 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m19784_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::get_Value()
extern "C" TouchState_t674  KeyValuePair_2_get_Value_m3968_gshared (KeyValuePair_2_t715 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m3968(__this, method) (( TouchState_t674  (*) (KeyValuePair_2_t715 *, const MethodInfo*))KeyValuePair_2_get_Value_m3968_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m19785_gshared (KeyValuePair_2_t715 * __this, TouchState_t674  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m19785(__this, ___value, method) (( void (*) (KeyValuePair_2_t715 *, TouchState_t674 , const MethodInfo*))KeyValuePair_2_set_Value_m19785_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m19786_gshared (KeyValuePair_2_t715 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m19786(__this, method) (( String_t* (*) (KeyValuePair_2_t715 *, const MethodInfo*))KeyValuePair_2_ToString_m19786_gshared)(__this, method)
