#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AudioManager
struct AudioManager_t153;
// UnityEngine.AudioSource
struct AudioSource_t157;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;
// System.Collections.IEnumerator
struct IEnumerator_t222;

// System.Void AudioManager::.ctor()
extern "C" void AudioManager__ctor_m671 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource AudioManager::get_audioPlayer()
extern "C" AudioSource_t157 * AudioManager_get_audioPlayer_m672 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::set_audioPlayer(UnityEngine.AudioSource)
extern "C" void AudioManager_set_audioPlayer_m673 (AudioManager_t153 * __this, AudioSource_t157 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioManager::get_originalVolume()
extern "C" float AudioManager_get_originalVolume_m674 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::set_originalVolume(System.Single)
extern "C" void AudioManager_set_originalVolume_m675 (AudioManager_t153 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioManager AudioManager::get_inst()
extern "C" AudioManager_t153 * AudioManager_get_inst_m676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::set_inst(AudioManager)
extern "C" void AudioManager_set_inst_m677 (Object_t * __this /* static, unused */, AudioManager_t153 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Awake()
extern "C" void AudioManager_Awake_m678 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Start()
extern "C" void AudioManager_Start_m679 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Play()
extern "C" void AudioManager_Play_m680 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnGameReset(System.Object,System.EventArgs)
extern "C" void AudioManager_OnGameReset_m681 (AudioManager_t153 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnGameStart(System.Object,System.EventArgs)
extern "C" void AudioManager_OnGameStart_m682 (AudioManager_t153 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnGameOver(System.Object,System.EventArgs)
extern "C" void AudioManager_OnGameOver_m683 (AudioManager_t153 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnGameRestart(System.Object,System.EventArgs)
extern "C" void AudioManager_OnGameRestart_m684 (AudioManager_t153 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnHighScore(System.Object,System.EventArgs)
extern "C" void AudioManager_OnHighScore_m685 (AudioManager_t153 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AudioManager::FadeOutPitch()
extern "C" Object_t * AudioManager_FadeOutPitch_m686 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AudioManager::FadeInPitch()
extern "C" Object_t * AudioManager_FadeInPitch_m687 (AudioManager_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
