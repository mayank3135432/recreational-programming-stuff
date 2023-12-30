#include<stdio.h>
#pragma warning(disable : 4996)
typedef struct {
	double real;
	double img;
}complex;
complex add(complex a, complex b) {
	complex temp;
	temp.real = a.real + b.real;
	temp.img = a.img + b.img;
	return(temp);
}

complex dot(complex a, complex b) {
	complex temp;
	double a1 = a.real, a2 = a.img;
	double b1 = b.real, b2 = b.img;
	temp.real = a1 * b1 - a2 * b2;
	temp.img = a2* b1 + a1 * b2;
	return(temp);
}
complex inv(complex a) {
	complex temp;
	double a1 = a.real, a2 = a.img;
	temp.real = a1 / (a1 * a1 + a2 * a2);
	temp.img = -a2 / (a1 * a1 + a2 * a2);
	return(temp);
}
complex div(complex a, complex b) {
	complex temp;
	temp = dot(a,inv(b));
	return(temp);
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