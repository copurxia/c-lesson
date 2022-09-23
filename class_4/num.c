#include <stdio.h>
#include <math.h>

int main() {
	int num, inum, status;

	if (scanf("%d", &num)) {
		for (int i = 0; i < num; i++) {
			if (scanf("%d", &inum)) {
				status = 1;
				if (inum == 1) {
					status = 0;
				} else {
					for (int j = 2; j <= sqrt(inum * 1.0); j++) {
						if (inum % j == 0) {
							status = 0;
							break;
						}
					}
				}
				if (status) {
					printf("Yes\n");
				} else {
					printf("No\n");
				}
			}
		}
	}
}
