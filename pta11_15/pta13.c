/*
  题目：后天
  时间：2022.10.3
  作者：Copur
 */

#include <stdio.h>

int main(){
    int d;
    if(scanf("%d",&d)){
        printf("%d",(d+2)%7==0?7:(d+2)%7);
    }
}
