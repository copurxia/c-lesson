#include <stdio.h>

int main() {
	double power;
	if (scanf("%lf", &power)) {
		if (power < 0) {
			printf("Invalid Value!");
		} else if (power <= 50) {
			printf("cost = %.2f", power * 1);
		} else if (power <= 100) {
			printf("cost = %.2f", 50 + (power - 50) * 2);
		} else {
			printf("cost = %.2f", 150 + (power - 100) * 3);
		}
	}
	return 0;
}
