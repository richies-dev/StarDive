#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t997;
// System.Net.WebRequest
struct WebRequest_t986;
// System.Uri
struct Uri_t987;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4219 (HttpRequestCreator_t997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t986 * HttpRequestCreator_Create_m4220 (HttpRequestCreator_t997 * __this, Uri_t987 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
