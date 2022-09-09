#include <stdio.h>

int main(){
	int inputnum;
	if(scanf("%d",&inputnum)){
		if(inputnum>99&&inputnum<1000){
			printf("yes");
		}else{
			printf("no");
		}
	}
}
