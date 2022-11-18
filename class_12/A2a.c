/*
    字符串中的大写字母改成小写字母
*/

#include <stdio.h>

int main() {
    char a[20];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
    }
    puts(a);
}