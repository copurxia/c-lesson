#include <stdio.h>

int main() {
    int n;
    char c = 'A';
    if (scanf("%d", &n)) {
        while (n > 0) {
            for (int i = 0; i < n; i++) {
                printf("%c ", c);
                c += 1;
            }
            n--;
            printf("\n");
        }
    }
}