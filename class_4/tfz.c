#include <stdio.h>

int main(){
    int num,count;
    while(scanf("%d",&num)){
        if(num == 250){
            printf("%d",count+1);
            break;
        }else{
            count++;
        }
    }
}
