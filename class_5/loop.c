#include <stdio.h>

int main(){
    double a,count,sum;
    count = 0;
    sum = 0;
    while(scanf("%lf",&a)){
        if(a<0){
            break;
        }else{
            count++;
            sum+=a;
        }
    }
    if(count ==0){
        printf("0.00");
    }else{
        printf("%.2f",sum/count);
    }
    
}
