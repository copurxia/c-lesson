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
    int l, count = 0, sum = 0;
    if (scanf("%d", &l)) {
        int tempnum = 0;
        for (int i = 2; i <= 10000; i++) {
            if (l - sum < i) {
                break;
            }
            if (prime(i)) {
                if (tempnum) {
                    printf("%d ", tempnum);
                }
                tempnum = i;
                count++;
                sum += i;
            }
        }
        printf("%d\n", tempnum);
        printf("count = %d", count);
    }
}
