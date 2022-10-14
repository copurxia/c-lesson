#include <stdio.h>

int main() {
    int n, count = 0;
    int a[10];
    if (scanf("%d", &n)) {
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &a[i])) {
                count++;
                if (i == 0) {
                    continue;
                } else if (i == n - 1) {
                    printf("%d", a[i] - a[i - 1]);
                } else if (i % 3 == 0) {
                    count = 0;
                    printf("%d\n", a[i] - a[i - 1]);
                } else {
                    printf("%d ", a[i] - a[i - 1]);
                }
            }
        }
    }
}