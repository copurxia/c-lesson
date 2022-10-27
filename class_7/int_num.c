#include <stdio.h>

int main() {
    int temp, n, count[10], max = 0;
    for (int i = 0; i < 10; i++) {
        count[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        count[temp]++;
    }
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[max]) {
            max = i;
        }
    }
    printf("%d %d", max, count[max]);
}