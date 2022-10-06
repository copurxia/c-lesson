/*
  题目：念数字
  时间：2022.10.6
  作者：Copur
 */

#include <stdio.h>

int pinyin(int n){
    switch (n) {
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
        break;
        default:
            break;
    }
    return 0;
}

int main(){
    int n,i;
    int nc[100];
    if(scanf("%d",&n)){
        if(n<0){
            printf("fu ");
            n*=-1;
        }
        for(i=0;;i++){
            nc[i]=n%10;
            if((n*10)/10==0){
                break;
            }
            n/=10;
        }
        for(i--;i>0;i--){
            pinyin(nc[i]);
            printf(" ");
        }
        pinyin(nc[0]);
    }
}
