/*
    伪数组循环左移
    当不移动时存在bug
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = m; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
}