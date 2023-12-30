#include<stdio.h>

/*
void pop(int A[],int n){
    //deletes index n from array A
    int i;
    int x=sizeof(A)/sizeof(int);
	if(n<x){
		for(i=n;i<x-1;i++)
			A[i]=A[i+1];
    }
	else
        printf("pop not possible");
}
*/

void main(){
    int i;
    int A[5]={2,1,-3,1,5};
    //deletes index n from array A

    int x=sizeof(A)/sizeof(int);

    int n=3;
	if(n<x){
		for(i=n;i<x-1;i++)
			A[i]=A[i+1];
    }
	else
        printf("pop not possible");
    for(i=0;i<4;i++){
        printf("%d ",A[i]);
    }
}