/*
    二分查找法
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10};
    int l = 0, r = 9, status = 1, key;
    scanf("%d", &key);
    while (l < r) {
        if (arr[(l + r) / 2] > key) {
            r = (l + r) / 2;
        } else if (arr[(l + r) / 2] < key) {
            l = (l + r) / 2 + 1;
        } else {
            status = 0;
            printf("weizhi:%d", (l + r) / 2);
            break;
        }
    }
    if (status) {
        printf("not found");
    }
}