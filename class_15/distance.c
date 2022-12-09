/*
    空间两点间的距离
*/

#include <stdio.h>
#include <math.h>

struct point {
    double x, y, z;
};

void read_point(struct point *p);
double distance(struct point a, struct point b);

int main(void) {
    struct point p1, p2;

    read_point(&p1);
    read_point(&p2);

    printf("%f\n", distance(p1, p2));

    return 0;
}

void read_point(struct point *p) {
    scanf("%lf %lf %lf", &p->x, &p->y, &p->z);
}

//  计算并返回平面上两点 a 和 b 之间的欧氏距离
double distance(struct point a, struct point b) {
    double sum = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z);
    return sqrt(sum);
}