#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n == 1) {
        return 0;
    }
    int status = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            status = 0;
            break;
        }
    }
    return status;
}

int main() {
    int m, count = 0;
    if (scanf("%d", &m)) {
        for (int i = m - 1; i > 2 && count != 10; i--) {
            if (prime(i)) {
                printf("%6d", i);
                count++;
            }
        }
    }
}