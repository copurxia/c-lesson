/*
  题目：成绩转换
  时间：2022.10.4
  作者：Copur
 */

#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)){
        switch (n/10) {
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
            default:
                printf("E");
                break;
        }
    }
}
