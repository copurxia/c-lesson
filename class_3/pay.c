#include <stdio.h>

int main() {
	double year, time;
	if (scanf("%lf %lf", &year, &time)) {
		if (year < 5) {
			if (time <= 40) {
				printf("%.2f", time * 30);
			} else {
				printf("%.2f", 40 * 30 + (time - 40) * 45);
			}
		} else {
			if (time <= 40) {
				printf("%.2f", time * 50);
			} else {
				printf("%.2f", 40 * 50 + (time - 40) * 75);
			}
		}
	}
}
