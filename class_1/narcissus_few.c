#include <stdio.h>
#include <math.h>

int main() {
	int n;
	if (scanf("%d", &n)) {
		if (n > 999 || n < 100) {
			printf("Invalid Value.\n");
		} else {
			if (pow(n / 100, 3) + pow(n % 100 / 10, 3) + pow(n % 10, 3) == n) {
				printf("Yes\n");
			} else {
				printf("No\n");
			}
		}
	}
}
