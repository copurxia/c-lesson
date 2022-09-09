#include <stdio.h>

int main() {
	float r;
	if (scanf("%f", &r)) {
		printf("%f", 3.14 * (r * r));
	}
	return 0;
}
