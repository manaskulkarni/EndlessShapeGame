#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShapeBehavior
struct ShapeBehavior_t144;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t140;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ShapeBehavior/ShapeResponse
#include "AssemblyU2DCSharp_ShapeBehavior_ShapeResponse.h"
// ShapeBehavior/ShapeType
#include "AssemblyU2DCSharp_ShapeBehavior_ShapeType.h"

// System.Void ShapeBehavior::.ctor()
extern "C" void ShapeBehavior__ctor_m608 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer ShapeBehavior::get_spriteRenderer()
extern "C" SpriteRenderer_t140 * ShapeBehavior_get_spriteRenderer_m609 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_spriteRenderer(UnityEngine.SpriteRenderer)
extern "C" void ShapeBehavior_set_spriteRenderer_m610 (ShapeBehavior_t144 * __this, SpriteRenderer_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ShapeBehavior::get_originalColor()
extern "C" Color_t12  ShapeBehavior_get_originalColor_m611 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_originalColor(UnityEngine.Color)
extern "C" void ShapeBehavior_set_originalColor_m612 (ShapeBehavior_t144 * __this, Color_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ShapeBehavior::get_triggered()
extern "C" bool ShapeBehavior_get_triggered_m613 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_triggered(System.Boolean)
extern "C" void ShapeBehavior_set_triggered_m614 (ShapeBehavior_t144 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShapeBehavior/ShapeResponse ShapeBehavior::get_shapeResponse()
extern "C" int32_t ShapeBehavior_get_shapeResponse_m615 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_shapeResponse(ShapeBehavior/ShapeResponse)
extern "C" void ShapeBehavior_set_shapeResponse_m616 (ShapeBehavior_t144 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShapeBehavior/ShapeType ShapeBehavior::get_shapeType()
extern "C" int32_t ShapeBehavior_get_shapeType_m617 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_shapeType(ShapeBehavior/ShapeType)
extern "C" void ShapeBehavior_set_shapeType_m618 (ShapeBehavior_t144 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine ShapeBehavior::get_updateSpecial()
extern "C" Coroutine_t125 * ShapeBehavior_get_updateSpecial_m619 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_updateSpecial(UnityEngine.Coroutine)
extern "C" void ShapeBehavior_set_updateSpecial_m620 (ShapeBehavior_t144 * __this, Coroutine_t125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine ShapeBehavior::get_updateInvisible()
extern "C" Coroutine_t125 * ShapeBehavior_get_updateInvisible_m621 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_updateInvisible(UnityEngine.Coroutine)
extern "C" void ShapeBehavior_set_updateInvisible_m622 (ShapeBehavior_t144 * __this, Coroutine_t125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ShapeBehavior::get_update()
extern "C" bool ShapeBehavior_get_update_m623 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::set_update(System.Boolean)
extern "C" void ShapeBehavior_set_update_m624 (ShapeBehavior_t144 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StartGame()
extern "C" void ShapeBehavior_StartGame_m625 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StopGame()
extern "C" void ShapeBehavior_StopGame_m626 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StartSpecialShapeCoroutine(ShapeBehavior/ShapeResponse)
extern "C" void ShapeBehavior_StartSpecialShapeCoroutine_m627 (ShapeBehavior_t144 * __this, int32_t ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StopSpecialShapeCoroutine()
extern "C" void ShapeBehavior_StopSpecialShapeCoroutine_m628 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StartInvisibleCoroutine()
extern "C" void ShapeBehavior_StartInvisibleCoroutine_m629 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::StopInvisibleCoroutine()
extern "C" void ShapeBehavior_StopInvisibleCoroutine_m630 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::Update()
extern "C" void ShapeBehavior_Update_m631 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeBehavior::UpdatePosition()
extern "C" Object_t * ShapeBehavior_UpdatePosition_m632 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeBehavior::UpdateSpecial()
extern "C" Object_t * ShapeBehavior_UpdateSpecial_m633 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeBehavior::UpdateInvisible()
extern "C" Object_t * ShapeBehavior_UpdateInvisible_m634 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeBehavior::UpdatePositionInvoke()
extern "C" void ShapeBehavior_UpdatePositionInvoke_m635 (ShapeBehavior_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
