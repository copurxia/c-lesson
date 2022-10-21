#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n)) {
        if (n / 10000 > 0) {
            printf("%04d-%02d", n / 100, n % 100);
        } else if (n % 10000 / 100 < 22) {
            printf("20%02d-%02d", n % 10000 / 100, n % 100);
        } else {
            printf("19%02d-%02d", n % 10000 / 100, n % 100);
        }
    }
}