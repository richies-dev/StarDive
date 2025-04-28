#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1458;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1211;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IAsyncResult
struct IAsyncResult_t310;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m8029 (FileStreamAsyncResult_t1458 * __this, AsyncCallback_t311 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m8030 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m8031 (FileStreamAsyncResult_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1211 * FileStreamAsyncResult_get_AsyncWaitHandle_m8032 (FileStreamAsyncResult_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m8033 (FileStreamAsyncResult_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
