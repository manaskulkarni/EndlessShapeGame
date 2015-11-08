#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m14986_gshared (KeyValuePair_2_t2311 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m14986(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2311 *, Object_t *, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m14986_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m14987_gshared (KeyValuePair_2_t2311 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m14987(__this, method) (( Object_t * (*) (KeyValuePair_2_t2311 *, const MethodInfo*))KeyValuePair_2_get_Key_m14987_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m14988_gshared (KeyValuePair_2_t2311 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m14988(__this, ___value, method) (( void (*) (KeyValuePair_2_t2311 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m14988_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m14989_gshared (KeyValuePair_2_t2311 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m14989(__this, method) (( int32_t (*) (KeyValuePair_2_t2311 *, const MethodInfo*))KeyValuePair_2_get_Value_m14989_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m14990_gshared (KeyValuePair_2_t2311 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m14990(__this, ___value, method) (( void (*) (KeyValuePair_2_t2311 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m14990_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m14991_gshared (KeyValuePair_2_t2311 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m14991(__this, method) (( String_t* (*) (KeyValuePair_2_t2311 *, const MethodInfo*))KeyValuePair_2_ToString_m14991_gshared)(__this, method)
