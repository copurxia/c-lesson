#include <stdio.h>

int main() {
    int money, fen5 = 0, fen2 = 0, fen1 = 0, total_money = 0;
    scanf("%d", &money);
    while (money - total_money >= 5) {
        fen5++;
        total_money += 5;
    }
    while (money - total_money >= 2) {
        fen2++;
        total_money += 2;
    }
    while (money - total_money >= 1) {
        fen1++;
        total_money += 1;
    }
    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen5 + fen2 + fen1);
}