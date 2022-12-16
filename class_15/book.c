/*
    查找书籍
*/

#include <stdio.h>

struct book {
    char name[31];
    double cost;
};

int main() {
    int n;
    scanf("%d\n", &n);
    struct book books[n];
    for (int i = 0; i < n - 1; i++) {
        gets(books[i].name);
        scanf("%lf\n", &books[i].cost);
    }

    gets(books[n - 1].name);
    scanf("%lf", &books[n - 1].cost);
    int max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        if (books[i].cost > books[max].cost) {
            max = i;
        }
        if (books[i].cost < books[min].cost) {
            min = i;
        }
    }
    printf("%.2f, %s\n", books[max].cost, books[max].name);
    printf("%.2f, %s\n", books[min].cost, books[min].name);
}
