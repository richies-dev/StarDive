#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t180;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t177;
// UnityEngine.GameObject
struct GameObject_t59;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t178;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t182;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t183;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C" void EventSystem__ctor_m679 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C" void EventSystem__cctor_m680 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" EventSystem_t180 * EventSystem_get_current_m681 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C" void EventSystem_set_current_m682 (Object_t * __this /* static, unused */, EventSystem_t180 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" bool EventSystem_get_sendNavigationEvents_m683 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C" void EventSystem_set_sendNavigationEvents_m684 (EventSystem_t180 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C" int32_t EventSystem_get_pixelDragThreshold_m685 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C" void EventSystem_set_pixelDragThreshold_m686 (EventSystem_t180 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C" BaseInputModule_t177 * EventSystem_get_currentInputModule_m687 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" GameObject_t59 * EventSystem_get_firstSelectedGameObject_m688 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_set_firstSelectedGameObject_m689 (EventSystem_t180 * __this, GameObject_t59 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" GameObject_t59 * EventSystem_get_currentSelectedGameObject_m690 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C" GameObject_t59 * EventSystem_get_lastSelectedGameObject_m691 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C" void EventSystem_UpdateModules_m692 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C" bool EventSystem_get_alreadySelecting_m693 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventSystem_SetSelectedGameObject_m694 (EventSystem_t180 * __this, GameObject_t59 * ___selected, BaseEventData_t178 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C" BaseEventData_t178 * EventSystem_get_baseEventDataCache_m695 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_SetSelectedGameObject_m696 (EventSystem_t180 * __this, GameObject_t59 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C" int32_t EventSystem_RaycastComparer_m697 (Object_t * __this /* static, unused */, RaycastResult_t184  ___lhs, RaycastResult_t184  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void EventSystem_RaycastAll_m698 (EventSystem_t180 * __this, PointerEventData_t182 * ___eventData, List_1_t183 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C" bool EventSystem_IsPointerOverGameObject_m699 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C" bool EventSystem_IsPointerOverGameObject_m700 (EventSystem_t180 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C" void EventSystem_OnEnable_m701 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C" void EventSystem_OnDisable_m702 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C" void EventSystem_TickModules_m703 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C" void EventSystem_Update_m704 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C" void EventSystem_ChangeEventModule_m705 (EventSystem_t180 * __this, BaseInputModule_t177 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C" String_t* EventSystem_ToString_m706 (EventSystem_t180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
