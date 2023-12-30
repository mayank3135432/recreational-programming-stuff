#include<stdio.h>
#include<math.h>
#define e 2.718282

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
double expo(double x,int n) {
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
        return(e*expo(x-1,n));
    }
    else if(x<0){
        return(1/expo(-x,n));
    }
}


double ln(double x,int n){
	int i;
	double L=0;
	if(x==x){
		for(i=1;i<n;i++)
			L+=(-pov(-1,i)*pov(x-1,i)/n);
		return(L);
	}
}


int main(){
    int i;
    double ii;
    for(i=0;i<=200;i++){
        ii=(double)i;
		ii/=10;
        printf("%lf  %lf\t\t%lf\t\terror is %lf\n",ii,ln(ii,15),log(ii),ln(ii,15)-log(ii));
    }
	return(0);
}