/*
    成绩排序
*/

#include <stdio.h>
#include <string.h>

struct grade {
    char name[20];
    int score;
};

int main() {
    int n;
    scanf("%d", &n);
    struct grade stu[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", stu[i].name, &stu[i].score);
    }
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (stu[j].score > stu[max].score) {
                max = j;
            } else if (stu[j].score == stu[max].score && strcmp(stu[max].name, stu[j].name) > 0) {
                max = j;
            }
        }
        if (max != i) {
            struct grade temp = stu[i];
            stu[i] = stu[max];
            stu[max] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", stu[i].name, stu[i].score);
    }
    return 0;
}