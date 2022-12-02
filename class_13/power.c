/*
    城市居民电价计算
*/

#include <stdio.h>

int main() {
    int n;
    double cost;
    scanf("%d", &n);
    cost = 0.55 * n;
    if (n > 60) {
        cost += (0.05 * (n - 60));
    }
    printf("cost = %.2f\n", cost);
}