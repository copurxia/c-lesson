/*
    统计字符个数
*/

#include <stdio.h>

int main() {
    int letter = 0, digital = 0, others = 0;
    char a[20];
    gets(a);
    for (int i = 0; a[i] != '&'; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') {
            letter++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            digital++;
        } else {
            others++;
        }
    }
    printf("letter=%d,digital=%d,others=%d", letter, digital, others);
}