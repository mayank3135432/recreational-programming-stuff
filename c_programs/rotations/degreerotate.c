#include<stdio.h>
#include<string.h>
#include<math.h>
#include"complex.h"

complex rotate(complex z,double angle){
    complex R={cos(angle),sin(angle)};
    return(dot(R,z));
}
int main(){
    double r,s,th;
    char str[100];
    scanf("%lf %lf",&r,&s);
    while ((getchar()) != '\n');
    fgets(str,100,stdin);
    sscanf(str,"%lf",&th);
    th=pi*th/180;
    complex z={r,s};
    complex zr=rotate(z,th);
    printz(zr);
    printf("\n");

    return 0;
}