/*
  题目：求组合数
  时间：2022.10.11
  作者：Copur
 */
#include <stdio.h>

double facto(double n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * facto(n - 1);
    };
}

int main() {
    double m, n;
    if (scanf("%lf %lf", &m, &n)) {
        printf("result = %.0lf", facto(n) / (facto(m) * facto(n - m)));
    }
}