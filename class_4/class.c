#include <stdio.h>

int main(){
    int daynum[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int yy,mm,dd,outday;
    if(scanf("%d %d %d",&yy,&mm,&dd)){
        if((yy%4==0&&yy%100!=0)||yy%400){
            daynum[1]++;
        }
        for(int i=0;i<(mm-1);i++){
            outday+=daynum[i];
        }
        outday+=dd;
        printf("%d",outday);
    }
}
