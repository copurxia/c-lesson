/*
  题目：求奇数和
  时间：2022.10.5
  作者：Copur
 */

#include <stdio.h>

int main() {
	int sum = 0, in;
	while (1) {
		if (scanf("%d", &in)) {
			if (in <= 0) {
				break;
			}
			if (in % 2) {
				sum += in;
			}
		}
	}
	printf("%d", sum);
}
