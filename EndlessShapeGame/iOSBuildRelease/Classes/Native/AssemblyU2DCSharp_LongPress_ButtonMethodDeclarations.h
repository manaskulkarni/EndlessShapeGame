#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LongPress_Button
struct LongPress_Button_t214;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t227;
// System.EventArgs
struct EventArgs_t223;

// System.Void LongPress_Button::.ctor()
extern "C" void LongPress_Button__ctor_m1036 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::Awake()
extern "C" void LongPress_Button_Awake_m1037 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::OnEnable()
extern "C" void LongPress_Button_OnEnable_m1038 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::OnDisable()
extern "C" void LongPress_Button_OnDisable_m1039 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::press()
extern "C" void LongPress_Button_press_m1040 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::release()
extern "C" void LongPress_Button_release_m1041 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::reset()
extern "C" void LongPress_Button_reset_m1042 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::changeColor()
extern "C" void LongPress_Button_changeColor_m1043 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LongPress_Button::grow()
extern "C" Object_t * LongPress_Button_grow_m1044 (LongPress_Button_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::longPressStateChangedHandler(System.Object,TouchScript.Gestures.GestureStateChangeEventArgs)
extern "C" void LongPress_Button_longPressStateChangedHandler_m1045 (LongPress_Button_t214 * __this, Object_t * ___sender, GestureStateChangeEventArgs_t227 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::pressedHandler(System.Object,System.EventArgs)
extern "C" void LongPress_Button_pressedHandler_m1046 (LongPress_Button_t214 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPress_Button::releasedHandler(System.Object,System.EventArgs)
extern "C" void LongPress_Button_releasedHandler_m1047 (LongPress_Button_t214 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
