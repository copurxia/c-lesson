#include <stdio.h>

int main(){
    int x,y,z;
    if(scanf("%d,%d,%d",&x,&y,&z)){
        if(x>y){
            if(z>x){
                printf("最大值是%d\n",z);
            }else{
                printf("最大值是%d\n",x);
            }
        }else{
            if(z>y){
                printf("最大值是%d\n",z);
            }else{
                printf("最大值是%d\n",y);
            }
        }
    }
}
