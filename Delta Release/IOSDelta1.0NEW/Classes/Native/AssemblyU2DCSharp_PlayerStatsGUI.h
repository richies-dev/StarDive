#pragma once
#include <stdint.h>
// UnityEngine.GUIText
struct GUIText_t91;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStatsGUI
struct  PlayerStatsGUI_t92  : public MonoBehaviour_t11
{
	// UnityEngine.GUIText PlayerStatsGUI::Money
	GUIText_t91 * ___Money_2;
	// UnityEngine.GUIText PlayerStatsGUI::MoneyAmt
	GUIText_t91 * ___MoneyAmt_3;
	// UnityEngine.GUIText PlayerStatsGUI::Ammo
	GUIText_t91 * ___Ammo_4;
	// System.Int32 PlayerStatsGUI::fontsize
	int32_t ___fontsize_5;
	// System.Boolean PlayerStatsGUI::SetScale
	bool ___SetScale_6;
	// System.Single PlayerStatsGUI::scaleSize
	float ___scaleSize_7;
	// System.Single PlayerStatsGUI::ScoreFontSizeModifier
	float ___ScoreFontSizeModifier_8;
};
