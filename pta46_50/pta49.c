/*
  题目：Have Fun with Numbers
  时间：2022.10.16
  作者：Copur
 */
#include <stdio.h>

int main() {
    int m, i;
    int a[10], b[10];
    if (scanf("%d", &m)) {
        int n = m;
        while (m > 0) {
            a[m % 10]++;
            m /= 10;
        }
        int temp = n * 2;
        while (temp > 0) {
            b[temp % 10]++;
            temp /= 10;
        }
        for (i = 0; i < 10; i++) {
            if (a[i] != b[i]) {
                printf("No\n");
                break;
            }
        }
        if (i == 10) {
            printf("Yes\n");
        }
        printf("%d", n * 2);
    }
}