/*
    学生成绩录入及查询
*/
#include <stdio.h>
#include <string.h>

struct stu_info {
    char num[12];
    char name[11];
    int math;
    int eng;
    int pd;
    int phy;
};

int main() {
    int n, status = 1;
    scanf("%d", &n);
    struct stu_info infor_arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d %d\n", infor_arr[i].num, infor_arr[i].name,
              &infor_arr[i].math, &infor_arr[i].eng, &infor_arr[i].pd, &infor_arr[i].phy);
    }
    char name[11];
    gets(name);
    for (int i = 0; i < n; i++) {
        if (strcmp(name, infor_arr[i].name) == 0) {
            printf("%s %s %d %d %d %d\n", infor_arr[i].num, infor_arr[i].name,
                   infor_arr[i].math, infor_arr[i].eng, infor_arr[i].pd, infor_arr[i].phy);
            status = 0;
        }
    }
    if (status) {
        printf("Not Found!");
    }
    return 0;
}
