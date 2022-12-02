/*
    mystrupr
*/
#include <stdio.h>

void mystrupr(char *s);

int main(void) {
    char s[] = "ab+cdEFhijk@cqust";
    mystrupr(s);
    printf("%s", s);
    return 0;
}

void mystrupr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
}