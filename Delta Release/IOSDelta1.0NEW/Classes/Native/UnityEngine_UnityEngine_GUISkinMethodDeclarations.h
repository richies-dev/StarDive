﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t576;
// UnityEngine.Font
struct Font_t270;
// UnityEngine.GUIStyle
struct GUIStyle_t580;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t596;
// UnityEngine.GUISettings
struct GUISettings_t594;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;

// System.Void UnityEngine.GUISkin::.ctor()
extern "C" void GUISkin__ctor_m2841 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m2842 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t270 * GUISkin_get_font_m2843 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C" void GUISkin_set_font_m2844 (GUISkin_t576 * __this, Font_t270 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t580 * GUISkin_get_box_m2845 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m2846 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t580 * GUISkin_get_label_m2847 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m2848 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t580 * GUISkin_get_textField_m2849 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m2850 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t580 * GUISkin_get_textArea_m2851 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m2852 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t580 * GUISkin_get_button_m2853 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m2854 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t580 * GUISkin_get_toggle_m2855 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m2856 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t580 * GUISkin_get_window_m2857 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m2858 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalSlider_m2859 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m2860 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalSliderThumb_m2861 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m2862 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t580 * GUISkin_get_verticalSlider_m2863 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m2864 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t580 * GUISkin_get_verticalSliderThumb_m2865 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m2866 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalScrollbar_m2867 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m2868 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalScrollbarThumb_m2869 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m2870 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalScrollbarLeftButton_m2871 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m2872 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t580 * GUISkin_get_horizontalScrollbarRightButton_m2873 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m2874 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t580 * GUISkin_get_verticalScrollbar_m2875 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m2876 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t580 * GUISkin_get_verticalScrollbarThumb_m2877 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m2878 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t580 * GUISkin_get_verticalScrollbarUpButton_m2879 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m2880 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t580 * GUISkin_get_verticalScrollbarDownButton_m2881 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m2882 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t580 * GUISkin_get_scrollView_m2883 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m2884 (GUISkin_t576 * __this, GUIStyle_t580 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t596* GUISkin_get_customStyles_m2885 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m2886 (GUISkin_t576 * __this, GUIStyleU5BU5D_t596* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t594 * GUISkin_get_settings_m2887 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t580 * GUISkin_get_error_m2888 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m2889 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" void GUISkin_BuildStyleCache_m2890 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" GUIStyle_t580 * GUISkin_GetStyle_m2891 (GUISkin_t576 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" GUIStyle_t580 * GUISkin_FindStyle_m2892 (GUISkin_t576 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m2893 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C" Object_t * GUISkin_GetEnumerator_m2894 (GUISkin_t576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
