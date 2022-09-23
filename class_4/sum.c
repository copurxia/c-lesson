#include <stdio.h>

int main(){
    int b,n,sum=0;
    if(scanf("%d %d",&b,&n)){
        sum = b;
        for(int i=1;i<n;i++){
            int val = b;
            for(int j=0;j<i;j++){
                val=10*val+b;
            }
            sum+=val;
        }
        printf("%d",sum);
    }
    return 0;
}
