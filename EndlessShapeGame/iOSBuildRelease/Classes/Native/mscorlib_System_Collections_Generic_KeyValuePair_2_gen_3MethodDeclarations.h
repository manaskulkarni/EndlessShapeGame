#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m12874_gshared (KeyValuePair_2_t2135 * __this, float ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m12874(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2135 *, float, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m12874_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::get_Key()
extern "C" float KeyValuePair_2_get_Key_m12875_gshared (KeyValuePair_2_t2135 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m12875(__this, method) (( float (*) (KeyValuePair_2_t2135 *, const MethodInfo*))KeyValuePair_2_get_Key_m12875_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12876_gshared (KeyValuePair_2_t2135 * __this, float ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m12876(__this, ___value, method) (( void (*) (KeyValuePair_2_t2135 *, float, const MethodInfo*))KeyValuePair_2_set_Key_m12876_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m12877_gshared (KeyValuePair_2_t2135 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m12877(__this, method) (( Object_t * (*) (KeyValuePair_2_t2135 *, const MethodInfo*))KeyValuePair_2_get_Value_m12877_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12878_gshared (KeyValuePair_2_t2135 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m12878(__this, ___value, method) (( void (*) (KeyValuePair_2_t2135 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m12878_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m12879_gshared (KeyValuePair_2_t2135 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m12879(__this, method) (( String_t* (*) (KeyValuePair_2_t2135 *, const MethodInfo*))KeyValuePair_2_ToString_m12879_gshared)(__this, method)
