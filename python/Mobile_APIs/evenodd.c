#include<stdio.h>
int isodd(int n){
	return(n&1);
}
int main(){
	printf("%d\n",isodd(31254444));

	return 0;
}
