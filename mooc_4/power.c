#include <stdio.h>

int main() {
	int inputn, sum = 0, count = 0;
	while (1) {
		if (scanf("%d", &inputn)) {
			if (inputn == -1) {
				break;
			}
			sum += inputn;
			count++;

		}
	}
	if (sum <= 2760) {
		printf("%.1f", sum * 0.538);
	} else if (sum <= 4800) {
		printf("%.1f", 2760 * 0.538 + (sum - 2760) * 0.588);
	} else {
		printf("%.1f", 2760 * 0.538 + (4800 - 2760) * 0.588 + (sum - 4800) * 0.838);
	}
}
