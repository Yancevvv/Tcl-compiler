#ifndef UTILS_H
#define UTILS_H

#include <math.h>

/* Функции для работы с бесконечностью и NaN */
double get_infinity(void);
double get_nan(void);
int is_infinity(double x);
int is_nan(double x);

#endif