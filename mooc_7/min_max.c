/*
    求一组数中的最大值、最小值及总和
*/

#include <stdio.h>

int f(int a[], int n, int *pmax, int *pmin);

int main() {
    int n, min, max;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    int sum = f(a, n, &max, &min);
    printf("%d %d %d", max, min, sum);
}

int f(int a[], int n, int *pmax, int *pmin) {
    int sum = 0;
    *pmax = *a;
    *pmin = *a;
    for (int i = 0; i < n; i++) {
        if (*(a + i) > *pmax) {
            *pmax = *(a + i);
        }
        if (*(a + i) < *pmin) {
            *pmin = *(a + i);
        }
        sum += *(a + i);
    }
    return sum;
}