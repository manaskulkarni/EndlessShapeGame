#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t157;
// UnityEngine.AudioClip
struct AudioClip_t156;
// System.Single[]
struct SingleU5BU5D_t242;
// UnityEngine.FFTWindow
#include "UnityEngine_UnityEngine_FFTWindow.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m1129 (AudioSource_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m1130 (AudioSource_t157 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m1135 (AudioSource_t157 * __this, AudioClip_t156 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m4559 (AudioSource_t157 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m1132 (AudioSource_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m1131 (AudioSource_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C" void AudioSource_GetSpectrumDataHelper_m4560 (AudioSource_t157 * __this, SingleU5BU5D_t242* ___samples, int32_t ___channel, int32_t ___window, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AudioSource::GetSpectrumData(System.Int32,System.Int32,UnityEngine.FFTWindow)
extern "C" SingleU5BU5D_t242* AudioSource_GetSpectrumData_m1137 (AudioSource_t157 * __this, int32_t ___numSamples, int32_t ___channel, int32_t ___window, const MethodInfo* method) IL2CPP_METHOD_ATTR;
