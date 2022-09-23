#include <stdio.h>

int main() {
	int num, a, b;
	if (scanf("%d", &num)) {
		for (int i = 0; i < num; i++) {
			if (scanf("%d %d", &a, &b)) {
				int status = 0;
                int outnum[100];
				for (int j = a; j <= b; j++) {
					if (j%3==2&&j%7==1) {
                        outnum[status]=j;
                        status++;
					}
				}
				if (status) {
                    for(int k=0;k<=status-2;k++){
                        printf("%d ",outnum[k]);
                    }
                    printf("%d\n",outnum[status-1]);
				} else {
					printf("none\n");
				}
			}
		}
	}
}
