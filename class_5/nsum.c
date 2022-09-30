#include <stdio.h>

int main(){
    double sum=0;
    int n;
    printf("Print the num of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=(1.0/i);
    }
    printf("%.4f",sum);
}
