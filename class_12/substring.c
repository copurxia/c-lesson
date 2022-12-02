/*
    取子串
*/
#include <stdio.h>
#include <stdlib.h>

char *subStr(char *st, int pos, int len) {
    if (pos >= 30) return "\0";
    st[pos + len] = '\0';
    return &st[pos];
}

int main() {
    char s[] = "0123456789A123456789B123456789";
    int pos, len;
    scanf("%d%d", &pos, &len);
    char *p = subStr(s, pos, len); // pos,len>=0
    printf("[%s]\n", p);
    return 0;
}
