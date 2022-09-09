#include <stdio.h>

int main(){
	int n;
	if(scanf("%d",&n)){
		if(n%5<4&&n%5!=0){
			printf("Fishing in day %d",n);
		}else{
			printf("Drying in day %d",n);
		}
	}
}
