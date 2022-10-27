#include <stdio.h>

int main() {
    int num, a[100], del_num, del;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &del_num);
    for (int i = 0; i < del_num; i++) {
        scanf("%d", &del);
        for (int j = del - 1; j < num; j++) {
            a[j] = a[j + 1];
        }
        num--;
    }
    for (int i = 0; i < num - 1; i++) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[num - 1]);
}