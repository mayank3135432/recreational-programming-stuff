#include<stdio.h>
#include<conio.h>
#include<math.h>
//#pragma warning(disable : 4996)
int main() {
	double a, b, c;
	int i;
	printf("\nenter value of a ");
	scanf("%lf", &a);
	printf("\nenter value of b ");
	scanf("%lf", &b);
	printf("enter 0 to add a+b \nenter 1 to substract a-b \nenter 2 to multiply a*b \nenter 3 to divide a/b \nenter 4 to exponentiate a^b ");
	printf("\n");
	scanf("%d", &i);
	switch (i) {
	case 0:
		c = a + b;
		break;
	case 1:
		c = a - b;
		break;
	case 2:
		c = a * b;
		break;
	case 3:
		c = a / b;
		break;
	case 4:
		c = pow(a, b);
		break;
	default :
		printf("please chose a valid operation ");
		return 0;
	}
	printf("\n\nresult is %lf",c);
}
