﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2275;
// System.String[]
struct StringU5BU5D_t110;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2412;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2624;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t665  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Object>::table
	Int32U5BU5D_t109* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Object>::linkSlots
	LinkU5BU5D_t2275* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Object>::keySlots
	StringU5BU5D_t110* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Object>::valueSlots
	ObjectU5BU5D_t234* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Object>::serialization_info
	SerializationInfo_t945 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t665_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Object>::<>f__am$cacheB
	Transform_1_t2624 * ___U3CU3Ef__amU24cacheB_15;
};
