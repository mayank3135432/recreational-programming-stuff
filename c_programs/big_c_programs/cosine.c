#include<stdio.h>
#include<stdlib.h>
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


double expo(double x) {
	int n=15;
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
        return(e*expo(x-1));
    }
    else if(x<0){
        return(1/expo(-x));
    }
}
double cosine(double x, int n) {
	int i;
	double co = 0;
	for (i = 0; i <= n; i = i + 2) {
		co = co + pov(-1, i / 2) * pov(x, i) / factorial(i);
	}
	return(co);
}
double ln(double a){
    if(a<0){
        printf("ERROR not a real number ");
        exit(0);
    }
    int n=10;//n is the number of iterations newton's method is used
    int i;
    double y;//y will be the ln(a)
    double b=0;
    i=0;
    while(i<n){
        y=a*expo(-b)+b+1;//b-(f(b)/f'(b)) :f(x)=x*x-a
        b=y;
        i++;
    }
    return(y);
}
/*double ln(double x,int n){
	int i;
	double L=0;
	if(x==1)
		return(0);
	else if(1.8<x)
		return(1+ln(x/e,n));
	else if(0.2<=x && x<=1.8){
		for(i=1;i<n;i++)
			L+=(-pov(-1,i)*pov(x-1,i)/n);
		return(L);
	}
	else if(0<x && x<0.2){
		return(-ln(1/x,n));
	}

}*/

int main(){
    int i;
    double ii;
	//int n=15;
	for(i=0;i<=200;i++){
		ii=((double)i)/10;
		printf("ln(%lf) = %lf\t\t%lf\t\t%lf\n",ii,ln(ii),log(ii),ln(ii)-log(ii));
	}
	return(0);
}