#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t227;
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"

// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::.ctor(TouchScript.Gestures.Gesture/GestureState,TouchScript.Gestures.Gesture/GestureState)
extern "C" void GestureStateChangeEventArgs__ctor_m3370 (GestureStateChangeEventArgs_t227 * __this, int32_t ___state, int32_t ___previousState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_PreviousState()
extern "C" int32_t GestureStateChangeEventArgs_get_PreviousState_m3371 (GestureStateChangeEventArgs_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::set_PreviousState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void GestureStateChangeEventArgs_set_PreviousState_m3372 (GestureStateChangeEventArgs_t227 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_State()
extern "C" int32_t GestureStateChangeEventArgs_get_State_m1233 (GestureStateChangeEventArgs_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::set_State(TouchScript.Gestures.Gesture/GestureState)
extern "C" void GestureStateChangeEventArgs_set_State_m3373 (GestureStateChangeEventArgs_t227 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
