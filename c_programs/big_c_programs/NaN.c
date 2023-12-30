#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    double a;
    a=NAN;
    int check;
    check=(a!=a)?1:0;
    printf("%d\t%lf",check,a);
}