#include <stdio.h>

int main() {
    int n, max = 0, cur = 1;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (!cur) {
            break;
        }
        for (int j = 0; j < i; j++) {
            if (a[i][j] != 0) {
                cur = 0;
                break;
            }
        }
    }
    if (cur) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}