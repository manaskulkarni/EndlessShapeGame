#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Layers.CameraLayerBase
struct CameraLayerBase_t641;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"

// System.Void TouchScript.Layers.CameraLayerBase::.ctor()
extern "C" void CameraLayerBase__ctor_m3635 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::get_LayerMask()
extern "C" LayerMask_t29  CameraLayerBase_get_LayerMask_m3636 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::set_LayerMask(UnityEngine.LayerMask)
extern "C" void CameraLayerBase_set_LayerMask_m3637 (CameraLayerBase_t641 * __this, LayerMask_t29  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::get_WorldProjectionNormal()
extern "C" Vector3_t28  CameraLayerBase_get_WorldProjectionNormal_m3638 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayerBase::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" int32_t CameraLayerBase_Hit_m3639 (CameraLayerBase_t641 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C" Vector3_t28  CameraLayerBase_ProjectTo_m3640 (CameraLayerBase_t641 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::Awake()
extern "C" void CameraLayerBase_Awake_m3641 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::setName()
extern "C" void CameraLayerBase_setName_m3642 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::updateCamera()
extern "C" void CameraLayerBase_updateCamera_m3643 (CameraLayerBase_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
