#pragma once
#include <stdint.h>
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t53;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;
// AtmosphereSoundController
struct AtmosphereSoundController_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AtmosphereSoundController
struct  AtmosphereSoundController_t56  : public MonoBehaviour_t11
{
	// UnityEngine.AudioClip[] AtmosphereSoundController::Sounds
	AudioClipU5BU5D_t53* ___Sounds_2;
	// UnityEngine.AudioSource AtmosphereSoundController::src
	AudioSource_t54 * ___src_3;
	// UnityEngine.AudioClip AtmosphereSoundController::lastclip
	AudioClip_t55 * ___lastclip_4;
	// System.Boolean AtmosphereSoundController::start
	bool ___start_6;
};
struct AtmosphereSoundController_t56_StaticFields{
	// AtmosphereSoundController AtmosphereSoundController::instance
	AtmosphereSoundController_t56 * ___instance_5;
};
