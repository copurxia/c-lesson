/*
  题目：简单计算器
  时间：2022.10.4
  作者：Copur
 */

#include <stdio.h>

int signf(int out, int sign, int cursor, int *err) {
	switch (sign) {
		case 0:
			out += cursor;
			break;
		case 1:
			out -= cursor;
			break;
		case 2:
			out *= cursor;
			break;
		case 3:
			if (cursor == 0) {
				*err = 1;
				break;
			}
			out /= cursor;
			break;
		default:
			printf("error! sign=%d", sign);
			break;
	}
	return out;
}

int main() {
	char inp;
	int cursor = 0, out = 0, sign = 0, err = 0;
	while (scanf("%c", &inp)) {
		if (err == 1) {
			printf("ERROR");
			break;
		} else if (err == 2) {
			break;
		}
		switch (inp) {
			case '=':
				out = signf(out, sign, cursor, &err);
				if (!err) {
					printf("%d", out);
                    err = 2;
				}
				break;
			case '+':
				out = signf(out, sign, cursor, &err);
				cursor = 0;
				sign = 0;
				break;
			case '-':
				out = signf(out, sign, cursor, &err);
				cursor = 0;
				sign = 1;
				break;
			case '*':
				out = signf(out, sign, cursor, &err);
				sign = 2;
				cursor = 0;
				break;
			case '/':
				out = signf(out, sign, cursor, &err);
				sign = 3;
				cursor = 0;
				break;
			default:
				if (inp >= '0' && inp <= '9') {
					cursor = cursor * 10 + (int)(inp - '0');
				} else {
					err = 1;
				}
				break;
		}
	}
}

