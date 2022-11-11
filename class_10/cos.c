/*
    使用函数求余弦函数的近似值
*/

#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main() {
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double facto(double x) {
    double out = 1;
    for (int i = 1; i <= x; i++) {
        out *= i;
    }
    return out;
}

double funcos(double e, double x) {
    double sum = 0;
    double temp = 1;
    for (int i = 0; temp >= e; i += 2) {
        temp = pow(x, i) / facto(i);
        sum += (temp * ((i / 2) % 2 * 2 - 1) * -1);
    }
    return sum;
}