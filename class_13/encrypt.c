#include <stdio.h>

void encrypt(char s[]);

int main() {
    char str[50];
    gets(str);
    encrypt(str);
    puts(str);
    return 0;
}

void encrypt(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'z') {
            s[i] = 'a';
        } else if (s[i] == 'Z') {
            s[i] = 'A';
        } else if (s[i] == '0') {
            s[i] = '9';
        } else if (s[i] >= 'a' && s[i] < 'z' || s[i] >= 'A' && s[i] < 'Z') {
            s[i] += 1;
        } else if (s[i] > '0' && s[i] <= '9') {
            s[i] -= 1;
        }
    }
}