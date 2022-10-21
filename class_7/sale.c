#include <stdio.h>

int main() {
    int n;
    double m, p;
    if (scanf("%d %lf", &n, &m)) {
        for (int i = 0; i < n; i++) {
            if (scanf("%lf", &p)) {
                if (p < m) {
                    printf("On Sale! %.1f\n", p);
                }
            }
        }
    }
}