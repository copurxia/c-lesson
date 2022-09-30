#include <stdio.h>

int main(){
    double max,min,input;
    int n;
    if(scanf("%d",&n)){
        if(scanf("%lf",&min)){
            max = min;
            for(int i=2;i<=n;i++){
                if(scanf("%lf",&input)){
                    if(max<input){
                        max = input;
                    }
                    if(min>input){
                        min = input;
                    }
                }
            }
            printf("%.2f\n",max);
            printf("%.2f\n",min);
        }
    }
}
