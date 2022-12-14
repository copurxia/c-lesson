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
    int a[10000], l, count = 0, sum = 0;
    if (scanf("%d", &l)) {
        for (int i = 2; i <= 10000; i++) {
            if (l - sum < i) {
                break;
            }
            if (prime(i)) {
                a[count] = i;
                count++;
                sum += i;
            }
        }
        for (int i = 0; i < count - 1; i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[count - 1]);
        printf("count = %d", count);
    }
}
