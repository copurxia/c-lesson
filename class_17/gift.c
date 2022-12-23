/*
    拆礼物
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d号礼物", (n - 1) % 5 + 1);
}