#include "utils.h"
#include "parser.tab.h"

/* Определение yylval */
YYSTYPE yylval;

double get_infinity(void) {
    return HUGE_VAL;
}

double get_nan(void) {
    return NAN;
}

int is_infinity(double x) {
    return isinf(x);
}

int is_nan(double x) {
    return isnan(x);
}