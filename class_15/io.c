#include <stdio.h>

int main(void) {
    struct student {
        int num;
        char name[10];
    } stu[3], *ptr;
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d,%s", &stu[i].num, stu[i].name);
    }
    for (ptr = stu;
         ptr <= &stu[2];
         ptr++) {
        printf("%d,%s\n", ptr->num, ptr->name);
    }

    return 0;
}