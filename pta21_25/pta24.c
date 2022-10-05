/*
  题目：猜数字游戏
  时间：2022.10.5
  作者：Copur
 */

#include <stdio.h>

int main(){
    int a,b,c,i;
    if(scanf("%d %d",&a,&b)){
        for(i=0;i<b;i++){
            if(scanf("%d",&c)){
                if(c<0){
                    printf("Game Over\n");
                    break;
                }
                if(c>a){
                    printf("Too big\n");
                }else if(c<a){
                    printf("Too small\n");
                }else{
                    if(i==0){
                        printf("Bingo!\n");
                    }else if(i<3){
                        printf("Lucky You!\n");
                    }else{
                        printf("Good Guess!\n");
                    }
                    break;
                }
            }
        }
        if(i==b){
            printf("Game Over\n");
        }
    }
}
