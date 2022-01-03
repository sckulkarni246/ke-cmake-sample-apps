#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "g_config.h"

#ifdef BUILD_CALC_F0
int64_t f0_add(int32_t a, int32_t b);
int64_t f0_sub(int32_t a, int32_t b);
int64_t f0_mul(int32_t a, int32_t b);
float_t f0_div(int32_t a, int32_t b);
#endif