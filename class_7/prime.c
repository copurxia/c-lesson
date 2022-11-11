#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n == 1) {
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