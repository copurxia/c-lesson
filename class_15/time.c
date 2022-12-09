#include <stdio.h>
struct TIME {
    int sec, min, hour;
} time;

int main() {
    int t;

    scanf("%d", &t);
    time.hour = t / 3600;
    time.min = t % 3600 / 60;
    time.sec = t % 60;

    printf("%02d:%02d:%02d\n", time.hour, time.min, time.sec);
    return 0;
}