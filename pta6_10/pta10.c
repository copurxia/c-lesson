/*
  题目：基础运算
  时间：2022.10.2
  作者：copur
 */

#include <stdio.h>

int main() {
	int a, b;
	if (scanf("%d %d", &a, &b)) {
		printf("%d + %d = %d\n", a, b, a + b);
		printf("%d - %d = %d\n", a, b, a - b);
		printf("%d * %d = %d\n", a, b, a * b);
        if(a%b==0){
            printf("%d / %d = %d\n", a, b, a / b);
        }else{
            printf("%d / %d = %.2f\n", a, b, 1.0*a / b);
        }
	}
}
