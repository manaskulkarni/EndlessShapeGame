#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DoubleTap_Sprite
struct DoubleTap_Sprite_t207;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t225;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DoubleTap_Sprite::.ctor()
extern "C" void DoubleTap_Sprite__ctor_m998 (DoubleTap_Sprite_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::.cctor()
extern "C" void DoubleTap_Sprite__cctor_m999 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::OnEnable()
extern "C" void DoubleTap_Sprite_OnEnable_m1000 (DoubleTap_Sprite_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::OnDisable()
extern "C" void DoubleTap_Sprite_OnDisable_m1001 (DoubleTap_Sprite_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::changeColor()
extern "C" void DoubleTap_Sprite_changeColor_m1002 (DoubleTap_Sprite_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::breakObject()
extern "C" void DoubleTap_Sprite_breakObject_m1003 (DoubleTap_Sprite_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D DoubleTap_Sprite::createCopy(UnityEngine.Vector3)
extern "C" Rigidbody2D_t225 * DoubleTap_Sprite_createCopy_m1004 (DoubleTap_Sprite_t207 * __this, Vector3_t28  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DoubleTap_Sprite::tappedHandler(System.Object,System.EventArgs)
extern "C" void DoubleTap_Sprite_tappedHandler_m1005 (DoubleTap_Sprite_t207 * __this, Object_t * ___sender, EventArgs_t223 * ___eventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
