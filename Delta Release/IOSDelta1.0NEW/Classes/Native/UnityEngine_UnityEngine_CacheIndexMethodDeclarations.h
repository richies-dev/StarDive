#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t614;
struct CacheIndex_t614_marshaled;

void CacheIndex_t614_marshal(const CacheIndex_t614& unmarshaled, CacheIndex_t614_marshaled& marshaled);
void CacheIndex_t614_marshal_back(const CacheIndex_t614_marshaled& marshaled, CacheIndex_t614& unmarshaled);
void CacheIndex_t614_marshal_cleanup(CacheIndex_t614_marshaled& marshaled);
