/*
  计算摄氏温度
  C=5×(F−32)/9
 */

#include <stdio.h>

int main(){
    int f;
    if(scanf("%d",&f)){
        printf("Celsius = %d",5*(f-32)/9);
    }
}
