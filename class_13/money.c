/*
    发奖学金
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int qz[n], qm[n];
    double max = 0, temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &qz[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &qm[i]);
    }
    for (int i = 0; i < n; i++) {
        temp = qz[i] * 0.4 + qm[i] * 0.6;
        if (temp > max) {
            max = temp;
        }
    }
    printf("%.2f", max);
}