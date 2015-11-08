#pragma once
#include <stdint.h>
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t2785;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.SortedList`2/EnumeratorMode<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedList_2_EnumeratorMod_2.h"
// System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2793  : public Object_t
{
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::host
	SortedList_2_t2785 * ___host_0;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::size
	int32_t ___size_3;
	// System.Collections.Generic.SortedList`2/EnumeratorMode<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::mode
	int32_t ___mode_4;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::currentKey
	Object_t * ___currentKey_5;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::currentValue
	Object_t * ___currentValue_6;
	// System.Boolean System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::invalid
	bool ___invalid_7;
};
struct Enumerator_t2793_StaticFields{
	// System.String System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>::xstr
	String_t* ___xstr_8;
};
