/*
  厘米换算英尺尺寸
  cm=(foot+inch/12)×0.3048
 */

#include<stdio.h>

int main(){
    int m,foot,inch;
    if(scanf("%d",&m)){
        foot=m/30.48;
        inch=(m/30.48-(int)(m/30.48))*12;
        printf("%d %d",foot,inch);
    }
}
