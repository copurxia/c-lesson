#include <stdio.h>

int main() {
    int n, y, x = 0, count[10];
    scanf("%d %d", &y, &n); //输入年份和个数
    while (1) {
        for (int i = 0; i < 10; i++) {
            count[i] = 0;
        }
        int tempy = y;
        if (tempy < 10) { //不足四位补零
            count[0] += 3;
        } else if (tempy < 100) {
            count[0] += 2;
        } else if (tempy < 1000) {
            count[0] += 3;
        }
        while (tempy > 0) {
            if (count[tempy % 10] <= 4 - n) {
                count[tempy % 10]++;
                tempy /= 10;
            } else {
                break;
            }
        }
        if (tempy == 0) {
            int countnum = 0;
            for (int i = 0; i < 10; i++) {
                if (count[i] != 0) {
                    countnum++;
                }
            }
            if (countnum == n) {
                break;
            }
        }
        y++;
        x++;
    }
    printf("%d %04d", x, y);
}