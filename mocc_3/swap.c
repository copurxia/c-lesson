#include <stdio.h>
#include <math.h>

int main(){
    double x,y,sx,sy;
    if(scanf("%lf %lf",&x,&y)){
        sx=x/fabs(x);
        x=fabs(x);
        sy=y/fabs(y);
        y=fabs(y);
        printf("%.6f %.6f",sx*((int)x+y-(int)y),sy*((int)y+x-(int)x));
    }
}
