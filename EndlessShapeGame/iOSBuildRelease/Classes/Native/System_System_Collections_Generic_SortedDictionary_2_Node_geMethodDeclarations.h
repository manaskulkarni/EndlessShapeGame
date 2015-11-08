#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>
struct Node_t2156;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1014;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>::.ctor(TKey)
extern "C" void Node__ctor_m13017_gshared (Node_t2156 * __this, int32_t ___key, const MethodInfo* method);
#define Node__ctor_m13017(__this, ___key, method) (( void (*) (Node_t2156 *, int32_t, const MethodInfo*))Node__ctor_m13017_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m13018_gshared (Node_t2156 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Node__ctor_m13018(__this, ___key, ___value, method) (( void (*) (Node_t2156 *, int32_t, Object_t *, const MethodInfo*))Node__ctor_m13018_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m13019_gshared (Node_t2156 * __this, Node_t1014 * ___other, const MethodInfo* method);
#define Node_SwapValue_m13019(__this, ___other, method) (( void (*) (Node_t2156 *, Node_t1014 *, const MethodInfo*))Node_SwapValue_m13019_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>::AsKV()
extern "C" KeyValuePair_2_t2154  Node_AsKV_m13020_gshared (Node_t2156 * __this, const MethodInfo* method);
#define Node_AsKV_m13020(__this, method) (( KeyValuePair_2_t2154  (*) (Node_t2156 *, const MethodInfo*))Node_AsKV_m13020_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>::AsDE()
extern "C" DictionaryEntry_t1194  Node_AsDE_m13021_gshared (Node_t2156 * __this, const MethodInfo* method);
#define Node_AsDE_m13021(__this, method) (( DictionaryEntry_t1194  (*) (Node_t2156 *, const MethodInfo*))Node_AsDE_m13021_gshared)(__this, method)
