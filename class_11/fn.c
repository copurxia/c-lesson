/*
    一元二次方程
*/

#include <stdio.h>
#include <math.h>

int func(double a, double b, double c, double *re, double *re2) {
    double delta = b * b - 4 * a * c;
    if (delta == 0) {
        *re = b / 2;
        return 1;
    } else if (delta > 0) {
        *re = (-b + sqrt(delta)) / 2 / a;
        *re2 = (-b - sqrt(delta)) / 2 / a;
        return 2;
    }
    return 0;
}
