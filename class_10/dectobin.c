/*
    十进制转二进制
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
    static int count = 0;
    if (n > 0) {
        count++;
        dectobin(n / 2);
        printf("%d", n % 2);
    }
    if (count == 0) {
        printf("%d", 0);
    }
}