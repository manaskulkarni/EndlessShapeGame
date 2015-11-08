#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Layers.CameraLayer
struct CameraLayer_t640;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t533;
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// TouchScript.Hit.HitTest/ObjectHitResult
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResult.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void TouchScript.Layers.CameraLayer::.ctor()
extern "C" void CameraLayer__ctor_m3623 (CameraLayer_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::Awake()
extern "C" void CameraLayer_Awake_m3624 (CameraLayer_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::OnEnable()
extern "C" void CameraLayer_OnEnable_m3625 (CameraLayer_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
extern "C" int32_t CameraLayer_castRay_m3626 (CameraLayer_t640 * __this, Ray_t529  ___ray, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer::doHit(UnityEngine.RaycastHit,TouchScript.Hit.ITouchHit&)
extern "C" int32_t CameraLayer_doHit_m3627 (CameraLayer_t640 * __this, RaycastHit_t504  ___raycastHit, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::sortHits(UnityEngine.RaycastHit[])
extern "C" void CameraLayer_sortHits_m3628 (CameraLayer_t640 * __this, RaycastHitU5BU5D_t533* ___hits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
