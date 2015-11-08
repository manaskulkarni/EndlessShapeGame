#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t2781;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2783;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1014;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C" void NodeHelper__ctor_m21697_gshared (NodeHelper_t2781 * __this, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m21697(__this, ___cmp, method) (( void (*) (NodeHelper_t2781 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m21697_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.cctor()
extern "C" void NodeHelper__cctor_m21698_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m21698(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m21698_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C" int32_t NodeHelper_Compare_m21699_gshared (NodeHelper_t2781 * __this, Object_t * ___key, Node_t1014 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m21699(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t2781 *, Object_t *, Node_t1014 *, const MethodInfo*))NodeHelper_Compare_m21699_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::CreateNode(TKey)
extern "C" Node_t1014 * NodeHelper_CreateNode_m21700_gshared (NodeHelper_t2781 * __this, Object_t * ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m21700(__this, ___key, method) (( Node_t1014 * (*) (NodeHelper_t2781 *, Object_t *, const MethodInfo*))NodeHelper_CreateNode_m21700_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C" NodeHelper_t2781 * NodeHelper_GetHelper_m21701_gshared (Object_t * __this /* static, unused */, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m21701(__this /* static, unused */, ___cmp, method) (( NodeHelper_t2781 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m21701_gshared)(__this /* static, unused */, ___cmp, method)
