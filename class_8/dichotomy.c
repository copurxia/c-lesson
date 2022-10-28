#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int a[n], l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    while (l < r) {
        if (a[(l + r) / 2] < target) {
            l = (l + r) / 2 + 1;
        } else if (a[(l + r) / 2] > target) {
            r = (l + r) / 2;
        } else {
            printf("It's position is %d!", (l + r) / 2 + 1);
            break;
        }
    }
    if (l >= r) {
        printf("No data!");
    }
}