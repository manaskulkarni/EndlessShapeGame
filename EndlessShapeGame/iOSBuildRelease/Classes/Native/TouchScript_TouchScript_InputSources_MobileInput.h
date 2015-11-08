#pragma once
#include <stdint.h>
// TouchScript.Tags
struct Tags_t637;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t673;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t661;
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSource.h"
// TouchScript.InputSources.MobileInput
struct  MobileInput_t672  : public InputSource_t633
{
	// System.Boolean TouchScript.InputSources.MobileInput::DisableOnNonTouchPlatforms
	bool ___DisableOnNonTouchPlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MobileInput::Tags
	Tags_t637 * ___Tags_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState> TouchScript.InputSources.MobileInput::touchStates
	Dictionary_2_t673 * ___touchStates_7;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.InputSources.MobileInput::touchIds
	HashSet_1_t661 * ___touchIds_8;
};
