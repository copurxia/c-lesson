/*
  题目：计算天数
  时间：2022.10.4
  作者：Copur
 */

#include <stdio.h>

int main() {
	int yy, mm, dd, out = 0;
	if (scanf("%d/%d/%d", &yy, &mm, &dd)) {
		switch (mm) {
			case 12:
				out += 30;
			case 11:
				out += 31;
			case 10:
				out += 30;
			case 9:
				out += 31;
			case 8:
				out += 31;
			case 7:
				out += 30;
			case 6:
				out += 31;
			case 5:
				out += 30;
			case 4:
				out += 31;
			case 3:
				out += 28;
				if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0) {
					out++;
				}
			case 2:
				out += 31;
			default:
				out += dd;
				printf("%d", out);
				break;
		}
	}
}
