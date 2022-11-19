/*
    藏头诗
*/

#include <stdio.h>

int main() {
    char a[30];
    char *p = a;
    for (int i = 0; i < 4; i++) {
        gets(p);
        p += 3;
    }
    *p = '\0';
    p -= 12;
    puts(p);
}