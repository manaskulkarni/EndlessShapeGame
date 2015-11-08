#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2275;
// TouchScript.Gestures.Gesture[]
struct GestureU5BU5D_t694;
// System.Collections.Generic.List`1<TouchScript.ITouch>[]
struct List_1U5BU5D_t2560;
// System.Collections.Generic.IEqualityComparer`1<TouchScript.Gestures.Gesture>
struct IEqualityComparer_1_t2567;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Collections.Generic.Dictionary`2/Transform`1<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>,System.Collections.DictionaryEntry>
struct Transform_1_t2566;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct  Dictionary_2_t603  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::table
	Int32U5BU5D_t109* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::linkSlots
	LinkU5BU5D_t2275* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::keySlots
	GestureU5BU5D_t694* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::valueSlots
	List_1U5BU5D_t2560* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::serialization_info
	SerializationInfo_t945 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t603_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::<>f__am$cacheB
	Transform_1_t2566 * ___U3CU3Ef__amU24cacheB_15;
};
