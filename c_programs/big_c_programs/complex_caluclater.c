#include<stdio.h>
#include<math.h>
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

cpolar polar(complex a){
	cpolar b;
	b.mag=sqrt(a.real*a.real+a.img*a.img);
	b.ang=atan(a.img/a.real);
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

void print(complex z){
	printf("(%lf,%lf)",z.real,z.img);
}

int main() {
	double x1, y1, x2, y2;
label1:
	printf("enter a complex number\n");
	scanf("%lf%lf", &x1, &y1);
	printf("enter another complex number\n");
	scanf("%lf%lf", &x2, &y2);
	complex c1 = { x1,y1 }, c2 = { x2,y2 }, c3;
	int i;
	printf("\npress 1 to add a+b\npress 2 to multiply a*b\npress 3 to divide\npress 0 to stop program\n");
	printf("enter -1 to define new numbers\n");
label:
	printf("\n");
	scanf("%d", &i);
	if (i == 1) {
		c3 = add(c1, c2);
		printf("(% lf,% lf) + (% lf,% lf) = (% lf,% lf)\n",
			c1.real, c1.img, c2.real, c2.img, c3.real, c3.img);
		goto label;
	}
	else if (i == 2) {
		c3 = dot(c1, c2);
		printf("(% lf,% lf) * (% lf,% lf) = (% lf,% lf)\n",
			c1.real, c1.img, c2.real, c2.img, c3.real, c3.img);
		goto label;
	}
	else if (i == 3) {
		c3 = div(c1, c2);
		printf("(% lf,% lf) / (% lf,% lf) = (% lf,% lf)\n",
			c1.real, c1.img, c2.real, c2.img, c3.real, c3.img);
		goto label;
	}
	else if (i == 0) {
		return 0;
	}
	else if (i==-1){
		goto label1;
	}
	else {
		printf("please enter a valid number\n");
		goto label;
	}
}