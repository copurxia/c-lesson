#include <stdio.h>

int main() {
    int n;
    double h, sumh = 0;
    if (scanf("%lf %d", &h, &n)) {
        if (n == 0) {
            printf("%.1lf %.1lf", sumh, sumh);
        } else {
            for (int i = 0; i < n - 1; i++) {
                sumh += h;
                h /= 2;
                sumh += h;
            }
            sumh += h;
            h /= 2;
            printf("%.1lf %.1lf", sumh, h);
        }
    }
}