/*
  题目：超速判断
  时间：2022.10.5
  作者：Copur
 */

#include <stdio.h>

int main(){
    int speed;
    if(scanf("%d",&speed)){
        printf("Speed: %d - ",speed);
        if(speed>60){
            printf("Speeding\n");
        }else{
            printf("OK");
        }
    }
}
