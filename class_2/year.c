#include <stdio.h>

int main(){
    int age1,age2;
    if(scanf("%d %d",&age1,&age2)){
        if(age1>age2){
            printf("甲比乙年长");
        }else if(age1<age2){
            printf("乙比甲年长");
        }else{
            printf("甲和乙同龄");
        }
    }
}
