#include<stdio.h>
#include<time.h>
int main(){
	unsigned long i=0;
	clock_t begin=clock();
	printf("hi wlecome \n");
	while(i<=10000000){
		printf("%lu\n",i);
		i++;
	}
	clock_t end=clock();
	double times=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("\n\ntime taken is %lf second\n\n",times);


	return 0;
}
