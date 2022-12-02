#include <stdio.h>
#define MAXS 20

void zip(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    gets(s);
    zip(s);
    printf("%s\n", s);

    return 0;
}

void zip(char *p) {
    int n = 0, count = 0;
    char x;
    for (int i = 0; p[i + count] != '\0'; i++) {
        x = p[i + count];
        n = 1;
        while (p[i + count + n] == x) {
            n++;
        }
        if (n <= 1) {
            p[i] = p[i + count];
        } else {
            p[i] = '0' + n;
            p[i + 1] = x;
            count += n - 2;
        }
    }
}