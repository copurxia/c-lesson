#include <stdio.h>

int main(){
    int num;
    if(scanf("%d",&num)){
        int outnum=0;
        for(int i=0;i<=num;i++){
            outnum+=((1+i)*i/2);
        }
        printf("%d",outnum);
    }
    return 0;
}
