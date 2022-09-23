#include <stdio.h>

int main(){
    int lower,upper;
    if(scanf("%d %d",&lower,&upper)){
        if(lower<=upper&&upper<=100){
            printf("fahr celsius\n");
            for(int i=lower;i<=upper;i+=2){
                printf("%-4d %-6.1f\n",i,5.0*(i-32)/9);
            }
        }else{
            printf("Invalid.");
        }
        
    }
    return 0;
}
