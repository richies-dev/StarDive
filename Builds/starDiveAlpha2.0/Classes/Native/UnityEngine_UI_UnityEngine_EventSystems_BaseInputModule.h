﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t253;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t260;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t250;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t247  : public UIBehaviour_t251
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t253 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t260 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t250 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t248 * ___m_BaseEventData_5;
};
