#include <stdio.h>

int main(){
    int num;
    char ca;
    if(scanf("%d %c",&num,&ca)){
        for(int i=0;i<num/2.0;i++){
            for(int j=0;j<num;j++){\
                printf("%c",ca);
            }
            printf("\n");
        }
    }
}
