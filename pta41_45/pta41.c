/*
  题目：计算阶乘和
  时间：2022.10.9
  作者：Copur
 */
#include <stdio.h>

int facto(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * facto(n - 1);
    };
}

int main() {
    int n, sum = 0;
    if (scanf("%d", &n)) {
        for (int i = 1; i <= n; i++) {
            sum += facto(i);
        }
        printf("%d", sum);
    }
}