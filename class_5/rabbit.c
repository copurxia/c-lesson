#include <stdio.h>

int main() {
	int rabbit = 0, tor = 0, time, rsleep=0,rrun=0;
	if (scanf("%d", &time)) {
		for (int i = 1; i <= time; i++) {
            //printf("---------time%d---------\n",i);
            tor += 3;
            //printf("@_@ %d\n", tor);
			if (rsleep == 0) {
				rabbit += 9;
                rrun++;
                //printf("^_^ %d\n", rabbit);
                if (rrun%10 == 0) {
                    if (rabbit > tor) {
                        rsleep = 1;
                        rrun=0;
                        //printf("rabbit sleep\n");
                    }
                }
			} else if (rsleep == 31) {
				rsleep = 0;
                rabbit += 9;
                rrun++;
                //printf("rabbit awake\n");
                //printf("^_^ %d\n", rabbit);
			} else {
				rsleep++;
			}
			
		}
		if (rabbit == tor) {
			printf("-_- %d", rabbit);
		} else if (rabbit > tor) {
			printf("^_^ %d", rabbit);
		} else {
			printf("@_@ %d", tor);
		}
	}
}
