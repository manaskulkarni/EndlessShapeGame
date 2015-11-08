#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputExample
struct InputExample_t210;
// System.Object
struct Object_t;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t226;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void InputExample::.ctor()
extern "C" void InputExample__ctor_m1017 (InputExample_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputExample::OnEnable()
extern "C" void InputExample_OnEnable_m1018 (InputExample_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputExample::OnDisable()
extern "C" void InputExample_OnDisable_m1019 (InputExample_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputExample::spawnPrefabAt(UnityEngine.Vector2)
extern "C" void InputExample_spawnPrefabAt_m1020 (InputExample_t210 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputExample::touchBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void InputExample_touchBeganHandler_m1021 (InputExample_t210 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
