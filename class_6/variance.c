#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a[1000], avr = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        avr += (a[i] / n);
    }
    for (int i = 0; i < n; i++) {
        sum += (pow(a[i] - avr, 2) / n);
    }
    printf("%.5f", sqrt(sum));
}