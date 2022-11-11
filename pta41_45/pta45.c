/*
  题目：找完数
  时间：2022.10.10
  作者：Copur
 */
#include <math.h>
#include <stdio.h>

int prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int per(int n) {
    int sum = 1;
    for (int j = 2; j <= n / 2; j++) {
        if (n % j == 0) {
            sum += j;
        }
    }
    return sum == n;
}

int main() {
    int a, b, count = 0;
    if (scanf("%d %d", &a, &b)) {
        for (int i = a; i <= b; i++) {
            if (!prime(i)) {
                if (per(i)) {
                    printf("%d = 1", i);
                    for (int j = 2; j <= i / 2; j++) {
                        if (i % j == 0) {
                            printf(" + %d", j);
                        }
                    }
                    printf("\n");
                    count++;
                }
            }
        }
        if (count == 0) {
            printf("None\n");
        }
    }
}