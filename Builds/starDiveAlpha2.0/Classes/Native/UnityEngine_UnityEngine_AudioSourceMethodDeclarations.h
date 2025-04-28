#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.AudioClip
struct AudioClip_t149;

// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m902 (AudioSource_t150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m904 (AudioSource_t150 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m3535 (AudioSource_t150 * __this, uint64_t ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m903 (AudioSource_t150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m3536 (AudioSource_t150 * __this, AudioClip_t149 * ___clip, float ___volumeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m806 (AudioSource_t150 * __this, AudioClip_t149 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
