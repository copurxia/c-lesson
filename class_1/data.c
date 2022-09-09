#include <stdio.h>

int main(){
	int year,month,day;
	if(scanf("%d-%d-%d",&month,&day,&year)){
		printf("%d-%02d-%d",year,month,day);
	}
}
