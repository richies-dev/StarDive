#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t930;
// System.Net.WebRequest
struct WebRequest_t919;
// System.Uri
struct Uri_t920;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m3982 (HttpRequestCreator_t930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t919 * HttpRequestCreator_Create_m3983 (HttpRequestCreator_t930 * __this, Uri_t920 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
