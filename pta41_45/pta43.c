/*
  题目：扑克自动洗牌机
  时间：2022.10.10
  作者：Copur
 */

#include <stdio.h>

int print_card(int n) {
    switch (n / 13) {
    case 0:
        printf("S");
        break;
    case 1:
        printf("H");
        break;
    case 2:
        printf("C");
        break;
    case 3:
        printf("D");
        break;
    default:
        printf("J");
        break;
    }
    printf("%d", n % 13 + 1);
    return 0;
}

int main() {
    int n, way[54], new[54], old[54];
    for (int i = 0; i < 54; i++) {
        old[i] = i;
    }

    if (scanf("%d", &n)) {
        for (int i = 0; i < 54; i++) {
            scanf("%d", &way[i]);
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < 54; i++) {
                new[way[i] - 1] = old[i];
            }
            for (int i = 0; i < 54; i++) {
                old[i] = new[i];
            }
        }
        for (int i = 0; i < 53; i++) {
            print_card(new[i]);
            printf(" ");
        }
        print_card(new[53]);
        printf("\n");
    }
}