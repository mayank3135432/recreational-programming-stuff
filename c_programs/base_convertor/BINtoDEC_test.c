#include<stdio.h>

int main(){
    double x=4.0/3.0;
    int d=(int)x;
    double f=x-(double)d;
    printf("%lf\n%d\n%lf",x,d,f);
    return 0;
}