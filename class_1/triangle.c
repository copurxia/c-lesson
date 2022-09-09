#include <stdio.h>

int main()
{
	/* 三角 */
	int m = 4;
	for(int i=0;i<=3;i++){
		for(int j=m;j>0;j--){
			printf("*");
		}
		m--;
		if(m!=0){
			printf("\n");
		}
	}
	return 0;
}
