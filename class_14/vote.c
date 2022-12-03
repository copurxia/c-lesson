/*
    投票统计
*/

#include <stdio.h>
#include <string.h>

struct vote {
    char name[20]; //名字
    int count;     //票数
};

int main() {
    int n, un;
    scanf("%d\n", &n);
    struct vote votes[n];
    for (int i = 0; i < n; i++) {
        gets(votes[i].name);
        votes[i].count = 0;
    }
    char name[20];
    scanf("%d\n", &un);
    for (int i = 0; i < un; i++) {
        gets(name);
        for (int i = 0; i < n; i++) {
            if (strcmp(name, votes[i].name) == 0) {
                votes[i].count++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (votes[j].count > votes[max].count) {
                max = j;
            } else if (votes[j].count == votes[max].count) {
                if (strcmp(votes[max].name, votes[j].name) > 0) {
                    max = j;
                }
            }
        }
        if (max != i) {
            struct vote temp;
            temp = votes[i];
            votes[i] = votes[max];
            votes[max] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", votes[i].name, votes[i].count);
    }
}