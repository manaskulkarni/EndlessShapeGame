#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.InputSources.TouchState::.ctor(System.Int32,UnityEngine.TouchPhase,UnityEngine.Vector2)
extern "C" void TouchState__ctor_m3803 (TouchState_t674 * __this, int32_t ___anId, int32_t ___aPhase, Vector2_t85  ___aPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TouchState_t674_marshal(const TouchState_t674& unmarshaled, TouchState_t674_marshaled& marshaled);
extern "C" void TouchState_t674_marshal_back(const TouchState_t674_marshaled& marshaled, TouchState_t674& unmarshaled);
extern "C" void TouchState_t674_marshal_cleanup(TouchState_t674_marshaled& marshaled);
