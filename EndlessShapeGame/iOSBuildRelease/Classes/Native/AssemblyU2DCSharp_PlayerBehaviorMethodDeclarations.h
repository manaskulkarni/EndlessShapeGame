#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerBehavior
struct PlayerBehavior_t133;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t135;
// System.Collections.Generic.List`1<PlayerShapeTrigger>
struct List_1_t136;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlayerBehavior::.ctor()
extern "C" void PlayerBehavior__ctor_m560 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerBehavior::get_swipeSpeed()
extern "C" float PlayerBehavior_get_swipeSpeed_m561 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> PlayerBehavior::get_shapes()
extern "C" List_1_t135 * PlayerBehavior_get_shapes_m562 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::set_shapes(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C" void PlayerBehavior_set_shapes_m563 (PlayerBehavior_t133 * __this, List_1_t135 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PlayerShapeTrigger> PlayerBehavior::get_triggers()
extern "C" List_1_t136 * PlayerBehavior_get_triggers_m564 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::set_triggers(System.Collections.Generic.List`1<PlayerShapeTrigger>)
extern "C" void PlayerBehavior_set_triggers_m565 (PlayerBehavior_t133 * __this, List_1_t136 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerBehavior::get_shapeOffset()
extern "C" Vector3_t28  PlayerBehavior_get_shapeOffset_m566 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::set_shapeOffset(UnityEngine.Vector3)
extern "C" void PlayerBehavior_set_shapeOffset_m567 (PlayerBehavior_t133 * __this, Vector3_t28  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerBehavior::get_minXPosition()
extern "C" float PlayerBehavior_get_minXPosition_m568 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::set_minXPosition(System.Single)
extern "C" void PlayerBehavior_set_minXPosition_m569 (PlayerBehavior_t133 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerBehavior::get_maxXPosition()
extern "C" float PlayerBehavior_get_maxXPosition_m570 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::set_maxXPosition(System.Single)
extern "C" void PlayerBehavior_set_maxXPosition_m571 (PlayerBehavior_t133 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::Awake()
extern "C" void PlayerBehavior_Awake_m572 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::InputDetected()
extern "C" void PlayerBehavior_InputDetected_m573 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::GoRight()
extern "C" void PlayerBehavior_GoRight_m574 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::GoLeft()
extern "C" void PlayerBehavior_GoLeft_m575 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerBehavior::ConfigurePlayer()
extern "C" void PlayerBehavior_ConfigurePlayer_m576 (PlayerBehavior_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerBehavior::SlideRight(UnityEngine.Transform)
extern "C" Object_t * PlayerBehavior_SlideRight_m577 (PlayerBehavior_t133 * __this, Transform_t48 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerBehavior::SlideLeft(UnityEngine.Transform)
extern "C" Object_t * PlayerBehavior_SlideLeft_m578 (PlayerBehavior_t133 * __this, Transform_t48 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
