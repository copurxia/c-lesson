/*
    血压测量异常值
*/

#include <stdio.h>

int main() {
    int n, a, b, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a < 90 || a > 140 || b < 60 || b > 90) {
            count++;
        }
    }
    printf("%d", count);
}