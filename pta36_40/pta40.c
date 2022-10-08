/*
  题目：到底是不是太胖了
  时间：2022.10.8
  作者：Copur
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double weight, height, sta;
    if (scanf("%d", &num)) {
        for (int i = 0; i < num; i++) {
            if (scanf("%lf %lf", &height, &weight)) {
                weight /= 2;
                sta = (height - 100) * 0.9;
                if (fabs(weight - sta) < sta * 0.1) {
                    printf("You are wan mei!\n");
                } else if (weight > sta) {
                    printf("You are tai pang le!\n");
                } else {
                    printf("You are tai shou le!\n");
                }
            }
        }
    }
}