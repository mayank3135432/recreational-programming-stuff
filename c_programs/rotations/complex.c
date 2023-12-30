#include<stdio.h>
#include<math.h>
#define pi 3.1415926535
//#pragma warning(disable : 4996)
typedef struct {
	double real;
	double img;
	//complex* link;
}complex;

typedef struct{
	double mag;
	double ang;
}cpolar;


double argument(complex z){
	if(z.real>0)
		return(atan(z.img/z.real));
	else if(z.real<0 && z.img>=0)
		return(pi+atan(z.img/z.real));
	else if(z.real<0 && z.img<0)
		return(-pi+atan(z.img/z.real));
	else if(z.real==0 && z.img>0)
		return(pi/2);
	else if(z.real==0 && z.img<0)
		return(-pi/2);
	else
		return(0);
}

cpolar polar(complex a){
	cpolar b;
	b.mag=sqrt(a.real*a.real+a.img*a.img);
	b.ang=argument(a);//needs to be improved//has been
	return(b);
}
complex cartesian(cpolar a){
	complex b;
	b.real=a.mag*cos(a.ang);
	b.img=a.mag*sin(a.ang);
	return(b);
}
complex add(complex a, complex b) {
	complex temp;
	temp.real = a.real + b.real;
	temp.img = a.img + b.img;
	return(temp);
}

complex dot(complex a, complex b) {
	complex temp;
	temp.real = a.real * b.real - a.img * b.img;
	temp.img = a.img* b.real + a.real * b.img;
	return(temp);
}
complex inv(complex a) {
	complex temp;
	temp.real = a.real / (a.real * a.real + a.img * a.img);
	temp.img = -a.img / (a.real * a.real + a.img * a.img);
	return(temp);
}
complex div(complex a, complex b) {
	complex temp;
	temp = dot(a,inv(b));
	return(temp);
}

void printz(complex z){
	printf("(%lf,%lf)",z.real,z.img);
}
void prints(cpolar s){
	printf("(%lf,%lf)",s.mag,s.ang);
}
// void inputz(complex* z){
// 	double r;
// 	double s;
// 	scanf("%lf %lf",r,s);
// 	*z.real=r;
// 	*z.img=s;
// 	return(z);
// }

