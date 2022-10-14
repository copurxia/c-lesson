#include <stdio.h>

int main() {
    int n;
    int a[10];
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }
    printf("%d", a[n - 1]);
}