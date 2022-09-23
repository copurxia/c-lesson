#include <stdio.h>
#include <stdlib.h>

int main(){
    int inp;
    if(scanf("%d",&inp)){
        for(int i=0;i<=4;i++){
            if(i == inp){
                printf("250 ");
            }else{
                printf("%d ",rand()%2000-1000);
            }
            
        }
    }
    
    
}
