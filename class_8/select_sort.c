#include <stdio.h>

int main() {
    int n, a[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }
        if (max != i) {
            int t = a[max];
            a[max] = a[i];
            a[i] = t;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
}