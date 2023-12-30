/*program to convert a number from decimal to any base*/
/*it uses digits 1 to 10 , letters A to Z and then letters a to z*/
/*bases above 62 are representd by mixed ratix*/

//#pragma warning(disable : 4996) //erase this line if not using visual studios
#include<stdio.h>

void conv(int, int); //function to convert a decimal number to another base
void main() {
	printf("program to convert a number from decimal to any base\n");
	printf("it uses digits 1 to 10 , letters A to Z and then letters a to z\n");
	printf("bases above 62 are representd by mixed ratix\n\n");
	printf("------------------------------------------------------------------\n");
	int num, num1, base;
	int i = 1;
	while (i != 0) {
		printf("enter number in decimal ");
		scanf("%d", &num);
		num1 = num;
		printf("enter base to convert to ");
		scanf("%d", &base);

		if(base<2){
			printf("can't convert, sorry\n");
			goto label;
		}

		conv(num, base);
label:
		printf("\npress 1 to enter another number or press 0 to quit ");
		scanf("%d", &i);
		printf("\n");
	}
}


void conv(int num, int base) {
	char arr[100];
	int arrint[100];//for mixed ratix representation of bases above 62
	int i, d1, d;
	i = 0;
	while (num > 0) {
		d = num % base;
		d1 = d;
		if (d1 < 10)
			d1 = d1 + 48; //use digits [0 to 9]

		else if (d1 <= 36 && 10 <= d1)
			d1 = d1 + 55; //use Capital case latin alphabets [A to Z] for digits [10 to 36]

		else if (d1 <= 62 && 36 < d1)
			d1 = d1 + 60; //use lower case latin alphabets [a to z] for digits [37 to 62]

		arr[i] = d1;//char array containing digits (0 to 9, A to Z, a to z)
		arrint[i] = d;//int array for base 10 mixed ratix
		num = num / base;
		i++;
	}
	if (base <= 62) {
		for (i = i - 1; i >= 0; i--)
			printf("%c", arr[i]);
	}
	else if (base > 62) {
		for (i = i - 1; i >= 0; i--)
			printf("%d;", arrint[i]);
	}
}

