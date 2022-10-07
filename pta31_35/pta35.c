/*
  题目：猴子吃桃问题
  时间：2022.10.7
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n, sum = 1;
    if (scanf("%d", &n)) {
        for (int i = 1; i < n; i++) {
            sum = (sum + 1) * 2;
        }
    }
    printf("%d", sum);
}