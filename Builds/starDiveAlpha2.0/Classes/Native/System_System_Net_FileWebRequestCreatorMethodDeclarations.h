#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t991;
// System.Net.WebRequest
struct WebRequest_t986;
// System.Uri
struct Uri_t987;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4211 (FileWebRequestCreator_t991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t986 * FileWebRequestCreator_Create_m4212 (FileWebRequestCreator_t991 * __this, Uri_t987 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
