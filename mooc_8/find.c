/*
    查找字符串
*/

#include <stdio.h>

int main() {
    int n, count = 1;
    char a[101];
    scanf("%d\n", &n);
    gets(a);
    for (int i = 1; a[i] != '\0'; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count >= n) {
            printf("%c", a[i]);
            break;
        }
    }
    if (count < n) {
        printf("NO");
    }
}