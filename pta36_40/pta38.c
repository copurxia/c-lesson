/*
  题目：支票面额
  时间：2022.10.8
  作者：Copur
 */

#include <stdio.h>

int main(void) {
    int n, y, f;
    int i, j;
    int is = 0;

    scanf("%d", &n);

    for (i = 0; i < 100; i++) {
        for (j = 0; j <= 100; j++) {
            if (n == 98 * i - 199 * j) {
                f = i;
                y = j;
                is = 1;
                break;
            }
        }
        if (1 == is) break;
    }

    if (0 == is) {
        printf("No Solution");
    } else {
        printf("%d.%d", y, f);
    }

    return 0;
}
