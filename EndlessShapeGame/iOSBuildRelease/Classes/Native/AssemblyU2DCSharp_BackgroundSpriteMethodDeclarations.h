#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BackgroundSprite
struct BackgroundSprite_t131;
// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BackgroundSprite/LerpState
#include "AssemblyU2DCSharp_BackgroundSprite_LerpState.h"

// System.Void BackgroundSprite::.ctor()
extern "C" void BackgroundSprite__ctor_m530 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera BackgroundSprite::get_drawable()
extern "C" Camera_t32 * BackgroundSprite_get_drawable_m531 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::set_drawable(UnityEngine.Camera)
extern "C" void BackgroundSprite_set_drawable_m532 (BackgroundSprite_t131 * __this, Camera_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine BackgroundSprite::get_updateCoroutine()
extern "C" Coroutine_t125 * BackgroundSprite_get_updateCoroutine_m533 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::set_updateCoroutine(UnityEngine.Coroutine)
extern "C" void BackgroundSprite_set_updateCoroutine_m534 (BackgroundSprite_t131 * __this, Coroutine_t125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color BackgroundSprite::get_originalColor()
extern "C" Color_t12  BackgroundSprite_get_originalColor_m535 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::set_originalColor(UnityEngine.Color)
extern "C" void BackgroundSprite_set_originalColor_m536 (BackgroundSprite_t131 * __this, Color_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BackgroundSprite/LerpState BackgroundSprite::get_lerpState()
extern "C" int32_t BackgroundSprite_get_lerpState_m537 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::set_lerpState(BackgroundSprite/LerpState)
extern "C" void BackgroundSprite_set_lerpState_m538 (BackgroundSprite_t131 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::Awake()
extern "C" void BackgroundSprite_Awake_m539 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::Start()
extern "C" void BackgroundSprite_Start_m540 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::OnGameStart(System.Object,System.EventArgs)
extern "C" void BackgroundSprite_OnGameStart_m541 (BackgroundSprite_t131 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::OnGameOver(System.Object,System.EventArgs)
extern "C" void BackgroundSprite_OnGameOver_m542 (BackgroundSprite_t131 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BackgroundSprite::LerpToOriginalColor()
extern "C" Object_t * BackgroundSprite_LerpToOriginalColor_m543 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::Update()
extern "C" void BackgroundSprite_Update_m544 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::UpdateColorReguralInterval()
extern "C" void BackgroundSprite_UpdateColorReguralInterval_m545 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::UpdateColorConstant()
extern "C" void BackgroundSprite_UpdateColorConstant_m546 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite::UpdateColorArray()
extern "C" void BackgroundSprite_UpdateColorArray_m547 (BackgroundSprite_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
