/*
  题目：分段计算居民水费
  时间：2022.10.5
  作者：Copur
 */

#include <stdio.h>

int main(){
    double water;
    if(scanf("%lf",&water)){
        if(water<=15){
            printf("%.2f",4*water/3);
        }else{
            printf("%.2f",2.5*water-17.5);
        }
    }
}
