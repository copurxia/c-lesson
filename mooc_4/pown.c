#include <stdio.h>

long facto(long n){
    if(n==1||n==0){
        return 1;
    }else{
        return n*facto(n-1);
    };
}

int main(){
    double sum=1,x;
    int n;
    if(scanf("%lf %d",&x,&n)){
        double xtemp=x;
        for(long i=1;i<=n;i++){
            sum+=(xtemp/facto(i));
            xtemp*=x;
        }
        printf("%.4f",sum);
    }
}
