#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t641;
struct WebCamDevice_t641_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3307 (WebCamDevice_t641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3308 (WebCamDevice_t641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t641_marshal(const WebCamDevice_t641& unmarshaled, WebCamDevice_t641_marshaled& marshaled);
void WebCamDevice_t641_marshal_back(const WebCamDevice_t641_marshaled& marshaled, WebCamDevice_t641& unmarshaled);
void WebCamDevice_t641_marshal_cleanup(WebCamDevice_t641_marshaled& marshaled);
