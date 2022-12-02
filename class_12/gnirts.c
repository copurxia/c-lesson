/*
    函数实现字符串逆序
*/

#include <stdio.h>
#define MAXS 20

void f(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    gets(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

void f(char *p) {
    int len = 0;
    for (int i = 0; i < MAXS; i++) {
        if (p[i] == '\0') {
            len = i - 1;
            break;
        }
    }
    for (int i = 0; i <= len / 2; i++) {
        int t = p[i];
        p[i] = p[len - i];
        p[len - i] = t;
    }
}