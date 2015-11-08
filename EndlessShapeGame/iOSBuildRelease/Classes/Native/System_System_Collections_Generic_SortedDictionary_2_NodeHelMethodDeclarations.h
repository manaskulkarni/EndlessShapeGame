#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>
struct NodeHelper_t2153;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t2163;
// System.Collections.Generic.RBTree/Node
struct Node_t1014;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C" void NodeHelper__ctor_m13118_gshared (NodeHelper_t2153 * __this, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m13118(__this, ___cmp, method) (( void (*) (NodeHelper_t2153 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m13118_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>::.cctor()
extern "C" void NodeHelper__cctor_m13119_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m13119(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m13119_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C" int32_t NodeHelper_Compare_m13120_gshared (NodeHelper_t2153 * __this, int32_t ___key, Node_t1014 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m13120(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t2153 *, int32_t, Node_t1014 *, const MethodInfo*))NodeHelper_Compare_m13120_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>::CreateNode(TKey)
extern "C" Node_t1014 * NodeHelper_CreateNode_m13121_gshared (NodeHelper_t2153 * __this, int32_t ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m13121(__this, ___key, method) (( Node_t1014 * (*) (NodeHelper_t2153 *, int32_t, const MethodInfo*))NodeHelper_CreateNode_m13121_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C" NodeHelper_t2153 * NodeHelper_GetHelper_m13122_gshared (Object_t * __this /* static, unused */, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m13122(__this /* static, unused */, ___cmp, method) (( NodeHelper_t2153 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m13122_gshared)(__this /* static, unused */, ___cmp, method)
