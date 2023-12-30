#include<stdio.h>
#include<math.h>
#define e 2.718282
#define pi 3.141592653589793238
double factorial(int num) {
	int f = 1;
	int i;
	for (i = 1; i <= num; i++) {
		f = f * i;
	}
    double ff=(double)f;
	return(ff);
}
double pov(double x, int n) {
	int i;
	double p = 1.0000000;
	for (i = 0; i < n; i++) {
		p = p * x;
	}
	return(p);
}
/*Now let's begin defining exp, cos and sin using taylor expansions*/


double expf(double x,int n) {
	int i;
	double ex = 0;
    if(x==0)
        return(1);
    else if(0<x && x<1){
	    for (i = 0; i <= n; i++)
		    ex = ex + pov(x,i) / factorial(i);
	    return(ex);
    }
    else if(1<=x){
        return(e*expf(x-1,n));
    }
    else if(x<0){
        return(1/expf(-x,n));
    }
}
int main(){
    int i;
    double ii;
    for(i=0;i<=200;i++){
        ii=(double)i-100;
        printf("%lf  %lf\t\t%lf\n",ii/10,expf(ii/10,15),pow(e,ii/10));
    }
}