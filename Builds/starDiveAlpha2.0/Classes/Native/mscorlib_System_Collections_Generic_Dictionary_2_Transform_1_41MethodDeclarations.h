﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t3098;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t391;
struct Event_t391_marshaled;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m18272(__this, ___object, ___method, method) (( void (*) (Transform_1_t3098 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14511_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18273(__this, ___key, ___value, method) (( DictionaryEntry_t967  (*) (Transform_1_t3098 *, Event_t391 *, int32_t, MethodInfo*))Transform_1_Invoke_m14512_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18274(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3098 *, Event_t391 *, int32_t, AsyncCallback_t380 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14513_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18275(__this, ___result, method) (( DictionaryEntry_t967  (*) (Transform_1_t3098 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14514_gshared)(__this, ___result, method)
