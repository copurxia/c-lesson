/*
    成绩排序
*/
#include <stdio.h>
#define MAXN 50
struct student {
    char num[10];
    char name[20];
    int score;
};
void sort_by_grade(struct student *p, int n) {
    struct student *q, *max;
    struct student temp;
    int i;
    for (i = 0; i < n - 1; i++) {
        max = p + i;
        for (q = max + 1; q < p + n; q++) {
            if (q->score > max->score)
                max = q;
        }
        temp = *max;
        *max = *(p + i);
        *(p + i) = temp;
    }
}
int main() {
    struct student stu[MAXN];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s %d", stu[i].num, stu[i].name, &stu[i].score);
    }
    sort_by_grade(stu, n);
    for (i = 0; i < n; i++)
        printf("%s %s %d\n", stu[i].num, stu[i].name, stu[i].score);
    return 0;
}