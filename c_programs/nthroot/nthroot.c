#include<stdio.h>
#include<stdlib.h>
double intpower(double x, int n){
    if(n<0) return(intpower(1/x,-n));
    int i;
    double P=1;
    for(i=0;i<n;i++){
        P=P*x;
    }
    return P;
}
double floor(double x){
    return((double)(int)(x));
}
double decpart(double x){
    return(x-(double)(int)(x));
}
double nthroot(double a,int n,int accuracy){
    if(a<0 && n%2==0){
        printf("ERROR not a real number ");
        exit(0);
    }
    int max=accuracy;//n is the number of iterations newton's method is used
    int i;
    double y;//y will be the nthroot(a)
    double b=((a>=0)?1:-1);
    i=0;
    while(i<max){
        y=(a-intpower(b,n))/(n*intpower(b,n-1))+b;//b-(f(b)/f'(b)) :f(x)=(x^n)-a
        b=y;
        i++;
    }
    return(y);
}

int main(){
    int i,j;
    printf("%lf ",decpart(3.9993536));
    /*
    for(i=20;i<=2000;i=i+20){
        for(j=10;j<=100;j=j+10) printf("%lf ",intpower(nthroot(10.0,j,i),j));
        printf("\n");
    }
    */
    return 0;

}