/*
  题目：统计素数并求和
  时间：2022.10.7
  作者：Copur
 */

#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n == 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m, n, sum = 0, count = 0;
    if (scanf("%d %d", &m, &n)) {
        for (int i = m; i <= n; i++) {
            if (prime(i)) {
                count++;
                sum += i;
            }
        }
        printf("%d %d", count, sum);
    }
}