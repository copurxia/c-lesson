/*
  题目：求分数序列前N项和
  时间：2022.10.7
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n;
    double a = 2, b = 1, sum = 0, t;
    if (scanf("%d", &n)) {
        for (size_t i = 0; i < n; i++) {
            sum += (a / b);
            t = b;
            b = a;
            a += t;
        }
        printf("%.2f", sum);
    }
}