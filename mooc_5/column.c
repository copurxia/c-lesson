#include <stdio.h>

int main() {
    int n, a[100], column = 0, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        if (column) {
            if (a[i] < a[i - 1]) {
                printf("%d\n", a[i - 1]);
            }
            column = 0;
        }
        if (a[i] > a[i - 1]) {
            column = 1;
        }
    }
}