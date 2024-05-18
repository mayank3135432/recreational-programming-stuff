#include"mylib.h"


double sqr(double a){
    if(a<0) return(-1);
    int n=100;//n is the number of iterations newton's method is used
    int i;
    double y;//y will be the sqrt(a)
    double b=1;
    i=0;
    while(i<n){
        y=b-(b*b-a)/(2*b);//b-(f(b)/f'(b)) :f(x)=x*x-a
        b=y;
        i++;
    }
    return(y);
}

double powofint(double x, int n){
    double Product = 1;
    for(int i=0;i<n;i++){
        Product *= x;
    }
    return Product;
}

bool isprimme(int n){
    int i=0;
    while(1){
        
    }
}