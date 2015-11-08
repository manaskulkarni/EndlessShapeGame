#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Utils.ClusterUtils::.cctor()
extern "C" void ClusterUtils__cctor_m3790 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::Get2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" Vector2_t85  ClusterUtils_Get2DCenterPosition_m3791 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::GetPrevious2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" Vector2_t85  ClusterUtils_GetPrevious2DCenterPosition_m3792 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Utils.ClusterUtils::GetPointsHash(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" String_t* ClusterUtils_GetPointsHash_m3793 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
