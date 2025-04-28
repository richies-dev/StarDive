#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t924;
// System.Net.WebRequest
struct WebRequest_t919;
// System.Uri
struct Uri_t920;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3974 (FileWebRequestCreator_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t919 * FileWebRequestCreator_Create_m3975 (FileWebRequestCreator_t924 * __this, Uri_t920 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
