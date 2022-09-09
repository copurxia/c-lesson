#include <stdio.h>
#include <math.h>

int main(){
	double money,year,rate,interest;
	if(scanf("%lf %lf %lf",&money,&year,&rate)){
		interest = money*pow(1+rate,year)-money;
		printf("interest = %.2f\n",interest);
	}
}
