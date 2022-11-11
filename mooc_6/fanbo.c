/*
    递归求Fabonacci数列
*/
#include <stdio.h>

int fab(int n) {
    switch (n) {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    default:
        return fab(n - 1) + fab(n - 2);
        break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fab(n));
}