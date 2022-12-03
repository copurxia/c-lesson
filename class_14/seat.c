/*
    考试座位号
*/

#include <stdio.h>

struct stu {
    char num[17];
    int try_seat;
    int seat;
};

int main() {
    int n, n2;
    scanf("%d", &n);
    struct stu stus[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", stus[i].num, &stus[i].try_seat, &stus[i].seat);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        int try_seat;
        scanf("%d", &try_seat);
        for (int j = 0; j < n; j++) {
            if (stus[j].try_seat == try_seat) {
                printf("%s %d\n", stus[j].num, stus[j].seat);
                break;
            }
        }
    }
}
