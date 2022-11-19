/*
    字母串
*/

#include <stdio.h>

int main() {
    int n;
    char a[2000000];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        gets(a);
        int status = 1;
        for (int j = 1; a[j] != '\0'; j++) {
            if (a[j] >= 'A' && a[j] <= 'Z') {
                if (a[j] != a[j - 1] - 32 && a[j] != a[j - 1] + 1) {
                    status = 0;
                    break;
                }
            } else if (a[j] >= 'a' && a[j] <= 'z') {
                if (a[j] != a[j - 1] + 32 && a[j] != a[j - 1] - 1) {
                    status = 0;
                    break;
                }
            }
        }
        if (status) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
}