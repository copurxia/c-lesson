/*
  题目：输出整数各位数字
  时间：2022.10.8
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n)) {
        if (!n) {
            printf("0");
        } else {
            int a[10];
            int i = 0;
            while (n) {
                a[i] = n % 10;
                n /= 10;
                i++;
            }
            for (int j = i - 1; j >= 0; j--) {
                printf("%d ", a[j]);
            }
        }
    }
}