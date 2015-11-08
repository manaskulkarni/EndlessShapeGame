#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Layers.TouchLayer
struct TouchLayer_t624;
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t649;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// TouchScript.TouchPoint
struct TouchPoint_t664;
// TouchScript.ITouch
struct ITouch_t257;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"

// System.Void TouchScript.Layers.TouchLayer::.ctor()
extern "C" void TouchLayer__ctor_m3663 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::add_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
extern "C" void TouchLayer_add_TouchBegan_m3664 (TouchLayer_t624 * __this, EventHandler_1_t649 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::remove_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
extern "C" void TouchLayer_remove_TouchBegan_m3665 (TouchLayer_t624 * __this, EventHandler_1_t649 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::get_WorldProjectionNormal()
extern "C" Vector3_t28  TouchLayer_get_WorldProjectionNormal_m3666 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" int32_t TouchLayer_Hit_m3667 (TouchLayer_t624 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C" Vector3_t28  TouchLayer_ProjectTo_m3668 (TouchLayer_t624 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::Awake()
extern "C" void TouchLayer_Awake_m3669 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::OnDestroy()
extern "C" void TouchLayer_OnDestroy_m3670 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Layers.TouchLayer::BeginTouch(TouchScript.TouchPoint)
extern "C" bool TouchLayer_BeginTouch_m3671 (TouchLayer_t624 * __this, TouchPoint_t664 * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::UpdateTouch(TouchScript.ITouch)
extern "C" void TouchLayer_UpdateTouch_m3672 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::EndTouch(TouchScript.ITouch)
extern "C" void TouchLayer_EndTouch_m3673 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::CancelTouch(TouchScript.ITouch)
extern "C" void TouchLayer_CancelTouch_m3674 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::setName()
extern "C" void TouchLayer_setName_m3675 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::beginTouch(TouchScript.ITouch,TouchScript.Hit.ITouchHit&)
extern "C" int32_t TouchLayer_beginTouch_m3676 (TouchLayer_t624 * __this, Object_t * ___touch, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::updateTouch(TouchScript.ITouch)
extern "C" void TouchLayer_updateTouch_m3677 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::endTouch(TouchScript.ITouch)
extern "C" void TouchLayer_endTouch_m3678 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::cancelTouch(TouchScript.ITouch)
extern "C" void TouchLayer_cancelTouch_m3679 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.Layers.TouchLayer::lateAwake()
extern "C" Object_t * TouchLayer_lateAwake_m3680 (TouchLayer_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
