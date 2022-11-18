#include <stdio.h>

void sort(int *x, int n);

int main() {
    int *p, i, a[10];
    p = a;
    for (i = 0; i < 10; i++) scanf("%d", p++);
    p = a;
    sort(a, 10);
    for (i = 0; i < 10; i++) printf("%4d", *p++);
    printf("\n");
    return 0;
}

void sort(int *x, int n) {
    for (int i = 0; i < n; i++) {
        int *max = x + i;
        for (int j = 0; j < n - i; j++) {
            if (*(x + i + j) > *max) {
                max = x + i + j;
            }
        }
        if (max != x + i) {
            int t = *(x + i);
            *(x + i) = *max;
            *max = t;
        }
    }
}
