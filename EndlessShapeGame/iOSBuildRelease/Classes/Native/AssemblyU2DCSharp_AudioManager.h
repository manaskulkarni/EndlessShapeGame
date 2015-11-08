#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t156;
// UnityEngine.AudioSource
struct AudioSource_t157;
// AudioManager
struct AudioManager_t153;
// Manager
#include "AssemblyU2DCSharp_Manager.h"
// AudioManager
struct  AudioManager_t153  : public Manager_t155
{
	// UnityEngine.AudioClip AudioManager::backgroundMusic
	AudioClip_t156 * ___backgroundMusic_2;
	// UnityEngine.AudioSource AudioManager::<audioPlayer>k__BackingField
	AudioSource_t157 * ___U3CaudioPlayerU3Ek__BackingField_3;
	// System.Single AudioManager::<originalVolume>k__BackingField
	float ___U3CoriginalVolumeU3Ek__BackingField_4;
};
struct AudioManager_t153_StaticFields{
	// AudioManager AudioManager::<inst>k__BackingField
	AudioManager_t153 * ___U3CinstU3Ek__BackingField_5;
};
