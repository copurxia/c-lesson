/*
    复数乘法
*/

#include <stdio.h>

typedef struct
{
    double rp, ip;
} COMPLEX;

void Input(COMPLEX *p);
void Output(const COMPLEX *p);
COMPLEX Multiply(COMPLEX *p, COMPLEX *q);

int main() {
    COMPLEX a, b, c;
    Input(&a);
    Input(&b);
    c = Multiply(&a, &b);
    Output(&c);
    return 0;
}

void Input(COMPLEX *p) {
    scanf("%lg %lg", &p->rp, &p->ip);
}

void Output(const COMPLEX *p) {
    printf("%g %g", p->rp, p->ip);
}

COMPLEX Multiply(COMPLEX *p, COMPLEX *q) {
    COMPLEX r;
    r.rp = p->ip * q->ip - p->rp * p->rp;
    r.ip = p->rp * q->ip + p->ip * q->rp;
    return r;
}