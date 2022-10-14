#include <stdio.h>

int main() {
    int i, j, an, bn, a[20], b[20], cn[20], count = 0;
    scanf("%d", &an);
    for (i = 0; i < an; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &bn);
    for (i = 0; i < bn; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < an; i++) {
        for (j = 0; j < bn; j++) {
            if (a[i] == b[j]) {
                break;
            }
        }
        if (j == bn) {
            int cc;
            for (cc = 0; cc < count; cc++) {
                if (a[i] == cn[cc]) {
                    break;
                }
            }
            if (cc == count) {
                cn[count] = a[i];
                count++;
            }
        }
    }
    for (i = 0; i < bn; i++) {
        for (j = 0; j < an; j++) {
            if (b[i] == a[j]) {
                break;
            }
        }
        if (j == an) {
            int cc;
            for (cc = 0; cc < count; cc++) {
                if (b[i] == cn[cc]) {
                    break;
                }
            }
            if (cc == count) {
                cn[count] = b[i];
                count++;
            }
        }
    }
    for (int i = 0; i < count - 1; i++) {
        printf("%d ", cn[i]);
    }
    printf("%d", cn[count - 1]);
}