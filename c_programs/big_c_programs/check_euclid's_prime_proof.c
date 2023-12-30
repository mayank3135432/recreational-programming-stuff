#include<stdio.h>
int ifprime(int num) {
	int i, a=2;
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0) {
			a = 0;
			break;
		}
		else
			a = 1;
	}
    return(a);
}

int main() {
	int a,c;
	printf("enter value of a ");
	scanf_s("%d", &a);
	c=ifprime(a);
    printf("%d",c);
	return 0;
}
