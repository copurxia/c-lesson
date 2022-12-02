/*
    计算方阵的对角线上数之和
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int cube[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cube[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += cube[i][i];
        cube[i][i] = 0;
    }
    for (int i = 0; i < n; i++) {
        sum += cube[i][n - i - 1];
    }
    printf("%d", sum);
}