#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Layers.CameraLayer2D
struct CameraLayer2D_t643;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t530;
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// TouchScript.Hit.HitTest/ObjectHitResult
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResult.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void TouchScript.Layers.CameraLayer2D::.ctor()
extern "C" void CameraLayer2D__ctor_m3629 (CameraLayer2D_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer2D::OnEnable()
extern "C" void CameraLayer2D_OnEnable_m3630 (CameraLayer2D_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer2D::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
extern "C" int32_t CameraLayer2D_castRay_m3631 (CameraLayer2D_t643 * __this, Ray_t529  ___ray, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer2D::doHit(UnityEngine.RaycastHit2D,TouchScript.Hit.ITouchHit&)
extern "C" int32_t CameraLayer2D_doHit_m3632 (CameraLayer2D_t643 * __this, RaycastHit2D_t532  ___raycastHit, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer2D::sortHits(UnityEngine.RaycastHit2D[])
extern "C" void CameraLayer2D_sortHits_m3633 (CameraLayer2D_t643 * __this, RaycastHit2DU5BU5D_t530* ___hits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Layers.CameraLayer2D::<sortHits>m__5(UnityEngine.RaycastHit2D,UnityEngine.RaycastHit2D)
extern "C" int32_t CameraLayer2D_U3CsortHitsU3Em__5_m3634 (CameraLayer2D_t643 * __this, RaycastHit2D_t532  ___a, RaycastHit2D_t532  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
