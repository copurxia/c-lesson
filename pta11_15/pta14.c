/*
  题目：然后是几点
  时间：2022.10.3
  作者：Copur
 */

#include <stdio.h>

int main(){
    int curr,time;
    if(scanf("%d %d",&curr,&time)){
        int end=curr/100*60+curr%100+time;
        printf("%d%02d",end/60,end%60);
    }
}
