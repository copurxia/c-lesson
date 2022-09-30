#include <stdio.h>

int main() {
	char ar;
	int num, rest, lmax;
	if (scanf("%d %c", &num, &ar)) {
		for (int i = 1; 1; i+=2) {
			if (((1 + i) * ((i - 1)/2+1) / 2) * 2 - 1 > num) {
				lmax = i-2;
				rest = num - (((i-1) * ((i - 3)/2+1) / 2) * 2 - 1);
				break;
			}
		}
		for (int i = lmax; i > 0; i -= 2) {
			for (int j = 0; j < (lmax - i) / 2; j++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("%c", ar);
			}
			printf("\n");
		}
		for (int i = 3; i <= lmax; i += 2) {
			for (int j = 0; j < (lmax - i) / 2; j++) {
				printf(" ");
			}
            for (int j = 0; j < i; j++) {
                printf("%c", ar);
            }
            printf("\n");
		}
        printf("%d",rest);
	}
}
