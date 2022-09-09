#include <stdio.h>

int main() {
	int a;
	if (scanf("%d", &a)) {
		printf("Celsius = %d", 5 * (a - 32) / 9);
	}
	return 0;
}
