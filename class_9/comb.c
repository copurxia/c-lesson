/*
    组合数的和
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int mono[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &mono[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += (mono[i] * 10 * (n - 1));
        for (int j = 0; j < n; j++) {
            sum += mono[j];
        }
        sum -= mono[i];
    }
    printf("%d", sum);
}