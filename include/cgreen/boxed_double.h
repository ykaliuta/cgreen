#ifndef BOXED_DOUBLE_HEADER
#define BOXED_DOUBLE_HEADER

#include <stdint.h>

intptr_t box_double(double d);
double as_double(intptr_t boxed_double);
double unbox_double(intptr_t boxed_double);
#define d(x) box_double(x)

typedef union {
    double value;
} BoxedDouble;

#endif /* BOXED_DOUBLE_HEADER */