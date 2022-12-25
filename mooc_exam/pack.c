/*
    计算行李费
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 10) {
        printf("0");
    } else if (n <= 20) {
        printf("%d", n * 2);
    } else {
        printf("%d", n * 3);
    }
}