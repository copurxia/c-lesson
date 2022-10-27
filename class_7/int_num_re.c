#include <stdio.h>

int main() {
    int inputa[1000], input_count[1000], input, num, count = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int j;
        scanf("%d", &input);
        for (j = 0; j < i; j++) {
            if (inputa[j] == input) {
                input_count[j]++;
            }
        }
        if (j == i) {
            inputa[i] = input;
            input_count[i] = 1;
            count++;
        }
    }
    int max = 0;
    for (int i = 0; i < count; i++) {
        if (input_count[i] > input_count[max]) {
            max = i;
        }
    }
    printf("%d %d\n", inputa[max], input_count[max]);
}