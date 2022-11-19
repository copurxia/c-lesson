/*
    检查密码
*/

#include <stdio.h>

int main() {
    int n;
    char a[80];
    scanf("%d\n", &n);
    for (int j = 0; j < n; j++) {
        int count = 0, cha = 1, num = 0, let = 0;
        gets(a);
        for (int i = 0; a[i] != '\0'; i++) {
            count++;
            if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') {
                let = 1;
            } else if (a[i] >= '0' && a[i] <= '9') {
                num = 1;
            } else if (a[i] != '.') {
                cha = 0;
            }
        }
        if (count >= 6 && cha && num && let) {
            printf("Your password is wan mei.\n");
        } else if (count < 6) {
            printf("Your password is tai duan le.\n");
        } else if (!cha) {
            printf("Your password is tai luan le.\n");
        } else if (!num) {
            printf("Your password needs shu zi.\n");
        } else {
            printf("Your password needs zi mu.\n");
        }
    }
}