#include <stdio.h>

int main() {
    int a[20], input;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &input);
    for (int i = 0; i < 9; i++) {
        if (a[i] >= input) {
            for (int j = 10; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = input;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
}