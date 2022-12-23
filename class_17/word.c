/*
    统计单词个数
*/

#include <stdio.h>
int count(char s[]);

int main() {
    char item[81];
    gets(item);
    printf("%d\n", count(item));
    return 0;
}

int count(char s[]) {
    int count = 0;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i - 1] != ' ') {
            count++;
        }
    }
    return count + 1;
}