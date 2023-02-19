#pragma once

#ifdef __swift__
#include <stdint.h>
#include <stdlib.h>
#else
#include <cstdint>
#include <malloc.h>
#endif

typedef void* Window;
typedef void* NativeEvent;
