#include <stdio.h>

int main(){
    int n,sum=0;
    if(scanf("%d",&n)){
        for(int i=1;i<=n;i++){
            int ssum=1;
            for(int j=1;j<=i;j++){
                ssum*=j;
            }
            sum+=ssum;
        }
        printf("%d",sum);
    }
}
