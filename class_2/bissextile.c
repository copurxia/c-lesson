#include <stdio.h>

int main(){
    int year;
    if(scanf("%d",&year)){
        if((year%4==0&&year%100!=0)||year%400==0){
            printf("%d年是闰年",year);
        }else{
            printf("%d年不是闰年",year);
        }
    }
}
