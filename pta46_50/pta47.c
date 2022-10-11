/*
  题目：二进制前导的零
  时间：2022.10.11
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n = 1, i = 1, in;
    if (scanf("%d", &in)) {
        if (in > 0) {
            while (in > n) {
                n *= 2;
                i++;
            }
            printf("%d", 32 - i);
        } else if (in == 0) {
            printf("32");
        } else {
            printf("0");
        }
    }
}