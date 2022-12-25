/*
    行程长度压缩
*/

#include <stdio.h>

int main() {
    int count = 1;
    char a[1000], sign;
    gets(a);
    sign = a[0];
    for (int i = 1; a[i] != '\0'; i++) {
        if (a[i] == sign) {
            count++;
        } else {
            printf("(%c,%d)", sign, count);
            sign = a[i];
            count = 1;
        }
    }
    if (count != 1) {
        printf("(%c,%d)", sign, count);
    }
}