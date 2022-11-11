/*
    十进制转二进制V2
*/

#include <stdio.h>

void dectobin(int n);

int main() {
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin(int n) {
    if (n < 2) {
        printf("%d", n);
    } else {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}