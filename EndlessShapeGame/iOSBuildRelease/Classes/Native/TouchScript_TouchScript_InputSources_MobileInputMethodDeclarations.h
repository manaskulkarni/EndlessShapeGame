#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.InputSources.MobileInput
struct MobileInput_t672;
// TouchScript.ITouch
struct ITouch_t257;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.InputSources.MobileInput::.ctor()
extern "C" void MobileInput__ctor_m3798 (MobileInput_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MobileInput::OnEnable()
extern "C" void MobileInput_OnEnable_m3799 (MobileInput_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MobileInput::OnDisable()
extern "C" void MobileInput_OnDisable_m3800 (MobileInput_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.MobileInput::Update()
extern "C" void MobileInput_Update_m3801 (MobileInput_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.MobileInput::beginTouch(UnityEngine.Vector2)
extern "C" Object_t * MobileInput_beginTouch_m3802 (MobileInput_t672 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
