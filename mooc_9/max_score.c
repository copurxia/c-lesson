/*
    最高分的学生
*/

#include <stdio.h>

struct stu {
    char name[20];
    int score;
};

int main() {
    int n;
    scanf("%d", &n);
    struct stu stus[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &stus[i].score);
        gets(stus[i].name);
    }
    int max = stus[0].score;
    for (int i = 1; i < n; i++) {
        if (stus[i].score > max) {
            max = stus[i].score;
        }
    }
    for (int i = 0; i < n; i++) {
        if (stus[i].score == max) {
            printf("%s\n", stus[i].name);
        }
    }
}