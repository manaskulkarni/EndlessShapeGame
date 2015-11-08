#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"

// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::CameraToPlaneProjection(UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Plane)
extern "C" Vector3_t28  ProjectionUtils_CameraToPlaneProjection_m3796 (Object_t * __this /* static, unused */, Vector2_t85  ___position, Camera_t32 * ___camera, Plane_t554  ___projectionPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::ScreenToPlaneProjection(UnityEngine.Vector2,UnityEngine.Plane)
extern "C" Vector3_t28  ProjectionUtils_ScreenToPlaneProjection_m3797 (Object_t * __this /* static, unused */, Vector2_t85  ___position, Plane_t554  ___projectionPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
