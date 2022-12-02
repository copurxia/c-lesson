/*
    猴子吃桃
*/

#include <stdio.h>

int main() {
    int n, peach = 1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        peach = (peach + 1) * 2;
    }
    printf("%d", peach);
}