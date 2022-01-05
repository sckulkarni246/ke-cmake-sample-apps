#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "f1.h"

#ifdef BUILD_CALC_F1
float_t f1_percentage(int32_t a, int32_t b) {
    float_t res = 100.0 * (float)(a/b);
    return res;
}

int64_t f1_factorial(int32_t a) {
    int64_t res = 1;
    for(; a>1; --a)
        res = res * a;
    return res;
}

int64_t f1_power(int32_t a, int32_t b) {
    int64_t res = 1;
    for(; b>0; --b)
        res = res * a;
    return res;
}

float_t f1_inverse(int32_t a) {
    float_t res = 1/a;
    return res;
}

#endif