#include <stdio.h>

int main() {
	double power;
	if (scanf("%lf", &power)) {
		if (power < 0) {
			printf("Invalid Value!");
		} else if (power <= 50) {
			printf("cost = %.2f", power * 0.53);
		} else {
			printf("cost = %.2f", (power - 50) * 0.58 + 26.5);
		}
	}
}
