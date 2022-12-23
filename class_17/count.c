/*
    统计各位数字之和是5的数
*/

#include <stdio.h>

int is(int number);
void count_sum(int a, int b);

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

int is(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum == 5 ? 1 : 0;
}

void count_sum(int a, int b) {
    int count = 0, sum = 0;
    for (int i = a; i <= b; i++) {
        if (is(i)) {
            count++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d", count, sum);
}