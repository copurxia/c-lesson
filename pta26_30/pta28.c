/*
  题目：求整数的位数及各位数字之和
  时间：2022.10.6
  作者：Copur
 */

#include <stdio.h>

int main(){
    int i,n,sum=0;
    if(scanf("%d",&n)){
        for(i=0;i<=9;i++){
            if((n*10)/10==0){
                break;
            }
            sum+=(n%10);
            n/=10;
        }
        printf("%d %d",i,sum);
    }
}
