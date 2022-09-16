#include <stdio.h>

int main() {
	int count;
	if (scanf("%d", &count)) {
		if (count % 3 == 0 && count % 5 == 0 && count % 7 == 0) {
			printf("Yes");
		} else {
			printf("No");
		}
	}
}
