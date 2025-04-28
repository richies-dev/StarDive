#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MoneySoundLogic
struct  MoneySoundLogic_t151  : public MonoBehaviour_t24
{
	// UnityEngine.AudioClip MoneySoundLogic::BoughtItem
	AudioClip_t149 * ___BoughtItem_2;
	// System.Int32 MoneySoundLogic::LastMoney
	int32_t ___LastMoney_3;
	// UnityEngine.AudioSource MoneySoundLogic::AudSrc
	AudioSource_t150 * ___AudSrc_4;
};
