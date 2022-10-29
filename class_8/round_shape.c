#include <stdio.h>
#define pi 3.1415926

int main() {
    int type = 1;
    double r, h;
    while (type > 0 && type <= 3) {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        scanf("%d", &type);
        switch (type) {
        case 1:
            printf("Please enter the radius:\n");
            scanf("%lf", &r);
            printf("%.2f\n", 4.0 / 3 * pi * r * r * r);
            break;
        case 2:
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf", &r, &h);
            printf("%.2f\n", pi * r * r * h);
            break;
        case 3:
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf", &r, &h);
            printf("%.2f\n", 1.0 / 3 * pi * r * r * h);
            break;
        default:
            break;
        }
    }
}