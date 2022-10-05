/*
  题目：天平找球
  时间：2022.10.5
  作者：Copur
 */

#include <stdio.h>

int main(){
    int a,b,c;
    if(scanf("%d %d %d",&a,&b,&c)){
        if(a==b){
            printf("C");
        }else if(b==c){
            printf("A");
        }else{
            printf("B");
        }
    }
}
