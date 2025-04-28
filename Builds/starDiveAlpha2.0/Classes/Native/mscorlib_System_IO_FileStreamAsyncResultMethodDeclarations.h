#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1525;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1278;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IAsyncResult
struct IAsyncResult_t379;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m8265 (FileStreamAsyncResult_t1525 * __this, AsyncCallback_t380 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m8266 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m8267 (FileStreamAsyncResult_t1525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1278 * FileStreamAsyncResult_get_AsyncWaitHandle_m8268 (FileStreamAsyncResult_t1525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m8269 (FileStreamAsyncResult_t1525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
