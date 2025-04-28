#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t331;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t411;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t326;
// UnityEngine.UI.Graphic
struct Graphic_t351;
// UnityEngine.UI.Image
struct Image_t368;
// UnityEngine.Animator
struct Animator_t414;
// UnityEngine.RectTransform
struct RectTransform_t345;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t260;
// UnityEngine.Sprite
struct Sprite_t367;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t252;
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" void Selectable__ctor_m1676 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
extern "C" void Selectable__cctor_m1677 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
extern "C" List_1_t411 * Selectable_get_allSelectables_m1678 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
extern "C" Navigation_t395  Selectable_get_navigation_m1679 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
extern "C" void Selectable_set_navigation_m1680 (Selectable_t331 * __this, Navigation_t395  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
extern "C" int32_t Selectable_get_transition_m1681 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
extern "C" void Selectable_set_transition_m1682 (Selectable_t331 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C" ColorBlock_t338  Selectable_get_colors_m1683 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C" void Selectable_set_colors_m1684 (Selectable_t331 * __this, ColorBlock_t338  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
extern "C" SpriteState_t413  Selectable_get_spriteState_m1685 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
extern "C" void Selectable_set_spriteState_m1686 (Selectable_t331 * __this, SpriteState_t413  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
extern "C" AnimationTriggers_t326 * Selectable_get_animationTriggers_m1687 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
extern "C" void Selectable_set_animationTriggers_m1688 (Selectable_t331 * __this, AnimationTriggers_t326 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
extern "C" Graphic_t351 * Selectable_get_targetGraphic_m1689 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
extern "C" void Selectable_set_targetGraphic_m1690 (Selectable_t331 * __this, Graphic_t351 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
extern "C" bool Selectable_get_interactable_m1691 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C" void Selectable_set_interactable_m1692 (Selectable_t331 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
extern "C" bool Selectable_get_isPointerInside_m1693 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
extern "C" void Selectable_set_isPointerInside_m1694 (Selectable_t331 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
extern "C" bool Selectable_get_isPointerDown_m1695 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
extern "C" void Selectable_set_isPointerDown_m1696 (Selectable_t331 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
extern "C" bool Selectable_get_hasSelection_m1697 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
extern "C" void Selectable_set_hasSelection_m1698 (Selectable_t331 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
extern "C" Image_t368 * Selectable_get_image_m1699 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
extern "C" void Selectable_set_image_m1700 (Selectable_t331 * __this, Image_t368 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
extern "C" Animator_t414 * Selectable_get_animator_m1701 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
extern "C" void Selectable_Awake_m1702 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
extern "C" void Selectable_OnCanvasGroupChanged_m1703 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
extern "C" bool Selectable_IsInteractable_m1704 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" void Selectable_OnDidApplyAnimationProperties_m1705 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" void Selectable_OnEnable_m1706 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
extern "C" void Selectable_OnSetProperty_m1707 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" void Selectable_OnDisable_m1708 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
extern "C" int32_t Selectable_get_currentSelectionState_m1709 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
extern "C" void Selectable_InstantClearState_m1710 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void Selectable_DoStateTransition_m1711 (Selectable_t331 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
extern "C" Selectable_t331 * Selectable_FindSelectable_m1712 (Selectable_t331 * __this, Vector3_t31  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
extern "C" Vector3_t31  Selectable_GetPointOnRectEdge_m1713 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, Vector2_t62  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
extern "C" void Selectable_Navigate_m1714 (Selectable_t331 * __this, AxisEventData_t260 * ___eventData, Selectable_t331 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
extern "C" Selectable_t331 * Selectable_FindSelectableOnLeft_m1715 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
extern "C" Selectable_t331 * Selectable_FindSelectableOnRight_m1716 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
extern "C" Selectable_t331 * Selectable_FindSelectableOnUp_m1717 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
extern "C" Selectable_t331 * Selectable_FindSelectableOnDown_m1718 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Selectable_OnMove_m1719 (Selectable_t331 * __this, AxisEventData_t260 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
extern "C" void Selectable_StartColorTween_m1720 (Selectable_t331 * __this, Color_t17  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
extern "C" void Selectable_DoSpriteSwap_m1721 (Selectable_t331 * __this, Sprite_t367 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
extern "C" void Selectable_TriggerAnimation_m1722 (Selectable_t331 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsHighlighted_m1723 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsPressed_m1724 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
extern "C" bool Selectable_IsPressed_m1725 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_UpdateSelectionState_m1726 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_EvaluateAndTransitionToSelectionState_m1727 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
extern "C" void Selectable_InternalEvaluateAndTransitionToSelectionState_m1728 (Selectable_t331 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerDown_m1729 (Selectable_t331 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerUp_m1730 (Selectable_t331 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerEnter_m1731 (Selectable_t331 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerExit_m1732 (Selectable_t331 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnSelect_m1733 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnDeselect_m1734 (Selectable_t331 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
extern "C" void Selectable_Select_m1735 (Selectable_t331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
