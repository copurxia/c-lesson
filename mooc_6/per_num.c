/*
    判断是否为完数
*/

#include <stdio.h>

int per_num(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n;
    scanf("%d", &n);
    if (per_num(n)) {
        printf("是完数");
    } else {
        printf("不是完数");
    }
}