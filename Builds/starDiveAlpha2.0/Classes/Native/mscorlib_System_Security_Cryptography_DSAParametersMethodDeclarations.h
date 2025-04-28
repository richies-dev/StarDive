#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1155;
struct DSAParameters_t1155_marshaled;

void DSAParameters_t1155_marshal(const DSAParameters_t1155& unmarshaled, DSAParameters_t1155_marshaled& marshaled);
void DSAParameters_t1155_marshal_back(const DSAParameters_t1155_marshaled& marshaled, DSAParameters_t1155& unmarshaled);
void DSAParameters_t1155_marshal_cleanup(DSAParameters_t1155_marshaled& marshaled);
