/*
    369寝室
*/

#include <stdio.h>

int main() {
    int n = 0, x, y, z, a[3], status;
    scanf("%d %d %d", &x, &y, &z);
    for (n = 0; n < 100; n++) {
        x++;
        y++;
        z++;
        for (int i = 0; i < 3; i++) {
            a[i] = 0;
        }

        if (x % 10 == 3 || x % 10 == 6 || x % 10 == 9) {
            a[x % 10 / 3 - 1]++;
        }
        if (y % 10 == 3 || y % 10 == 6 || y % 10 == 9) {
            a[y % 10 / 3 - 1]++;
        }
        if (z % 10 == 3 || z % 10 == 6 || z % 10 == 9) {
            a[z % 10 / 3 - 1]++;
        }
        status = 1;
        for (int i = 0; i < 3; i++) {
            if (a[i] == 0) {
                status = 0;
                break;
            }
        }
        if (status) {
            printf("%d", n + 1);
            break;
        }
    }
    if (n == 100) {
        printf("so sad!");
    }
}