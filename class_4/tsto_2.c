#include <stdio.h>

int main() {
    int num, a, b;
    if (scanf("%d", &num)) {
        for (int i = 0; i < num; i++) {
            if (scanf("%d %d", &a, &b)) {
                int status = 0;
                int tempnum = 0;
                for (int j = a; j <= b; j++) {
                    if (j % 3 == 2 && j % 7 == 1) {
                        if (tempnum) {
                            printf("%d ", tempnum);
                        }
                        tempnum = j;
                        status++;
                    }
                }
                if (status) {
                    printf("%d", tempnum);
                } else {
                    printf("none");
                }
            }
        }
    }
}
