#include <stdio.h>

double mypower(double x, int n);

int main() {
    int n;
    double a;
    scanf("%lf%d", &a, &n);
    printf("%.2f\n", mypower(a, n));
}

double mypower(double x, int n) {
    if (n == 0) {
        return 1;
    }

    double orx = x;
    for (int i = 0; i < n - 1; i++) {
        x *= orx;
    }
    return x;
}