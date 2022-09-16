#include <stdio.h>

int main() {
	int a[4], max;
	if (scanf("%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3])) {
		max = a[0];
		for (int i = 0; i <= 3; i++) {
			if (max < a[i]) {
				max = a[i];
			}
		}
        printf("最大值是%d\n",max);
	}
}
