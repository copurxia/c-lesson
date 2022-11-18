/*
    删除数列中的指定数
*/

#include <stdio.h>

int del_num(int *p, int n, int x);

int main() {
    int a[10], *ap, n;
    ap = a;
    for (int i = 0; i < 10; i++) {
        scanf("%d", ap + i);
    }
    scanf("%d", &n);
    int dn = del_num(ap, 10, n);
    for (int i = 0; i < 10 - dn; i++) {
        printf("%d", *(a + i));
        if (i != 10 - dn - 1) {
            printf(" ");
        }
    }
}

int del_num(int *p, int n, int x) {
    int count = 0, *st;
    st = p;
    while (p + count < st + 10) {
        if (*(p + count) == x) {
            count++;
        } else {
            p++;
        }
        *p = *(p + count);
    }
    return count;
}