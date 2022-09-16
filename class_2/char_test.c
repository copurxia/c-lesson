#include <stdio.h>

int main() {
	char xx;
	if (scanf("%c", &xx)) {
		if (xx >= '0' && xx <= '9') {
			printf("%c是数字字符\n", xx);
		} else if (xx >= 'A' && xx <= 'Z') {
			printf("%c是大写字母\n", xx);
		} else if (xx >= 'a' && xx <= 'z') {
			printf("%c是小写字母\n", xx);
		} else {
			printf("%c是其他字符\n", xx);
		}
	}
}
