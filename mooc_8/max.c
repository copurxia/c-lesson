/*
    求最大字符串
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char a[n][81];
    for (int i = 0; i < n; i++) {
        gets(a[i]);
    }
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (strcmp(a[i], a[max]) > 0) {
            max = i;
        }
    }
    puts(a[max]);
}