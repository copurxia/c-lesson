#include <stdio.h>

int main() {
	int a, b;
	//scanf("%d %d", &a, &b);
	if(scanf("%d %d", &a, &b))
	{
		//在判断输入有效的情况下，执行本逻辑块代码
		printf("%d", a + b);
	}
	return 0;
}
