/*
  题目：计算符号函数的值
  时间：2022.10.4
  作者：Copur
 */

#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)){
        if(!n){
            printf("sign(%d) = %d",n,0);
        }else if(n>0){
            printf("sign(%d) = %d",n,1);
        }else{
            printf("sign(%d) = %d",n,-1);
        }
    }
}
