﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t312;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C" void OnValidateInput__ctor_m1165 (OnValidateInput_t312 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C" uint16_t OnValidateInput_Invoke_m1166 (OnValidateInput_t312 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidateInput_t312(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValidateInput_BeginInvoke_m1167 (OnValidateInput_t312 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C" uint16_t OnValidateInput_EndInvoke_m1168 (OnValidateInput_t312 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
