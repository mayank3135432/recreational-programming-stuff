#include<stdio.h>
typedef int (*int_func_int)(int);
typedef double (*real_func_real)(double);


int_func_int add(int x){
    int addx(int y){
        return(x+y);
    }
    return(&addx);
}
real_func_real diff(real_func_real f){ //for some reason this does not seem to work. What was wrong ?
    double g(double x){
        double h=0.0001;
        double y=((*f)(x+h)-(*f)(x))/h;
        return(y);
    }
    return(&g);
}
double sq(double x){return(x*x);}
int main(){
    ;
    printf("%lf  %lf\n",sq(3),diff(sq)(3.0));

    return 0;
}
/* int main(){
    int x=3;
    int y=-2;
    int num=add(x)(y);
    printf("%d\n",num);

    return 0;
} */




