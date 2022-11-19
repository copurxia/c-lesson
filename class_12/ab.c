/*
    A-B
*/

#include <stdio.h>

int main() {
    char a[100000], b[100000];
    gets(a);
    gets(b);
    for (int i = 0; b[i] != '\0'; i++) {
        int count = 0, j = 0;
        while (a[j + count] != '\0') {
            a[j] = a[j + count];
            if (a[j + count] == b[i]) {
                count++;
            } else {
                j++;
            }
            if (a[j + count] == '\0') {
                a[j] = '\0';
            }
        }
    }
    puts(a);
}