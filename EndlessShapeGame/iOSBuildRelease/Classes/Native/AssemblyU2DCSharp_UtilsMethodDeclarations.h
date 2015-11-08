#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utils
struct Utils_t150;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void Utils::.ctor()
extern "C" void Utils__ctor_m648 (Utils_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utils::RandomColor(UnityEngine.Color,UnityEngine.Color)
extern "C" Color_t12  Utils_RandomColor_m649 (Object_t * __this /* static, unused */, Color_t12  ___minColor, Color_t12  ___maxColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utils::RandomColor(System.Boolean)
extern "C" Color_t12  Utils_RandomColor_m650 (Object_t * __this /* static, unused */, bool ___opaque, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Utils::RandomVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t85  Utils_RandomVector2_m651 (Object_t * __this /* static, unused */, Vector2_t85  ___minVector, Vector2_t85  ___maxVector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utils::Color255(System.Single,System.Single,System.Single,System.Single)
extern "C" Color_t12  Utils_Color255_m652 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utils::ClampColor(UnityEngine.Color,UnityEngine.Color,UnityEngine.Color)
extern "C" Color_t12  Utils_ClampColor_m653 (Object_t * __this /* static, unused */, Color_t12  ___value, Color_t12  ___min, Color_t12  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Utils::ClampVector2(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t85  Utils_ClampVector2_m654 (Object_t * __this /* static, unused */, Vector2_t85  ___value, Vector2_t85  ___min, Vector2_t85  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utils::ClampVector3(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t28  Utils_ClampVector3_m655 (Object_t * __this /* static, unused */, Vector3_t28  ___value, Vector3_t28  ___min, Vector3_t28  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utils::ClampVector4(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector3_t28  Utils_ClampVector4_m656 (Object_t * __this /* static, unused */, Vector4_t100  ___value, Vector4_t100  ___min, Vector4_t100  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
