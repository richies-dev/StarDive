﻿#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t276;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.AspectRatioFitter/AspectMode
#include "UnityEngine_UI_UnityEngine_UI_AspectRatioFitter_AspectMode.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_t365  : public UIBehaviour_t181
{
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_2;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_3;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t276 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t334  ___m_Tracker_5;
};
