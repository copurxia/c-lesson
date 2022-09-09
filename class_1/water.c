#include <stdio.h>

int main(){
	double x;
	if(scanf("%lf",&x)){
		if(x<=15){
			printf("f(%.2f) = %.2f\n",x,4*x/3);
		}else{
			printf("f(%.2f) = %.2f\n",x,2.5*x-10.5);
		}
	}
}
