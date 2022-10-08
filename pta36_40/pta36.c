/*
  题目：韩信点兵
  时间：2022.10.8
  作者：Copur
 */

#include <stdio.h>

int main() {
    for (int i = 0;; i++) {
        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}