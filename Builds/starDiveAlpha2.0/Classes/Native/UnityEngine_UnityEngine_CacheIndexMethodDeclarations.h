#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t684;
struct CacheIndex_t684_marshaled;

void CacheIndex_t684_marshal(const CacheIndex_t684& unmarshaled, CacheIndex_t684_marshaled& marshaled);
void CacheIndex_t684_marshal_back(const CacheIndex_t684_marshaled& marshaled, CacheIndex_t684& unmarshaled);
void CacheIndex_t684_marshal_cleanup(CacheIndex_t684_marshaled& marshaled);
