#include <stdio.h>

int main(){
    double m;
    int n;
    if(scanf("%lf %d",&m,&n)){
        printf("你好，可以借我%.2f元钱吗？\n",m);
        printf("%d天后一定还！\n",n);
    }
}
