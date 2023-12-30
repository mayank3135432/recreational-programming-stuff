#include<stdio.h>
double factorial(int num) {
	int f = 1;
	int i;
	for (i = 1; i <= num; i++) {
		f = f * i;
	}
    double ff=(double)f;
	return(ff);
}
double P(int n,int r){
    int i;
    int P=1;
    for(i=n;i>=r;i--){
        P=P*i;
    }
    return((double)P);
}
double C(int n,int r){
    double X=P(n,r)/factorial(r);
    return(X);
}
int main(){
    printf("%lf",C(9,5));
    return 0;
}