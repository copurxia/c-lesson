#include <stdio.h>

int main() {
	int year;
	if (scanf("%d", &year)) {
		year--;
		int oud = (year + year / 4 - year / 100 + year / 400 + 1) % 7;
		switch (oud) {
			case 1:
				printf("星期一\n");
				break;
			case 2:
				printf("星期二\n");
				break;
			case 3:
				printf("星期三\n");
				break;
			case 4:
				printf("星期四\n");
				break;
			case 5:
				printf("星期五\n");
				break;
			case 6:
				printf("星期六\n");
				break;
			case 0:
				printf("星期日\n");
				break;
			default:
				printf("公元前\n");
				break;
		}
	}
}
