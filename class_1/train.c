#include <stdio.h>

int main(){
	int sttime,entime;
	if(scanf("%d %d",&sttime,&entime)){
		sttime = sttime/100*60+sttime%100;
		entime = entime/100*60+entime%100;
		printf("%02d:%02d\n",(entime-sttime)/60,(entime-sttime)%60);
	}
}
