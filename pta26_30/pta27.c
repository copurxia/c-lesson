/*
  题目：兔子繁衍问题
  时间：2022.10.6
  作者：Copur
 */

#include <stdio.h>

int main(){
    int i,n,rab1=1,rab2=0,rab_adu=0;
    if(scanf("%d",&n)){
        for(i=0;rab1+rab2+rab_adu<n;i++){
            rab_adu+=rab2;
            rab2=rab1;
            rab1=rab_adu;
        }
        printf("%d",i+1);
    }
}
