#pragma once

#include <stdint.h>

#include "Core/Log.h"

#ifdef ZN_DEBUG
	#define ZN_ASSERT(x, ...) { if(!(x)) {LogError(__VA_ARGS__); __debugbreak(); } }
#else
	#define ZN_ASSERT(x, ...)
#endif