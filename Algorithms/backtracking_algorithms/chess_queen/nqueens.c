#include<stdio.h>
#include<stdlib.h>
int counter=0;
void print(int* X,int n){
	int i;
	counter++;
	printf("%dth solution:{",counter);
	for(i=0;i<n;i++){
		printf("%d,",X[i]);
	}
	printf("\b}\n");
}
int place(int k,int i,int* X){
	int j;
	for(j=0;j<k;j++){
		//printf("%d,%d,%d\n",k,i,j);
		if(X[j]==i || abs(j-k)==abs(X[j]-i)){
			return 0;
		}
	}
	return 1;
}
void nqueens(int k,int* X,int n){
	//X[0]=0;
	for(int i=0;i<n;i++){
		if(place(k,i,X)){
			X[k]=i;
			if(k==n-1) print(X,n);//if k==n-1, not if k==n
			else nqueens(k+1,X,n);
		}
	}
}

int main(){ 
	int n;
	printf("enter n ");
	scanf("%d",&n);
	int* X=(int*)malloc(n*sizeof(int));
	nqueens(0,X,n);
}
