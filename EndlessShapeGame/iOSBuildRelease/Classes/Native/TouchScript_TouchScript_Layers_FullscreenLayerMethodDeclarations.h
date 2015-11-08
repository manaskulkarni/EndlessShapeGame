#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Layers.FullscreenLayer
struct FullscreenLayer_t646;
// UnityEngine.Camera
struct Camera_t32;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// TouchScript.Layers.FullscreenLayer/LayerType
#include "TouchScript_TouchScript_Layers_FullscreenLayer_LayerType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"

// System.Void TouchScript.Layers.FullscreenLayer::.ctor()
extern "C" void FullscreenLayer__ctor_m3644 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::get_Type()
extern "C" int32_t FullscreenLayer_get_Type_m3645 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::set_Type(TouchScript.Layers.FullscreenLayer/LayerType)
extern "C" void FullscreenLayer_set_Type_m3646 (FullscreenLayer_t646 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::get_Camera()
extern "C" Camera_t32 * FullscreenLayer_get_Camera_m3647 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::set_Camera(UnityEngine.Camera)
extern "C" void FullscreenLayer_set_Camera_m3648 (FullscreenLayer_t646 * __this, Camera_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::get_WorldProjectionNormal()
extern "C" Vector3_t28  FullscreenLayer_get_WorldProjectionNormal_m3649 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.FullscreenLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" int32_t FullscreenLayer_Hit_m3650 (FullscreenLayer_t646 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C" Vector3_t28  FullscreenLayer_ProjectTo_m3651 (FullscreenLayer_t646 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::Awake()
extern "C" void FullscreenLayer_Awake_m3652 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::OnEnable()
extern "C" void FullscreenLayer_OnEnable_m3653 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::setName()
extern "C" void FullscreenLayer_setName_m3654 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::updateCamera()
extern "C" void FullscreenLayer_updateCamera_m3655 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::cacheCameraTransform()
extern "C" void FullscreenLayer_cacheCameraTransform_m3656 (FullscreenLayer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
