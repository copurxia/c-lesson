/*
    寻找孪生素数
*/

#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    while (1) {
        n++;
        if (prime(n) && prime(n + 2)) {
            printf("%d %d", n, n + 2);
            break;
        }
    }
}