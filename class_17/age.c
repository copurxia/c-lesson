/*
    计算周岁
*/

#include <stdio.h>

#include <stdio.h>
int main(void) {
    int y1, m1, d1, y2, m2, d2, age;
    scanf("%d-%d-%d", &y1, &m1, &d1); //输入出生年月日
    scanf("%d-%d-%d", &y2, &m2, &d2); //输入当前年月日
    age = y2 - y1;
    if (m1 > m2)
        age--;
    else if (m1 == m2 && d1 > d2)
        age--;
    printf("周岁：%d\n", age);
    return 0;
}