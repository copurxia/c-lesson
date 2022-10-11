/*
  题目：黑洞数
  时间：2022.10.10
  作者：Copur
 */

#include <stdio.h>

int sort(int n) {
    int a[3], temp;
    a[0] = n / 100;
    a[1] = n / 10 % 10;
    a[2] = n % 10;
    for (int i = 0; i < 3 - 1; i++)
        for (int j = 0; j < 3 - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    n = a[0] * 100 + a[1] * 10 + a[2];
    return n;
}

int main() {
    int a, b = 0, count = 1;
    if (scanf("%d", &a)) {
        do {
            a = count > 1 ? sort(b - a) : sort(a);
            b = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
            printf("%d: %d - %d = %d\n", count, b, a, b - a);
            count++;
        } while (b - a != 495 && b - a != 0);
    }
}
