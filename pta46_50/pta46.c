/*
  题目：爬动的蠕虫
  时间：2022.10.11
  作者：Copur
 */

#include <stdio.h>

int main() {
    int n, u, d, t, len = 0;
    if (scanf("%d %d %d", &n, &u, &d)) {
        for (t = 1; len < n; t++) {
            if (t % 2) {
                len += u;
            } else {
                len -= d;
            }
        }
        printf("%d", t - 1);
    }
}