/*
    输出一个整数的逆序数
*/

#include <stdio.h>

int rev(int n) {
    if (n < 0) {
        printf("-");
        n *= -1;
    }
    while (n % 10 == 0) {
        n /= 10;
    }
    while (n > 0) {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    rev(n);
}