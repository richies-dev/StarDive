#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t55;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MoneySoundLogic
struct  MoneySoundLogic_t85  : public MonoBehaviour_t11
{
	// UnityEngine.AudioClip MoneySoundLogic::BoughtItem
	AudioClip_t55 * ___BoughtItem_2;
	// System.Int32 MoneySoundLogic::LastMoney
	int32_t ___LastMoney_3;
	// UnityEngine.AudioSource MoneySoundLogic::AudSrc
	AudioSource_t54 * ___AudSrc_4;
};
