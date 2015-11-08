#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Clusters.Clusters
struct Clusters_t591;
// TouchScript.ITouch
struct ITouch_t257;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Clusters.Clusters::.ctor()
extern "C" void Clusters__ctor_m3202 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Clusters.Clusters::get_PointsCount()
extern "C" int32_t Clusters_get_PointsCount_m3203 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Clusters.Clusters::get_MinPointsDistance()
extern "C" float Clusters_get_MinPointsDistance_m3204 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::set_MinPointsDistance(System.Single)
extern "C" void Clusters_set_MinPointsDistance_m3205 (Clusters_t591 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Clusters.Clusters::get_HasClusters()
extern "C" bool Clusters_get_HasClusters_m3206 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetCenterPosition(System.Int32)
extern "C" Vector2_t85  Clusters_GetCenterPosition_m3207 (Clusters_t591 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetPreviousCenterPosition(System.Int32)
extern "C" Vector2_t85  Clusters_GetPreviousCenterPosition_m3208 (Clusters_t591 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::AddPoint(TouchScript.ITouch)
extern "C" void Clusters_AddPoint_m3209 (Clusters_t591 * __this, Object_t * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::AddPoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Clusters_AddPoints_m3210 (Clusters_t591 * __this, Object_t* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemovePoint(TouchScript.ITouch)
extern "C" void Clusters_RemovePoint_m3211 (Clusters_t591 * __this, Object_t * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemovePoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Clusters_RemovePoints_m3212 (Clusters_t591 * __this, Object_t* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemoveAllPoints()
extern "C" void Clusters_RemoveAllPoints_m3213 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::Invalidate()
extern "C" void Clusters_Invalidate_m3214 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::distributePoints()
extern "C" void Clusters_distributePoints_m3215 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Clusters.Clusters::checkClusters()
extern "C" bool Clusters_checkClusters_m3216 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::markDirty()
extern "C" void Clusters_markDirty_m3217 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::markClean()
extern "C" void Clusters_markClean_m3218 (Clusters_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
