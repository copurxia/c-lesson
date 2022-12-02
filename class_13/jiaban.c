#include <stdio.h>
int main() {
    int a;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a <= 5 && a >= 1)
            printf("%d bujiaban\n", a);
        else if (a == 6 || a == 7)
            printf("%d jiaban\n", a);
    }
    return 0;
}