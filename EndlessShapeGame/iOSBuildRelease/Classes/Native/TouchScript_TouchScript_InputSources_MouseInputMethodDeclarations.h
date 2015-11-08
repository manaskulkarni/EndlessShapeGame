#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.InputSources.MouseInput
struct MouseInput_t636;
// TouchScript.ITouch
struct ITouch_t257;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.InputSources.MouseInput::.ctor()
extern "C" void MouseInput__ctor_m3614 (MouseInput_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MouseInput::OnEnable()
extern "C" void MouseInput_OnEnable_m3615 (MouseInput_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MouseInput::OnDisable()
extern "C" void MouseInput_OnDisable_m3616 (MouseInput_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MouseInput::Update()
extern "C" void MouseInput_Update_m3617 (MouseInput_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.MouseInput::beginTouch(UnityEngine.Vector2)
extern "C" Object_t * MouseInput_beginTouch_m3618 (MouseInput_t636 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
