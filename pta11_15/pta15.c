/*
  题目：BCD解密
  时间：2022.10.3
  作者：Copur
 */

#include <stdio.h>

int main(){
    int d;
    if(scanf("%d",&d)){
        printf("%d",d/16*10+d%16);
    }
}
