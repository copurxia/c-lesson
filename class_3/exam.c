#include <stdio.h>

int main(){
    int exam;
    char result[]={'E','D','C','B','A','A'};
    if(scanf("%d",&exam)){
        if(exam>=50){
            printf("%c",result[(exam-50)/10]);
        }else{
            printf("E");
        }
    }
}
