#include <stdio.h>

int main() {
	int a;
	if (scanf("%d", &a)) {
		a = a % 1000;
		printf("%d\n", a % 10 + a % 100 / 10 + a / 100);
	}
    return 0;
}
