#include <stdio.h>

int main() {
    int an, bn;
    scanf("%d", &an);
    int a[an];
    for (int i = 0; i < an; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &bn);
    int b[an];
    for (int i = 0; i < bn; i++) {
        scanf("%d", &b[i]);
    }
    int c[an + bn];
    int acur = 0, bcur = 0;
    for (int i = 0; i < an + bn; i++) {
        if (acur == an) {
            c[i] = b[bcur];
            bcur++;
        } else if (bcur == bn) {
            c[i] = a[acur];
            acur++;
        } else {
            if (a[acur] < b[bcur]) {
                c[i] = a[acur];
                acur++;

            } else {
                c[i] = b[bcur];
                bcur++;
            }
        }
    }
    for (int i = 0; i < an + bn - 1; i++) {
        printf("%d ", c[i]);
    }
    printf("%d ", c[an + bn - 1]);
}