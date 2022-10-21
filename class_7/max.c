#include <stdio.h>

int main() {
    int n, a[300], max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[max]) {
            max = i;
        }
    }
    printf("%d\n", max + 1);
}