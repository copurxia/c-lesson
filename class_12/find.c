/*
    字符串查找
*/

#include <stdio.h>

int main() {
    char a[101], find[101];
    int status = -1;
    gets(a);
    gets(find);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == find[0]) {
            status = i;
            for (int j = 1; find[j] != '\0'; j++) {
                if (a[i + j] != find[j]) {
                    status = -1;
                    break;
                }
            }
            if (status != -1) {
                printf("%d", status);
                break;
            }
        }
    }
    if (status == -1) {
        printf("%d", -1);
    }
}