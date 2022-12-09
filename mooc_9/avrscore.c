/*
    计算平均成绩
*/

#include <stdio.h>

struct stu {
    char num[6];
    char name[10];
    int score;
};

int main() {
    int n;
    scanf("%d", &n);
    struct stu stus[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", stus[i].num, stus[i].name, &stus[i].score);
    }
    double avr = 0;
    for (int i = 0; i < n; i++) {
        avr += stus[i].score * 1.0 / n;
    }
    printf("%.2f\n", avr);
    for (int i = 0; i < n; i++) {
        if (stus[i].score < avr) {
            printf("%s %s\n", stus[i].name, stus[i].num);
        }
    }
}
