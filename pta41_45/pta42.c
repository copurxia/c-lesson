/*
  题目：整除光棍
  时间：2022.10.10
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n, count = 1, rest = 1;
    if (scanf("%d", &n)) {
        while (rest < n) {
            rest = rest * 10 + 1;
            count++;
        }
        while (rest % n != 0) {
            printf("%d", rest / n);
            rest = rest % n * 10 + 1;
            count++;
        }
        printf("%d %d", rest / n, count);
    }
}