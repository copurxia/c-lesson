#include <stdio.h>

int main(){
    int n=1;
    double prec,newk,sum=0;
    if(scanf("%lf",&prec)){
        do{
            newk = 1.0/n;
            sum+=(((n+1)/2%2*2-1)*newk);
            n+=2;
            printf("\n%.8f",sum*4);
        }while(newk>prec);
        printf("\n%.8f",sum*4);
    }
}
