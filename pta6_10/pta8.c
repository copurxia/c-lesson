/*
  是不是太胖了
  weight = (hight-100)*0.9
 */

#include <stdio.h>

int main(){
    int h;
    if(scanf("%d",&h)){
        printf("%.1f\n",(h-100)*0.9*2);
    }
}
