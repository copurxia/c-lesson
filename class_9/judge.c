/*
    判断题
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int an[m], mark[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &an[i]);
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int inp;
        for (int j = 0; j < m; j++) {
            scanf("%d", &inp);
            if (inp == an[j]) {
                sum += mark[j];
            }
        }
        printf("%d\n", sum);
    }
}