#include <stdio.h>
#define N 10

int main() {
    int score[N], i, j, temp;
    for (i = 0; i < N; i++)
        scanf("%d", &score[i]);
    for (i = 0; i < N - 1; i++)
        for (j = 0; j <= i; j++)
            if (score[j] < score[j + 1]) {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
    for (i = 0; i < N; i++)
        printf("%d ", score[i]);
    return 0;
}