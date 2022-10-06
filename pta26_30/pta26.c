/*
  题目：最大公约数和最小公倍数
  时间：2022.10.6
  作者：Copur
 */

#include <stdio.h>

int main(){
    int m,n,div,mul;
    if(scanf("%d %d",&m,&n)){
        div = m<n?m:n;
        mul = m>n?m:n;
        while(1){
            if(m%div==0&&n%div==0){
                break;
            }
            div--;
        }
        while(1){
            if(mul%m==0&&mul%n==0){
                break;
            }
            mul++;
        }
        printf("%d %d\n",div,mul);
    }
}
