/*
    通过指针进行数组遍历
*/

#include <stdio.h>

int main() {
    int an, bn;
    scanf("%d", &an);
    int a[an], *ap;
    for (ap = a; ap < a + an; ap++) {
        scanf("%d", ap);
    }
    scanf("%d", &bn);
    int b[bn], *bp;
    for (bp = b; bp < b + bn; bp++) {
        scanf("%d", bp);
    }
    ap = a;
    bp = b;
    int final[an + bn];
    int *finalp = final;
    while (finalp - final < an + bn) {
        if (ap - a == an) {
            *finalp = *bp;
            bp++;
        } else if (bp - b == bn) {
            *finalp = *bp;
            ap++;
        } else {
            if (*ap < *bp) {
                *finalp = *bp;
                bp++;
            } else {
                *finalp = *ap;
                ap++;
            }
        }
        finalp++;
    }
    finalp = final;
    for (int i = 0; i < an + bn; i++) {
        printf("%d ", *(finalp + i));
    }
}