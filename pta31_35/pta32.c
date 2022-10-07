/*
  题目：求交错序列前N项和
  时间：2022.10.7
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    if (scanf("%d", &n)) {
        for (int i = 1; i <= n; i++) {
            sum += (i / (i * 2.0 - 1) * (i % 2 * 2 - 1));
        }
        printf("%.3f", sum);
    }
}
