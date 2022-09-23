#include <stdio.h>

int main() {
	int a, b, c;
	if (scanf("%d %d %d", &a, &b, &c)) {
		if (a == b) {
			if(c!=b){
                printf("C");
            }
		} else {
			if(c==b){
                printf("A");
            }else{
                printf("B");
            }
		}
	}
}
