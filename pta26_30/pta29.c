/*
  题目：二分法求多项式单根
  时间：2022.10.6
  作者：Copur
 */

#include <stdio.h>
double a3,a2,a1,a0;

double fun(double x){
    return a3*x*x*x+a2*x*x+a1*x+a0;
}

double dich(double a,double b){
    //printf("[%.2f,%.2f]\n",a,b);
    //printf("fx=%.2f\n",fun((a+b)/2));
    if(a<b){
        double t=a;a=b;b=t;
    }
    if((a-b)<=0.01){
        return (a+b)/2;
    }
    if(fun(a)*fun(b)<0){
        if(fun((a+b)/2)==0){
            return (a+b)/2;
        }
        if(fun((a+b)/2)*fun(a)>0){
            return dich((a+b)/2,b);
        }else{
            return dich(a,(a+b)/2);
        }
    }else if(fun(a)==0){
        return a;
    }else{
        return b;
    }
}

int main(){
    double a,b;
    if(scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0)){
        if(scanf("%lf %lf",&a,&b)){
            printf("%.2f",dich(a,b));
        }
    }
}
