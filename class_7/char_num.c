#include <stdio.h>

int main() {
    char a[80];
    int len = 0, count = 0;
    while (scanf("%c", &a[len])) {
        if (a[len] != '\n') {
            len++;
        } else {
            break;
        }
    }
    if (scanf("%c", &a[len])) {
        for (int i = 0; i < len; i++) {
            if (a[i] == a[len]) {
                count++;
            }
        }
        printf("%d", count);
    }
}