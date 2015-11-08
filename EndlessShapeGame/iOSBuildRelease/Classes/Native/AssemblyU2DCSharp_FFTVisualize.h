#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t157;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.FFTWindow
#include "UnityEngine_UnityEngine_FFTWindow.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// FFTVisualize
struct  FFTVisualize_t158  : public MonoBehaviour_t23
{
	// UnityEngine.AudioSource FFTVisualize::audioPlayer
	AudioSource_t157 * ___audioPlayer_2;
	// UnityEngine.FFTWindow FFTVisualize::window
	int32_t ___window_3;
	// System.Int32 FFTVisualize::samples
	int32_t ___samples_4;
	// UnityEngine.Vector3 FFTVisualize::multiplier
	Vector3_t28  ___multiplier_5;
};
