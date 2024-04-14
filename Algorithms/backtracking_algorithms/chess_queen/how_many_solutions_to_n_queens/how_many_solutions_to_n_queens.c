#include<stdio.h>
#include<stdlib.h>
long int counter=0;
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
			if(k==n-1) counter++;
			else nqueens(k+1,X,n);
		}
	}
}

int main(int arg, char** argv){ 
	int n;
	sscanf(argv[1], "%d", &n);
	int* X=(int*)malloc(n*sizeof(int));
	nqueens(0,X,n);
  printf("%d,%ld\n",n,counter);

  return 0;
}
