﻿#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t271;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t320;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t274  : public MaskableGraphic_t300
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t271 * ___m_FontData_23;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_24;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t320 * ___m_TextCache_25;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t320 * ___m_TextCacheForLayout_26;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_29;
};
struct Text_t274_StaticFields{
	// System.Single UnityEngine.UI.Text::kEpsilon
	float ___kEpsilon_27;
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t4 * ___s_DefaultText_28;
};
