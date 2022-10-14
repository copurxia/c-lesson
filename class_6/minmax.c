#include <stdio.h>

int main() {
    int n, t, count = 0, min = 0, max = 0;
    int a[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < a[min]) {
            min = i;
        }
    }
    t = a[min];
    a[min] = a[0];
    a[0] = t;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
    }
    t = a[max];
    a[max] = a[n - 1];
    a[n - 1] = t;
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}