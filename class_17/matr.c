/*
    矩阵运算
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i + j != n - 1 && i != n - 1 && j != n - 1) {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
}
