/*
    删除队列指定数
*/
#include <stdio.h>
#define N 100
int del_num(int *p, int x, int n) {
    int i, j;
    for (i = 0, j = 0; i < n; i++)
        if (*(p + i) != x) {
            *(p + j) = *(p + i);
            j++;
        }
    return j;
}
int main(void) {
    int a[N], i, count;
    int n, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    scanf("%d", &x);
    count = del_num(a, x, n);
    for (i = 0; i < count; i++)
        printf("%d ", a[i]);
    return 0;
}