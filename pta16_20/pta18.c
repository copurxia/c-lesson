/*
  题目：出租车计价
  时间：2022.10.4
  作者：Copur
 */

#include <stdio.h>

int main() {
    double dis;
    int time;
    if (scanf("%lf %d", &dis, &time)) {
        if (time < 5) {
            if (dis <= 3) {
                printf("10");
            } else if (dis <= 10) {
                printf("%d", 10 + (int)((dis - 3) * 2 + 0.5));
            } else {
                printf("%d", 24 + (int)((dis - 10) * 3 + 0.5));
            }
        } else {
            if (dis <= 3) {
                printf("%d", 10 + (time + 4) / 5 * 2);
            } else if (dis <= 10) {
                printf("%d", 10 + (time + 4) / 5 * 2 + (int)((dis - 3) * 2 + 0.5));
            } else {
                printf("%d", 24 + time / 5 * 2 + (int)((dis - 10) * 3 + 0.5));
            }
        }
    }
}
