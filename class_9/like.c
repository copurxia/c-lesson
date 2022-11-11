/*
    点赞
*/

#include <stdio.h>

int main() {
    int n, tag[1000], max = 999;
    for (int i = 0; i < 1000; i++) {
        tag[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num, type;
        scanf("%d", &num);
        for (int j = 0; j < num; j++) {
            scanf("%d", &type);
            tag[type - 1]++;
        }
    }
    for (int i = 999; i >= 0; i--) {
        if (tag[i] > tag[max]) {
            max = i;
        }
    }
    printf("%d %d", max + 1, tag[max]);
}