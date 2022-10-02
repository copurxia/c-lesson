// 求整数均值

#include <stdio.h>

int main(){
    int sum=0,in;
    for(int i=0;i<4;i++){
        if(scanf("%d",&in)){
            sum+=in;
        }
    }
    printf("Sum = %d; Average = %.1f",sum,sum/4.0);
}
