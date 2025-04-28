#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t53;
// UnityEngine.AudioClip
struct AudioClip_t55;
// RockCrackSound
struct RockCrackSound_t140;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RockCrackSound
struct  RockCrackSound_t140  : public MonoBehaviour_t11
{
	// UnityEngine.AudioSource RockCrackSound::audSrc
	AudioSource_t54 * ___audSrc_2;
	// UnityEngine.AudioClip[] RockCrackSound::Clips
	AudioClipU5BU5D_t53* ___Clips_3;
	// UnityEngine.AudioClip RockCrackSound::smallExplosion
	AudioClip_t55 * ___smallExplosion_4;
	// UnityEngine.AudioClip RockCrackSound::BigExplosion
	AudioClip_t55 * ___BigExplosion_5;
	// UnityEngine.AudioClip RockCrackSound::TeleportSound
	AudioClip_t55 * ___TeleportSound_6;
};
struct RockCrackSound_t140_StaticFields{
	// RockCrackSound RockCrackSound::x
	RockCrackSound_t140 * ___x_7;
};
